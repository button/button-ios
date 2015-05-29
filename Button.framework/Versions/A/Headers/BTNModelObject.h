@import Foundation;
#import "BTNSerializable.h"

@interface BTNModelObject : NSObject <BTNSerializable, NSCopying>

/**
 Part of the BTNSerializable protocol. 
 Provides a required, base implementation to ensure the passed dictionary is in fact an NSDictionary.
 @see BTNSerializable
 */
+ (BOOL)canInitWithDictionary:(NSDictionary *)dictionary NS_REQUIRES_SUPER;

@end
