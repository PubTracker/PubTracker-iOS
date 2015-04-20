//
//  DetailViewController.h
//  Pub_Tracker
//
//  Created by gubrian on 4/20/15.
//  Copyright (c) 2015 pubtracker. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

