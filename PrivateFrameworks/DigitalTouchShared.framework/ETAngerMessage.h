/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETAngerMessage : ETMessage {
    SKSpriteNode * _anger;
    double  _duration;
    struct CGPoint { 
        float x; 
        float y; 
    }  _normalizedCenter;
}

@property (nonatomic) double duration;
@property (nonatomic) struct CGPoint { float x1; float x2; } normalizedCenter;

+ (unsigned short)messageType;

- (void).cxx_destruct;
- (id)archiveData;
- (void)displayInScene:(id)arg1;
- (double)duration;
- (id)initWithArchiveData:(id)arg1;
- (double)messageDuration;
- (id)messageTypeAsString;
- (struct CGPoint { float x1; float x2; })normalizedCenter;
- (void)setDuration:(double)arg1;
- (void)setNormalizedCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPlaying;

@end
