@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ConfigurationInterface)
@protocol BTNConfigurationInterface <NSObject>

@required

/**
 The default value of this property is `YES`, however, Autofill must be turned on for your organization before use.
 If you're interested in using Autofill, please reach out to your Button contact.
 */
@property (nonatomic, assign, getter=isAutofillEnabled) BOOL autofillEnabled;

@end

NS_ASSUME_NONNULL_END
