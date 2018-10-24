@import Foundation;
@import UIKit;

#import "BTNProduct.h"
#import "BTNCommission.h"
#import "BTNCardListProtocol.h"
#import "BTNTextCard.h"
#import "BTNBrowserHeaderProtocol.h"
#import "BTNBrowserFooterProtocol.h"
#import "BTNBrowserChromeDelegateProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@class BTNCard;

NS_SWIFT_NAME(BrowserInterface)
@protocol BTNBrowserInterface <NSObject>

@required

@property (nonatomic, strong, readonly) id <BTNBrowserHeader> header;
@property (nonatomic, strong, readonly) id <BTNBrowserFooter> footer;
@property (nullable, nonatomic, weak) id <BTNBrowserChromeDelegate> chromeDelegate;


/**
 A transparent view on top of the In-App Checkout content view for containing arbitrary views.
 @discussion If you wish to display additional custom content to your users, add your views as subviews
 to this container view. The container responds to chrome position changes and rotation.

 @return A container view on top of the browser content view.
 */
- (UIView *)viewContainer;


/**
 An object belonging to the browser interface that maintains the list of cards currently in
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
 Animates the top card in the card list into the browser view.
 */
- (void)showTopCard;


/**
 Animates the top card in the card list out of the browser view.
 */
- (void)hideTopCard;

@end

NS_ASSUME_NONNULL_END

