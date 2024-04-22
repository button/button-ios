@import Foundation;
#import "BTNBrowserInterfaceProtocol.h"
#import "BTNBrowserPageProtocol.h"
#import "BTNProductPageProtocol.h"
#import "BTNPurchasePageProtocol.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(PurchasePathExtension)
@protocol BTNPurchasePathExtension <NSObject>

@optional

/**
 Called before the browser is closed.

 @discussion Use this method to intercept and prevent a browser dismissal.
 @param browser The interface to the browser object that can be used to customize the display.
 @return YES if the browser should close, NO otherwise.
 */
- (BOOL)shouldCloseBrowser:(id <BTNBrowserInterface>)browser;


/**
 Called when the browser initializes and before anything is displayed.
 
 @param browser The interface to the browser object that can be used to customize the display.
 */
- (void)browserDidInitialize:(id <BTNBrowserInterface>)browser;


/**
 Called when the browser prepares for navigation to a new page.
 
 @param browser The interface to the browser object that can be used to customize the display.
 */
- (void)browserWillNavigate:(id <BTNBrowserInterface>)browser;


/**
 Called when the browser navigates to a new page that is neither a product nor a purchase.
 
 @param browser The interface to the browser object that can be used to customize the display.
 @param page The object representing the information about the page to which the browser did navigate.
 */
- (void)browser:(id <BTNBrowserInterface>)browser didNavigateToPage:(id <BTNBrowserPage>)page;


/**
 Called when the browser navigates to a product page.
 
 @param browser The interface to the browser object that can be used to customize the display.
 @param page The object representing the information about the product to which the browser did navigate.
 */
- (void)browser:(id <BTNBrowserInterface>)browser didNavigateToProduct:(id <BTNProductPage>)page;


/**
 Called when the browser navigates to a purchase page.
 
 @param browser The interface to the browser object that can be used to customize the display.
 @param page The object representing the information about the purchase to which the browser did navigate.
 */
- (void)browser:(id <BTNBrowserInterface>)browser didNavigateToPurchase:(id <BTNPurchasePage>)page;


/**
 Called when the browser is closed. This does not mean a purchase was completed.
 
 @discussion This can happen when the user dismisses the browser or chooses to install the native app.
 */
- (void)browserDidClose;

@end

NS_ASSUME_NONNULL_END
