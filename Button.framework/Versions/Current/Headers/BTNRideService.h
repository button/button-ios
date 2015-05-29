#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, BTNRideAvailability) {
    BTNRideAvailabilityUnknown,
    BTNRideAvailabilityAvailable,
    BTNRideAvailabilityUnavailable
};

@interface BTNRideService : NSObject

/**
 Checks the availability of rides at the user's current availability
 @param completion Block to be executed once ride availability has been determined
 @note This method will not request location permissions & will silently fail if the
 user has not already granted them. Subsequest requests can use +rideAvailability to
 access a stale value.
 @discussion BTNRideAvailabilityUnknown indicates that ride availaibility could not be determined.
 **/
+ (void)checkForRideAvailabilityWithCompletion:(void(^)(BTNRideAvailability availability))completion;


/**
 Currently known availability of rides at the user's current location
 @return BTNRideAvailability the current state of ride availability
 @note If the value returned is BTNRideAvailabilityUnknown, you will need to
 call +checkForRideAvailabilityWithCompletion. If this has already been
 called, Location Services may not have been granted by the user.
 **/
+ (BTNRideAvailability)rideAvailability;


/// Set ride availability. Use only for debug.
+ (void)setRideAvailability:(BTNRideAvailability)availability;

@end
