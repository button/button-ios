#import "BTNView.h"

typedef NS_ENUM(NSUInteger, BTNDropinContentAlignment) {
    BTNDropinContentAlignmentDefault,
    BTNDropinContentAlignmentCenter
};


@class BTNVenue;

@interface BTNDropinButton : UIControl

/// The identifier for this button instance (e.g. venue_page).
@property (nonatomic, copy) IBInspectable NSString *buttonId;


/**
 Prepares the button for display with contextually relevant data.
 @param context A NSDictionary object providing context relevant to displaying the button.
 @param completionHandler A block to be executed upon completion of preparation.
 
 @note The button will not be visible until preparation has completed successfully.
 You should set a completion handler in order to do any work in your view hierarchy 
 based on the value of `isDisplayable`. For example, you may want to remove a cell 
 from your tableView if the button is not displayable.
 */
- (void)prepareForDisplayWithContext:(NSDictionary *)context
                          completion:(void(^)(BOOL isDisplayable))completionHandler;


/**
 Prepares the button for display with a venue.
 @param venue A venue object relevant to displaying the button.
 @param completionHandler A block to be executed upon completion of preparation.
 
 @note The button will not be visible until preparation has completed successfully.
 You should set a completion handler in order to do any work in your view hierarchy
 based on the value of `isDisplayable`. For example, you may want to remove a cell
 from your tableView if the button is not displayable.
 */
- (void)prepareForDisplayWithVenue:(BTNVenue *)venue
                        completion:(void(^)(BOOL isDisplayable))completionHandler;


/**
 Intialize an instance of BTNDropinButton with the given button identifier.
 @param buttonId The identifier for this button instance (e.g. venue_page).
 @return An instance of BTNDropinButton configured for the given buttonId.
 @note The button will not be ready for display until prepareForDisplayWithContext:completion: completes.
 @see -prepareForDisplayWithContext:completion:
 */
- (instancetype)initWithButtonId:(NSString *)buttonId;



///-----------------
/// @name Appearance
///-----------------


/// Defines the insets of the dropin button's content view.
@property (nonatomic, assign) UIEdgeInsets contentInsets UI_APPEARANCE_SELECTOR;


/// Defines the alignment of the button's content. This supercedes any left/right content inset.
@property (nonatomic, assign) BTNDropinContentAlignment contentAlignment UI_APPEARANCE_SELECTOR;


/// Defines the corner radius of the dropin button (default is 0).
@property (nonatomic, assign) CGFloat cornerRadius UI_APPEARANCE_SELECTOR;


/// Defines the border width of the dropin button border (default is 0).
@property (nonatomic, assign) CGFloat borderWidth UI_APPEARANCE_SELECTOR;


/// Defines the color of the dropin button border.
@property (nonatomic, strong) UIColor *borderColor UI_APPEARANCE_SELECTOR;


/// Defines the size of the icon view in the dropin button (applied to height and width).
@property (nonatomic, assign) CGFloat iconSize UI_APPEARANCE_SELECTOR;


/// Defines the spacing between the icon view and the text label in the dropin button.
@property (nonatomic, assign) CGFloat iconLabelSpacing UI_APPEARANCE_SELECTOR;


/// Defines the font used in the dropin button.
@property (nonatomic, strong) UIFont *font UI_APPEARANCE_SELECTOR;


/// Defines the color of the dropin button icon, text, and border (when present).
@property (nonatomic, strong) UIColor *tintColor UI_APPEARANCE_SELECTOR;


/// Defines the highlighted color of the dropin button icon, text, and border (when present).
@property (nonatomic, strong) UIColor *highlightedTintColor UI_APPEARANCE_SELECTOR;


/// Defines the color of the dropin button text (supersedes tintColor).
@property (nonatomic, strong) UIColor *textColor UI_APPEARANCE_SELECTOR;


/// Defines the highlighted color of the dropin button text (supersedes highlightedTintColor).
@property (nonatomic, strong) UIColor *highlightedTextColor UI_APPEARANCE_SELECTOR;


/// Defines the color of the dropin button icon (supersedes tintColor).
@property (nonatomic, strong) UIColor *iconColor UI_APPEARANCE_SELECTOR;


/// Defines the highlighted color of the dropin button icon (supersedes highlightedTintColor).
@property (nonatomic, strong) UIColor *highlightedIconColor UI_APPEARANCE_SELECTOR;


/// Defines the normal background color for the button.
@property (nonatomic, strong) UIColor *normalBackgroundColor UI_APPEARANCE_SELECTOR;


/// Defines the highlighted background color for the button.
@property (nonatomic, strong) UIColor *highlightedBackgroundColor UI_APPEARANCE_SELECTOR;

@end
