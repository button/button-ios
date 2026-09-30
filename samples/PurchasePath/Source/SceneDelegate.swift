import UIKit

/// Apps built against the iOS 27 SDK are required to adopt the UIScene life cycle.
/// The window belongs to the scene rather than to the app delegate; Button itself is
/// configured once per process in `AppDelegate.application(_:didFinishLaunchingWithOptions:)`
/// and needs nothing here.
class SceneDelegate: UIResponder, UIWindowSceneDelegate {

    var window: UIWindow?

    func scene(_ scene: UIScene,
               willConnectTo session: UISceneSession,
               options connectionOptions: UIScene.ConnectionOptions) {
        /// The storyboard named by `UISceneStoryboardFile` supplies the window, so there
        /// is nothing to build here. Implementing this method is what makes the scene
        /// life cycle active.
        guard let _ = scene as? UIWindowScene else { return }
    }
}
