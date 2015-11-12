@import UIKit;
#import "BTNDropinButton.h"



@class BTNDropinButton;

@interface BTNDropinButtonCell : UITableViewCell <BTNDropinButtonAppearance>

/// The ID of the button this cell represents.
@property (nonatomic, copy) IBInspectable NSString *buttonId;


/// The dropin button that displays the use case action (e.g. Get a ride).
@property (nonatomic, strong) IBOutlet BTNDropinButton *dropinButton;


/**
 Prepares the cell for display with contextually relevant data.
 @param context A BTNContext object providing context about your user's current activity.
 @param completionHandler A block to be executed upon completion of preparation.
 
 @note The button will not be visible until preparation has completed successfully.
 You should set a completion handler in order to do any work in your view hierarchy
 after completion. For example, you may want to remove this cell from your tableView
 if the button is not displayable.
 */
- (void)prepareWithContext:(BTNContext *)context
                completion:(void(^)(BOOL isDisplayable))completionHandler;


///-----------------
/// @name Appearance
///-----------------

/**
 BTNDropinButtonCell conforms to BTNDropinButtonAppearance.
 For appearance properties @see BTNDropinButtonAppearance
 */

@end
