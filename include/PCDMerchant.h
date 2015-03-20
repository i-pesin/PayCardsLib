//
//  PCDMerchant.h
//  CardRecognition
//
//  Created by Igor Pesin on 10/16/14.
//  Copyright (c) 2014 Azoft. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 This class is used to represent info about a merchant that uses PayCards API.
 */

@interface PCDMerchant : NSObject

@property(nonatomic, strong) NSNumber *ID; // Merchant's ID (account number). Received at registration. Mandatory field.
@property(nonatomic, copy) NSString *password; // Merchant's password. Mandatory field.
@property(nonatomic, copy) NSString *clientId; //Client's ID in Merchan't system. Mandatory field.
@property(nonatomic, copy) NSString *email; //Client's email. Can be empty.
@property(nonatomic, copy) NSString *phone; //Client's phone. Can be empty.
@end
