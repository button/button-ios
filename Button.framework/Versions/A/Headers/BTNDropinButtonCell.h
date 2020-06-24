@import UIKit;
#import "BTNDropinButton.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

NS_SWIFT_NAME(DropinButtonCell)
@interface BTNDropinButtonCell : UITableViewCell <BTNDropinButtonAppearance>

/// The dropin button that displays the use case action (e.g. Get a ride).
@property (nullable, nonatomic, strong) IBOutlet BTNDropinButton *dropinButton;



///------------------------------
/// @name Rendering an App Action
///------------------------------


/**
 Tells the cell to render the passed app action.
 @param buttonAction A BTNAction fetched via `-[Button.actions fetchWithRequest:actionHandler:]`
 @note passing nil will return the button to the loading state.
 @note Deprecated.
 */
- (void)prepareWithButtonAction:(nullable BTNAction *)buttonAction NS_SWIFT_NAME(prepare(action:))
DEPRECATED_MSG_ATTRIBUTE("Button Actions has been deprecated. Please contact Button to update your integration.");


///-----------------
/// @name Appearance
///-----------------

/**
 BTNDropinButtonCell conforms to BTNDropinButtonAppearance.
 For appearance properties @see BTNDropinButtonAppearance
 */

@end

#pragma clang diagnostic pop
