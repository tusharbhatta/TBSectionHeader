//
//  RootViewController.h
//  TBSectionHeader
//
//  Created by Tushar on 9/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>

@interface RootViewController : UITableViewController <NSFetchedResultsControllerDelegate> {

}


@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

- (void)insertNewObject:(id)sender;
- (void)deleteSelectedObject;

-(void)refresh;

@end
