#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNModelObject.h"

SpecBegin(BTNModelObject_PublicAPI)

context(@"BTNModelObject", ^{

    describe(@"canInitWithDictionary:", ^{

        it(@"is a valid selector", ^{
            expect([BTNModelObject respondsToSelector:@selector(canInitWithDictionary:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            BOOL result = [BTNModelObject canInitWithDictionary:@{}];
            if (result) {}
        });

    });

    describe(@"arrayOfObjectsFromRepresentations:", ^{

        it(@"is a valid selector", ^{
            expect([BTNModelObject respondsToSelector:@selector(arrayOfObjectsFromRepresentations:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            NSArray *result = [BTNModelObject arrayOfObjectsFromRepresentations:@[]];
            if (result) {}
        });

    });

    describe(@"arrayOfRepresentationsFromObjects:", ^{

        it(@"is a valid selector", ^{
            expect([BTNModelObject respondsToSelector:@selector(arrayOfRepresentationsFromObjects:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            NSArray *result = [BTNModelObject arrayOfRepresentationsFromObjects:@[]];
            if (result) {}
        });

    });

});

SpecEnd
