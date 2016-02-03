//
//  DetailViewController.h
//  com.joshuanovak.bloc-notes
//
//  Created by Joshua on 2/3/16.
//  Copyright © 2016 Joshua Novak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

