#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNListItem.h"

SpecBegin(BTNListItem_PublicAPI)

context(@"BTNListItem", ^{

    describe(@"titleText", ^{

        it(@"is expected type", ^{
            expect([BTNListItem classByPropertyName:NSStringFromSelector(@selector(titleText))])
            .to
            .beSubclassOf([BTNText class]);
        });

    });

    describe(@"subtitleText", ^{

        it(@"is expected type", ^{
            expect([BTNListItem classByPropertyName:NSStringFromSelector(@selector(subtitleText))])
            .to
            .beSubclassOf([BTNText class]);
        });

    });

    describe(@"iconText", ^{

        it(@"is expected type", ^{
            expect([BTNListItem classByPropertyName:NSStringFromSelector(@selector(iconText))])
            .to
            .beSubclassOf([BTNText class]);
        });

    });

    describe(@"iconImage", ^{

        it(@"is expected type", ^{
            expect([BTNListItem classByPropertyName:NSStringFromSelector(@selector(iconImage))])
            .to
            .beSubclassOf([BTNImage class]);
        });

    });

});

SpecEnd
