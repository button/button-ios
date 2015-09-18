import UIKit
import Button

class TableCellButtonExampleViewController: UITableViewController {

    lazy var venue: BTNVenue  = BTNVenue.init(id: "abc123", venueName: "Parm", latitude: 40.723027, longitude: -73.9956459)
    
    lazy var items: [[String:String]] = [
        ["cell-id": "your-cell",    "text": "(212) 993-7189"],
        ["cell-id": "your-cell",    "text": "parmnyc.com"],
        ["cell-id": "your-cell",    "text": "View Menu"],
        ["cell-id": "your-cell",    "text": "Drive: 9 minutes"],
        ["cell-id": "button-cell"],
        ["cell-id": "your-cell",    "text": "Mon-Wed, Sun",    "details": "11:00 AM - 11:00 PM"],
        ["cell-id": "your-cell",    "text": "Thu-Sat",         "details": "11:00 AM - Midnight"],
        ["cell-id": "your-cell",    "text": "Menus",           "details": "Brunch, Lunch, Dinner, Desert"],
        ["cell-id": "your-cell",    "text": "Drinks",          "details": "Beer, Wine, Full Bar, Cocktails"],
        ["cell-id": "your-cell",    "text": "Dining Options",  "details": "Take-out, Delivery"],
        ["cell-id": "your-cell",    "text": "Reservations",    "details": "NO"],
        ["cell-id": "your-cell",    "text": "Credit Cards",    "details": "Yes (incl. Amex)"],
        ["cell-id": "your-cell",    "text": "Outdoor Seating", "details": "No"]
    ]

    // MARK: - Table view data source

    override func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return items.count
    }

    override func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
        
        let rowInfo = items[indexPath.row]

        let cell = tableView.dequeueReusableCellWithIdentifier(rowInfo["cell-id"]!, forIndexPath: indexPath)
        cell.textLabel?.text = rowInfo["text"]
        cell.detailTextLabel?.text = rowInfo["details"]

        if let buttonCell = cell as? BTNDropinButtonCell {
            buttonCell.dropinButton.borderWidth = 0.0
            buttonCell.prepareForDisplayWithVenue(venue, completion: { (isDisplayable: Bool) -> Void in
                print("Displayable: \(isDisplayable)")
            })
        }
        
        return cell
    }
    
}
