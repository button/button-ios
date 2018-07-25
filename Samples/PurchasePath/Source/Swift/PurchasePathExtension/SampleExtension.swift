import UIKit
import Button

class SampleExtension: NSObject, PurchasePathExtension {

    func browserDidInitialize(_ browser: BrowserInterface) {
        browser.header.title.color = (UIColor(hex:0x016FC4))
        browser.header.subtitle.color = (UIColor(hex:0x67A9DC))
        browser.header.backgroundColor = .white
        browser.header.tintColor = UIColor(hex:0x016FC4)
        browser.footer.backgroundColor = .white
        browser.footer.tintColor = (UIColor(hex:0x016FC4))

        browser.cardList().setCards(Cards.sampleCards)
    }


    func browserWillNavigate(_ browser: BrowserInterface) {
        browser.hideTopCard()
    }


    func browser(_ browser: BrowserInterface, didNavigateTo page: BrowserPage) {
        browser.header.subtitle.text = page.url?.host ?? "Button"
    }


    func browser(_ browser: BrowserInterface, didNavigateToProduct page: ProductPage) {
        switch page.commission.commissionType {
        case .commissionable:
            let card = Cards.twoPercentCashBack.card
            card.key = Cards.productCardKey

            if let _ = browser.cardList().card(forKey: Cards.productCardKey) {
                browser.cardList().replaceCard(forKey: Cards.productCardKey, with: card)
            }
            else {
                browser.cardList().insert(card, at: 0)
            }

            browser.showTopCard()
            break;
        default:
            ()
        }
    }


    func browser(_ browser: BrowserInterface, didNavigateToPurchase page: PurchasePage) {
        browser.header.title.text = "Thank You!"
        browser.header.subtitle.text = "Your reward will be available in 24 hours."
    }

}
