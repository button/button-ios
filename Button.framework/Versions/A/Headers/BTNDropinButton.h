@import UIKit;
#import "BTNDropinButtonAppearanceProtocol.h"

@class BTNAction;

DEPRECATED_MSG_ATTRIBUTE("Button Actions has been deprecated. Please contact Button to update your integration.")
NS_SWIFT_NAME(DropinButton)
@interface BTNDropinButton : UIControl <BTNDropinButtonAppearance>

- (void)prepareWithButtonAction:(nullable BTNAction *)buttonAction NS_SWIFT_NAME(prepare(action:));

@end
