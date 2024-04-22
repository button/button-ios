@import Foundation;
#import "BTNBoostView.h"
#import "BTNBoostRequest.h"
#import "BTNBoostResponse.h"

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(BoostInterface)
@protocol BTNBoostInterface <NSObject>

/**
 @note Deprecated.
 */
- (void)fetchWithRequest:(BTNBoostRequest *)request
       completionHandler:(nonnull void(^)(BTNBoostResponse * __nullable boostResponse, NSError * __nullable error))completionHandler NS_SWIFT_NAME(fetch(request:completion:))
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

@end

NS_ASSUME_NONNULL_END
