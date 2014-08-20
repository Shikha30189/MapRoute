//
//  Annotation.m
//  MapRouteDemo
//
//  Created by Shikha Shukla on 08/07/14.
//  Copyright (c) 2014 Shikha Shukla. All rights reserved.
//

#import "Annotation.h"

@implementation Annotation
@synthesize coordinate;


- (id)initWithTitle:(NSString*)title subTitle :(NSString*)subTitle andCoordinate:(CLLocationCoordinate2D)inCoord
{
	coordinate = inCoord;
    _title1 = title;
    _subtitle1 = subTitle;
	return self;
}

- (void)setCoordinate:(CLLocationCoordinate2D)newCoordinate
{
    coordinate = newCoordinate;
}

@end
