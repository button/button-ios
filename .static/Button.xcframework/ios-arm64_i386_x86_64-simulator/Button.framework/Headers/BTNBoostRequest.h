@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(BoostRequest)
@interface BTNBoostRequest : NSObject

/**
 A string identifying a BoostView's location in your app (i.e. 'homepage-carousel', 'hero').
 */
@property (nonatomic, copy, readonly) NSString *boostViewId;


/**
 Creates a new Boost Request with a Boost view Id.

 @param boostViewId A string identifying a BoostView's location in your app (i.e. 'homepage-carousel', 'hero').
 @return a new BoostRequest instance ready to be fetched.
 */
+ (instancetype)requestWithId:(NSString *)boostViewId NS_SWIFT_NAME(init(boostViewId:));

@end

NS_ASSUME_NONNULL_END
