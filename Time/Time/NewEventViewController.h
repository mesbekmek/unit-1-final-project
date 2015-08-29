//
//  NewEventViewController.h
//  Time
//
//  Created by Elber Carneiro on 8/29/15.
//  Copyright (c) 2015 Mike Kavouras. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewEventViewControllerDelegate.h"

@interface NewEventViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic) id<NewEventViewControllerDelegate> delegate;
@end
