#import "BTNModelObject.h"

/**
 A type indicating that a product is commissionable, not commissionable, or unknown.
 
 - BTNCommissionTypeUnknown: It is unknown whether or not the product is commissionable.
 - BTNCommissionTypeNonCommissionable: The product is not commissionable.
 - BTNCommissionTypeCommissionable: The product is commissionable.
 */
typedef NS_ENUM(NSInteger, BTNCommissionType) {
    BTNCommissionTypeUnknown = 0,
    BTNCommissionTypeNonCommissionable,
    BTNCommissionTypeCommissionable
};

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Commission)
@interface BTNCommission : BTNModelObject

/**
 Indicates product commissionability.
 @see BTNCommissionType
 */
@property (nonatomic, assign, readonly) BTNCommissionType commissionType;

@end

NS_ASSUME_NONNULL_END
