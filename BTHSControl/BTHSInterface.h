//
//  BTHSInterface.h
//  BTHSControl
//
//  Created by James Fator on 8/21/14.
//  Copyright (c) 2014 JamesFator. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IOKit/hidsystem/IOHIDLib.h>
#import <IOKit/hidsystem/ev_keymap.h>

@interface BTHSInterface : NSObject

+ (void)play;
+ (void)forward;
+ (void)back;

@end
