#import <Button/Button.h>

typedef NS_ENUM(NSInteger, BTNSampleCardType) {
    BTNSampleCardTypeTwoPercentCashBack,
    BTNSampleCardTypeWeekendWarriorBonus,
    BTNSampleCardTypeExplainer,
    BTNSampleCardTypeNightOwlBonus,
    BTNSampleCardTypeProductViewed
};

@interface BTNCard (SampleCards)

+ (instancetype)sampleCardForType:(BTNSampleCardType)type;

+ (NSArray <__kindof BTNCard *> *)sampleCards;

@end
