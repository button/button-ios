#import "BTNModelObject.h"
@import CoreLocation;


@class BTNLocation;

@interface BTNVenue : BTNModelObject

/// A unique identifier for the venue.
@property (nonatomic, copy, readonly) NSString *venueId;

/// The display name of the venue.
@property (nonatomic, copy, readonly) NSString *name;

/// The location of the venue.
@property (nonatomic, strong, readonly) BTNLocation *location;



///---------------------
/// @name Initialization
///---------------------


/**
 Returns a location instance with a display name. [Highly recommended]
 @param displayName The displayable name of the location.
 @param location A CLLocation instance.
 */
+ (instancetype)venueWithId:(NSString *)venueId
                  venueName:(NSString *)name
                   location:(CLLocation *)location;


/**
 Returns a location instance with a display name. [Highly recommended]
 @param displayName The displayable name of the location.
 @param latitude  The latitude of the location.
 @param longitude The longitude of the location.
 */
+ (instancetype)venueWithId:(NSString *)venueId
                  venueName:(NSString *)name
                   latitude:(double)latitude
                  longitude:(double)longitude;

@end
