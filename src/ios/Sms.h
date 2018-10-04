#import <Cordova/CDV.h>
#import <MessageUI/MFMessageComposeViewController.h>

@interface Sms : CDVPlugin <MFMessageComposeViewControllerDelegate> {
}

@property(strong) NSString* callbackID;
- (void)sendMessage:(CDVInvokedUrlCommand*)command;
@end