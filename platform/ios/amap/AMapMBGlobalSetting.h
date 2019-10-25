//
//  AMapMBGlobalSetting.h
//  static
//
//  Created by shaobin on 2019/10/24.
//  Copyright © 2019 Mapbox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AMapMBGlobalSetting : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, strong) NSString *skuToken;

@end
