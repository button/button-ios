#import "BTNModelObject.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Product)
@interface BTNProduct : BTNModelObject

/**
 The url representing the product.
 */
@property (nonatomic, copy, readonly) NSURL *url;

@end

NS_ASSUME_NONNULL_END

