@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ButtonBrowser)
@protocol BTNButtonBrowser <NSObject>


///-----------------------
/// @name Opening a URL
///-----------------------

/**
 Opens a URL in the Browser. Works with direct and non-direct partnerships.
 
 @param url The URL to open (required).
 */
+ (void)openURL:(NSURL *)url
NS_SWIFT_NAME(open(url:));


/**
 Opens a URL in the Browser with a configuration object. Works with direct and non-direct partnerships.
 
 @param url The URL to open (required).
 @param config An object used to configure the Browser (optional).
 */
+ (void)openURL:(NSURL *)url
         config:(nullable BTNBrowserConfig *)config
NS_SWIFT_NAME(open(url:config:));


/**
 Opens a URL in the Browser with a completion handler. Works with direct and non-direct partnerships.
 
 @param url The URL to open (required).
 @param completionHandler A block that is invoked after opening the URL (optional).
 */
+ (void)openURL:(NSURL *)url
         completion:(nullable void(^)(NSError * __nullable error))completionHandler
NS_SWIFT_NAME(open(url:completion:));


/**
 Opens a URL in the Browser with a configuration object and a completion handler.
 Works with direct and non-direct partnerships.
 
 @param url The URL to open (required).
 @param config An object used to configure the Browser (optional).
 @param completionHandler A block that is invoked after opening the URL (optional).
 */
+ (void)openURL:(NSURL *)url
         config:(nullable BTNBrowserConfig *)config
         completion:(nullable void(^)(NSError * __nullable error))completionHandler
NS_SWIFT_NAME(open(url:config:completion:));


/**
 Opens a URL in the Browser. Works with direct and non-direct partnerships.
 
 @param url The URL to open (required).
 @param title A title to set on the Browser (optional).
 @param subtitle A subtitle to set on the Browser (optional).
 @param completionHandler A block that is invoked after opening the URL (optional).
 */
+ (void)openURL:(NSURL *)url
          title:(nullable NSString *)title
       subtitle:(nullable NSString *)subtitle
     completion:(nullable void(^)(NSError * __nullable error))completionHandler
NS_SWIFT_NAME(open(url:title:subtitle:completion:))
DEPRECATED_MSG_ATTRIBUTE("Use 'Button.openURL()' or any of the other method signatures instead.");

@end

NS_ASSUME_NONNULL_END
