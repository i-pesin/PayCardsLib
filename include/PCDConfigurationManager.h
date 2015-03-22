//
//  PCDConfigurationManager.h
//  CardRecognition
//
//  Created by Igor Pesin on 12/4/14.
//  Copyright (c) 2014 Azoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PCDConfigurationSettings.h"

typedef NS_ENUM(NSInteger, PCDLocalization) {
    PCDLocalizationEN,
    PCDLocalizationRU
};

@interface PCDConfigurationManager : NSObject

@property (nonatomic) PCDLocalization localization;
@property (nonatomic, getter=isSoundEnabled) BOOL soundEnabled;
@property (nonatomic, assign) BOOL collectCVV;
@property (nonatomic) PCDRequiredCardFields requeriedCardFields;
@property (nonatomic, assign) BOOL saveCard;
@property (nonatomic, assign) BOOL storeCVV;

+ (instancetype)sharedInstance;
@end
