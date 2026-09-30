import UIKit
import Button

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    #error "Please set your App ID from the Button Dashboard https://app.usebutton.com"
    let yourApplicationId = "<# Your Application Id #>"

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        /// To get started and get an App ID, please see https://developer.usebutton.com/docs/publishers-getting-started
        Button.configure(applicationId: yourApplicationId, completion: nil)
        return true
    }

    func application(_ application: UIApplication,
                     configurationForConnecting connectingSceneSession: UISceneSession,
                     options: UIScene.ConnectionOptions) -> UISceneConfiguration {
        UISceneConfiguration(name: "Default Configuration",
                             sessionRole: connectingSceneSession.role)
    }
}

