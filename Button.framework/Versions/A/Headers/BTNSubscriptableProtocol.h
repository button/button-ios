@import Foundation;

@protocol BTNSubscriptable <NSObject>

///--------------------------
/// @name Object Subscripting
///--------------------------


/**
 Add key-value pairs with subscripting syntax:
 @code object[key] = value; @endcode
 */
- (void)setObject:(nullable id)obj forKeyedSubscript:(nonnull NSString  *)key;


/**
 Retrieve previously stored values with subscripting syntax:
 @code id value = object[key]; @endcode
 */
- (nullable id)objectForKeyedSubscript:(nonnull NSString *)key;

@end
