#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNLocation.h"

SpecBegin(BTNLocation_PublicAPI)

context(@"BTNLocation", ^{

    __block id mockedLocation;

    beforeAll(^{
        mockedLocation = [BTNLocation sharedMock];
    });

    afterAll(^{
        [mockedLocation stopMocking];
    });

    describe(@"locationWithName:latitude:longitude:", ^{

        it(@"returns a valid location instance", ^{
            expect([BTNLocation locationWithName:@"location-name"
                                        latitude:40.723027
                                       longitude:-73.9956459])
            .to
            .beKindOf([BTNLocation class]);
        });

    });

    describe(@"locationWithLatitude:longitude:", ^{
        expect([BTNLocation locationWithLatitude:40.723027
                                       longitude:-73.9956459])
        .to
        .beKindOf([BTNLocation class]);
    });

    describe(@"setLatitude:", ^{

        it(@"is a valid selector", ^{
            expect([BTNLocation instancesRespondToSelector:@selector(setLatitude:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedLocation setLatitude:40.723027];
        });

    });

    describe(@"setLongitude:", ^{

        it(@"is a valid selector", ^{
            expect([BTNLocation instancesRespondToSelector:@selector(setLongitude:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedLocation setLongitude:-73.9956459];
        });

    });

    describe(@"setCity:", ^{

        it(@"is a valid selector", ^{
            expect([BTNLocation instancesRespondToSelector:@selector(setCity:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedLocation setCity:@"New York"];
        });

    });

    describe(@"setState:", ^{

        it(@"is a valid selector", ^{
            expect([BTNLocation instancesRespondToSelector:@selector(setState:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedLocation setState:@"New York"];
        });

    });

    describe(@"setZip:", ^{

        it(@"is a valid selector", ^{
            expect([BTNLocation instancesRespondToSelector:@selector(setZip:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedLocation setZip:@"10001"];
        });

    });

    describe(@"setCountry:", ^{

        it(@"is a valid selector", ^{
            expect([BTNLocation instancesRespondToSelector:@selector(setCountry:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedLocation setCountry:@"USA"];
        });

    });

    describe(@"setAddressLine:", ^{

        it(@"is a valid selector", ^{
            expect([BTNLocation instancesRespondToSelector:@selector(setAddressLine:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedLocation setAddressLine:@"123 Main St."];
        });

    });

});

SpecEnd
