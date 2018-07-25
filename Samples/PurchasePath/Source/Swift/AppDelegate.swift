import UIKit
import Button

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?

    let yourApplicationId = { () -> String in
        guard let appId = ApplicationId.stringValue else {
            print("Please set your App ID from the Button Dashboard https://app.usebutton.com")
            return ""
        }
        return appId
    }()

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        /// To get started and get an App ID, please see https://developer.usebutton.com/guides/publishers/ios/get-started
        Button.configure(applicationId: yourApplicationId, completion: nil)
        return true
    }
}

