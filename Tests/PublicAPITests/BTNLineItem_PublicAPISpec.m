#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNLineItem.h"

SpecBegin(BTNLineItem_PublicAPI)

context(@"BTNLineItem", ^{

    __block id mockedItem;

    beforeAll(^{
        mockedItem = [BTNLineItem sharedMock];
    });

    afterAll(^{
        [mockedItem stopMocking];
    });

    describe(@"identifier", ^{

        it(@"is expected type", ^{
            expect([BTNLineItem classByPropertyName:NSStringFromSelector(@selector(identifier))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

    describe(@"amount", ^{

        it(@"is expected type", ^{
            expect([BTNLineItem propertyIsInteger:NSStringFromSelector(@selector(amount))])
            .to
            .beTruthy();
        });

    });

    describe(@"quantity", ^{

        it(@"is expected type", ^{
            expect([BTNLineItem propertyIsInteger:NSStringFromSelector(@selector(quantity))])
            .to
            .beTruthy();
        });

    });

    describe(@"itemDescription", ^{

        it(@"is expected type", ^{
            expect([BTNLineItem classByPropertyName:NSStringFromSelector(@selector(itemDescription))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

    describe(@"lineItemWithId:amount:", ^{

        it(@"returns a valid line item instance", ^{
            expect([BTNLineItem lineItemWithId:@"line-item-id"
                                        amount:3])
            .to
            .beKindOf([BTNLineItem class]);
        });

    });

    describe(@"lineItemWithId:amount:quantity:", ^{

        it(@"returns a valid line item instance", ^{
            expect([BTNLineItem lineItemWithId:@"line-item-id"
                                        amount:199
                                      quantity:2])
            .to
            .beKindOf([BTNLineItem class]);
        });

    });

    describe(@"lineItemWithId:amount:quantity:description:", ^{

        it(@"returns a valid line item instance", ^{
            expect([BTNLineItem lineItemWithId:@"line-item-id"
                                        amount:199
                                      quantity:2
                                   description:@"description"])
            .to
            .beKindOf([BTNLineItem class]);
        });

    });

    describe(@"addAttribute:forKey:", ^{

        it(@"is a valid selector", ^{
            expect([BTNLineItem instancesRespondToSelector:@selector(addAttribute:forKey:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedItem addAttribute:@"attribute" forKey:@"key"];
        });

    });

    describe(@"attributes", ^{

        it(@"is a valid selector", ^{
            expect([BTNLineItem instancesRespondToSelector:@selector(attributes)])
            .to
            .beTruthy();
        });

        it(@"returns the expected argument types", ^{
            NSDictionary *result = [(BTNLineItem *)mockedItem attributes];
            if (result) {}
        });

    });

});

SpecEnd
