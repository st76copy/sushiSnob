//
//  TabMapViewController.h
//  SushiSnob
//
//  Created by Andrew McCallum14 on 2013-06-06.
//  Copyright (c) 2013 Andrew McCallum. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface TabMapViewController : UIViewController<MKMapViewDelegate>

@property (strong, nonatomic) IBOutlet MKMapView *venueMapView;
- (IBAction)showLocation:(id)sender;

@end
