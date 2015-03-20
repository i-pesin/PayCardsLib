//
//  PCDConfigurationManager.h
//  CardRecognition
//
//  Created by Igor Pesin on 12/4/14.
//  Copyright (c) 2014 Azoft. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSInteger, PCDRequiredCardFields) {
    PCDRequiredCardFieldHolderName = 1 << 0,
    PCDRequiredCardFieldExpireDate = 1 << 1,
    PCDRequiredCardFieldCardName = 1 << 2,
    PCDRequiredCardFieldAll = PCDRequiredCardFieldHolderName | PCDRequiredCardFieldExpireDate | PCDRequiredCardFieldCardName
    
};

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
