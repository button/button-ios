#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNBaseEntity.h"

SpecBegin(BTNBaseEntity_PublicAPI)

context(@"BTNBaseEntity", ^{

    __block id mockedEntity;

    beforeAll(^{
        mockedEntity = [BTNBaseEntity sharedMock];
    });

    afterAll(^{
        [mockedEntity stopMocking];
    });

    describe(@"setName:", ^{

        it(@"is a valid selector", ^{
            expect([BTNBaseEntity instancesRespondToSelector:@selector(setName:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedEntity setName:@"name"];
        });

    });

    describe(@"setURL:", ^{

        it(@"is a valid selector", ^{
            expect([BTNBaseEntity instancesRespondToSelector:@selector(setURL:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedEntity setURL:[NSURL new]];
        });

    });

    describe(@"addIdentifier:forProvider:", ^{

        it(@"is a valid selector", ^{
            expect([BTNBaseEntity instancesRespondToSelector:@selector(addIdentifier:forProvider:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedEntity addIdentifier:@"id" forProvider:@"provider"];
        });

    });

    describe(@"addCustomValue:forContextKey:", ^{

        it(@"is a valid selector", ^{
            expect([BTNBaseEntity instancesRespondToSelector:@selector(addCustomValue:forContextKey:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedEntity addCustomValue:@"id" forContextKey:@"provider"];
        });

    });

    describe(@"has all provider ids in place", ^{
        expect(BTNIDProviderOpenTable).to.beKindOf([NSString class]);
        expect(BTNIDProviderTicketmaster).to.beKindOf([NSString class]);
        expect(BTNIDProviderDeliveryHero).to.beKindOf([NSString class]);
        expect(BTNIDProviderSelfProvided).to.beKindOf([NSString class]);
    });

});

SpecEnd
