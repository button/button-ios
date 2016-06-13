#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNJourney.h"

SpecBegin(BTNJourney_PublicAPI)

context(@"BTNJourney", ^{

    __block id mockedJourney;

    beforeAll(^{
        mockedJourney = [BTNJourney sharedMock];
    });

    afterAll(^{
        [mockedJourney stopMocking];
    });

    describe(@"setStartLocation:", ^{

        it(@"is a valid selector", ^{
            expect([BTNJourney instancesRespondToSelector:@selector(setStartLocation:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedJourney setStartLocation:[BTNLocation new]];
        });

    });

    describe(@"setDestinationLocation:", ^{

        it(@"is a valid selector", ^{
            expect([BTNJourney instancesRespondToSelector:@selector(setDestinationLocation:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedJourney setDestinationLocation:[BTNLocation new]];
        });

    });

    describe(@"setStartTime:", ^{

        it(@"is a valid selector", ^{
            expect([BTNJourney instancesRespondToSelector:@selector(setStartTime:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedJourney setStartTime:[NSDate date]];
        });

    });

    describe(@"setEndTime:", ^{

        it(@"is a valid selector", ^{
            expect([BTNJourney instancesRespondToSelector:@selector(setEndTime:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedJourney setEndTime:[NSDate date]];
        });

    });

    describe(@"setTransportType:", ^{

        it(@"is a valid selector", ^{
            expect([BTNJourney instancesRespondToSelector:@selector(setTransportType:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedJourney setTransportType:BTNTransportTypeSpaceship];
        });

    });

    describe(@"All transport types are in place", ^{
        expect(BTNTransportTypeUnknown).to.equal(0);
        expect(BTNTransportTypeFlight).to.equal(1);
        expect(BTNTransportTypeTrain).to.equal(2);
        expect(BTNTransportTypeBus).to.equal(3);
        expect(BTNTransportTypeCar).to.equal(4);
        expect(BTNTransportTypeWalking).to.equal(5);
        expect(BTNTransportTypeSubway).to.equal(6);
        expect(BTNTransportTypeBoat).to.equal(7);
        expect(BTNTransportTypeSpaceship).to.equal(8);
    });

});

SpecEnd
