/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <SKComposeReviewDelegate>, NSURL, SKInvocationQueueProxy<SKUIServiceComposeReviewViewController>, SKRemoteComposeReviewViewController, _UIAsyncInvocation;

@interface SKComposeReviewViewController : UIViewController {
    _UIAsyncInvocation *_cancelRequest;
    NSURL *_compositionURL;
    <SKComposeReviewDelegate> *_delegate;
    id _prepareBlock;
    SKRemoteComposeReviewViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceComposeReviewViewController> *_serviceProxy;
}

@property <SKComposeReviewDelegate> * delegate;

- (void)_addRemoteView;
- (void)_didFinishWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_didPrepareWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_requestRemoteViewController;
- (void)_tearDownAfterError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithCompositionURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)prepareWithCompletionBlock:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end