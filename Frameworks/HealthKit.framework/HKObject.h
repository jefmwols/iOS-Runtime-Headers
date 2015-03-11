/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKSource, NSDate, NSDictionary, NSString, NSUUID;

@interface HKObject : NSObject <NSSecureCoding> {
    NSUUID *_UUID;
    NSDate *_creationDate;
    NSDictionary *_metadata;
    HKSource *_source;
    NSString *_sourceBundleIdentifier;
}

@property(readonly) NSUUID * UUID;
@property(getter=_creationDate,setter=_setCreationDate:,copy) NSDate * creationDate;
@property(copy,readonly) NSDictionary * metadata;
@property(readonly) HKSource * source;
@property(getter=_sourceBundleIdentifier,setter=_setSourceBundleIdentifier:,copy) NSString * sourceBundleIdentifier;

+ (bool)_isConcreteObjectClass;
+ (id)_newDataObjectWithMetadata:(id)arg1 config:(id)arg2;
+ (id)_objectWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_creationDate;
- (id)_init;
- (bool)_objectCanBeSaved:(id*)arg1;
- (void)_setCreationDate:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setSource:(id)arg1;
- (void)_setSourceBundleIdentifier:(id)arg1;
- (void)_setUUID:(id)arg1;
- (id)_sourceBundleIdentifier;
- (id)_validateConfiguration;
- (void)_validateForCreation;
- (id)_valueDescription;
- (bool)addCodableRepresentationToCollection:(id)arg1;
- (bool)addCodableRepresentationToCollectionForJournal:(id)arg1;
- (bool)addCodableRepresentationToCollectionForSync:(id)arg1;
- (id)codableRepresentationForSync;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)entityType;
- (unsigned long long)hash;
- (bool)hd_insertRelatedDataWithHealthDaemon:(id)arg1 database:(id)arg2 entity:(id)arg3 error:(id*)arg4;
- (id)hd_relatedJournalEntries;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)source;
- (bool)validateForSaving:(id*)arg1;

@end