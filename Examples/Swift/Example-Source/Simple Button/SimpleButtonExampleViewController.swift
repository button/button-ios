import UIKit
import Button

class SimpleButtonExampleViewController: UIViewController {

    @IBOutlet weak var dropinButton: BTNDropinButton?
    
    override func viewDidLoad() {
        super.viewDidLoad()

        let location: BTNLocation = BTNLocation.init(name: "Parm", latitude: 40.723027, longitude: -73.9956459);
        let context: BTNContext = BTNContext.init(subjectLocation: location);
        
        if let button = self.dropinButton {
            
            // ERROR: Replace YOUR_BUTTON_ID with your Button ID from the Button Dashboard https://app.usebutton.com
            button.buttonId = "YOUR_BUTTON_ID"
            
            button.prepare(with: context, completion: { (isDisplayable: Bool) -> Void in
                print("Displayable: \(isDisplayable)")
            })
        }
    }

}
