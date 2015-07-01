// Laziest Coding Standard for C++ source file.
//
// Copyright (c) Huan Du (http://huandu.me/+). All rights reserved.
// Licensed under a Creative Commons Attribution 3.0 Unported License.

#import <Foundation/Foundation.h>

@protocol HelloWorldProtocol

- (void)sayGreetingWords:(NSString *)words withCount:(NSUInteger)count;

@end

@interface HelloWorld : NSObject<HelloWorldProtocol>

+ (instancetype)helloWorld;

@property(nonatomic, readonly) NSString *prefix;

@end
