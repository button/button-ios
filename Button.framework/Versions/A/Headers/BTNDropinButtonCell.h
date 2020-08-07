@import UIKit;
#import "BTNDropinButton.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

NS_SWIFT_NAME(DropinButtonCell)
@interface BTNDropinButtonCell : UITableViewCell <BTNDropinButtonAppearance>

@property (nullable, nonatomic, strong) IBOutlet BTNDropinButton *dropinButton;

- (void)prepareWithButtonAction:(nullable BTNAction *)buttonAction NS_SWIFT_NAME(prepare(action:))
DEPRECATED_MSG_ATTRIBUTE("Button Actions has been deprecated. Please contact Button to update your integration.");

@end

#pragma clang diagnostic pop
