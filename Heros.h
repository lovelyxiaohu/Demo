//
//  Heros.h
//  11-单组表格
//
//  Created by mc on 16/2/2.
//  Copyright © 2016年 xmj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Heros : NSObject
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *intro;

- (instancetype)initWithDict:(NSDictionary *)dict;
+ (instancetype)HerosWithDict:(NSDictionary *)dict;

+ (NSArray *)heros;
@end
