//
//  Annotation.h
//  MapRouteDemo
//
//  Created by Shikha Shukla on 08/07/14.
//  Copyright (c) 2014 Shikha Shukla. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface Annotation : NSObject <MKAnnotation>
{
	CLLocationCoordinate2D coordinate;
}
@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic) NSString *title1;
@property (nonatomic) NSString *subtitle1;




- (id)initWithTitle:(NSString*)title subTitle :(NSString*)subTitle andCoordinate:(CLLocationCoordinate2D)inCoord;


@end
