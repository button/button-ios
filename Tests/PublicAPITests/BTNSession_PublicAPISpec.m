#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNSession.h"

SpecBegin(BTNSession_PublicAPI)

context(@"BTNSession", ^{

    __block id mockedSession;

    beforeAll(^{
        mockedSession = [BTNSession sharedMock];
    });

    afterAll(^{
        [mockedSession stopMocking];
    });

    describe(@"sessionId", ^{

        it(@"is expected type", ^{
            expect([BTNSession classByPropertyName:NSStringFromSelector(@selector(sessionId))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

    describe(@"customer", ^{

        it(@"is expected type", ^{
            expect([BTNSession classByPropertyName:NSStringFromSelector(@selector(customer))])
            .to
            .beSubclassOf([BTNModelObject class]);
        });

    });

    describe(@"sourceToken", ^{

        it(@"is expected type", ^{
            expect([BTNSession classByPropertyName:NSStringFromSelector(@selector(sourceToken))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

    describe(@"isEqualToSession:", ^{

        it(@"is a valid selector", ^{
            expect([BTNSession instancesRespondToSelector:@selector(isEqualToSession:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            BOOL result = [mockedSession isEqualToSession:[BTNSession new]];
            if(result) {}
        });

    });

});

SpecEnd
