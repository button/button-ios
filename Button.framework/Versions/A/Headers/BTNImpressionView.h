@import UIKit;

typedef NS_ENUM(NSInteger, BTNCreativeType) {
    BTNCreativeTypeOther,    // "other"
    BTNCreativeTypeHero,     // "hero"
    BTNCreativeTypeCarousel, // "carousel"
    BTNCreativeTypeList,     // "list"
    BTNCreativeTypeGrid,     // "grid"
    BTNCreativeTypeDetail    // "detail"
};


typedef NS_ENUM(NSInteger, BTNVisibleRateType) {
    BTNVisibleRateTypeUnknown,
    BTNVisibleRateTypePercent,
    BTNVisibleRateTypeFixed
};

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ImpressionView)
@interface BTNImpressionView : UIView


/**
 An enum value representing the creative type of the offer associated with this impression view.
 
 @discussion Default is BTNCreativeTypeOther. The BTNImpressionView can either be initialized with a
 value or it can be set (as a string) in InterfaceBuilder.
 @see -initWithCreativeType:
 */
@property (nonatomic, readwrite, assign) BTNCreativeType creativeType;
@property (nullable, nonatomic, readwrite, copy) IBInspectable NSString *creativeTypeString;


/**
 The URL that is associated with the offer.
 
 @discussion This value must be set, and can only be updated simultaneously with the visibleRateType
 and visibleRate properties.
 @see -trackWithURL:visibleRateType:visibleRate:
 @see -trackWithURL:visibleRateType:visibleRate:offerId:
 */
@property (nonatomic, readonly, copy) NSString *url;


/**
 An enum value representing type of the visibleRate for the offer that is displayed to the user,
 either `percent` or `fixed`.
 
 @discussion Default value `unknown`, but that should be updated one of the two concrete enum values. This can
 only be updated simultaneously with the url and visibleRate properties.
 @see -trackWithURL:visibleRateType:visibleRate:
 @see -trackWithURL:visibleRateType:visibleRate:offerId:
 */
@property (nonatomic, readonly, assign) BTNVisibleRateType visibleRateType;


/**
 The rate visible to the user. If the visibleRateType is `fixed`, this value represents the amount in the
 currency of the offer. If it is `percent`, this will be a value ranging from 0.0 to 100.0.
 
 @discussion Default value is 0.0. This can only be updated simultaneously with the url and
 visibleRateType properties.
 @see -trackWithURL:visibleRateType:visibleRate:
 @see -trackWithURL:visibleRateType:visibleRate:offerId:
 */
@property (nonatomic, readonly, assign) double visibleRate;


/**
 The optional Button-provided value that identifies the rate of the served offer.
 
 @discussion This value is not required, and it can only be updated simultaneously with the url,
 visibleRateType, and visibleRate properties.
 @see -trackWithURL:visibleRateType:visibleRate:offerId:
 */
@property (nullable, nonatomic, readonly, copy) NSString *offerId;


/**
 The initializer to be used when creating an impression view programmatically.
 
 @param creativeType The BTNCreativeType value of the underlying offer.
 */
- (instancetype)initWithCreativeType:(BTNCreativeType)creativeType;


/**
 Track the impression view with a new parameters. To be used when the underlying offer has
 changed, such as a cell being dequeued for reuse in a collection or table view.
 
 @code
 // If the offer displayed to the user is valued at 3%, the following should be passed.
 [impressionView trackWithURL:url visibleRateType:BTNVisibleRateTypePercent visibleRate:3.0];
 
 // If the offer displayed to the user is valued at $5.00, the following should be passed.
 [impressionView trackWithURL:url visibleRateType:BTNVisibleRateTypeFixed visibleRate:5.0];
 @endcode
 
 @param url             The new URL of the served offer.
 @param visibleRateType The new visibleRateType of the served offer.
 @param visibleRate     The new visibleRate of the served offer.
 */
- (void)trackWithURL:(NSString *)url visibleRateType:(BTNVisibleRateType)visibleRateType visibleRate:(double)visibleRate;


/**
 Track the impression view with a new parameters. To be used the underlying offer has
 changed, such as a cell being dequeued for reuse in a collection or table view.
 
 @param url             The new URL of the served offer.
 @param visibleRateType The new visibleRateType of the served offer.
 @param visibleRate     The new visibleRate of the served offer.
 @param offerId         The (optional) new offerId of the served offer.
 */
- (void)trackWithURL:(NSString *)url visibleRateType:(BTNVisibleRateType)visibleRateType visibleRate:(double)visibleRate offerId:(nullable NSString *)offerId;


@end

NS_ASSUME_NONNULL_END
