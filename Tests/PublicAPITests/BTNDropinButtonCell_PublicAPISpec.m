#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNDropinButtonCell.h"

SpecBegin(BTNDropinButtonCell_PublicAPI)

context(@"BTNDropinButtonCell", ^{

    __block id mockedCell;

    beforeAll(^{
        mockedCell = [BTNDropinButtonCell sharedMock];
    });

    afterAll(^{
        [mockedCell stopMocking];
    });

    describe(@"buttonId", ^{

        it(@"is expected type", ^{
            expect([BTNDropinButtonCell classByPropertyName:NSStringFromSelector(@selector(buttonId))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

    describe(@"dropinButton", ^{

        it(@"is expected type", ^{
            expect([BTNDropinButtonCell classByPropertyName:NSStringFromSelector(@selector(dropinButton))])
            .to
            .beSubclassOf([BTNDropinButton class]);
        });

    });

    describe(@"prepareWithContext:completion:", ^{

        it(@"is a valid selector", ^{
            expect([BTNDropinButtonCell instancesRespondToSelector:@selector(prepareWithContext:completion:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedCell prepareWithContext:[BTNContext new] completion:^(BOOL isDisplayable) {}];
        });

    });

});

SpecEnd
