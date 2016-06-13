#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNSerializable.h"

SpecBegin(BTNSerializable_PublicAPI)

context(@"BTNSerializable", ^{

    __block id serializableMock;

    beforeAll(^{
        serializableMock = OCMProtocolMock(@protocol(BTNSerializable));
    });

    afterAll(^{
        [serializableMock stopMocking];
    });

    describe(@"canInitWithDictionary:", ^{

        it(@"is declared", ^{
            expect(serializableMock).to.respondTo(@selector(canInitWithDictionary:));
        });

        it(@"takes and returns the expected argument types", ^{
            BOOL result = [serializableMock canInitWithDictionary:@{}];
            if (result) {}
        });

    });

    describe(@"initWithDictionary:", ^{

        it(@"is declared", ^{
            expect(serializableMock).to.respondTo(@selector(initWithDictionary:));
        });

        it(@"takes and returns the expected argument types", ^{
            NSDictionary *result = [serializableMock initWithDictionary:@{}];
            if (result) {}
        });

    });

    describe(@"updateWithRepresentation:", ^{

        it(@"is declared", ^{
            expect(serializableMock).to.respondTo(@selector(updateWithRepresentation:));
        });

        it(@"takes the expected argument types", ^{
            [serializableMock updateWithRepresentation:@{}];
        });

    });

    describe(@"dictionaryRepresentation", ^{

        it(@"is declared", ^{
            expect(serializableMock).to.respondTo(@selector(dictionaryRepresentation));
        });

        it(@"returns the expected argument types", ^{
            NSDictionary *result = [serializableMock dictionaryRepresentation];
            if (result) {}
        });

    });

});

SpecEnd
