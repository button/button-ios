#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNPreview.h"

SpecBegin(BTNPreview_PublicAPI)

context(@"BTNPreview", ^{

    describe(@"labelText", ^{

        it(@"is expected type", ^{
            expect([BTNPreview classByPropertyName:NSStringFromSelector(@selector(labelText))])
            .to
            .beASubclassOf([BTNText class]);
        });

    });

    describe(@"background", ^{

        it(@"is expected type", ^{
            expect([BTNPreview classByPropertyName:NSStringFromSelector(@selector(background))])
            .to
            .beASubclassOf([BTNBackground class]);
        });

    });

    describe(@"iconImage", ^{

        it(@"is expected type", ^{
            expect([BTNPreview classByPropertyName:NSStringFromSelector(@selector(iconImage))])
            .to
            .beSubclassOf([BTNImage class]);
        });

    });

});

SpecEnd
