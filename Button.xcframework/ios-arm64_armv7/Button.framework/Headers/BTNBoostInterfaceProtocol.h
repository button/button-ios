@import Foundation;
#import "BTNBoostView.h"
#import "BTNBoostRequest.h"
#import "BTNBoostResponse.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(BoostInterface)
@protocol BTNBoostInterface <NSObject>


/**
 Fetches a Boost Response to be rendered in a BoostView.

 @param request A BoostRequest to be fetched.
 @param completionHandler A block called on completion of the fetch.
                          The block gets an optional BoostResponse or an `error` if one occurred.

 @discussion If you receive a BoostResponse, render it in a BoostView, else adjust your app UI accordingly.

 @important Boost is a private beta product. If you're interested in Boost, reach out to your Button contact.
 */
- (void)fetchWithRequest:(BTNBoostRequest *)request
       completionHandler:(nonnull void(^)(BTNBoostResponse * __nullable boostResponse, NSError * __nullable error))completionHandler NS_SWIFT_NAME(fetch(request:completion:));

@end

NS_ASSUME_NONNULL_END
