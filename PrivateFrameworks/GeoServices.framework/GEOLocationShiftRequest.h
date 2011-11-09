/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPixelPoint;

@interface GEOLocationShiftRequest : PBRequest  {
    GEOPixelPoint *_pixel;
}

@property(retain) GEOPixelPoint * pixel;


- (Class)responseClass;
- (BOOL)readFrom:(id)arg1;
- (id)pixel;
- (void)setPixel:(id)arg1;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end