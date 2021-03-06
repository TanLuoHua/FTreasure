//
//  TSCountLabel.h
//  WinTreasure
//
//  Created by Apple on 16/6/16.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, kCountDirection){
    kCountDirectionUp = 0,
    kCountDirectionDown
};

@protocol TSCountLabelDelegate;

@interface TSCountLabel : UILabel

@property (nonatomic, assign) NSInteger countDirection;

@property (nonatomic, strong) UIFont *boldFont;

@property (nonatomic, strong) UIFont *regularFont;

@property (nonatomic, assign) BOOL isRunning;

@property (nonatomic, assign) NSInteger startValue;

@property (nonatomic, assign) NSInteger currentValue;


@property (nonatomic, weak) id<TSCountLabelDelegate>delegate;

- (void)start;
- (void)stop;
- (void)reset;
- (void)updateApperance;

@end

@protocol TSCountLabelDelegate <NSObject>

@optional;
- (void)countdownDidEnd;
- (void)countdownDidStarted:(NSNumber *)value;


@end
