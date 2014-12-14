//
//  SDCityData.m
//  SDWeather
//
//  Created by shay deacy on 14/12/2014.
//  Copyright (c) 2014 shay deacy. All rights reserved.
//

#import "SDCityData.h"

@implementation SDCityData

-(NSString*)description{
    
    return [NSString stringWithFormat:@"City: %@\n Temperature: %@\n Wind: %@\n Humidity: %@",_cityName,_temperature,_windSpeedMPS,_humidityPerCent];
    
}

-(NSString*)temperatureCelsius{
    //todo - tidy
    float conversionKelvinToCelsius = 273.15;
    float temperatureCelsius = [_temperature floatValue]- conversionKelvinToCelsius;
    float rounded = ceilf(temperatureCelsius);
    NSNumber *tempCel = [NSNumber numberWithFloat:rounded];

    return tempCel.stringValue;
    
}

-(UIImage*)buildIconURL{
    
    NSString *baseURL = @"http://openweathermap.org/img/w/";
    NSURL *imageURL = [NSURL URLWithString:[NSString stringWithFormat:@"%@%@%@",baseURL,_icon,@".png"]];
    NSData *imageData = [NSData dataWithContentsOfURL:imageURL];

    return [UIImage imageWithData:imageData];
    
}


@end
