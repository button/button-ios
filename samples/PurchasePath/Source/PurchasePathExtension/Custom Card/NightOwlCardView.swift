import UIKit

class NightOwlCardView: UIView {

    @IBOutlet weak var titleLabel: UILabel!
    @IBOutlet weak var bodyLabel: UILabel!
    @IBOutlet weak var actionButton: UIButton!
    @IBOutlet weak var imageView: UIImageView!

    class func nightOwlCardView() -> NightOwlCardView {
        return (Bundle.main.loadNibNamed("NightOwlCardView", owner: self, options: nil)?.first as? NightOwlCardView)!
    }

}
