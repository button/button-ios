@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ConfigurationInterface)
@protocol BTNConfigurationInterface <NSObject>

@required

/**
 Autofill is deprecated.
 */
@property (nonatomic, assign, getter=isAutofillEnabled) BOOL autofillEnabled
DEPRECATED_MSG_ATTRIBUTE("Autofill has been deprecated.");

@end

NS_ASSUME_NONNULL_END
