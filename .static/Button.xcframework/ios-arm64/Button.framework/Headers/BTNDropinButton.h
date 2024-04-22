@import UIKit;
#import "BTNDropinButtonAppearanceProtocol.h"

@class BTNAction;

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(DropinButton)
@interface BTNDropinButton : UIControl <BTNDropinButtonAppearance>

- (void)prepareWithButtonAction:(nullable BTNAction *)buttonAction NS_SWIFT_NAME(prepare(action:))
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op.");

@end
