@import Foundation;
@import UIKit;

#import "BTNProduct.h"
#import "BTNCommission.h"
#import "BTNTextCard.h"

NS_ASSUME_NONNULL_BEGIN

@class BTNCard;

@protocol BTNCheckoutInterface <NSObject>

@required

/**
 Sets the title text of the navigation bar.

 @param title The desired text.
 */
- (void)setTitle:(NSString *)title;


/**
 Sets the title text color.

 @param titleColor The desired title text color.
 */
- (void)setTitleColor:(UIColor *)titleColor;


/**
 Sets the subtitle text.

 @param subtitle The desired subtitle text.
 */
- (void)setSubtitle:(NSString *)subtitle;


/**
 Sets the subtitle text color.
 
 @param subtitleColor The desired subtitle text color.
 */
- (void)setSubtitleColor:(UIColor *)subtitleColor;


/**
 Sets the background color of the top bar.

 @param color The desired color.
 */
- (void)setTopBarBackgroundColor:(UIColor *)color;


/**
 The tint color for top bar (e.g. bar button items).
 
 @param color The desired tint color.
 */
- (void)setTopBarTintColor:(UIColor *)color;


/**
 Sets the background color of the bottom bar.
 
 @param color The desired color.
 */
- (void)setBottomBarBackgroundColor:(UIColor *)color;


/**
 The tint color for bottom bar (e.g. bar button items).
 
 @param color The desired tint color.
 */
- (void)setBottomBarTintColor:(UIColor *)color;


/**
 A transparent view on top of the In-App Checkout content view for containing arbitrary views.
 @discussion If you wish to display any additional content to your users, add your views as subviews
 to this container view. The container responds to chrome position changes and rotation.

 @return A container view on top of the In-App Checkout content view.
 */
- (UIView *)viewContainer;


/**
 Sets the active card in the card system. [BETA]
 
 @param card The card object to set as active, or nil to remove the active card.
 */
- (void)setActiveCard:(nullable BTNCard *)card;


/**
 Animates the active card into the checkout view. [BETA]
 */
- (void)showActiveCard;


/**
 Animates the active card out of the checkout view. [BETA]
 */
- (void)hideActiveCard;

@end

NS_ASSUME_NONNULL_END

