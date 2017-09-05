@import Foundation;

/// Represents result of merchant action flow.
typedef NS_ENUM(NSInteger, BTNMerchantActionResult) {
    /// An error occurred and Button could not proceed.
    BTNMerchantActionResultError = 0,
    /**
     No action was presented.
     @discussion This result is posted only when shouldPresentUnattributedAction on BTNMerchantActionSettings was set to NO.
     */
    BTNMerchantActionResultNoActionPresented,
    /// Button finished presenting an unattributed action.
    BTNMerchantActionResultUnattributedActionEnded,
    /// Button finished presenting an attributed action.
    BTNMerchantActionResultAttributedActionEnded
};

NS_ASSUME_NONNULL_BEGIN

@interface BTNMerchantAction : NSObject

/// The url of a merchant or link provider (may include redirects).
@property (nonatomic, copy, readonly) NSURL *url;


/// A token to be associated with all downstream orders, transactions and webhooks. (Max 100 chars.)
@property (nonatomic, copy, readonly) NSString * _Nullable publisherReference;


/**
 Creates a new merchant action with a URL.
 @param url The url of a merchant or link provider (may include redirects).
 */
+ (instancetype)actionWithURL:(NSURL *)url;


/**
 Creates a new merchant action with a URL and a publisher reference.
 @param url The url of a merchant or link provider (may include redirects).
 @param publisherReference A token to be associated with all downstream orders, transactions and webhooks. (Max 100 chars.)
 */
+ (instancetype)actionWithURL:(NSURL *)url
           publisherReference:(nullable NSString *)publisherReference;

@end

NS_ASSUME_NONNULL_END
