@import Foundation;
#import "BTNUserDeprecationsProtocol.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(User)
@protocol BTNUser <BTNUserDeprecations>

@required

/**
 Sets the unique identifier for the user.

 Setting a user ID ensures subsequent Merchant activity (such as installs or purchases) is attributed to a user.
 This can either be your user ID, email or a stable hash of one. You can use this later to look up orders, activity and identify the user in Webhooks.
 String with a maximum length of 255.

 @note: You should set the user ID in your login handler.
 */
- (void)setIdentifier:(NSString *)identifier;

@end

NS_ASSUME_NONNULL_END

