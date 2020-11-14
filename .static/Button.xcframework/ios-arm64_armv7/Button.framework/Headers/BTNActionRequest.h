@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@class BTNActionQuery;

DEPRECATED_MSG_ATTRIBUTE("Button Actions has been deprecated. Please contact Button to update your integration.")
NS_SWIFT_NAME(ActionRequest)
@interface BTNActionRequest : NSObject

@property (nonatomic, copy, readonly) NSString *buttonId;

@property (nonatomic, copy, readonly) BTNActionQuery *query;

@property (nonatomic, copy) NSString *pubRef;

+ (instancetype)requestWithButtonId:(NSString *)buttonId
                              query:(BTNActionQuery *)query NS_SWIFT_NAME(init(buttonId:query:));

@end

NS_ASSUME_NONNULL_END
