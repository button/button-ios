@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@class BTNActionQuery;

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(ActionRequest)
@interface BTNActionRequest : NSObject

@property (nonatomic, copy, readonly) NSString *buttonId 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

@property (nonatomic, copy, readonly) BTNActionQuery *query 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

@property (nonatomic, copy) NSString *pubRef 
DEPRECATED_MSG_ATTRIBUTE("This method is a no-op. No data is collected.");

+ (instancetype)requestWithButtonId:(NSString *)buttonId
                              query:(BTNActionQuery *)query NS_SWIFT_NAME(init(buttonId:query:))
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");

@end

NS_ASSUME_NONNULL_END
