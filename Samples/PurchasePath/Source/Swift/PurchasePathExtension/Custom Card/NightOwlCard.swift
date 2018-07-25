import UIKit
import Button

class NightOwlCard: BTNCard {
    
    static let redeemedImageURL = URL(string: "https://developer.usebutton.com/assets/guides/publishers/checkout-extensions/custom-cards/img_owl-redeemed.png")!
    
    var isRedeemed: Bool = false
    var redeemedImage: UIImage?
    
    override static func createView() -> UIView {
        return NightOwlCardView.nightOwlCardView()
    }
    
    override func prepareView(_ cardView: UIView) {
        guard let nightOwlCardView = cardView as? NightOwlCardView else {
            return
        }
        nightOwlCardView.titleLabel.text = "Night Owl Bonus +1%"
        nightOwlCardView.bodyLabel.text = "Whoooo's up late shopping? Here's an extra 1% cash back when you shop now before 6 AM."
        nightOwlCardView.actionButton.layer.cornerRadius = 4
        nightOwlCardView.actionButton.addTarget(self, action: #selector(redeemAction(sender:)), for: .touchUpInside)
        updateView(view: nightOwlCardView)
    }
    
    func updateView(view: NightOwlCardView) {
        view.actionButton.isUserInteractionEnabled = !isRedeemed
        
        if isRedeemed {
            view.actionButton.backgroundColor = UIColor(hex: 0x0CAC56)
            view.actionButton.setTitle("Offer Redeemed", for: .normal)
            view.imageView.image = redeemedImage
        }
        else {
            view.actionButton.backgroundColor = UIColor(hex: 0x1b84ff)
            view.actionButton.setTitle("Tap to Hoot", for: .normal)
            view.imageView.image = UIImage(named: "nightowl")
        }
    }
    
    @objc func redeemAction(sender: Any) {
        guard let cardView = self.view as? NightOwlCardView else {
            return
        }
        
        if let imageData = try? NSData(contentsOf: NightOwlCard.redeemedImageURL, options: NSData.ReadingOptions()) {
            redeemedImage = UIImage(data: imageData as Data, scale: UIScreen.main.scale)?.with(cardView.imageView.bounds.size)
            isRedeemed = true
            updateView(view: cardView)
        }
    }
}
