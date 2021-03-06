//
//  TopupModel.h
//  WinTreasure
//
//  Created by Apple on 16/6/17.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TopupRecordModel : NSObject

/**支付方式
 */
@property (nonatomic, copy) NSString *topupWay;

/**支付时间
 */
@property (nonatomic, copy) NSString *topupTime;

/**支付金额
 */
@property (nonatomic, copy) NSString *topupAmount;

/**是否支付
 */
@property (nonatomic, assign) BOOL isTopup;

@end
