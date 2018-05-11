//
//  BlinkEngineDev.h
//  Blink
//
//  Created by LiuLinhong on 2016/12/14.
//  Copyright © 2016年 Bridge Mind. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BlinkEngineDev;

@protocol BlinkEngineDevDelegate <NSObject>

- (void)blinkEngineDev:(BlinkEngineDev *)engine onTransportBitrate:(NSDictionary *)bitrateDic;
- (void)blinkEngineDev:(BlinkEngineDev *)engine onMediaServer:(NSArray *)array;
- (void)blinkEngineDev:(BlinkEngineDev *)engine onAudioVideoTransfer:(NSArray *)memberArray transfer:(NSArray *)localArray;

@end

@interface BlinkEngineDev : NSObject

@property (nonatomic, weak) id<BlinkEngineDevDelegate> devDelegate;

+ (BlinkEngineDev *)sharedBlinkEngine;

- (void)testReportWithCompletion:(void(^)(NSString *result))finishBlock;

+ (void)snifferTestData:(NSString *)dataStr;

- (void)blinkLogger:(NSString *)log;

@end
