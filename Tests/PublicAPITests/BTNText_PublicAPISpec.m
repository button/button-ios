#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNText.h"

SpecBegin(BTNText_PublicAPI)

context(@"BTNText", ^{

    describe(@"text", ^{

        it(@"is expected type", ^{
            expect([BTNText classByPropertyName:NSStringFromSelector(@selector(text))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

    describe(@"color", ^{

        it(@"is expected type", ^{
            expect([BTNText classByPropertyName:NSStringFromSelector(@selector(color))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

});

SpecEnd
