// Laziest Coding Standard for C++ source file.
//
// Copyright (c) Huan Du (http://huandu.me/+). All rights reserved.
// Licensed under a Creative Commons Attribution 3.0 Unported License.

#import "Object-C.h"

@implementation HelloWorld

#pragma mark - Class methods

+ (instancetype)helloWorld {
	return [[HelloWorld alloc] init];
}

#pragma mark - Lifecycle

- (instancetype)init {
	self = [super init];

	if (self) {
		_prefix = @"Hello";
	}

	return self;
}

#pragma mark - HelloWorldProtocol

- (void)sayGreetingWords:(NSString *)words withCount:(NSUInteger)count {
	for (NSUInteger i = 0; i < count; i++) {
		NSLog(@"%@: %@", _prefix, words);
	}
}

@end
