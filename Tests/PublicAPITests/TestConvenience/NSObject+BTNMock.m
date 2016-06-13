#import "NSObject+BTNMock.h"
#import "OCMock.h"

static NSMutableDictionary *_classMocksByClassName;

@implementation NSObject (BTNMock)

+ (id)sharedMock {
    if (!_classMocksByClassName) {
        _classMocksByClassName = [NSMutableDictionary dictionary];
    }

    NSString *className = NSStringFromClass(self);

    id classMock = _classMocksByClassName[className];
    if (!classMock) {
        classMock = OCMClassMock(self);
        _classMocksByClassName[className] = classMock;
    }

    return classMock;
}


+ (void)stopMocking {
    NSString *className = NSStringFromClass(self);
    id classMock = _classMocksByClassName[className];
    [classMock stopMocking];
    [_classMocksByClassName removeObjectForKey:className];
}

@end
