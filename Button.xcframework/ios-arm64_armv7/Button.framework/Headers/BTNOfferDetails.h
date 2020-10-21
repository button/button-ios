@import Foundation;
#import "BTNImpressionTrackingTypes.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(OfferDetailsProtocol)

/**
 Defines the interface for creating OfferDetails objects for use in configuring ImpressionViews.
 
 Note: You may either create an instance of the concrete class OfferDetails or implement this protocol on one of your own classes.
 */
@protocol BTNOfferDetails <NSObject>

/**
 The URL that is associated with the offer.
 */
@property (nonatomic, readonly, copy) NSString *url;


/**
The Button-provided value that identifies the served offer.

*/
@property (nonatomic, readonly, copy) NSString *offerId;


/**
 The rate visible to the user. If the visibleRateType is `fixed`, this value represents the amount in the
 currency of the offer. If it is `percent`, this will be a value ranging from 0.0 to 100.0.
 
 @discussion Default value is `0.0`.
 */
@property (nonatomic, readonly, assign) double visibleRate;


/**
 An enum value representing type of the visibleRate for the offer that is displayed to the user,
 either `percent` or `fixed`.
 */
@property (nonatomic, readonly, assign) BTNVisibleRateType visibleRateType;

@optional

///-----------------------
/// @name Initialization
///-----------------------

/**
 Creates a new instance with the details of an impression to be passed to an ImpressionView's `configureWith(details:)` method.
 @param url The URL string of the served offer.
 @param offerId The Button-provided value that identifies the rate of the served offer.
 @param visibleRate The new visibleRateType of the served offer (or zero when not applicable).
 @param rateType  The new visibleRate of the served offer (or `unknown` when not applicable).

 If the offer displayed is valued at 3%, pass 3 for visibleRate and a rateType of .percent

 @code
 impressionView.configureWith(details: ImpressionDetails(url: url, offerId: offerId, visibleRate: 3.0, rateType: .percent))
 @endcode

 If the offer displayed is valued at $5, pass 5.0 for visibleRate and a rateType of .fixed

 @code
 impressionView.configureWith(details: ImpressionDetails(url: url, offerId: offerId, visibleRate: 5.0, rateType: .fixed))
 @endcode
*/
- (instancetype)initWithURL:(NSString *)url offerId:(NSString *)offerId visibleRate:(double)visibleRate rateType:(BTNVisibleRateType)rateType;
+ (instancetype)detailsWithURL:(NSString *)url offerId:(NSString *)offerId visibleRate:(double)visibleRate rateType:(BTNVisibleRateType)rateType;

@end

NS_SWIFT_NAME(OfferDetails)

@interface BTNOfferDetails : NSObject <BTNOfferDetails>

- (instancetype)init __attribute__((unavailable("Use detailsWithURL(:visibleRate:rateType:)")));

@end

NS_ASSUME_NONNULL_END
