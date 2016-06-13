#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNContext.h"

SpecBegin(BTNContext_PublicAPI)

context(@"BTNContext", ^{

    __block id mockedContext;

    beforeAll(^{
        mockedContext = [BTNContext sharedMock];
    });

    afterAll(^{
        [mockedContext stopMocking];
    });

    describe(@"context", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext respondsToSelector:@selector(context)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            expect([BTNContext context])
            .to
            .beKindOf([BTNContext class]);
        });

    });

    describe(@"contextWithUserLocation:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext respondsToSelector:@selector(contextWithUserLocation:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            expect([BTNContext contextWithUserLocation:[BTNLocation new]])
            .to
            .beKindOf([BTNContext class]);
        });

    });

    describe(@"contextWithSubjectLocation:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext respondsToSelector:@selector(contextWithSubjectLocation:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            expect([BTNContext contextWithSubjectLocation:[BTNLocation new]])
            .to
            .beKindOf([BTNContext class]);
        });

    });

    describe(@"contextWithArtist:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext respondsToSelector:@selector(contextWithArtist:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            expect([BTNContext contextWithArtist:[BTNMusicArtist new]])
            .to
            .beKindOf([BTNContext class]);
        });

    });

    describe(@"contextWithJourney:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext respondsToSelector:@selector(contextWithJourney:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            expect([BTNContext contextWithJourney:[BTNJourney new]])
            .to
            .beKindOf([BTNContext class]);
        });

    });

    describe(@"contextWithEvent:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext respondsToSelector:@selector(contextWithEvent:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            expect([BTNContext contextWithEvent:[BTNEvent new]])
            .to
            .beKindOf([BTNContext class]);
        });

    });

    describe(@"contextWithItems:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext respondsToSelector:@selector(contextWithItems:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            expect([BTNContext contextWithItems:@[ [BTNItem new] ]])
            .to
            .beKindOf([BTNContext class]);
        });

    });

    describe(@"contextWithURL:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext respondsToSelector:@selector(contextWithURL:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            expect([BTNContext contextWithURL:[NSURL new]])
            .to
            .beKindOf([BTNContext class]);
        });

    });

    describe(@"setUserLocation:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext instancesRespondToSelector:@selector(setUserLocation:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedContext setUserLocation:[BTNLocation new]];
        });

    });

    describe(@"setSubjectLocation:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext instancesRespondToSelector:@selector(setSubjectLocation:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedContext setSubjectLocation:[BTNLocation new]];
        });

    });

    describe(@"setDate:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext instancesRespondToSelector:@selector(setDate:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedContext setDate:[NSDate date]];
        });

    });

    describe(@"setDateRangeWithStartDate:endDate:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext instancesRespondToSelector:@selector(setDateRangeWithStartDate:endDate:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedContext setDateRangeWithStartDate:[NSDate date] endDate:[NSDate date]];
        });

    });

    describe(@"setArtist:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext instancesRespondToSelector:@selector(setArtist:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedContext setArtist:[BTNMusicArtist new]];
        });

    });

    describe(@"setJourney:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext instancesRespondToSelector:@selector(setJourney:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedContext setJourney:[BTNJourney new]];
        });

    });

    describe(@"setEvent:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext instancesRespondToSelector:@selector(setEvent:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedContext setEvent:[BTNEvent new]];
        });

    });

    describe(@"addItems:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext instancesRespondToSelector:@selector(addItems:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedContext addItems:@[ [BTNItem new] ]];
        });

    });

    describe(@"addItem:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext instancesRespondToSelector:@selector(addItem:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedContext addItem:[BTNItem new]];
        });

    });

    describe(@"setURL:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext instancesRespondToSelector:@selector(setURL:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedContext setURL:[NSURL new]];
        });

    });

    describe(@"addCustomValue:forContextKey:", ^{

        it(@"is a valid selector", ^{
            expect([BTNContext instancesRespondToSelector:@selector(addCustomValue:forContextKey:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedContext addCustomValue:[NSObject new] forContextKey:@"key"];
        });

    });

});

SpecEnd
