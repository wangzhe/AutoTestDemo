//
//  DetailViewController.h
//  AutoTestDemo
//
//  Created by JackWang on 12/12/14.
//  Copyright (c) 2014 jackhouse. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

