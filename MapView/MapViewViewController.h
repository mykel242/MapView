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
    UILabel *latitude;
    UILabel *longitude;
    
    // Heading Stuff

    
}

@property (nonatomic, retain) IBOutlet MKMapView *mapview;
@property (nonatomic, retain) IBOutlet UILabel *latitude;
@property (nonatomic, retain) IBOutlet UILabel *longitude;

-(IBAction)setMap:(id)sender;
-(IBAction)getlocation;




@end
