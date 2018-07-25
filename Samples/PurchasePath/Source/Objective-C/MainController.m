#import "MainController.h"
#import <Button/Button.h>
#import "SampleExtension.h"

@interface MainController ()

@property (nonatomic, strong) NSURL *merchantURL;

@end

@implementation MainController


- (void)viewDidLoad {
    [super viewDidLoad];
    _merchantURL = [[NSURL alloc] initWithString:@"http://jet.com"];
    self.tableView.delegate = self;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    
    SampleExtension *extension = indexPath.row == 0 ? [SampleExtension new] : nil;
    [self fetchAppActionWithUrl:_merchantURL purchasePathExtension:extension];
}

- (void)fetchAppActionWithUrl:(NSURL *)url purchasePathExtension:(id <BTNPurchasePathExtension>)purchasePathExtension {
    Button.purchasePath.extension = purchasePathExtension;
    BTNPurchasePathRequest *request = [BTNPurchasePathRequest requestWithURL:url];
    [Button.purchasePath fetchWithRequest:request purchasePathHandler:^(BTNPurchasePath *purchasePath, NSError *error) {
        if (purchasePath) {
            [purchasePath start];
        }
    }];
}


@end
