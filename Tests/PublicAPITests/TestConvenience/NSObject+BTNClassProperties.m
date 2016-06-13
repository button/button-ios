#import "NSObject+BTNClassProperties.h"
#import <objc/runtime.h>
#import "Button/Button.h"

static NSString * const BTNParameterTypeKey = @"T";
static NSString * const BTNParameterTypeInteger = @"q";

@implementation NSObject (BTNClassProperties)

+ (Class)classByPropertyName:(NSString *)propertyName {
    NSString *attributeType = [self getTypeAttributeOfParameter:propertyName];
    if (!attributeType) {
        return nil;
    }
    attributeType = [self attributeClassNameFromAttributeParameter:attributeType];
    return NSClassFromString(attributeType);
}


+ (BOOL)propertyIsInteger:(NSString *)propertyName {
    NSString *attributeType = [self getTypeAttributeOfParameter:propertyName];
    if (!attributeType) {
        return NO;
    }
    return [attributeType isEqualToString:BTNParameterTypeInteger];
}


#pragma mark - Convinience

+ (NSString *)getTypeAttributeOfParameter:(NSString *)parameterName {
    objc_property_t property = class_getProperty(self, [parameterName cStringUsingEncoding:NSUTF8StringEncoding]);
    if (!property) {
        return nil;
    }
    NSArray *attributePairs = [[NSString stringWithUTF8String: property_getAttributes(property)] componentsSeparatedByString: @","];
    NSMutableDictionary *attributes = [[NSMutableDictionary alloc] initWithCapacity:[attributePairs count]];
    for(NSString *attributePair in attributePairs) {
        [attributes setObject:[attributePair substringFromIndex:1] forKey:[attributePair substringToIndex:1]];
    }
    return [attributes objectForKey:BTNParameterTypeKey];
}


+ (NSString *)attributeClassNameFromAttributeParameter:(NSString *)parameter {
    NSString *parameterClass = [parameter copy];
    parameterClass = [parameterClass substringFromIndex:2];
    parameterClass = [parameterClass substringToIndex:parameterClass.length - 1];
    return parameterClass;
}

@end
