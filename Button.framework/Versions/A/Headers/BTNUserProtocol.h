@import Foundation;
#import "BTNPaymentMethodProviderProtocol.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(User)
@protocol BTNUser <NSObject>

@required

/**
 Sets the unique identifier for the user.

 Setting a user ID ensures subsequent Merchant activity (such as installs or purchases) is attributed to a user.
 This can either be your user ID, email or a stable hash of one. You can use this later to look up orders, activity and identify the user in Webhooks.
 String with a maximum length of 255.

 @note: You should set the user ID in your login handler.
 */
- (void)setIdentifier:(NSString *)identifier;


/**
 Enables or disables autofill on merchant websites.

 @param autofillEnabled YES or NO
 @note Autofill has been deprecated.
 */
- (void)setAutofillEnabled:(BOOL)autofillEnabled
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");


/**
 Sets a first name for the user's autofill profile.

 @param firstName The user's first name.
 @note Autofill has been deprecated.
 */
- (void)setFirstName:(NSString *)firstName
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");


/**
 Sets a last name for the user's autofill profile.

 @param lastName The user's last name.
 @note Autofill has been deprecated.
 */
- (void)setLastName:(NSString *)lastName
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");


/**
 Sets an email for the user's autofill profile.

 @param email The user's email.
 @note Autofill has been deprecated.
 */
- (void)setEmail:(NSString *)email
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");


/**
 Sets a phone number for the user's autofill profile.
 
 @param phoneNumber The user's phone number.
 @note Autofill has been deprecated.
 */
- (void)setPhoneNumber:(NSString *)phoneNumber
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");


/**
 Sets an address one for the user's autofill profile.

 @param addressLineOne The user's main address line.
 @note Autofill has been deprecated.
 */
- (void)setAddressLineOne:(NSString *)addressLineOne
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");



/**
 Sets an address two for the user's autofill profile.

 @param addressLineTwo The user's second address line.
 */
- (void)setAddressLineTwo:(NSString *)addressLineTwo
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");


/**
 Sets a city for the user's autofill profile.

 @param city The user's city.
 @note Autofill has been deprecated.
 */
- (void)setCity:(NSString *)city
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");


/**
 Sets a state for the user's autofill profile.

 @param state The user's state.
 @note Autofill has been deprecated.
 */
- (void)setState:(NSString *)state
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");

/**
 Sets a country for the user's autofill profile

 @param country The user's country.
 @note Autofill has been deprecated.
 */
- (void)setCountry:(NSString *)country
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");


/**
 Sets a postal code for the user's autofill profile.

 @param postalCode The user's postal code.
 @note Autofill has been deprecated.
 */
- (void)setPostalCode:(NSString *)postalCode
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");


/**
 Sets the payment method provider for the user.

 @param paymentMethodProvider The object responsibile for providing the user's payment details.
 @note Autofill has been deprecated.
 */
- (void)setPaymentMethodProvider:(id <BTNPaymentMethodProvider>)paymentMethodProvider
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");

@end

NS_ASSUME_NONNULL_END

