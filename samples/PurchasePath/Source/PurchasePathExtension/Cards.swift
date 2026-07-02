import UIKit
import Button

enum Cards: String {
    case twoPercentCashBack
    case weekendWarriorBonus
    case explainer
    case nightOwlBonus
    case nightOwlBonus_uiKit
    case productViewed

    private var cta: CardCallToAction {
        switch self {
        case .twoPercentCashBack:
            let icon = UIImage(named: "cashback")!.withRenderingMode(.alwaysOriginal)
            return CardCallToAction(icon: icon, title: "2% Cash Back", titleColor: UIColor(hex: 0x0cac56))
        case .weekendWarriorBonus:
            let icon = UIImage(named: "cashback")!.withRenderingMode(.alwaysOriginal)
            return CardCallToAction(icon: icon, title: "Cash Back Guaranteed", titleColor: UIColor(hex: 0x0cac56))
        case .explainer:
            let icon = UIImage(named: "cashback")!.withRenderingMode(.alwaysOriginal)
            return CardCallToAction(icon: icon, title: "Cash Back Guaranteed", titleColor: UIColor(hex: 0x0cac56))
        case .nightOwlBonus: fallthrough
        case .nightOwlBonus_uiKit:
            let icon = UIImage(named: "hoot")!.withRenderingMode(.alwaysOriginal)
            return CardCallToAction(icon: icon, title: "Give a hoot", titleColor: UIColor(hex: 0x0e0637))
        case .productViewed:
            let icon = UIImage(named: "cashback")!.withRenderingMode(.alwaysOriginal)
            return CardCallToAction(icon: icon, title: "Cash Back Guaranteed", titleColor: UIColor(hex: 0x0cac56))
        }
    }

    var card: Card {
        var card: Card
        switch self {
        case .twoPercentCashBack:
            card = TextCard(callToAction: self.cta,
                            title: "2% Cash Back on this item",
                            body: "This category of items qualifies for 2% Cash Back when you shop now.")
        case .weekendWarriorBonus:
            let textCard = TextCard(callToAction: self.cta,
                                    title: "Weekend Warrior Bonus",
                                    body: "Earn an extra $1.00 with the Weekend Warrior Bonus when you earn cash back in this category.")
            textCard.titleColor = UIColor(hex: 0x252525)
            textCard.bodyColor = UIColor(hex: 0x252525)
            textCard.backgroundColor = UIColor(hex: 0xf5f5f5)
            card = textCard
        case .explainer:
            let textCard = TextCard(callToAction: self.cta,
                                    title: "How It Works",
                                    body: "First, purchase your products in the Merchant app or website. We'll make sure that the right " +
                                    "purchase was made. Your cash back will be deposited into your account in about 5-7 business days if you purchase today.")
            textCard.backgroundColor = UIColor(hex: 0x27938d)
            card = textCard
        case .nightOwlBonus:
            card = NightOwlCard(callToAction: self.cta)
        case .nightOwlBonus_uiKit:
            card = NightOwlCard_UIKit(callToAction: self.cta)
        case .productViewed:
            card = TextCard(callToAction: self.cta,
                            title: "👀 Product Viewed",
                            body: "One of these cards is added for every product viewed 👍.")
        }
        card.key = key
        return card
    }
    
    var key: NSObjectProtocol {
        return rawValue as NSObjectProtocol
    }

    static var sampleCards: [Card] {
        return [twoPercentCashBack.card, weekendWarriorBonus.card, explainer.card, nightOwlBonus_uiKit.card]
    }

}
