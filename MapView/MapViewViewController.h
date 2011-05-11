//
//  MapViewViewController.h
//  MapView
//
//  Created by Mykel on 5/7/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MapViewViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    
    MKMapView *mapview;
    UILabel *latitude;
    UILabel *longitude;
    
    // Heading Stuff
    
    // Camera Stuff
    UIImagePickerController *picker;
    
}
@property (nonatomic, retain) IBOutlet MKMapView *mapview;
@property (nonatomic, retain) IBOutlet UILabel *latitude;
@property (nonatomic, retain) IBOutlet UILabel *longitude;
@property (nonatomic, retain) UIImagePickerController *picker;

-(IBAction)setMap:(id)sender;
-(IBAction)getlocation;
-(IBAction)showPicker;




@end
