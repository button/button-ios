@import Foundation;
#import "BTNPurchasePathExtensionProtocol.h"
#import "BTNPaymentMethod.h"

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.")
NS_SWIFT_NAME(PaymentMethodProvider)
@protocol BTNPaymentMethodProvider <NSObject>

@required

- (BTNPaymentMethod * __nullable)paymentMethod;

@end

NS_ASSUME_NONNULL_END
