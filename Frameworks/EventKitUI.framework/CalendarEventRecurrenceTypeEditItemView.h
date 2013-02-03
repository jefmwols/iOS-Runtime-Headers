/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSIndexPath, NSString, UITableView;

@interface CalendarEventRecurrenceTypeEditItemView : CalendarEventEditItemView <UITableViewDelegate, UITableViewDataSource> {
    NSIndexPath *_checkedItem;
    NSString *_customString;
    NSInteger _repeatType;
    UITableView *_table;
}

- (BOOL)_canComplete:(id*)arg1;
- (void)_checkItemAtIndexPath:(id)arg1;
- (void)absorbValueFromSerializedValue:(id)arg1;
- (BOOL)canCompleteForDetachmentType:(NSInteger)arg1;
- (BOOL)completeForDetachmentType:(NSInteger)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)navigationTitle;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (NSInteger)repeatType;
- (void)setCustomString:(id)arg1;
- (void)setRepeatType:(NSInteger)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;

@end