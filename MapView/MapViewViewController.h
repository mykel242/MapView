//
//  MapViewViewController.h
//  MapView
//
//  Created by Mykel on 5/7/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MapViewViewController : UIViewController {
    
    MKMapView *mapview;
    
    
}
@property (nonatomic, retain) IBOutlet MKMapView *mapview;
-(IBAction)setMap:(id)sender;
-(IBAction)getlocation;




@end
