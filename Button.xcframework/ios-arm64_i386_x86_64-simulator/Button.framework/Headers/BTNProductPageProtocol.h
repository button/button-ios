@import Foundation;
#import "BTNBrowserPageProtocol.h"
#import "BTNProduct.h"
#import "BTNCommission.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ProductPage)
@protocol BTNProductPage <BTNBrowserPage>

/**
 An object representing the product shown on the current browser page.
 */
@property (nonatomic, readonly, strong) BTNProduct *product;

/**
 An object representing the commission for the product on the current browser page.
 */
@property (nonatomic, readonly, strong) BTNCommission *commission;

@end

NS_ASSUME_NONNULL_END
