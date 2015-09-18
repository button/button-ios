import UIKit
import Button

class SimpleButtonExampleViewController: UIViewController {

    @IBOutlet weak var dropinButton: BTNDropinButton?
    
    override func viewDidLoad() {
        super.viewDidLoad()

        let venue: BTNVenue = BTNVenue.init(id: "abc123", venueName: "Parm", latitude: 40.723027, longitude: -73.9956459)
        
        self.dropinButton?.prepareForDisplayWithVenue(venue, completion: { (isDisplayable: Bool) -> Void in
            print("Displayable: \(isDisplayable)")
        })
    }

}
