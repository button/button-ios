#import "TableCellButtonExampleViewController.h"
#import <Button/Button.h>

@interface TableCellButtonExampleViewController ()

@property (nonatomic, strong) BTNContext *buttonContext;
@property (nonatomic, strong) NSArray *items;

@end

@implementation TableCellButtonExampleViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    BTNLocation *location = [BTNLocation locationWithName:@"Parm" latitude:40.723027 longitude:-73.9956459];
    self.buttonContext = [BTNContext contextWithSubjectLocation:location];
    
    self.items = @[ @{ @"cell-identifier": @"your-cell", @"text": @"(212) 993-7189" },
                    @{ @"cell-identifier": @"your-cell", @"text": @"parmnyc.com" },
                    @{ @"cell-identifier": @"your-cell", @"text": @"View Menu" },
                    @{ @"cell-identifier": @"your-cell", @"text": @"Drive: 9 minutes" },
                    @{ @"cell-identifier": @"button-cell" },
                    @{ @"cell-identifier": @"your-cell", @"text": @"Mon-Wed, Sun", @"details": @"11:00 AM - 11:00 PM" },
                    @{ @"cell-identifier": @"your-cell", @"text": @"Thu-Sat", @"details": @"11:00 AM - Midnight" },
                    @{ @"cell-identifier": @"your-cell", @"text": @"Menus", @"details": @"Brunch, Lunch, Dinner, Desert" },
                    @{ @"cell-identifier": @"your-cell", @"text": @"Drinks", @"details": @"Beer, Wine, Full Bar, Cocktails" },
                    @{ @"cell-identifier": @"your-cell", @"text": @"Dining Options", @"details": @"Take-out, Delivery" },
                    @{ @"cell-identifier": @"your-cell", @"text": @"Reservations", @"details": @"NO" },
                    @{ @"cell-identifier": @"your-cell", @"text": @"Credit Cards", @"details": @"Yes (incl. Amex)" },
                    @{ @"cell-identifier": @"your-cell", @"text": @"Outdoor Seating", @"details": @"No" },];
    
}


#pragma mark - UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.items.count;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    NSDictionary *rowInfo = self.items[indexPath.row];
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:rowInfo[@"cell-identifier"]
                                                            forIndexPath:indexPath];
    
    cell.textLabel.text       = rowInfo[@"text"];
    cell.detailTextLabel.text = rowInfo[@"details"];
    
    if ([cell isKindOfClass:[BTNDropinButtonCell class]]) {
        BTNDropinButtonCell *buttonCell = (BTNDropinButtonCell *)cell;
        
        // Replace YOUR_BUTTON_ID with your Button ID from the Button Dashboard https://app.usebutton.com
        buttonCell.buttonId = YOUR_BUTTON_ID;
        
        [buttonCell prepareWithContext:self.buttonContext completion:^(BOOL isDisplayable) {
            NSLog(@"Displayable: %@", @(isDisplayable));
            // You might remove the backing data item and reload your table view if the button cell is not displayable.
        }];
    }
    
    return cell;
}

@end
