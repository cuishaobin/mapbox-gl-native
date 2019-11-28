//
//  AMapMBGlobalSetting.h
//  static
//
//  Created by shaobin on 2019/10/24.
//  Copyright © 2019 Mapbox. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AMapMBGlobalSetting : NSObject

@property (nonatomic, strong, readonly) NSString *skuToken;
@property (nonatomic, copy) NSString*(^skutokenGenerator)(NSDictionary *params);

+ (instancetype)sharedInstance;

@end
