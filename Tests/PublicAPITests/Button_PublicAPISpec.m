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

        it(@"conforms to Button protocol", ^{
            expect([Button conformsToProtocol:@protocol(Button)]);
        });

    });

    describe(@"configureWithApplicationId:completion:", ^{

        it(@"takes the expected argument types", ^{
            [mockedButton configureWithApplicationId:@"application-id" completion:^(NSError *error) {}];
        });

    });

    describe(@"configureWithApplicationId:userId:completion:", ^{

        it(@"takes the expected argument types", ^{
            [mockedButton configureWithApplicationId:@"application-id" userId:@"user-id"
                                          completion:^(NSError *error, NSURL *targetURL) { }];
        });

    });

    describe(@"willDisplayButtonWithId:context:completion:", ^{

        it(@"takes the expected argument types", ^{
            [mockedButton willDisplayButtonWithId:@"button-id"
                                          context:[BTNContext new]
                                       completion:^(BOOL willDisplay) {}];
        });

    });

    describe(@"fetchAppActionWithButtonId:context:completion:", ^{

        it(@"takes the expected argument types", ^{
            [mockedButton fetchAppActionWithButtonId:@"button-id"
                                             context:[BTNContext new]
                                          completion:^(BTNAppAction *appAction, NSError *error) {}];
        });

    });

    describe(@"continueUserActivity:", ^{

        it(@"takes the expected argument types", ^{
            [mockedButton continueUserActivity:[[NSUserActivity alloc] initWithActivityType:@"BTNBrowsing"]];
        });

    });

    describe(@"handleURL:", ^{

        it(@"takes and returns the expected argument types", ^{
            BOOL result = [mockedButton handleURL:[NSURL new]];
            if (result) {}
        });

    });

    describe(@"referrerToken", ^{

        it(@"returns the expected argument types", ^{
            NSString *token = [mockedButton referrerToken];
            if (token) {}
        });

    });

    describe(@"setUserIdentifier:", ^{

        it(@"takes the expected argument types", ^{
            [mockedButton setUserIdentifier:@"user-id"];
        });

    });

    describe(@"reportOrderWithId:currencyCode:lineItems:", ^{

        #pragma clang diagnostic push
        #pragma clang diagnostic ignored "-Wdeprecated-declarations"
        it(@"takes the expected argument types", ^{
            [mockedButton reportOrderWithId:@"order-id"
                               currencyCode:@"currency-code"
                                  lineItems:[NSArray<BTNLineItem *> array]];
        });
        #pragma clang diagnostic pop
    });

    describe(@"reportOrderWithValue:orderId:currencyCode:", ^{

        #pragma clang diagnostic push
        #pragma clang diagnostic ignored "-Wdeprecated-declarations"
        it(@"takes the expected argument types", ^{
            [mockedButton reportOrderWithValue:1
                                       orderId:@"order-id"
                                  currencyCode:@"currency-code"];
        });
        #pragma clang diagnostic pop
    });

    describe(@"reportEventWithName:properties:", ^{

        it(@"takes the expected argument types", ^{
            NSDictionary<NSString *, NSString *> *properties = [NSDictionary dictionary];
            [mockedButton reportEventWithName:@"" properties:properties];
        });

    });

    describe(@"setDebugLoggingEnabled:", ^{

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
