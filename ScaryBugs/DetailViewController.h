//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Su Sheng Loong on 12/20/12.
//  Copyright (c) 2012 Su Sheng Loong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
