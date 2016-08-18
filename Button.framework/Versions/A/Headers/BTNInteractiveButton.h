@import UIKit;

@class BTNAppAction;

@interface BTNInteractiveButton : UIView

///------------------------------
/// @name Rendering an App Action
///------------------------------


/**
 Tells the button to render the passed app action.
 @param appAction A BTNAppAction loaded via `-[Button fetchAppActionWithButtonId:context:completion:]`
 @note passing nil will return the button to the loading state.
 */
- (void)prepareWithAppAction:(BTNAppAction *)appAction;



///-----------------
/// @name Appearance
///-----------------


/**
 Adjusts the width and height of the icon (default: 16.0).
 @note The icon is 1:1 so the value set here applies to both dimensions.
 */
@property (nonatomic, assign) CGFloat iconSize;


/**
 Adjusts space between the left edge of the button and the icon (default: 15.0).
 */
@property (nonatomic, assign) CGFloat iconLeftPadding;


/**
 Adjusts the spacing between the icon the text label (default: 8.0).
 */
@property (nonatomic, assign) CGFloat iconLabelSpacing;


/**
 Adjusts the left resting position of the first inventory item (default: 15.0).
 */
@property (nonatomic, assign) CGFloat inventoryLeftPadding;

@end
