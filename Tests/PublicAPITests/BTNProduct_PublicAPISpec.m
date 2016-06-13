#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNProduct.h"

SpecBegin(BTNProduct_PublicAPI)

context(@"BTNProduct", ^{

    describe(@"background", ^{

        it(@"is expected type", ^{
            expect([BTNProduct classByPropertyName:NSStringFromSelector(@selector(background))])
            .to
            .beSubclassOf([BTNBackground class]);
        });

    });

    describe(@"images", ^{

        it(@"is expected type", ^{
            expect([BTNProduct classByPropertyName:NSStringFromSelector(@selector(images))])
            .to
            .beSubclassOf([NSArray<BTNImage *> class]);
        });

    });

    describe(@"titleText", ^{

        it(@"is expected type", ^{
            expect([BTNProduct classByPropertyName:NSStringFromSelector(@selector(titleText))])
            .to
            .beSubclassOf([BTNText class]);
        });

    });

    describe(@"subtitleText", ^{

        it(@"is expected type", ^{
            expect([BTNProduct classByPropertyName:NSStringFromSelector(@selector(subtitleText))])
            .to
            .beSubclassOf([BTNText class]);
        });

    });

    describe(@"descriptionText", ^{

        it(@"is expected type", ^{
            expect([BTNProduct classByPropertyName:NSStringFromSelector(@selector(descriptionText))])
            .to
            .beSubclassOf([BTNText class]);
        });

    });

});

SpecEnd
