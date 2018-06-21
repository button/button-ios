@import Foundation;

NS_ASSUME_NONNULL_BEGIN

/**
 A Purchase Path request defines the parameters for a Purchase Path fetch.

 @see PurchasePathInterface
 */
NS_SWIFT_NAME(PurchasePathRequest)
@interface BTNPurchasePathRequest : NSObject

/**
 A merchant URL to a product, category or just the homepage.
 */
@property (nonatomic, copy, readonly) NSURL *URL;


/**
 An optional token to be associated with all downstream orders, transactions and webhooks. (Max 100 chars.)
 */
@property (nullable, nonatomic, copy) NSString *pubRef;


/**
 Initializes a Purchase Path request for a given merchant URL.

 @param url A merchant URL to a product, category or just the homepage.
 @return A new Purchase Path request.
 */
+ (instancetype)requestWithURL:(NSURL *)url NS_SWIFT_NAME(init(url:));

@end

NS_ASSUME_NONNULL_END

