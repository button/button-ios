#import "Specta/Specta.h"
#import <Expecta/Expecta.h>
#import "OCMock.h"
#import "NSObject+BTNMock.h"
#import "NSObject+BTNClassProperties.h"
#import "Button/BTNMusicArtist.h"

SpecBegin(BTNMusicArtist_PublicAPI)

context(@"BTNMusicArtist", ^{

    __block id mockedArtist;

    beforeAll(^{
        mockedArtist = [BTNMusicArtist sharedMock];
    });

    afterAll(^{
        [mockedArtist stopMocking];
    });

    describe(@"artistWithName:", ^{

        it(@"is a valid selector", ^{
            expect([BTNMusicArtist respondsToSelector:@selector(artistWithName:)])
            .to
            .beTruthy();
        });

        it(@"takes and returns the expected argument types", ^{
            expect([BTNMusicArtist artistWithName:@"ArtistName"])
            .to
            .beKindOf([BTNMusicArtist class]);
        });

    });

    describe(@"setGenre:", ^{

        it(@"is a valid selector", ^{
            expect([BTNMusicArtist instancesRespondToSelector:@selector(setGenre:)])
            .to
            .beTruthy();
        });

        it(@"takes the expected argument types", ^{
            [mockedArtist setGenre:@"genre"];
        });

    });

});

SpecEnd
