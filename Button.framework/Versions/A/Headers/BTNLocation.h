#import "BTNModelObject.h"
@import CoreLocation;

extern NSString * const BTNContextStartLocationKey;
extern NSString * const BTNContextEndLocationKey;

@interface BTNLocation : BTNModelObject

/// The displayable name of the location.
@property (nonatomic, copy, readonly) NSString *displayName;

@property (nonatomic, assign, readonly) CLLocationDegrees latitude;
@property (nonatomic, assign, readonly) CLLocationDegrees longitude;


///---------------------
/// @name Initialization
///---------------------


/**
 Returns a location instance with a display name. [Highly recommended]
 @param displayName The displayable name of the location.
 @param location A CLLocation instance.
 */
+ (instancetype)locationWithName:(NSString *)displayName
                        location:(CLLocation *)location;


/**
 Returns a location instance with a display name. [Highly recommended]
 @param displayName The displayable name of the location.
 @param latitude  The latitude of the location.
 @param longitude The longitude of the location.
 */
+ (instancetype)locationWithName:(NSString *)displayName
                        latitude:(double)latitude
                       longitude:(double)longitude;


///---------------
/// @name Equality
///---------------

/**
 Returns a Boolean value that indicates whether a given BTNLocation instance is equal to the receiver.
 @param object A BTNLocation instance to compare to the receiver.
 @return YES if the BTNLocation instance is equivalent to the receiver.
 */
- (BOOL)isEqualToLocation:(BTNLocation *)location;

@end
