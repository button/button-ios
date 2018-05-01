@import Foundation;
@import UIKit;

#import "BTNProduct.h"
#import "BTNCommission.h"
#import "BTNCardListProtocol.h"
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
 An object belonging to the checkout interface that maintains the list of cards currently in
 the card system.
 
 @return The interface to the card list object.
 */
- (id <BTNCardList>)cardList;


/**
 Reloads all cards from scratch and re-renders any visible cards.
 @discussion Call this method when you make changes to cards in the CardList.
 */
- (void)reloadCards;


/**
 Animates the top card in the card list into the checkout view.
 */
- (void)showTopCard;


/**
 Animates the top card in the card list out of the checkout view.
 */
- (void)hideTopCard;


@end

NS_ASSUME_NONNULL_END

