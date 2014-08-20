//
//  ViewController.h
//  MapRouteDemo
//
//  Created by Shikha Shukla on 08/07/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController
{
    NSMutableArray *arrayRoutePoints;
}
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (weak, nonatomic)  MKPolyline *objPolyline;


@end
