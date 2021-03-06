/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUserIdentityLookupInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _dsid;
    NSString * _emailAddress;
    NSData * _encryptedPersonalInfo;
    NSString * _phoneNumber;
    BOOL  _shouldReportMissingIdentity;
    CKRecordID * _userRecordID;
}

@property (nonatomic, retain) NSString *dsid;
@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, retain) NSData *encryptedPersonalInfo;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic) BOOL shouldReportMissingIdentity;
@property (nonatomic, copy) CKRecordID *userRecordID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)lookupInfosWithEmails:(id)arg1;
+ (id)lookupInfosWithPhoneNumbers:(id)arg1;
+ (id)lookupInfosWithRecordIDs:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)CKPropertiesDescription;
- (void)_stripPersonalInfo;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dsid;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPersonalInfo;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)lookupField;
- (id)lookupValue;
- (id)phoneNumber;
- (void)setDsid:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setEncryptedPersonalInfo:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setShouldReportMissingIdentity:(BOOL)arg1;
- (void)setUserRecordID:(id)arg1;
- (BOOL)shouldReportMissingIdentity;
- (id)userRecordID;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2 participantID:(id)arg3;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2 participantID:(id)arg3;
- (BOOL)hasEncryptedPersonalInfo;

@end
