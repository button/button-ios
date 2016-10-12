import UIKit
import Button

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {

        Button.allow(toRequestLocationPermission: true)

        //ERROR: Replace YOUR_BUTTON_APP_ID with your App ID from the Button Dashboard https://app.usebutton.com
        Button.shared().configure(withApplicationId: "YOUR_BUTTON_APP_ID") { (configError: Error?) -> Void in
            if let error = configError {
                print("Error: \(error.localizedDescription)")
            }
        }
        
        applyButtonAppearance()
        
        return true
    }
    
    
    func application(_ application: UIApplication, open url: URL, sourceApplication: String?, annotation: Any) -> Bool {
        return Button.shared().handle(url);
    }
    
    
    func applyButtonAppearance() {
        let button: BTNDropinButton = BTNDropinButton.appearance()
        
        button.highlightedTextColor = UIColor.lightGray
        button.iconSize     = 20.0;
        button.borderColor  = UIColor.gray;
        button.borderWidth  = 1.0;
        button.cornerRadius = 5.0;
        button.font = UIFont.systemFont(ofSize: 14)
    }
}


