@import Foundation;
#import "BTNViewableImpression.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(PersonalizationInterface)
@protocol BTNPersonalizationInterface <NSObject>

@required

/**
 Enqueues a viewable impression to be reported.
 @param viewableImpression  The specific viewable impression to be tracked.
 
 @see BTNViewableImpression for more information.
 */
- (void)trackViewableImpression:(BTNViewableImpression *)viewableImpression;

@end

NS_ASSUME_NONNULL_END
