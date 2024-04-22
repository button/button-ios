@import Foundation;
#import "BTNViewableImpression.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(OffersInterface)
@protocol BTNOffersInterface <NSObject>

@required

/**
 Enqueues a viewable impression to be reported.
 @param viewableImpression  The specific viewable impression to be tracked.
 
 @see BTNViewableImpression for more information.
 */
- (void)trackViewableImpression:(BTNViewableImpression *)viewableImpression;

@end

DEPRECATED_MSG_ATTRIBUTE("PersonalizationInterface has been renamed to OffersInterface.");
NS_SWIFT_NAME(PersonalizationInterface)
/// :nodoc:
@protocol BTNPersonalizationInterface <BTNOffersInterface>

@end

NS_ASSUME_NONNULL_END
