//
//  PWBuildingOverlayRenderer.h
//  PWMapKit
//
//  Copyright (c) 2014 Phunware. All rights reserved.
//

@class PWMapView;

/**
 The PWBuildingOverlayRenderer class defines the basic behavior associated with all building-based overlays. An overlay renderer draws the visual representation of `PWBuilding` object. This class defines the drawing infrastructure used by the map view.
 */
@interface PWBuildingOverlayRenderer : MKOverlayRenderer

@property (weak) PWMapView *mapView;

@end