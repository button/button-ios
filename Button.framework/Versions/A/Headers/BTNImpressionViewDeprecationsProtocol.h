#import "BTNImpressionView.h"
#import "BTNImpressionTrackingTypes.h"

NS_ASSUME_NONNULL_BEGIN

/*
 The APIs below have been deprecated. Please configure your ImpressionViews with an OfferDetails instance.
 
 E.g.
 
 impressionView.configureWith(details: OfferDetails(url: url, offerId: offerId, visibleRate: 3.0, rateType: .percent))
 
 */
@protocol BTNImpressionViewDeprecations <NSObject>

@property (nonatomic, readonly, copy) NSString *url DEPRECATED_MSG_ATTRIBUTE("See OfferDetails");

@property (nonatomic, readonly, assign) BTNVisibleRateType visibleRateType DEPRECATED_MSG_ATTRIBUTE("See OfferDetails");;

@property (nonatomic, readonly, assign) double visibleRate DEPRECATED_MSG_ATTRIBUTE("See OfferDetails");

@property (nullable, nonatomic, readonly, copy) NSString *offerId DEPRECATED_MSG_ATTRIBUTE("See OfferDetails");

- (void)trackWithURL:(NSString *)url visibleRateType:(BTNVisibleRateType)visibleRateType visibleRate:(double)visibleRate DEPRECATED_MSG_ATTRIBUTE("Please use configureWith(details:)");

- (void)trackWithURL:(NSString *)url visibleRateType:(BTNVisibleRateType)visibleRateType visibleRate:(double)visibleRate offerId:(nullable NSString *)offerId DEPRECATED_MSG_ATTRIBUTE("Please use configureWith(details:)");

@end

NS_ASSUME_NONNULL_END
