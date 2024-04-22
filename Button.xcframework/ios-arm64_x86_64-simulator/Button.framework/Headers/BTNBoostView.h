@import UIKit;
#import "BTNBoostResponse.h"
#import "BTNBoostViewDelegateProtocol.h"

NS_ASSUME_NONNULL_BEGIN

/**
 @note Deprecated.
 */

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(BoostView)
@interface BTNBoostView : UIView

/// Deprecated.
@property (nullable, nonatomic, readwrite, weak) id <BTNBoostViewDelegate> delegate DEPRECATED_ATTRIBUTE;


/// Deprecated.
- (void)render:(nullable BTNBoostResponse *)boostResponse completionHandler:(nullable void(^)(NSError * __nullable error))completionHandler
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op.");

@end

NS_ASSUME_NONNULL_END
