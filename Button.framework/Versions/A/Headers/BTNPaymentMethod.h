@import Foundation;
#import "BTNModelObject.h"

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated")
NS_SWIFT_NAME(PaymentMethod)
@interface BTNPaymentMethod : BTNModelObject


/**
 The user's payment card number, as a string without any spaces.
 */
@property (nullable, nonatomic, copy, readwrite) NSString *cardNumber;


/**
 The three or four-digit number representing the user's payment card CVV.
 */
@property (nullable, nonatomic, copy, readwrite) NSString *cvv;


/**
 The user's full name as it appears on the card.
 */
@property (nullable, nonatomic, copy, readwrite) NSString *fullName;


/**
 The two-digit number representing the user's payment card expiration month.
 */
@property (nullable, nonatomic, copy, readwrite) NSString *expiryMonth;


/**
 The two or four-digit number representing the user's payment card expiration year.
 */
@property (nullable, nonatomic, copy, readwrite) NSString *expiryYear;


@end

NS_ASSUME_NONNULL_END
