//
//  ViewController.h
//  TakeASelfie
//
//  Created by Aimee Bragg on 6/3/15.
//  Copyright (c) 2015 Aimee Bragg. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FilterViewController : UIViewController

@property (nonatomic) UIImage * original;

@property (weak, nonatomic) IBOutlet UIImageView * imageView;
@property (weak, nonatomic) IBOutlet UIImageView *unfilteredImageView;

@end

