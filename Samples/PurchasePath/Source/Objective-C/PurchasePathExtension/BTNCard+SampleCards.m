#import "BTNCard+SampleCards.h"
#import "NightOwlCard.h"
#import "UIColor+HexColors.h"

@interface BTNCard (SampleCards_Private)

+ (BTNCardCallToAction *)ctaForType:(BTNSampleCardType)type;

@end

@implementation BTNCard (SampleCards)

#pragma mark -

+ (instancetype)sampleCardForType:(BTNSampleCardType)type {
    BTNCardCallToAction *cta = [self ctaForType:type];
    BTNCard *card = nil;
    NSString *key, *title, *body = nil;
    NSInteger titleHex = 0, bodyHex = 0, backgroundHex = 0;
    switch (type) {
        case BTNSampleCardTypeTwoPercentCashBack: {
            key = @"product_card";
            title = @"2% Cash Back on this item";
            body = @"This category of items qualifies for 2% Cash Back when you shop now.";
        }
            break;
        case BTNSampleCardTypeWeekendWarriorBonus: {
            title = @"Weekend Warrior Bonus";
            body = @"Earn an extra $1.00 with the Weekend Warrior Bonus when you earn cash back in this category.";
            titleHex = 0x252525;
            bodyHex = 0x252525;
            backgroundHex = 0xf5f5f5;
        }
            break;
        case BTNSampleCardTypeExplainer: {
            title = @"How It Works";
            body = @"First, purchase your products in the Merchant app or website. We'll make sure that the right purchase was made. Your cash back will be deposited into your account in about 5-7 business days if you purchase today.";
            backgroundHex = 0x27938d;
        }
            break;
        case BTNSampleCardTypeNightOwlBonus: {
            card = [[NightOwlCard alloc] initWithCallToAction:cta];
        }
            break;
        case BTNSampleCardTypeProductViewed: {
            key = @"product_card";
            title = @"👀 Product Viewed";
            body = @"One of these cards is added for every product viewed 👍.";
        }
            break;
    }
    if (!card) {
        BTNTextCard *textCard = [[BTNTextCard alloc] initWithCallToAction:cta title:title body:body];
        textCard.key = key;
        if (titleHex > 0) {
            textCard.titleColor = [UIColor colorWithHex:titleHex];
        }
        if (bodyHex > 0) {
            textCard.bodyColor = [UIColor colorWithHex:bodyHex];
        }
        if (backgroundHex > 0) {
            textCard.backgroundColor = [UIColor colorWithHex:backgroundHex];
        }
        card = textCard;
    }
    return card;
}

+ (NSArray <__kindof BTNCard *> *)sampleCards {
    NSMutableArray *cards = [NSMutableArray array];
    for (BTNSampleCardType type = 0; type < BTNSampleCardTypeProductViewed; type++) {
        [cards addObject:[self sampleCardForType:type]];
    }
    return [NSArray arrayWithArray:cards];
}

#pragma mark - Private

+ (BTNCardCallToAction *)ctaForType:(BTNSampleCardType)type {
    NSString *iconName, *title = nil;
    NSInteger colorHex = 0;
    switch (type) {
        case BTNSampleCardTypeTwoPercentCashBack: {
            iconName = @"cashback";
            title = @"2% Cash Back";
            colorHex = 0x0cac56;
        }
            break;
        case BTNSampleCardTypeWeekendWarriorBonus: {
            iconName = @"cashback";
            title = @"Cash Back Guaranteed";
            colorHex = 0x0cac56;
        }
            break;
        case BTNSampleCardTypeExplainer: {
            iconName = @"cashback";
            title = @"Cash Back Guaranteed";
            colorHex = 0x0cac56;
        }
            break;
        case BTNSampleCardTypeNightOwlBonus: {
            iconName = @"hoot";
            title = @"Give a Hoot";
            colorHex = 0x0e637;
        }
            break;
        case BTNSampleCardTypeProductViewed: {
            iconName = @"cashback";
            title = @"Cash Back Guaranteed";
            colorHex = 0x0cac56;
        }
            break;
    }
    UIImage *icon = [[UIImage imageNamed:iconName] imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    return [[BTNCardCallToAction alloc] initWithIcon:icon title:title titleColor:[UIColor colorWithHex:colorHex]];
}

@end
