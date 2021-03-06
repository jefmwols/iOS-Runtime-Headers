/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMF3HiddenMapTrackingHandler : NSObject <MKMapViewDelegate> {
    <FMF3HiddenMapTrackingHandlerDelegate> * _delegate;
    MKMapView * _hiddenMapView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FMF3HiddenMapTrackingHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MKMapView *hiddenMapView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)hiddenMapView;
- (id)initWithView:(id)arg1;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(BOOL)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHiddenMapView:(id)arg1;

@end
