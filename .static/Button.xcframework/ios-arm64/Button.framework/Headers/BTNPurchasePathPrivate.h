#import "BTNPurchasePath.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(PurchasePathPrivate)

/**
 @warning
 This class and it's methods are private and usage may result in undefined behavior.
 It is recommended that you do not use this class or any of it's method unless instructed to do so.
 */
@interface BTNPurchasePathPrivate : BTNPurchasePath

/*
 @private experimental method

 Replaces all occurences of the target string in the appLink and browserLink.

 @param target The target string to be replaced.
 @param replacement The string that will replace all occurences of the target string.
 */
- (void)replaceOccurrencesOfString:(NSString *)target
                        withString:(NSString *)replacement;

@end

NS_ASSUME_NONNULL_END
