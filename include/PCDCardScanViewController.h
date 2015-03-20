//
//  PCDCardScanViewController.h
//  CardRecognition
//
//  Created by Igor Pesin on 2/10/15.
//  Copyright (c) 2015 Azoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PCDCardScanViewController, PCDMerchant;

@protocol PCDCardScanViewControllerDelegete <NSObject>
@optional
/*
 fires when card recognition finishes successfully
 
 Card Info example:
 {
 cardParams =     {
 cardName = My Card;
 expireDate = "2015-09-01T00:00:00";
 holderName = John Doe;
 number = 5402341040016512;
 };
 scanId = 113;
 }
 
 scanId parameter is used to report if recognized data is correct or not.
 */
- (void)cardScanViewController:(PCDCardScanViewController *)cardScanViewController didFinishScanWithInfo:(NSDictionary *)cardInfo;

/*
 fires when error occurs
 */
- (void)cardScanViewController:(PCDCardScanViewController *)cardScanViewController didCloseWithError:(NSError *)error;


/*
 fires when user interrupts recognition tapping Back button
 */
-(void)userDidCloseCardScanViewController:(PCDCardScanViewController *)cardScanViewController;
@end


@interface PCDCardScanViewController : UIViewController

@property (nonatomic, weak) id<PCDCardScanViewControllerDelegete> pcdDelegate;
@property (nonatomic, strong) PCDMerchant *merchant;


@end
