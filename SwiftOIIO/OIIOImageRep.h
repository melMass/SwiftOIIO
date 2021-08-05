//
//  OIIOImageRep.h
//  SwiftOIIO
//
//  Created by mel on 04/08/2021.
//

#ifndef OIIOImageRep_h
#define OIIOImageRep_h

#import <Cocoa/Cocoa.h>
#import "OIIOHelper.h"


typedef void (^OIIOTimerBlockType)(void);
void OIIOTimer(NSString *message, OIIOTimerBlockType block);

@interface OIIOImageRep : NSBitmapImageRep

@property (strong) NSDictionary *oiio_metadata;

@property (assign) OIIOImageEncodingType encodingType;

+ (CGImageRef)newCGImageWithContentsOfURL:(NSURL *)url metadata:(NSDictionary **)metadata;

-(BOOL)writeToURL:(NSURL *)url
     encodingType:(OIIOImageEncodingType)encodingType;


@end

#endif /* OIIOImageRep_h */
