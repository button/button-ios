#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNBackground.h"

SpecBegin(BTNBackground_PublicAPI)

context(@"BTNBackground", ^{

    describe(@"color", ^{

        it(@"is expected type", ^{
            expect([BTNBackground classByPropertyName:NSStringFromSelector(@selector(color))])
            .to
            .beSubclassOf([NSString class]);
        });

    });

});

SpecEnd
