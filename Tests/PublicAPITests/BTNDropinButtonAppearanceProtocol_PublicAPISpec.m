#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNDropinButtonAppearanceProtocol.h"

SpecBegin(BTNDropinButtonAppearanceProtocol_PublicAPI)

context(@"BTNDropinButtonAppearance", ^{

    __block id appearanceMock;

    beforeAll(^{
        appearanceMock = OCMProtocolMock(@protocol(BTNDropinButtonAppearance));
    });

    afterAll(^{
        [appearanceMock stopMocking];
    });

    describe(@"contentInsets", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(contentInsets));
        });

        it(@"takes and returns the expected argument types", ^{
            UIEdgeInsets insets = [appearanceMock contentInsets];
            [appearanceMock setContentInsets:insets];
        });

    });

    describe(@"contentAlignment", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(contentAlignment));
        });

        it(@"takes and returns the expected argument types", ^{
            BTNDropinContentAlignment alignment = [appearanceMock contentAlignment];
            [appearanceMock setContentAlignment:alignment];
        });

    });

    describe(@"cornerRadius", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(cornerRadius));
        });

        it(@"takes and returns the expected argument types", ^{
            CGFloat radius = [appearanceMock cornerRadius];
            [appearanceMock setCornerRadius:radius];
        });

    });

    describe(@"borderWidth", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(borderWidth));
        });

        it(@"takes and returns the expected argument types", ^{
            CGFloat width = [appearanceMock borderWidth];
            [appearanceMock setBorderWidth:width];
        });

    });

    describe(@"borderColor", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(borderColor));
        });

        it(@"takes and returns the expected argument types", ^{
            id<BTNDropinButtonAppearance> appearance = appearanceMock;
            UIColor *color = [appearance borderColor];
            [appearance setBorderColor:color];
        });

    });

    describe(@"iconSize", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(iconSize));
        });

        it(@"takes and returns the expected argument types", ^{
            CGFloat iconSize = [appearanceMock iconSize];
            [appearanceMock setIconSize:iconSize];
        });

    });

    describe(@"iconLabelSpacing", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(iconLabelSpacing));
        });

        it(@"takes and returns the expected argument types", ^{
            CGFloat spacing = [appearanceMock iconLabelSpacing];
            [appearanceMock setIconLabelSpacing:spacing];
        });

    });

    describe(@"font", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(font));
        });

        it(@"takes and returns the expected argument types", ^{
            UIFont *font = [appearanceMock font];
            [appearanceMock setFont:font];
        });

    });

    describe(@"textCase", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(textCase));
        });

        it(@"takes and returns the expected argument types", ^{
            BTNDropinButtonTextCase textCase = [appearanceMock textCase];
            [appearanceMock setTextCase:textCase];
        });

    });

    describe(@"tintColor", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(tintColor));
        });

        it(@"takes and returns the expected argument types", ^{
            UIColor *tintColor = [appearanceMock tintColor];
            [appearanceMock setTintColor:tintColor];
        });

    });

    describe(@"highlightedTintColor", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(highlightedTintColor));
        });

        it(@"takes and returns the expected argument types", ^{
            UIColor *color = [appearanceMock highlightedTintColor];
            [appearanceMock setHighlightedTintColor:color];
        });

    });

    describe(@"textColor", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(textColor));
        });

        it(@"takes and returns the expected argument types", ^{
            UIColor *textColor = [appearanceMock textColor];
            [appearanceMock setTextColor:textColor];
        });

    });

    describe(@"highlightedTextColor", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(highlightedTextColor));
        });

        it(@"takes and returns the expected argument types", ^{
            UIColor *color = [appearanceMock highlightedTextColor];
            [appearanceMock setHighlightedTextColor:color];
        });

    });

    describe(@"iconColor", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(iconColor));
        });

        it(@"takes and returns the expected argument types", ^{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
            UIColor *iconColor = [appearanceMock iconColor];
            [appearanceMock setIconColor:iconColor];
#pragma clang diagnostic pop
        });

    });

    describe(@"highlightedIconColor", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(highlightedIconColor));
        });

        it(@"takes and returns the expected argument types", ^{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
            UIColor *color = [appearanceMock highlightedIconColor];
            [appearanceMock setHighlightedIconColor:color];
#pragma clang diagnostic pop
        });

    });

    describe(@"normalBackgroundColor", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(normalBackgroundColor));
        });

        it(@"takes and returns the expected argument types", ^{
            UIColor *color = [appearanceMock normalBackgroundColor];
            [appearanceMock setNormalBackgroundColor:color];
        });

    });

    describe(@"highlightedBackgroundColor", ^{

        it(@"is declared", ^{
            expect(appearanceMock).to.respondTo(@selector(highlightedBackgroundColor));
        });

        it(@"takes and returns the expected argument types", ^{
            UIColor *color = [appearanceMock highlightedBackgroundColor];
            [appearanceMock setHighlightedBackgroundColor:color];
        });

    });

});

SpecEnd
