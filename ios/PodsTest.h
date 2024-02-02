
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNPodsTestSpec.h"

@interface PodsTest : NSObject <NativePodsTestSpec>
#else
#import <React/RCTBridgeModule.h>

@interface PodsTest : NSObject <RCTBridgeModule>
#endif

@end
