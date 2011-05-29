//
//  MapViewAppDelegate.h
//  MapView
//
//  Created by Mykel on 5/7/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MapViewViewController;

@interface MapViewAppDelegate : NSObject <UIApplicationDelegate, CLLocationManagerDelegate> {
    
    CLLocationManager *locationManager;

}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MapViewViewController *viewController;
@property (nonatomic, retain) CLLocationManager *locationManager;

@end
