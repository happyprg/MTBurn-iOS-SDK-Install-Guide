//
//  ADVSInterstitialAdLoader.h
//  AppDavis-iOS-SDK
//
//  Created by M.T.Burn on 2014/03/19.
//  Copyright (c) 2014年 M.T.Burn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ADVSInterstitialAdLoaderDelegate.h"

@interface ADVSInterstitialAdLoader : NSObject

@property (nonatomic, weak) id<ADVSInterstitialAdLoaderDelegate> delegate;

/**
 adSpotId is registered in advance and used for skip control
 */
@property (nonatomic) NSString *adSpotId;

/**
 Get an adLoader of sharedInstance.
 Prefer it to the way to create an instance manually for avoiding a crash.
 */
+ (instancetype)sharedInstance;

/**
 Loads a institial type advertisement request asynchronously.
 
 @see ADVSInterstitialAdLoaderDelegate.h
 */

- (void)loadRequest;

/**
 Display a institial type advertisement instantly.
 
 @see ADVSInterstitialAdLoaderDelegate.h
 */

- (void)displayAd;

@end
