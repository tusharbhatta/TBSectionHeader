//
//  MyHeader.m
//  TBSectionHeader
//
//  Created by Tushar Bhattacharyya on 10/7/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "MyHeader.h"

@implementation MyHeader


- (void)didMoveToSuperview {
    
     NSLog(@"didMoveToSuperview  called, superview: %@",[self superview]);   

}


- (void)willMoveToWindow:(UIWindow *)newWindow {
    
    NSLog(@"willMoveToWindow:%@  called, superview: %@",newWindow,[self superview]);   
}


- (void)didMoveToWindow {

    NSLog(@"didMoveToWindow  called. superview: %@",[self superview]);   
    
}


@end
