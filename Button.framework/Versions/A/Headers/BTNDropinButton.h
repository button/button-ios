@import UIKit;
#import "BTNDropinButtonAppearanceProtocol.h"

@class BTNAction;

NS_SWIFT_NAME(DropinButton)
@interface BTNDropinButton : UIControl <BTNDropinButtonAppearance>

///------------------------------
/// @name Rendering an App Action
///------------------------------


/**
 Tells the button to render the passed app action.
 @param buttonAction A BTNAction fetched via `-[Button.actions fetchWithRequest:actionHandler:]`
 @note passing nil will return the button to the loading state.
 */
- (void)prepareWithButtonAction:(nullable BTNAction *)buttonAction NS_SWIFT_NAME(prepare(action:));


///-----------------
/// @name Appearance
///-----------------

/**
 BTNDropinButton conforms to BTNDropinButtonAppearance.
 For appearance properties @see BTNDropinButtonAppearance
 */

@end
