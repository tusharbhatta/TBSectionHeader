//
//  DetailViewController.h
//  TBSectionHeader
//
//  Created by Tushar on 9/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@class RootViewController;

@interface DetailViewController : UIViewController <UIPopoverControllerDelegate, UISplitViewControllerDelegate> {

}


@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;

@property (nonatomic, retain) NSManagedObject *detailItem;

@property (nonatomic, retain) IBOutlet UILabel *detailDescriptionLabel;

@property (nonatomic, assign) IBOutlet RootViewController *rootViewController;

- (IBAction)deleteSelected:(id)sender;

- (IBAction)insertNewObject:(id)sender;

@end
