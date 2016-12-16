#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/Button.h"

SpecBegin(ButtonProtocol_PublicAPI)

context(@"Button Protocol", ^{

    __block id buttonProtocolMock;

    beforeAll(^{
        buttonProtocolMock = OCMProtocolMock(@protocol(Button));
    });

    afterAll(^{
        [buttonProtocolMock stopMocking];
    });

    describe(@"configureWithApplicationId:completion:", ^{

        it(@"is declared", ^{
            expect(buttonProtocolMock)
            .to
            .respondTo(@selector(configureWithApplicationId:completion:));
        });

    });

    describe(@"configureWithApplicationId:userId:completion:", ^{

        it(@"is declared", ^{
            expect(buttonProtocolMock)
            .to
            .respondTo(@selector(configureWithApplicationId:userId:completion:));
        });

    });

    describe(@"willDisplayButtonWithId:context:completion:", ^{

        it(@"is declared", ^{
            expect(buttonProtocolMock)
            .to
            .respondTo(@selector(willDisplayButtonWithId:context:completion:));
        });

    });

    describe(@"fetchAppActionWithButtonId:context:completion:", ^{
        
        it(@"is declared", ^{
            expect(buttonProtocolMock)
            .to
            .respondTo(@selector(fetchAppActionWithButtonId:context:completion:));
        });
        
    });

    describe(@"continueUserActivity:", ^{
        
        it(@"is declared", ^{
            expect(buttonProtocolMock)
            .to
            .respondTo(@selector(continueUserActivity:));
        });
        
    });
    
    describe(@"handleURL:", ^{
        
        it(@"is declared", ^{
            expect(buttonProtocolMock)
            .to
            .respondTo(@selector(handleURL:));
        });
        
    });
    
    describe(@"referrerToken", ^{
        
        it(@"is declared", ^{
            expect(buttonProtocolMock)
            .to
            .respondTo(@selector(referrerToken));
        });
        
    });
    
    describe(@"setUserIdentifier:", ^{
        
        it(@"is declared", ^{
            expect(buttonProtocolMock)
            .to
            .respondTo(@selector(setUserIdentifier:));
        });
        
    });
    
    describe(@"reportEventWithName:properties:", ^{
        
        it(@"is declared", ^{
            expect(buttonProtocolMock)
            .to
            .respondTo(@selector(reportEventWithName:properties:));
        });
        
    });
    
    describe(@"setDebugLoggingEnabled:", ^{
        
        it(@"is declared", ^{
            expect(buttonProtocolMock)
            .to
            .respondTo(@selector(setDebugLoggingEnabled:));
        });
        
    });

});

SpecEnd
