@import Foundation;

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_MSG_ATTRIBUTE("Button Actions has been deprecated. Please contact Button to update your integration.")
NS_SWIFT_NAME(ButtonAction)
@interface BTNAction : NSObject

@property (nonatomic, copy, readonly) NSString *attributionToken;

- (void)start;

- (void)startWithCompletion:(void(^)(NSError * nullable))completion;

@end

NS_ASSUME_NONNULL_END
