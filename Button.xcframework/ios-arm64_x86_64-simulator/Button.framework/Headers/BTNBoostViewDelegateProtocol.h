@import Foundation;

@class BTNBoostView, BTNPurchasePathRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 @note Deprecated.
 */

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(BoostViewDelegate)
@protocol BTNBoostViewDelegate <NSObject>

/// Deprecated.
- (void)boostView:(BTNBoostView *)boostView
didReceiveRequest:(BTNPurchasePathRequest *)purchasePathRequest
   organizationId:(NSString *)organizationId DEPRECATED_ATTRIBUTE;

@end

NS_ASSUME_NONNULL_END
