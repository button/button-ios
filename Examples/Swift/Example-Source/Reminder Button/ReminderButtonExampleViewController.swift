import UIKit
import Button

class ReminderButtonExampleViewController: UIViewController {

    @IBOutlet weak var dropinButton: BTNDropinButton?
    
    override func viewDidLoad() {
        super.viewDidLoad()

        // Reminder option will not appear unless permission has been granted.
        requestLocalNotificationPermission()

        let venue: BTNVenue = BTNVenue.init(id: "abc123", venueName: "Parm", latitude: 40.723027, longitude: -73.9956459)
        
        let futureDate: NSDate = NSDate.init(timeIntervalSinceNow: 10000)
        
        let context: Dictionary<String, AnyObject> = [
            BTNContextEndLocationKey: venue.location,
            BTNContextApplicableDateKey: futureDate,
            BTNContextReminderIdentifierKey: venue.venueId,
            BTNContextReminderUseDebugIntervalKey: true
        ]
        
        if let button = self.dropinButton {
            
            // ERROR: Replace YOUR_BUTTON_ID with your Button ID from the Button Dashboard https://app.usebutton.com
            button.buttonId = "YOUR_BUTTON_ID"
            
            self.dropinButton?.prepareForDisplayWithContext(context, completion: { (isDisplayable: Bool) -> Void in
                print("Displayable: \(isDisplayable)")
            })
        }
    }
    
    
    func requestLocalNotificationPermission() {
        let settings = UIUserNotificationSettings.init(forTypes: .Alert, categories: nil)
        UIApplication.sharedApplication().registerUserNotificationSettings(settings)
    }

}
