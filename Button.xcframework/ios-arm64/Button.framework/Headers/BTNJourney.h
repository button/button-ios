#import "BTNBaseEntity.h"
#import "BTNLocation.h"

DEPRECATED_ATTRIBUTE
typedef NS_ENUM(NSInteger, BTNTransportType) {
    BTNTransportTypeUnknown,
    BTNTransportTypeFlight,
    BTNTransportTypeTrain,
    BTNTransportTypeBus,
    BTNTransportTypeCar,
    BTNTransportTypeWalking,
    BTNTransportTypeSubway,
    BTNTransportTypeBoat,
    BTNTransportTypeSpaceship
};

/**
 @note Deprecated.
 */

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(Journey)
@interface BTNJourney : BTNBaseEntity

/// Deprecated. Data not collected.
- (void)setStartLocation:(BTNLocation *)startLocation 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setDestinationLocation:(BTNLocation *)destinationLocation 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setStartTime:(NSDate *)startTime 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setEndTime:(NSDate *)endTime 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setTransportType:(BTNTransportType)transportType 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

@end

NS_ASSUME_NONNULL_END
