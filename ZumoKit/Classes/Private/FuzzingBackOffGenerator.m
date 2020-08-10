//
//  FuzzingBackOffGenerator.m
//  ZumoKit
//
//  Created by Ivan Romanovski on 04/08/2020.
//

#import <Foundation/Foundation.h>
#import "FuzzingBackOffGenerator.h"
#import <limits.h>
#include <stdlib.h>

@implementation FuzzingBackOffGenerator

- (instancetype)initWithInitialBackOff:(NSInteger)initialBackOff
                            maxBackOff:(NSInteger)maxBackOff
                   randomizationFactor:(NSNumber *)randomizationFactor {
    self = [super init];

    if(self) {
        if (randomizationFactor.doubleValue < 0 || randomizationFactor.doubleValue > 1) {
            @throw [NSException
            exceptionWithName:@"IllegalArgumentException"
            reason:[NSString stringWithFormat:@"%@ %@", @"randomizationFactor must be between 0 and 1. actual", randomizationFactor.stringValue]
            userInfo:nil];
        }

        if (initialBackOff <= 0) {
            @throw [NSException
            exceptionWithName:@"IllegalArgumentException"
            reason:@"initialBackOff must be between 0 and 1. actual "
            userInfo:nil];
        }

        _randomizationFactor = randomizationFactor;
        _initialBackOff = initialBackOff;
        _maxBackOff = maxBackOff;
        _nextBackOffTime = initialBackOff;
        _backOffTime = 0;
    }

    return self;
};

/* Gets the next back off time. Until maxBackOff is reached. */
- (int)next {
    int ret = (int) MIN(_nextBackOffTime, _maxBackOff);
    _nextBackOffTime += _backOffTime;
    if (_nextBackOffTime <= 0) {
        _nextBackOffTime = INT_MAX;
    }
    _backOffTime = ret;

    float random = (float) (arc4random() % ((unsigned)RAND_MAX + 1)) / RAND_MAX;
    int randomizeTime = (int) (_backOffTime * (1.0 + (random * _randomizationFactor.floatValue)));
    return randomizeTime;
};

/* Resets the back off. */
- (void)reset {
    _nextBackOffTime = _initialBackOff;
    _backOffTime = 0;
};

@end
