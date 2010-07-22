//
//  PTPasscodeViewControllerDemoAppDelegate.h
//  PTPasscodeViewControllerDemo
//
//  Created by Lasha Dolidze on 7/7/10.
//  Copyright Picktek LLC 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PTPasscodeViewController.h"

@interface PTPasscodeViewControllerDemoAppDelegate : NSObject <UIApplicationDelegate,PTPasscodeViewControllerDelegate> {
    
    UIWindow *_window;
    UINavigationController *_navigationController;
    
    NSInteger _passCode;
    NSInteger _retryPassCode;
    
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) UINavigationController *navigationController;

@end

