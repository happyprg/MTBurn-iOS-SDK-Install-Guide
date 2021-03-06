//
//  ADVSInstreamSample1Cell.h
//  AppDavis-iOS-SDK
//
//  Created by M.T.Burn on 2014/04/17.
//  Copyright (c) 2014年 M.T.Burn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ADVSInstreamAdCellProtocol.h"

@class ADVSInstreamInfoModel;

/**
 @see `ADVSInstreamAdCellProtocol`
 */

@interface ADVSInstreamAdCellThumbnailMiddle : UITableViewCell<ADVSInstreamAdCellProtocol>
+ (CGFloat)ADVSheightForCell;
- (void)ADVSupdateCell:(ADVSInstreamInfoModel*)infoModel completion:(void (^)(NSError *error)) completion;
@end
