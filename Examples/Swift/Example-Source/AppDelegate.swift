import UIKit
import Button

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?

    func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {

        Button.allowButtonToRequestLocationPermission(true)

        //ERROR: Replace YOUR_BUTTON_APP_ID with your App ID from the Button Dashboard https://app.usebutton.com
        Button.sharedButton().configureWithApplicationId("YOUR_BUTTON_APP_ID") { (configError: NSError?) -> Void in
            if let error = configError {
                print("Error: \(error.localizedDescription)")
            }
        }
        
        applyButtonAppearance()
        
        return true
    }
    
    
    func application(application: UIApplication, openURL url: NSURL, sourceApplication: String?, annotation: AnyObject) -> Bool {
        return Button.sharedButton().handleURL(url);
    }
    
    
    func application(application: UIApplication, didReceiveLocalNotification notification: UILocalNotification) {
        Button.sharedButton().handleLocalNotification(notification);
    }
    
    
    func applyButtonAppearance() {
        let button: BTNDropinButton = BTNDropinButton.appearance()
        
        button.highlightedTextColor = UIColor.lightGrayColor()
        button.iconSize     = 20.0;
        button.borderColor  = UIColor.grayColor();
        button.borderWidth  = 1.0;
        button.cornerRadius = 5.0;
        button.font = UIFont.systemFontOfSize(14)
    }
}


