//
//  AppDelegate.h
//  Cocos2DiOS6GameCenter
//
//  Created by Danilo Priore on 16/02/13.
//  Copyright __MyCompanyName__ 2013. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "cocos2d.h"
#import "GameNavigationController.h"

@interface AppController : NSObject <UIApplicationDelegate, CCDirectorDelegate>
{
	UIWindow *window_;
	GameNavigationController *navController_;

	CCDirectorIOS	*director_;							// weak ref
}

@property (nonatomic, retain) UIWindow *window;
@property (readonly) GameNavigationController *navController;
@property (readonly) CCDirectorIOS *director;

@end
