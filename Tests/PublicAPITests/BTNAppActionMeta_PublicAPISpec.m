#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNAppActionMeta.h"

SpecBegin(BTNAppActionMeta_PublicAPI)

context(@"BTNAppActionMeta", ^{

    __block id mockedActionMeta;

    beforeAll(^{
        mockedActionMeta = [BTNAppActionMeta sharedMock];
    });

    afterAll(^{
        [mockedActionMeta stopMocking];
    });

    describe(@"appActionId", ^{

        it(@"is expected type", ^{
            expect([BTNAppActionMeta classByPropertyName:NSStringFromSelector(@selector(appActionId))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

    describe(@"storeId", ^{

        it(@"is expected type", ^{
            expect([BTNAppActionMeta classByPropertyName:NSStringFromSelector(@selector(storeId))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

    describe(@"sourceToken", ^{

        it(@"is expected type", ^{
            expect([BTNAppActionMeta classByPropertyName:NSStringFromSelector(@selector(sourceToken))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

    describe(@"maxAgeSeconds", ^{

        it(@"is expected type", ^{
            expect([BTNAppActionMeta classByPropertyName:NSStringFromSelector(@selector(maxAgeSeconds))])
            .to
            .beSubclassOf([NSNumber class]);
        });

    });

    describe(@"deepLinkScheme", ^{

        it(@"is expected type", ^{
            expect([BTNAppActionMeta classByPropertyName:NSStringFromSelector(@selector(deepLinkScheme))])
            .to
            .beSubclassOf([NSURL class]);
        });

    });

    describe(@"isExpired", ^{

        it(@"is a valid selector", ^{
            expect([BTNAppActionMeta instancesRespondToSelector:@selector(isExpired)])
            .to
            .beTruthy();
        });

        it(@"returns the expected argument types", ^{
            BOOL expired = [mockedActionMeta isExpired];
            if (expired) {}
        });

    });

});

SpecEnd
