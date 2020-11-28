#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "JSONUtils.h"
#import "NSError+Helper.h"
#import "NSString+Localize.h"
#import "Potatso.h"
#import "Settings.h"

FOUNDATION_EXPORT double PotatsoBaseVersionNumber;
FOUNDATION_EXPORT const unsigned char PotatsoBaseVersionString[];

