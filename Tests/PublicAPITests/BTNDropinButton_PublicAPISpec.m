#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNDropinButton.h"

SpecBegin(BTNDropinButton_PublicAPI)

context(@"BTNDropinButton", ^{

    __block id mockedButton;

    beforeAll(^{
        mockedButton = [BTNDropinButton sharedMock];
    });

    afterAll(^{
        [mockedButton stopMocking];
    });

    describe(@"buttonId", ^{

        it(@"is expected type", ^{
            expect([BTNDropinButton classByPropertyName:NSStringFromSelector(@selector(buttonId))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

    describe(@"prepareWithContext:completion:", ^{

        it(@"is a valid selector", ^{
            expect([BTNDropinButton instancesRespondToSelector:@selector(prepareWithContext:completion:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedButton prepareWithContext:[BTNContext new]
                                  completion:^(BOOL isDisplayable) {}];
        });

    });

    describe(@"initWithButtonId:", ^{

        it(@"is a valid selector", ^{
            expect([BTNDropinButton instancesRespondToSelector:@selector(initWithButtonId:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            expect([[BTNDropinButton alloc] initWithButtonId:@"button-id"])
            .to
            .beKindOf([BTNDropinButton class]);
        });

    });

});

SpecEnd
