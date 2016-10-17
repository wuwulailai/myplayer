//
//  YXLogConfig.h
//
//  http://www.cnblogs.com/YouXianMing/
//
//  Copyright (c) 2014年 Y.X. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ON   1
#define OFF  0

#ifndef DISTRIBUTION
    // 各种模式的打印开关
    #define LOG_INFO       ON
    #define LOG_TRACE      ON
    #define LOG_DEBUG      ON
    #define LOG_WARNING    ON
    #define LOG_ERROR      ON

    // 是否显示时间戳
    #define TIME_STAMP     ON

    // 是否开启系统
    #define LOG_NSLOG      ON

    #define LOG_AUTOM      ON

#else

    #define LOG_INFO       OFF
    #define LOG_TRACE      OFF
    #define LOG_DEBUG      OFF
    #define LOG_WARNING    OFF
    #define LOG_ERROR      OFF

    // 是否显示时间戳
    #define TIME_STAMP     OFF

    // 是否开启系统
    #define LOG_NSLOG      OFF

    #define LOG_AUTOM      OFF
#endif