//
//  SYNParallaxScrollObserver.h
//  SYNParallaxObserverExample
//
//  Created by Sam Corder on 2/26/14.
//  Copyright (c) 2014 Synapptic Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SYNScrollObserver.h"

@protocol SYNParallaxScrollObserverDelegate;

@interface SYNParallaxScrollObserver : SYNScrollObserver

@property (nonatomic) CGFloat parallaxRatio;
@property (weak, nonatomic) NSObject<SYNParallaxScrollObserverDelegate> *delegate;

-(instancetype)initWithObservedScrollView:(UIScrollView *) observedScrollView parallaxedScrollView:(UIScrollView *) parallaxedScrollView;

@end

@protocol SYNParallaxScrollObserverDelegate <NSObject>

- (void) parallaxObserver:(SYNParallaxScrollObserver *) observer changedParallaxedOffset:(CGPoint) offset;

@end