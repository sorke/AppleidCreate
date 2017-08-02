//
//  MyTools.h
//  IFishingGold
//
//  Created by 趣米-ixingmi on 14-6-4.
//  Copyright (c) 2014年 changxin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MyTools : NSObject

//弹出警告框
+ (void)PopMsg:(NSString*)Msg withTitle:(NSString*)title viewController:(UIViewController *)aViewController;

//转换颜色色值
+ (UIColor *)colorWithHexString:(NSString *)stringToConvert;

//判断手机号是不是有效
+ (BOOL)checkTel:(NSString *)str;

//判断邮箱是不是有效
+ (BOOL)isValidEmail:(NSString *)email;

//判断QQ号码是否有效
+ (BOOL)isValidQQ:(NSString *)qqNum;

//判断输入的密码是否有效
+ (BOOL)isValidPassword:(NSString *)password;

//校验用户名
+ (BOOL) validateUserName : (NSString *) str;

//校验用户生日
+ (BOOL) validateUserBornDate : (NSString *) str;

//获取mac地址。io6以下的系统能够获取到
+ (NSString *) macaddress;

//获取IDFA。如果是iOS7以下的系统，就获取mac地址，如果是7以上的，就获取idfa。
+ (NSString *)getIDFA;

//获取当前的时间(毫秒)
+ (double)getCurrentTime;

//版本号比较
+ (int)getVersionNumber:(NSString *)version;

//当前应用的版本号
+ (NSString *)getAppCurrentVersion;

//获取推送的device_token
+ (NSString *)getDeviceToken:(NSString *)aToken;

//发送获取到的device_token
+ (NSString *)sendDeviceToken;

//color转Image
+ (UIImage *)createImageWithColor:(UIColor *)color;

//画图片
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;


//提示视图
+ (void)ToastNotification:(NSString *)text andView:(UIView *)view andLoading:(BOOL)isLoading andIsBottom:(BOOL)isBottom;

//是否包含某个字符串
+ (BOOL)isContainString:(NSString *)aStr ContainStr:(NSString *)containStr;
@end
