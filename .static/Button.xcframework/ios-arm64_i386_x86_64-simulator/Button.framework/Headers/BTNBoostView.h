@import UIKit;
#import "BTNBoostResponse.h"
#import "BTNBoostViewDelegateProtocol.h"

NS_ASSUME_NONNULL_BEGIN

/**
 DEPRECATED since v6.30.0

 @important Boost is a private beta product. If you're interested in Boost, reach out to your Button contact.
 */
DEPRECATED_MSG_ATTRIBUTE("Boost has been deprecated and will be removed in a future version.")
NS_SWIFT_NAME(BoostView)
@interface BTNBoostView : UIView

/**
 DEPRECATED since v6.30.0

 An optional delegate that implements the BTNBoostViewDelegate protocol. When set, receives a
 PurchasePathRequest that the developer is expected to fetch and, upon a successful response, start.
 If left `nil`, the fetching and starting will be handled automatically by the Button SDK.
 */
@property (nullable, nonatomic, readwrite, weak) id <BTNBoostViewDelegate> delegate;


/**
 DEPRECATED since v6.30.0
 
 Renders a Boost response in the Boost view.

 @param boostResponse The response of fetching a BoostRequest.
 @param completionHandler Called upon success or Boost view load error.
 */
- (void)render:(nullable BTNBoostResponse *)boostResponse completionHandler:(nullable void(^)(NSError * __nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END
