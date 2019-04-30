@import Foundation;

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
 */
- (void)setAutofillEnabled:(BOOL)autofillEnabled DEPRECATED_MSG_ATTRIBUTE("Use '[Button.configuration setAutofillEnabled:]' instead.");


/**
 Sets a first name for the user's autofill profile.

 @param firstName The user's first name.
 */
- (void)setFirstName:(NSString *)firstName;


/**
 Sets a last name for the user's autofill profile.

 @param lastName The user's last name.
 */
- (void)setLastName:(NSString *)lastName;


/**
 Sets an email for the user's autofill profile.

 @param email The user's email.
 */
- (void)setEmail:(NSString *)email;


/**
 Sets a phone number for the user's autofill profile.
 
 @param phoneNumber The user's phone number.
 */
- (void)setPhoneNumber:(NSString *)phoneNumber;


/**
 Sets an address one for the user's autofill profile.

 @param addressLineOne The user's main address line.
 */
- (void)setAddressLineOne:(NSString *)addressLineOne;



/**
 Sets an address two for the user's autofill profile.

 @param addressLineTwo The user's second address line.
 */
- (void)setAddressLineTwo:(NSString *)addressLineTwo;


/**
 Sets a city for the user's autofill profile.

 @param city The user's city.
 */
- (void)setCity:(NSString *)city;


/**
 Sets a state for the user's autofill profile.

 @param state The user's state.
 */
- (void)setState:(NSString *)state;


/**
 Sets a postal code for the user's autofill profile.

 @param postalCode The user's postal code.
 */
- (void)setPostalCode:(NSString *)postalCode;

@end

NS_ASSUME_NONNULL_END

