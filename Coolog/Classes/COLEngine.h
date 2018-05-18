//
//  COLEngine.h
//  Coolog
//
//  Created by Yao Li on 2018/5/15.
//

#import <Foundation/Foundation.h>
#import "COLLoggerDriver.h"
#import "COLLogFormatter.h"

@interface COLEngine : NSObject
- (void)addDriver:(COLLoggerDriver *)driver;

- (void)removeDriver:(COLLoggerDriver *)driver;

- (void)removeAllDrivers;

- (void)logWithType:(COLLogType)type tag:(NSString *)tag message:(NSString *)message date:(NSDate *)date thread:(NSThread *)thread;
@end