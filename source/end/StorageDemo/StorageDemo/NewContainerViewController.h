//
//  NewContainerViewController.h
//  StorageDemo
//
//  Created by Chris Risner on 3/18/13.
//  Copyright (c) 2013 Microsoft DPE. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewContainerViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *txtContainerName;
- (IBAction)tappedCreateContainer:(id)sender;
@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentPublic;


@end