@import Foundation;

NS_ASSUME_NONNULL_BEGIN

DEPRECATED_MSG_ATTRIBUTE("Boost has been deprecated and will be removed in a future version.")
NS_SWIFT_NAME(BoostRequest)
@interface BTNBoostRequest : NSObject

/**
 DEPRECATED since v6.30.0

 A string identifying a BoostView's location in your app (i.e. 'homepage-carousel', 'hero').
 */
@property (nonatomic, copy, readonly) NSString *boostViewId;


/**
 DEPRECATED since v6.30.0

 Creates a new Boost Request with a Boost view Id.

 @param boostViewId A string identifying a BoostView's location in your app (i.e. 'homepage-carousel', 'hero').
 @return a new BoostRequest instance ready to be fetched.
 */
+ (instancetype)requestWithId:(NSString *)boostViewId NS_SWIFT_NAME(init(boostViewId:));

@end

NS_ASSUME_NONNULL_END
