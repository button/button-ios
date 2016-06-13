#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNItem.h"

SpecBegin(BTNItem_PublicAPI)

context(@"BTNItem", ^{

    __block id mockedItem;

    beforeAll(^{
        mockedItem = [BTNItem sharedMock];
    });

    afterAll(^{
        [mockedItem stopMocking];
    });

    describe(@"itemWithName:SKU:", ^{

        it(@"returns a valid item instance", ^{
            expect([BTNItem itemWithName:@"item-name" SKU:@"sku"])
            .to
            .beKindOf([BTNItem class]);
        });

    });

    describe(@"itemWithName:UPC:", ^{

        it(@"returns a valid item instance", ^{
            expect([BTNItem itemWithName:@"item-name" UPC:@"upc"])
            .to
            .beKindOf([BTNItem class]);
        });

    });

    describe(@"setSKU:", ^{

        it(@"is a valid selector", ^{
            expect([BTNItem instancesRespondToSelector:@selector(setSKU:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedItem setSKU:@"sku"];
        });

    });

    describe(@"setUPC:", ^{

        it(@"is a valid selector", ^{
            expect([BTNItem instancesRespondToSelector:@selector(setUPC:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedItem setUPC:@"upc"];
        });

    });

});

SpecEnd
