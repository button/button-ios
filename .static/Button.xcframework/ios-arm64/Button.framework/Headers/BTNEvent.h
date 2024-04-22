#import "BTNBaseEntity.h"
#import "BTNLocation.h"

/**
 @note Deprecated.
 */

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(Event)
@interface BTNEvent : BTNBaseEntity

/// Deprecated. Data not collected.
+ (instancetype)eventWithStartTime:(NSDate *)startTime
                           endTime:(NSDate *)endTime
                          location:(BTNLocation *)location
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
- (void)setLocation:(BTNLocation *)location 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setStartTime:(NSDate *)startTime 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setEndTime:(NSDate *)endTime 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

@end

NS_ASSUME_NONNULL_END
