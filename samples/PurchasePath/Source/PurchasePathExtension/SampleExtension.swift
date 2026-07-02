import UIKit
import SwiftUI
import Button

extension CardList {
    func isTopCard(_ card: Card) -> Bool {
        return cards().first == card
    }
}

class SampleExtension: NSObject, PurchasePathExtension {
    
    var isShowingTopCard: Bool = false

    func browserDidInitialize(_ browser: BrowserInterface) {
        browser.header.title.color = (UIColor(hex:0x016FC4))
        browser.header.subtitle.color = (UIColor(hex:0x67A9DC))
        browser.header.backgroundColor = .white
        browser.header.tintColor = UIColor(hex:0x016FC4)
        browser.footer.backgroundColor = .white
        browser.footer.tintColor = (UIColor(hex:0x016FC4))
        
        browser.header.customActionView = HostingView(rootView: VStack {
            Image("hoot")
        })

        // Set the chrome delegate to handle custom action and subtitle touches
        browser.chromeDelegate = self
        
        // All demo cards UIKit
        // browser.cardList().setCards(Cards.sampleCards)
        
        // Custom card UIKit
        //
        // browser.cardList().add(Cards.nightOwlBonus_uiKit.card)
        
        // Custom card SwiftUI
        //
        // browser.cardList().add(Cards.nightOwlBonus.card)
    }


    func browserWillNavigate(_ browser: BrowserInterface) {
        isShowingTopCard = false
        browser.cardList().removeAllCards()
    }

    func browser(_ browser: BrowserInterface, didNavigateToProduct page: ProductPage) {
        browser.cardList().add(Cards.twoPercentCashBack.card)
    }
}

extension SampleExtension: BrowserChromeDelegate {
    
    func browser(_ browser: BrowserInterface, didSelectCustomActionWith view: UIView) {
        if (isShowingTopCard) {
            browser.hideTopCard()
            isShowingTopCard = false
            return
        }
        
        browser.cardList().removeCard(forKey: Cards.explainer.key)
        
        if (browser.cardList().card(forKey: Cards.nightOwlBonus.key) == nil) {
            if let card = Cards.nightOwlBonus.card as? NightOwlCard {
                card.onAction = {
                    DispatchQueue.main.asyncAfter(deadline: .now() + 2) {
                        if browser.cardList().isTopCard(card) {
                            browser.hideTopCard()
                            self.isShowingTopCard = false
                        }
                    }
                }
                browser.cardList().insert(card, at: 0)
            }
        }
        
        browser.showTopCard()
        isShowingTopCard = true
    }
    
    func browserDidSelectSubtitle(_ browser: BrowserInterface) {
        if (isShowingTopCard) {
            browser.hideTopCard()
            isShowingTopCard = false
            return
        }
        
        browser.cardList().removeCard(forKey: Cards.nightOwlBonus.key)
        
        if (browser.cardList().card(forKey: Cards.explainer.key) == nil) {
            browser.cardList().insert(Cards.explainer.card, at: 0)
        }
        
        browser.showTopCard()
        isShowingTopCard = true
    }
}
