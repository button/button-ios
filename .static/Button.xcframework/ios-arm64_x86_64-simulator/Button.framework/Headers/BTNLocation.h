#import "BTNBaseEntity.h"

/**
 @note Deprecated.
 */

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(Location)
@interface BTNLocation : BTNBaseEntity

/// Deprecated. Data not collected.
+ (instancetype)locationWithName:(nullable NSString *)name
                        latitude:(double)latitude
                       longitude:(double)longitude
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)locationWithLatitude:(double)latitude
                           longitude:(double)longitude
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
- (void)setLatitude:(double)latitude 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setLongitude:(double)longitude 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setCity:(NSString *)city 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setState:(NSString *)state 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setZip:(NSString *)zip 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setCountry:(NSString *)country 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setAddressLine:(NSString *)addressLine 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

@end

NS_ASSUME_NONNULL_END
