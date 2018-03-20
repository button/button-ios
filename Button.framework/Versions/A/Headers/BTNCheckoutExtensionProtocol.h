@import Foundation;
#import "BTNCheckoutInterfaceProtocol.h"

NS_ASSUME_NONNULL_BEGIN

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
 Called when the checkout flow navigates to a product. [BETA]

 @param checkout The interface to the checkout object.
 @param product An object representing the product.
 @see BTNProduct
 */
- (void)checkout:(id <BTNCheckoutInterface>)checkout didNavigateToProduct:(BTNProduct *)product commission:(BTNCommission *)commission;


/**
 Called when a purchase is completed. [BETA]
 @discussion This is not guaranteed to be called for every purchase as not all merchants are enabled for this feature.
 
 @param checkout The interface to the checkout object.
 */
- (void)checkoutDidPurchase:(id <BTNCheckoutInterface>)checkout;


/**
 Called when the checkout flow is closed. This does not mean a purchase was completed.
 
 @discussion This can happen when the user dismisses the checkout flow or the user chooses to install the native app.
 */
- (void)checkoutDidClose;

@end

NS_ASSUME_NONNULL_END

