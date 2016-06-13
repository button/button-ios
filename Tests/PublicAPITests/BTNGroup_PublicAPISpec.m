#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNGroup.h"

SpecBegin(BTNGroup_PublicAPI)

context(@"BTNGroup", ^{

    describe(@"titleText", ^{

        it(@"is expected type", ^{
            expect([BTNGroup classByPropertyName:NSStringFromSelector(@selector(titleText))])
            .to
            .beSubclassOf([BTNText class]);
        });

    });

    describe(@"items", ^{

        it(@"is expected type", ^{
            expect([BTNGroup classByPropertyName:NSStringFromSelector(@selector(items))])
            .to
            .beSubclassOf([NSArray<BTNListItem *> class]);
        });

    });

});

SpecEnd
