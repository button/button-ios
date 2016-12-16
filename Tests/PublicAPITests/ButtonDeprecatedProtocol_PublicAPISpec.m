#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/Button.h"

SpecBegin(ButtonDeprecatedProtocol_PublicAPI)

context(@"Button Deprecated Protocol", ^{

    __block id buttonDeprecatedMock;

    beforeAll(^{
        buttonDeprecatedMock = OCMProtocolMock(@protocol(ButtonDeprecated));
    });
    
    afterAll(^{
        [buttonDeprecatedMock stopMocking];
    });

    describe(@"reportOrderWithId:currencyCode:lineItems:", ^{
        
        it(@"is declared", ^{
            expect(buttonDeprecatedMock)
            .to
            .respondTo(@selector(reportOrderWithId:currencyCode:lineItems:));
        });
        
    });
    
    describe(@"reportOrderWithValue:orderId:currencyCode:", ^{
        
        it(@"is declared", ^{
            expect(buttonDeprecatedMock)
            .to
            .respondTo(@selector(reportOrderWithValue:orderId:currencyCode:));
        });
        
    });

});

SpecEnd
