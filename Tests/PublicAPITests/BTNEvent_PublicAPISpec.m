#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNEvent.h"

SpecBegin(BTNEvent_PublicAPI)

context(@"BTNEvent", ^{

    __block id mockedEvent;

    beforeAll(^{
        mockedEvent = [BTNEvent sharedMock];
    });

    afterAll(^{
        [mockedEvent stopMocking];
    });

    describe(@"eventWithStartTime:endTime:location:", ^{

        it(@"returns a valid item instance", ^{
            expect([BTNEvent eventWithStartTime:[NSDate date]
                                        endTime:[NSDate date]
                                       location:[BTNLocation new]])
            .to
            .beKindOf([BTNEvent class]);
        });

    });

    describe(@"setLocation:", ^{

        it(@"is a valid selector", ^{
            expect([BTNEvent instancesRespondToSelector:@selector(setLocation:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedEvent setLocation:[BTNLocation new]];
        });

    });

    describe(@"setStartTime:", ^{

        it(@"is a valid selector", ^{
            expect([BTNEvent instancesRespondToSelector:@selector(setStartTime:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedEvent setStartTime:[NSDate date]];
        });

    });

    describe(@"setEndTime:", ^{

        it(@"is a valid selector", ^{
            expect([BTNEvent instancesRespondToSelector:@selector(setEndTime:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedEvent setEndTime:[NSDate date]];
        });

    });

});

SpecEnd
