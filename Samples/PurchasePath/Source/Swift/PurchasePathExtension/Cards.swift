import UIKit
import Button

enum Cards {
    case twoPercentCashBack
    case weekendWarriorBonus
    case explainer
    case nightOwlBonus
    case productViewed

    private var cta: BTNCardCallToAction {
        switch self {
        case .twoPercentCashBack:
            let icon = UIImage(named: "cashback")!.withRenderingMode(.alwaysOriginal)
            return BTNCardCallToAction(icon: icon, title: "2% Cash Back", titleColor: UIColor(hex: 0x0cac56))
        case .weekendWarriorBonus:
            let icon = UIImage(named: "cashback")!.withRenderingMode(.alwaysOriginal)
            return BTNCardCallToAction(icon: icon, title: "Cash Back Guaranteed", titleColor: UIColor(hex: 0x0cac56))
        case .explainer:
            let icon = UIImage(named: "cashback")!.withRenderingMode(.alwaysOriginal)
            return BTNCardCallToAction(icon: icon, title: "Cash Back Guaranteed", titleColor: UIColor(hex: 0x0cac56))
        case .nightOwlBonus:
            let icon = UIImage(named: "hoot")!.withRenderingMode(.alwaysOriginal)
            return BTNCardCallToAction(icon: icon, title: "Give a hoot", titleColor: UIColor(hex: 0x0e0637))
        case .productViewed:
            let icon = UIImage(named: "cashback")!.withRenderingMode(.alwaysOriginal)
            return BTNCardCallToAction(icon: icon, title: "Cash Back Guaranteed", titleColor: UIColor(hex: 0x0cac56))
        }
    }

    var card: BTNCard {
        switch self {
        case .twoPercentCashBack:
            let card = BTNTextCard(callToAction: self.cta,
                                   title: "2% Cash Back on this item",
                                   body: "This category of items qualifies for 2% Cash Back when you shop now.")
            card.key = Cards.productCardKey
            return card
        case .weekendWarriorBonus:
            let card = BTNTextCard(callToAction: self.cta,
                                   title: "Weekend Warrior Bonus",
                                   body: "Earn an extra $1.00 with the Weekend Warrior Bonus when you earn cash back in this category.")
            card.titleColor = UIColor(hex: 0x252525)
            card.bodyColor = UIColor(hex: 0x252525)
            card.backgroundColor = UIColor(hex: 0xf5f5f5)
            return card
        case .explainer:
            let card = BTNTextCard(callToAction: self.cta,
                                   title: "How It Works",
                                   body: "First, purchase your products in the Merchant app or website. We'll make sure that the right " +
                "purchase was made. Your cash back will be deposited into your account in about 5-7 business days if you purchase today.")
            card.backgroundColor = UIColor(hex: 0x27938d)
            return card
        case .nightOwlBonus:
            return NightOwlCard(callToAction: self.cta)
        case .productViewed:
            let card = BTNTextCard(callToAction: self.cta,
                                   title: "👀 Product Viewed",
                                   body: "One of these cards is added for every product viewed 👍.")
            card.key = Cards.productCardKey
            return card
        }
    }

    static let productCardKey: NSObjectProtocol = "product_card" as NSObjectProtocol

    static var sampleCards: [BTNCard] {
        return [twoPercentCashBack.card, weekendWarriorBonus.card, explainer.card, nightOwlBonus.card]
    }

}
