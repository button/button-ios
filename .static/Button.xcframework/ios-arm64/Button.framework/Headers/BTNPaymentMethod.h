@import Foundation;
#import "BTNModelObject.h"

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(PaymentMethod)
@interface BTNPaymentMethod : BTNModelObject


/// Deprecated. Data not collected.
@property (nullable, nonatomic, copy, readwrite) NSString *cardNumber
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
@property (nullable, nonatomic, copy, readwrite) NSString *cvv
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
@property (nullable, nonatomic, copy, readwrite) NSString *fullName
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
@property (nullable, nonatomic, copy, readwrite) NSString *expiryMonth
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
@property (nullable, nonatomic, copy, readwrite) NSString *expiryYear
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


@end

NS_ASSUME_NONNULL_END
