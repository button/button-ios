#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNHeader.h"

SpecBegin(BTNHeader_PublicAPI)

context(@"BTNHeader", ^{

    describe(@"titleText", ^{

        it(@"is expected type", ^{
            expect([BTNHeader classByPropertyName:NSStringFromSelector(@selector(titleText))])
            .to
            .beSubclassOf([BTNText class]);
        });

    });

    describe(@"subtitleText", ^{

        it(@"is expected type", ^{
            expect([BTNHeader classByPropertyName:NSStringFromSelector(@selector(subtitleText))])
            .to
            .beSubclassOf([BTNText class]);
        });

    });

    describe(@"background", ^{

        it(@"is expected type", ^{
            expect([BTNHeader classByPropertyName:NSStringFromSelector(@selector(background))])
            .to
            .beSubclassOf([BTNBackground class]);
        });

    });

});

SpecEnd
