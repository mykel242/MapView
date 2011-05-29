//
//  MapViewViewController.m
//  MapView
//
//  Created by Mykel on 5/7/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "MapViewViewController.h"

@implementation MapViewViewController
@synthesize mapview;
@synthesize latitude;
@synthesize longitude;

-(IBAction)getlocation {
    mapview.showsUserLocation = YES;
    
    if (mapview.userLocation != NULL) {
        [mapview setCenterCoordinate:mapview.userLocation.location.coordinate animated:YES];
    }
    
}

-(IBAction)setMap:(id)sender {
    switch (((UISegmentedControl *) sender).selectedSegmentIndex) {
        case 0:
            mapview.mapType = MKMapTypeStandard;
            break;
            
        case 1:
            mapview.mapType = MKMapTypeSatellite;
            break;
            
        case 2:
            mapview.mapType = MKMapTypeHybrid;
            break;
            
        default:
            break;
    }
}

- (void)dealloc
{
    [super dealloc];
    [mapview release];
    [latitude release];
    [longitude release];
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle


// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad
{
    [super viewDidLoad];
}


- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
