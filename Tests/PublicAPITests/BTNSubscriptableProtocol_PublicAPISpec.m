#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNSubscriptableProtocol.h"

SpecBegin(BTNSubscriptableProtocol_PublicAPI)

context(@"BTNSubscriptable", ^{

    __block id subscriptableMock;

    beforeAll(^{
        subscriptableMock = OCMProtocolMock(@protocol(BTNSubscriptable));
    });

    afterAll(^{
        [subscriptableMock stopMocking];
    });

    describe(@"setObject:forKeyedSubscript:", ^{

        it(@"is declared", ^{
            expect(subscriptableMock).to.respondTo(@selector(setObject:forKeyedSubscript:));
        });

        it(@"takes the expected argument types", ^{
            [subscriptableMock setObject:[NSObject new] forKeyedSubscript:@"key"];
            subscriptableMock[@"key"] = [NSObject new];
        });

    });

    describe(@"objectForKeyedSubscript:", ^{

        it(@"is declared", ^{
            expect(subscriptableMock).to.respondTo(@selector(objectForKeyedSubscript:));
        });

        it(@"takes the expected argument types", ^{
            id anyObject = [subscriptableMock objectForKeyedSubscript:@"key"];
            anyObject = subscriptableMock[@"key"];
        });

    });

});

SpecEnd
