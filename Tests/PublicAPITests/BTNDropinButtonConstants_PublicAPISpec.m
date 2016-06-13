#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNDropinButtonConstants.h"

SpecBegin(BTNDropinButtonConstants_PublicAPI)

context(@"BTNDropinButtonConstants", ^{

    describe(@"BTNDropinContentAlignment are in place", ^{
        expect(BTNDropinContentAlignmentDefault).to.equal(0);
        expect(BTNDropinContentAlignmentCenter).to.equal(1);
    });

    describe(@"BTNDropinButtonTextCase are in place", ^{
        expect(BTNDropinButtonTextCaseDefault).to.equal(0);
        expect(BTNDropinButtonTextCaseLower).to.equal(1);
        expect(BTNDropinButtonTextCaseUpper).to.equal(2);
    });

});

SpecEnd
