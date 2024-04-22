@import Foundation;

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_ATTRIBUTE
NS_SWIFT_NAME(BoostRequest)
@interface BTNBoostRequest : NSObject

/// Deprecated.
@property (nonatomic, copy, readonly) NSString *boostViewId DEPRECATED_ATTRIBUTE;


/// Deprecated. Data not collected.
+ (instancetype)requestWithId:(NSString *)boostViewId NS_SWIFT_NAME(init(boostViewId:))
DEPRECATED_MSG_ATTRIBUTE("This method returns an empty object. No data is collected.");

@end

NS_ASSUME_NONNULL_END
