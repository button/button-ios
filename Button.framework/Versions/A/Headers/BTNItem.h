#import "BTNBaseEntity.h"

/**
 All fields are optional and should be populated only if known.
 @see `BTNBaseEntity` for inherited configuration options.
 */
@interface BTNItem : BTNBaseEntity

/**
 Returns an new instance with a name and SKU.
 @param name The name of the item.
 @param SKU The item SKU.
 */
+ (instancetype)itemWithName:(NSString *)name SKU:(NSString *)SKU;


/**
 Returns an new instance with a name and UPC.
 @param name The name of the item.
 @param UPC The item UPC.
 */
+ (instancetype)itemWithName:(NSString *)name UPC:(NSString *)UPC;


/// Sets the SKU of the item.
- (void)setSKU:(NSString *)SKU;


/// Sets the UPC of the item.
- (void)setUPC:(NSString *)UPC;

@end
