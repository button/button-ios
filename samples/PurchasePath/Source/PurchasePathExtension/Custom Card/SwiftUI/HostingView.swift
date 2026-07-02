import SwiftUI

///
/// A utility view for hosting SwiftUI views in the Button SDK browser extension system.
///
class HostingView<Content>: UIView where Content : View {
    required init?(coder: NSCoder) {
        fatalError("init(rootView:) is the designated initializer")
    }
    
    private var hostingController: UIHostingController<Content>
    var rootView: Content
    
    init(rootView: Content) {
        self.rootView = rootView
        self.hostingController = UIHostingController(rootView: rootView)
        super.init(frame: .zero)
        hostingController.view.translatesAutoresizingMaskIntoConstraints = false
        addSubview(hostingController.view)
        NSLayoutConstraint.activate([
            hostingController.view.topAnchor.constraint(equalTo: self.topAnchor),
            hostingController.view.leadingAnchor.constraint(equalTo: self.leadingAnchor),
            hostingController.view.trailingAnchor.constraint(equalTo: self.trailingAnchor),
            hostingController.view.bottomAnchor.constraint(equalTo: self.bottomAnchor)
        ])
    }
}
