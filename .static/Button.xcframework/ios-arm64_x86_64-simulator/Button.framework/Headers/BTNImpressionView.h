@import UIKit;
#import "BTNImpressionViewDeprecationsProtocol.h"
#import "BTNOfferDetails.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ImpressionView)

@interface BTNImpressionView : UIView <BTNImpressionViewDeprecations>

/**
 An enum value representing the creative type of the offer associated with this impression view.
 
 @discussion Default is BTNCreativeTypeOther. The BTNImpressionView can either be initialized with a
 value or it can be set (as a string) in InterfaceBuilder.
 @see -initWithCreativeType:
 */
@property (nonatomic, readwrite, assign) BTNCreativeType creativeType;
@property (nullable, nonatomic, readwrite, copy) IBInspectable NSString *creativeTypeString;

/**
 The details of the displayed offer—tracked when this view meets the requirements of a Viewable Impression.
 */
@property (nullable, nonatomic, readonly, strong) BTNOfferDetails *offerDetails;


/**
 The initializer to be used when creating an impression view programmatically.
 
 @param creativeType The BTNCreativeType value of the underlying offer.
 */
- (instancetype)initWithCreativeType:(BTNCreativeType)creativeType;


/**
 Configure this ImpressionView with the offer details to be tracked when this view meets the requirements of a Viewable Impression.
 
 @param offerDetails The details of the displayed offer (an OfferDetails instance or an object conforming to OfferDetailsProtocol).
 */
- (void)configureWithDetails:(nullable id <BTNOfferDetails>)offerDetails;

@end

NS_ASSUME_NONNULL_END
