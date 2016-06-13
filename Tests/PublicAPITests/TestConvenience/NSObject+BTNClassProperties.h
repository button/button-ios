#import <Foundation/Foundation.h>

@interface NSObject (BTNClassProperties)

/**
 Returns a property class by a name
 or Nil if there's no such property or property is a primitive type
 */
+ (Class)classByPropertyName:(NSString *)propertyName;


/**
 Returns YES if a property is an NSInteger
 or NO if property is not an NSInteger or there's no such property
 */
+ (BOOL)propertyIsInteger:(NSString *)propertyName;

@end
