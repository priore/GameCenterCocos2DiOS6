//
//  GameNavigationController.m
//  The Frog
//
//  Created by Danilo Priore on 15/02/13.
//
//

#import "GameNavigationController.h"

@implementation GameNavigationController

- (BOOL)shouldAutorotate {
    
    return YES;
}

- (NSUInteger)supportedInterfaceOrientations {
    
    return UIInterfaceOrientationMaskLandscape;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation {
    
    return UIInterfaceOrientationIsLandscape(toInterfaceOrientation);
}

- (BOOL)isNavigationBarHidden {

    return YES;
}

@end
