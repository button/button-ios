#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/Button.h"

SpecBegin(Button_PublicAPI)

context(@"Button", ^{

    __block id mockedButton;

    beforeAll(^{
        mockedButton = [Button sharedMock];
    });

    afterAll(^{
        [mockedButton stopMocking];
    });

    describe(@"session", ^{

        it(@"is a valid selector", ^{
            expect([Button classByPropertyName:NSStringFromSelector(@selector(session))])
            .to
            .beSubclassOf([BTNSession class]);
        });

    });

    describe(@"sharedButton", ^{

        it(@"returns a valid Button instance", ^{
            expect([Button sharedButton]).to.beKindOf([Button class]);
        });

    });

    describe(@"configureWithApplicationId:completion:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(configureWithApplicationId:completion:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedButton configureWithApplicationId:@"application-id" completion:^(NSError *error) {}];
        });

    });

    describe(@"configureWithApplicationId:userId:completion:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(configureWithApplicationId:userId:completion:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedButton configureWithApplicationId:@"application-id" userId:@"user-id"
                                          completion:^(NSError *error, NSURL *targetURL) { }];
        });

    });

    describe(@"setDeferredDeeplinkHandler:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(setDeferredDeeplinkHandler:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            #pragma clang diagnostic push
            #pragma clang diagnostic ignored "-Wdeprecated-declarations"
            [mockedButton setDeferredDeeplinkHandler:^(NSURL *deferredDeeplinkURL) {}];
            #pragma clang diagnostic pop
        });

    });

    describe(@"willDisplayButtonWithId:context:completion:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(willDisplayButtonWithId:context:completion:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedButton willDisplayButtonWithId:@"button-id"
                                          context:[BTNContext new]
                                       completion:^(BOOL willDisplay) {}];
        });

    });

    describe(@"fetchAppActionWithButtonId:context:completion:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(fetchAppActionWithButtonId:context:completion:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedButton fetchAppActionWithButtonId:@"button-id"
                                             context:[BTNContext new]
                                          completion:^(BTNAppAction *appAction, NSError *error) {}];
        });

    });

    describe(@"continueUserActivity:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(continueUserActivity:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedButton continueUserActivity:[[NSUserActivity alloc] initWithActivityType:@"BTNBrowsing"]];
        });

    });

    describe(@"handleURL:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(handleURL:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            BOOL result = [mockedButton handleURL:[NSURL new]];
            if (result) {}
        });

    });

    describe(@"referrerToken", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(referrerToken)])
            .to
            .beTruthy();
        });

        it(@"returns the expected argument types", ^{
            NSString *token = [mockedButton referrerToken];
            if (token) {}
        });

    });

    describe(@"setUserIdentifier:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(setUserIdentifier:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedButton setUserIdentifier:@"user-id"];
        });

    });

    describe(@"setThirdPartyId:", ^{

        it(@"is a valid selector", ^{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
            expect([Button instancesRespondToSelector:@selector(setThirdPartyId:)])
            .to
            .beTruthy();
#pragma clang diagnostic pop
        });

        it(@"takes the expected argument types", ^{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
            [mockedButton setThirdPartyId:@"third-party-id"];
#pragma clang diagnostic pop
        });

    });

    describe(@"reportOrderWithId:currencyCode:lineItems:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(reportOrderWithId:currencyCode:lineItems:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedButton reportOrderWithId:@"order-id"
                               currencyCode:@"currency-code"
                                  lineItems:[NSArray<BTNLineItem *> array]];
        });

    });

    describe(@"reportOrderWithValue:orderId:currencyCode:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(reportOrderWithValue:orderId:currencyCode:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedButton reportOrderWithValue:1
                                       orderId:@"order-id"
                                  currencyCode:@"currency-code"];
        });

    });

    describe(@"reportEventWithName:properties:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(reportEventWithName:properties:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            NSDictionary<NSString *, NSString *> *properties = [NSDictionary dictionary];
            [mockedButton reportEventWithName:@"" properties:properties];
        });

    });

    describe(@"setDebugLoggingEnabled:", ^{

        it(@"is a valid selector", ^{
            expect([Button instancesRespondToSelector:@selector(setDebugLoggingEnabled:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedButton setDebugLoggingEnabled:YES];
        });

    });

    describe(@"allowButtonToRequestLocationPermission:", ^{

        it(@"is a valid selector", ^{
            expect([Button respondsToSelector:@selector(allowButtonToRequestLocationPermission:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [Button allowButtonToRequestLocationPermission:YES];
        });

    });

});

SpecEnd
