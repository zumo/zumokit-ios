//
//  FuzzingBackOffGenerator.h
//  ZumoKit
//
//  Created by Ivan Romanovski on 04/08/2020.
//

#ifndef FuzzingBackOffGenerator_h
#define FuzzingBackOffGenerator_h

@interface FuzzingBackOffGenerator : NSObject

/* Randomization factor. Must be between 0 and 1. */
@property(atomic, readwrite, strong) NSNumber *randomizationFactor;
/* The first time we back off. */
@property(nonatomic, assign) NSInteger initialBackOff;
/* The max back off value, it'll be fuzzed. */
@property(nonatomic, assign) NSInteger maxBackOff;
/* The next time we've backed off. */
@property(nonatomic, assign) NSInteger nextBackOffTime;
/* The current back off time. */
@property(nonatomic, assign) NSInteger backOffTime;

- (instancetype)init NS_UNAVAILABLE;

/**
 * @param initialBackOff Initial value to back off. This class does not interpret the meaning of
 *          this value. must be > 0
 * @param maxBackOff Max value to back off
 * @param randomizationFactor between 0 and 1 to control the range of randomness.
 */
- (instancetype)initWithInitialBackOff:(NSInteger)initialBackOff
                            maxBackOff:(NSInteger)maxBackOff
                   randomizationFactor:(NSNumber *)randomizationFactor;

/* Gets the next back off time. Until maxBackOff is reached. */
- (int)next;

/* Resets the back off. */
- (void)reset;

@end

#endif /* FuzzingBackOffGenerator_h */
