//
//  SDCityData.h
//  SDWeather
//
//  Created by shay deacy on 14/12/2014.
//  Copyright (c) 2014 shay deacy. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@interface SDCityData : NSObject

@property (nonatomic,strong) NSString *cityName;
@property (nonatomic,strong) NSNumber *temperature;
@property (nonatomic,strong) NSNumber *windSpeedMPS;
@property (nonatomic,strong) NSNumber *humidityPerCent;
@property (nonatomic,strong) NSString *conditionsDescription;
@property (nonatomic,strong) NSString *icon;



-(NSString*)temperatureCelsius;
-(UIImage*)buildIconURL;


@end
