//
//  PCDScanResultsManager.h
//  CardRecognition
//
//  Created by Igor Pesin on 10/17/14.
//  Copyright (c) 2014 Azoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PCDScanResultsManager : NSObject
/*
 Report if card data was recognized correctly or not.
 */
+ (void)reportStatusForScanId:(NSNumber *)scanId succesfull:(BOOL)succesfull completion:(void (^)(NSDictionary *responseData, NSError *error))completion;
@end
