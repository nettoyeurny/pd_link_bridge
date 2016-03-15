#import "PdAudioUnit.h"

#include "ABLLink.h"

@interface PdLinkAudioUnit : PdAudioUnit

+ (void)initialize;
- (id)initWithLinkRef:(ABLLinkRef)linkRef;

@end
