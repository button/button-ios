@import Foundation;

/*
 Represents the creative type of the offer associated with a viewable impression.
 */
typedef NS_ENUM(NSInteger, BTNCreativeType) {
    BTNCreativeTypeOther,    // "other"
    BTNCreativeTypeHero,     // "hero"
    BTNCreativeTypeCarousel, // "carousel"
    BTNCreativeTypeList,     // "list"
    BTNCreativeTypeGrid,     // "grid"
    BTNCreativeTypeDetail    // "detail"
};


/*
 Represents rate visible to the user on the offer associated with a viewable impression.
 */
typedef NS_ENUM(NSInteger, BTNVisibleRateType) {
    BTNVisibleRateTypeUnknown,
    BTNVisibleRateTypePercent,
    BTNVisibleRateTypeFixed
};

