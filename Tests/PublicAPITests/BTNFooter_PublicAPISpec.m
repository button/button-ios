#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNFooter.h"

SpecBegin(BTNFooter_PublicAPI)

context(@"BTNFooter", ^{

    describe(@"labelText", ^{

        it(@"is expected type", ^{
            expect([BTNFooter classByPropertyName:NSStringFromSelector(@selector(labelText))])
            .to
            .beSubclassOf([BTNText class]);
        });

    });

    describe(@"iconImage", ^{

        it(@"is expected type", ^{
            expect([BTNFooter classByPropertyName:NSStringFromSelector(@selector(iconImage))])
            .to
            .beSubclassOf([BTNImage class]);
        });

    });

    describe(@"background", ^{

        it(@"is expected type", ^{
            expect([BTNFooter classByPropertyName:NSStringFromSelector(@selector(background))])
            .to
            .beSubclassOf([BTNBackground class]);
        });

    });

});

SpecEnd
