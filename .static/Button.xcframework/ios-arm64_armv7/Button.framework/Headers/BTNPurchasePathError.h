@import Foundation;

typedef NS_ENUM(NSInteger, BTNPurchasePathErrorCode) {
    /// An unknown error occurred
    BTNPurchasePathErrorCodeUnknownError,
    /// Purchase Path not found
    BTNPurchasePathErrorCodePathNotFound,
    /// Failed to open url in app or browser
    BTNPurchasePathErrorCodeOpenURLFailed,
    /// Failed to open app with app scheme
    BTNPurchasePathErrorCodeOpenAppSchemeFailed,
    /// Failed to open universal link in app
    BTNPurchasePathErrorCodeOpenUniversalLinkFailed,
    /// The destination app is not installed. Installs are not configured for this partnership.
    BTNPurchasePathErrorCodeAppNotInstalled
};

NS_ASSUME_NONNULL_BEGIN

extern NSString * const BTNPurchasePathErrorDomain;

@interface BTNPurchasePathError : NSError

+ (instancetype)errorWithCode:(BTNPurchasePathErrorCode)code;

@end

NS_ASSUME_NONNULL_END
