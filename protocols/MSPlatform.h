/* Generated by RuntimeBrowser.
 */

@protocol MSPlatform <NSObject>

@required

- (NSString *)OSString;
- (NSString *)UDID;
- (NSString *)appBundleInfoString;
- (NSString *)authTokenForPersonID:(NSString *)arg1;
- (NSURL *)baseURLForPersonID:(NSString *)arg1;
- (NSString *)fullNameFromFirstName:(NSString *)arg1 lastName:(NSString *)arg2;
- (NSString *)hardwareString;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(NSString *)arg3 args:(void*)arg4;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(NSString *)arg6 args:(void*)arg7;
- (NSString *)pathMediaStreamDir;
- (BOOL)policyMayDownload;
- (BOOL)policyMayUpload;
- (Class)publisherPluginClass;
- (Class)sharingPluginClass;
- (BOOL)shouldLogAtLevel:(int)arg1;
- (NSDictionary *)socketOptions;
- (Class)subscriberPluginClass;
- (MSMediaStreamDaemon *)theDaemon;

@optional

- (NSURL *)contentURLForPersonID:(NSString *)arg1;
- (Class)deletePluginClass;
- (void)didDetectUnrecoverableCondition;
- (BOOL)isPerformanceLoggingEnabled;
- (BOOL)policyMaySendDelete;
- (NSData *)pushToken;
- (NSData *)pushTokenForPersonID:(NSString *)arg1;
- (BOOL)shouldEnableNewFeatures;

@end
