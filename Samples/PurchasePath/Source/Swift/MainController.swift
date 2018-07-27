import UIKit
import Button

class MainController: UITableViewController {
    
    /// Edit this URL to be any approved merchant in order to test the Checkout flow with or without the extension.
    private var yourExampleMerchantUrl = URL(string: "https://jet.com")!

    override func viewDidLoad() {
        super.viewDidLoad()
        tableView.delegate = self
    }
    

    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        
        switch indexPath.row {
        case 0:
            fetchAppAction(using: yourExampleMerchantUrl, with: SampleExtension())
        case 1:
            fetchAppAction(using: yourExampleMerchantUrl, with: nil)
        default:
            ()
        }
    }
    
    
    private func fetchAppAction(using url: URL, with purchasePathExtension: PurchasePathExtension?) {
        Button.purchasePath.extension = purchasePathExtension;
        let request = PurchasePathRequest(url: url);
        Button.purchasePath.fetch(request: request) { appAction, error in
            appAction?.start();
        }
    }
}
