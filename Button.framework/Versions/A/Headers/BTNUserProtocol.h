@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(User)
@protocol BTNUser <NSObject>

@required

- (void)setIdentifier:(NSString *)identifier;
- (void)setAutofillEnabled:(BOOL)autofillEnabled;
- (void)setFirstName:(NSString *)firstName;
- (void)setLastName:(NSString *)lastName;
- (void)setEmail:(NSString *)email;

@end

NS_ASSUME_NONNULL_END

