#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNAppAction.h"

SpecBegin(BTNAppAction_PublicAPI)

context(@"BTNAppAction", ^{

    __block id mockedAction;

    beforeAll(^{
        mockedAction = [BTNAppAction sharedMock];
    });

    afterAll(^{
        [mockedAction stopMocking];
    });

    describe(@"meta", ^{

        it(@"is expected type", ^{
            expect([BTNAppAction classByPropertyName:NSStringFromSelector(@selector(meta))])
            .to
            .beSubclassOf([BTNAppActionMeta class]);
        });

    });

    describe(@"preview", ^{

        it(@"is expected type", ^{
            expect([BTNAppAction classByPropertyName:NSStringFromSelector(@selector(preview))])
            .to
            .beSubclassOf([BTNPreview class]);
        });

    });

    describe(@"header", ^{

        it(@"is expected type", ^{
            expect([BTNAppAction classByPropertyName:NSStringFromSelector(@selector(header))])
            .to
            .beSubclassOf([BTNHeader class]);
        });

    });

    describe(@"groups", ^{

        it(@"is expected type", ^{
            expect([BTNAppAction classByPropertyName:NSStringFromSelector(@selector(groups))])
            .to
            .beSubclassOf([NSArray class]);
        });

    });

    describe(@"product", ^{

        it(@"is expected type", ^{
            expect([BTNAppAction classByPropertyName:NSStringFromSelector(@selector(product))])
            .to
            .beSubclassOf([BTNProduct class]);
        });

    });

    describe(@"footer", ^{

        it(@"is expected type", ^{
            expect([BTNAppAction classByPropertyName:NSStringFromSelector(@selector(footer))])
            .to
            .beSubclassOf([BTNFooter class]);
        });

    });

    describe(@"invokePreviewAction", ^{

        it(@"is a valid selector", ^{
            expect([BTNAppAction instancesRespondToSelector:@selector(invokePreviewAction)])
            .to
            .beTruthy();
        });

    });

    describe(@"invokeActionForListItem:", ^{

        it(@"is a valid selector", ^{
            expect([BTNAppAction instancesRespondToSelector:@selector(invokeActionForListItem:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedAction invokeActionForListItem:[BTNListItem new]];
        });

    });

    describe(@"invokeFooterAction", ^{

        it(@"is a valid selector", ^{
            expect([BTNAppAction instancesRespondToSelector:@selector(invokeFooterAction)])
            .to
            .beTruthy();
        });

    });

});

SpecEnd
