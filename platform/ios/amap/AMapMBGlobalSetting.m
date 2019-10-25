//
//  AMapMBGlobalSetting.m
//  static
//
//  Created by shaobin on 2019/10/24.
//  Copyright © 2019 Mapbox. All rights reserved.
//

#import "AMapMBGlobalSetting.h"

@implementation AMapMBGlobalSetting

+(instancetype)sharedInstance {
    static AMapMBGlobalSetting *s_this = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        s_this = [[self alloc] init];
    });
    
    return s_this;
}

@end
