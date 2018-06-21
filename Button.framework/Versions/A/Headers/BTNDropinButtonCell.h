@import UIKit;
#import "BTNDropinButton.h"

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
 */
- (void)prepareWithButtonAction:(nullable BTNAction *)buttonAction NS_SWIFT_NAME(prepare(action:));;


///-----------------
/// @name Appearance
///-----------------

/**
 BTNDropinButtonCell conforms to BTNDropinButtonAppearance.
 For appearance properties @see BTNDropinButtonAppearance
 */

@end
