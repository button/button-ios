@import Foundation;
#import "BTNPaymentMethodProviderProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol BTNUserDeprecations <NSObject>


/// Deprecated.
- (void)setAutofillEnabled:(BOOL)autofillEnabled
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op.");


/// Deprecated. Data not collected.
- (void)setEmail:(nullable NSString *)email
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setFirstName:(NSString *)firstName
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setLastName:(NSString *)lastName
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setPhoneNumber:(NSString *)phoneNumber
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setAddressLineOne:(NSString *)addressLineOne
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setAddressLineTwo:(NSString *)addressLineTwo
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setCity:(NSString *)city
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setState:(NSString *)state
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setCountry:(NSString *)country
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setPostalCode:(NSString *)postalCode
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");


/// Deprecated. Data not collected.
- (void)setPaymentMethodProvider:(id <BTNPaymentMethodProvider>)paymentMethodProvider
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

@end

NS_ASSUME_NONNULL_END
