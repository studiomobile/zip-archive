#import <Foundation/Foundation.h>

extern NSString* kZipArchiveErrorDomain;

@interface ZipArchive : NSObject

+ (BOOL)unzipFileAtPath:(NSString *)path toDestination:(NSString *)destination;
+ (BOOL)unzipFileAtPath:(NSString *)path toDestination:(NSString *)destination overwrite:(BOOL)overwrite password:(NSString *)password error:(NSError **)error;

@end
