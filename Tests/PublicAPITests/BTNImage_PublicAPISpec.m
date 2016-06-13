#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNImage.h"

SpecBegin(BTNImage_PublicAPI)

context(@"BTNImage", ^{

    describe(@"URL", ^{

        it(@"is expected type", ^{
            expect([BTNImage classByPropertyName:NSStringFromSelector(@selector(URL))])
            .to
            .beSubclassOf([NSURL class]);
        });

    });

    describe(@"fillMode", ^{

        it(@"is expected type", ^{
            expect([BTNImage propertyIsInteger:NSStringFromSelector(@selector(fillMode))])
            .to
            .beTruthy();
        });

    });

    describe(@"altText", ^{

        it(@"is expected type", ^{
            expect([BTNImage classByPropertyName:NSStringFromSelector(@selector(altText))])
            .to
            .beSubclassOf([BTNText class]);
        });

    });

});

SpecEnd
