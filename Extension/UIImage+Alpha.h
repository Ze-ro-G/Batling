// UIImage+Alpha.h
// Created by Trevor Harmon on 9/20/09.
// Free for personal or commercial use, with or without modification.
// No warranty is expressed or implied.

// Helper methods for adding an alpha layer to an image

// http://vocaro.com/trevor/blog/2009/10/12/resize-a-uiimage-the-right-way/

#import <Foundation/Foundation.h>
#import <Parse/Parse.h>

@interface UIImage (Alpha)
- (BOOL)hasAlpha;
- (UIImage *)imageWithAlpha;
- (UIImage *)transparentBorderImage:(NSUInteger)borderSize;


@end

@interface UITextView (Lines)


- (CGSize)sizeNeeded:(NSRange)range text:(NSString*)text;
@end
