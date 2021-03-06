/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFAirQualityConditions : NSObject <NSSecureCoding> {
    unsigned int  _category;
    NSDate * _date;
    NSDate * _expirationDate;
    NSLocale * _locale;
    NSString * _localizedAirQualityCategory;
    int  _localizedAirQualityIndex;
    WFLocation * _location;
    NSArray * _pollutants;
    NSString * _provider;
}

@property (nonatomic) unsigned int category;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, readonly) BOOL isExpired;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, copy) NSString *localizedAirQualityCategory;
@property (nonatomic) int localizedAirQualityIndex;
@property (nonatomic, retain) WFLocation *location;
@property (nonatomic, copy) NSArray *pollutants;
@property (nonatomic, copy) NSString *provider;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)airQualityIndex;
- (unsigned int)category;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (BOOL)isExpired;
- (id)locale;
- (id)localizedAirQualityCategory;
- (int)localizedAirQualityIndex;
- (id)location;
- (id)pollutants;
- (id)provider;
- (void)setCategory:(unsigned int)arg1;
- (void)setDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocalizedAirQualityCategory:(id)arg1;
- (void)setLocalizedAirQualityIndex:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setPollutants:(id)arg1;
- (void)setProvider:(id)arg1;

@end
