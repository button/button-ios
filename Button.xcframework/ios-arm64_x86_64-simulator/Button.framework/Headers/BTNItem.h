#import "BTNBaseEntity.h"

/**
 @note Deprecated.
 */

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Item)
@interface BTNItem : BTNBaseEntity

/// Deprecated. Data not collected.
+ (instancetype)itemWithName:(NSString *)name SKU:(NSString *)SKU
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)itemWithName:(NSString *)name UPC:(NSString *)UPC
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)itemWithSKU:(NSString *)SKU
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
+ (instancetype)itemWithUPC:(NSString *)UPC
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");


/// Deprecated. Data not collected.
- (void)setSKU:(NSString *)SKU 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setUPC:(NSString *)UPC 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

@end

NS_ASSUME_NONNULL_END
