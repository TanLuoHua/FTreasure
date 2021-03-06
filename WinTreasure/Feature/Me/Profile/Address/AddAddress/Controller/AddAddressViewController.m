//
//  AddAddressViewController.m
//  WinTreasure
//
//  Created by Apple on 16/6/22.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import "AddAddressViewController.h"
#import "AddressModel.h"
#import "RecieverInformation.h"

@interface AddAddressViewController ()

@end

@implementation AddAddressViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.title = _model ? @"修改地址" : @"添加地址";
    [self setRightItemTitle:@"保存" titleColor:[UIColor blueColor] action:@selector(save)];

}

- (void)save {
    if (_saveBlock) {
        _saveBlock();
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
