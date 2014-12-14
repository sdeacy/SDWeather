//
//  ViewController.h
//  SDWeather
//
//  Created by shay deacy on 13/12/2014.
//  Copyright (c) 2014 shay deacy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel        *cityLabel;
@property (weak, nonatomic) IBOutlet UIImageView    *iconImageView;
@property (weak, nonatomic) IBOutlet UILabel        *temperatureLabel;
@property (weak, nonatomic) IBOutlet UILabel        *windLabel;
@property (weak, nonatomic) IBOutlet UILabel        *humidityLabel;

- (IBAction)detailsButton:(id)sender;
@end

