import UIKit
import Button

class SimpleButtonExampleViewController: UIViewController {

    @IBOutlet weak var dropinButton: BTNDropinButton?
    
    override func viewDidLoad() {
        super.viewDidLoad()

        let venue: BTNVenue = BTNVenue.init(id: "abc123", venueName: "Parm", latitude: 40.723027, longitude: -73.9956459)
        
        if let button = self.dropinButton {
            
            // ERROR: Replace YOUR_BUTTON_ID with your Button ID from the Button Dashboard https://app.usebutton.com
            button.buttonId = "YOUR_BUTTON_ID"
            
            button.prepareForDisplayWithVenue(venue, completion: { (isDisplayable: Bool) -> Void in
                print("Displayable: \(isDisplayable)")
            })
        }
    }

}
