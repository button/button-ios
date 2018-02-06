@import Foundation;
#import "BTNCheckoutInterfaceProtocol.h"

@protocol BTNCheckoutExtension <NSObject>

@optional

/**
 Called when the checkout initializes and before anything is displayed.

 @param checkout The interface to the checkout object.
 */
- (void)checkoutDidInitialize:(id <BTNCheckoutInterface>)checkout;


/**
 Called when the checkout flow navigates to a new URL.

 @param checkout The interface to the checkout object.
 @param url The URL representing the current location of the checkout flow.
 */
- (void)checkout:(id <BTNCheckoutInterface>)checkout didNavigateToURL:(NSURL *)url;


/**
 Called when the checkout flow is closed. This does not mean a purchase was completed.
 
 @discussion This can happen when the user dismisses the checkout flow or the user chooses to install the native app.
 */
- (void)checkoutDidClose;

@end

