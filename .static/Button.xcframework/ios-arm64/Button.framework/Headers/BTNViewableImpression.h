@import Foundation;
#import "BTNImpressionTrackingTypes.h"

/*
 ## What is a viewable impression?

 A viewable impression is one that meets the following criteria:
 
   • Pixel Requirement: Greater than or equal to 50% of the pixels (Density-Independent) in the offer were on an in-focus browser or a fully downloaded, opened, initialized application, on the viewable space of the device, and
 
   • Time Requirement: The time the pixel requirement is met was greater than or equal to one continuous second, post offer render. The clock starts once the pixel requirement is met.

   • User Interaction: A strong user interaction with the offer can substitute the above requirements (i.e. a tap on the offer).

 Reference: Interactive Advertising Bureau (IAB)
 https://www.iab.com/wp-content/uploads/2015/06/MRC-Viewable-Ad-Impression-Measurement-Guideline.pdf
*/


NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(ViewableImpression)

@interface BTNViewableImpression : NSObject

/**
An enum value representing the creative type of the offer associated with this viewable impression.

@discussion Default is BTNCreativeTypeOther.
*/
@property (nonatomic, readonly, assign) BTNCreativeType creativeType;


/**
 The URL that is associated with the offer.
 */
@property (nonatomic, readonly, copy) NSString *url;


/**
 An enum value representing type of the visibleRate for the offer that is displayed to the user,
 either `percent` or `fixed`.
 */
@property (nonatomic, readonly, assign) BTNVisibleRateType visibleRateType;


/**
 The rate visible to the user. If the visibleRateType is `fixed`, this value represents the amount in the
 currency of the offer. If it is `percent`, this will be a value ranging from 0.0 to 100.0.
 */
@property (nonatomic, readonly, assign) double visibleRate;


/**
 The optional Button-provided value that identifies the rate of the served offer.
 */
@property (nonatomic, readonly, copy) NSString *offerId;


/*
Creates a Viewable Impression instance to be tracked.
 
@param url              The url of the served offer.
@param creativeType     An enum value representing the creative type of the offer.
@param visibleRateType  The visibleRateType of the served offer.
@param visibleRate      The visibleRate of the served offer.
@param offerId          The Button-provided value that identifies the rate of the served offer.
*/
- (instancetype)initWithURL:(NSString *)url
               creativeType:(BTNCreativeType)creativeType
            visibleRateType:(BTNVisibleRateType)visibleRateType
                visibleRate:(double)visibleRate
                    offerId:(NSString *)offerId;

@end

NS_ASSUME_NONNULL_END
