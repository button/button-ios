@import Foundation;
#import "BTNPurchasePathExtensionProtocol.h"
#import "BTNPurchasePathRequest.h"
#import "BTNPurchasePath.h"

NS_ASSUME_NONNULL_BEGIN

@class BTNPurchasePathRequest, BTNPurchasePath;


/**
 Button Purchase Path takes regular Merchant URLs to products, categories or just the homepage and replaces
 them with a fully attributed Button Purchase Path, optimized for both conversion and user experience.
 https://developer.usebutton.com/guides/publishers/ios/create-a-button-purchase-path
 */
NS_SWIFT_NAME(PurchasePathInterface)
@protocol BTNPurchasePathInterface <NSObject>

@required


/**
 Sets a Purchase Path extension.

 @discussion
 Purchase Path Extensions is a feature designed to allow Publishers to create completely custom experiences
 on top of Button In-App Checkout. Purchase Path Extensions build on the rich event framework including
 User Activity Events & Checkout Events and communicate with users consistently through Browser Cards --
 a simple UX for displaying modular information throughout the shopping experience.
 */
@property (nullable, nonatomic, strong) id <BTNPurchasePathExtension> extension;



/**
 Fetches a Purchase Path with a Purchase Path request.

 @param request A Purchase Path request.
 @param purchasePathHandler A block to be called upon completion of the Purchase Path fetch.
                            The block passes a `purchasePath` on success or an `error` if one occurred.
 */
- (void)fetchWithRequest:(BTNPurchasePathRequest *)request
     purchasePathHandler:(nonnull void(^)(BTNPurchasePath * __nullable purchasePath, NSError * __nullable error))purchasePathHandler NS_SWIFT_NAME(fetch(request:completion:));


@end

NS_ASSUME_NONNULL_END

