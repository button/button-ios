#import "BTNView.h"
#import "BTNDropinButtonAppearanceProtocol.h"
#import "BTNContext.h"


@interface BTNDropinButton : UIControl <BTNDropinButtonAppearance>

/// The identifier for this button instance (e.g. venue_page).
@property (nonatomic, copy) IBInspectable NSString *buttonId;


/**
 Prepares the button for display with contextually relevant data.
 @param context A BTNContext object providing context about your user's current activity.
 @param completionHandler A block to be executed upon completion of preparation.
 
 @note The button will not be visible until preparation has completed successfully.
 You should set a completion handler in order to do any work in your view hierarchy 
 based on the value of `isDisplayable`. For example, you may want to remove a cell 
 from your tableView if the button is not displayable.
 */
- (void)prepareWithContext:(BTNContext *)context
                completion:(void(^)(BOOL isDisplayable))completionHandler;


/**
 Intialize an instance of BTNDropinButton with the given button identifier.
 @param buttonId The identifier for this button instance (e.g. btn-xxxxxxxxxx).
 @return An instance of BTNDropinButton configured for the given buttonId.
 @note The button will not be ready for display until -prepareWithContext:completion: completes.
 @see -prepareWithContext:completion:
 */
- (instancetype)initWithButtonId:(NSString *)buttonId;


///-----------------
/// @name Appearance
///-----------------

/**
 BTNDropinButton conforms to BTNDropinButtonAppearance.
 For appearance properties @see BTNDropinButtonAppearance
 */

@end
