@import UIKit;
#import "BTNDropinButton.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(DropinButtonCell)
@interface BTNDropinButtonCell : UITableViewCell <BTNDropinButtonAppearance>

@property (nullable, nonatomic, strong) IBOutlet BTNDropinButton *dropinButton DEPRECATED_ATTRIBUTE;

- (void)prepareWithButtonAction:(nullable BTNAction *)buttonAction NS_SWIFT_NAME(prepare(action:))
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op.");

@end

#pragma clang diagnostic pop
