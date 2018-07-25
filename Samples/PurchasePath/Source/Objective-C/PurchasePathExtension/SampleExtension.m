#import "SampleExtension.h"
#import "NightOwlCard.h"
#import "UIColor+HexColors.h"
#import "BTNCard+SampleCards.h"

@implementation SampleExtension


- (void)browserDidInitialize:(id<BTNBrowserInterface>)browser {
    browser.header.title.color = [UIColor colorWithHex:0x016FC4];
    browser.header.subtitle.color = [UIColor colorWithHex:0x67A9DC];
    browser.header.backgroundColor = UIColor.whiteColor;
    browser.header.tintColor = [UIColor colorWithHex:0x67A9DC];
    browser.footer.backgroundColor = UIColor.whiteColor;
    browser.footer.tintColor = [UIColor colorWithHex:0x016FC4];

    [browser.cardList setCards:[BTNCard sampleCards]];
}


- (void)browserWillNavigate:(id<BTNBrowserInterface>)browser {
    [browser hideTopCard];
}


- (void)browser:(id<BTNBrowserInterface>)browser didNavigateToPage:(id<BTNBrowserPage>)page {
    browser.header.subtitle.text = page.url.host ?: @"Button";
}


- (void)browser:(id<BTNBrowserInterface>)browser didNavigateToProduct:(id<BTNProductPage>)page {
    switch (page.commission.commissionType) {
        case BTNCommissionTypeCommissionable: {
            [browser.cardList addCard:[BTNCard sampleCardForType:BTNSampleCardTypeProductViewed]];
            [browser showTopCard];
        }
            break;
        default:
            break;
    }
}


- (void)browser:(id<BTNBrowserInterface>)browser didNavigateToPurchase:(id<BTNPurchasePage>)page {
    browser.header.title.text = @"Thank You!";
    browser.header.subtitle.text = @"Your reward will be available in 24 hours.";
}


@end
