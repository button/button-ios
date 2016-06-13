#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNView.h"

SpecBegin(BTNView_PublicAPI)

context(@"BTNView", ^{

    __block id mockedView;

    beforeAll(^{
        mockedView = [BTNView sharedMock];
    });

    afterAll(^{
        [mockedView stopMocking];
    });

    describe(@"forceOpacity", ^{

        it(@"is a valid selector", ^{
            expect([BTNView instancesRespondToSelector:@selector(shouldForceOpacity)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            BTNView *view = [BTNView new];
            view.forceOpacity = YES;
            BOOL result = view.shouldForceOpacity;
            if (result) {}
        });

    });

    describe(@"initializeView", ^{

        it(@"is a valid selector", ^{
            expect([BTNView instancesRespondToSelector:@selector(initializeView)])
            .to
            .beTruthy();
        });

    });

    describe(@"shouldUpdateConstraints", ^{

        it(@"is a valid selector", ^{
            expect([BTNView instancesRespondToSelector:@selector(shouldUpdateConstraints)])
            .to
            .beTruthy();
        });

        it(@"returns the expected argument types", ^{
            BOOL result = [mockedView shouldUpdateConstraints];
            if (result) {}
        });

    });

    describe(@"isVisible", ^{

        it(@"is a valid selector", ^{
            expect([BTNView instancesRespondToSelector:@selector(isVisible)])
            .to
            .beTruthy();
        });

        it(@"returns the expected argument types", ^{
            BOOL result = [mockedView isVisible];
            if (result) {}
        });

    });

    describe(@"willAppear", ^{

        it(@"is a valid selector", ^{
            expect([BTNView instancesRespondToSelector:@selector(willAppear)])
            .to
            .beTruthy();
        });

    });

    describe(@"didAppear", ^{

        it(@"is a valid selector", ^{
            expect([BTNView instancesRespondToSelector:@selector(didAppear)])
            .to
            .beTruthy();
        });

    });

    describe(@"willDisappear", ^{

        it(@"is a valid selector", ^{
            expect([BTNView instancesRespondToSelector:@selector(willDisappear)])
            .to
            .beTruthy();
        });

    });

    describe(@"didDisappear", ^{

        it(@"is a valid selector", ^{
            expect([BTNView instancesRespondToSelector:@selector(didDisappear)])
            .to
            .beTruthy();
        });

    });

});

SpecEnd
