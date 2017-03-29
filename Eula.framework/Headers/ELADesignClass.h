//
//  ELADesignClass.h
//  Eula
//
//  Created by Adam Cooper on 8/22/16.
//  Copyright © 2016 Adam Cooper. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ELADesignClass : NSObject

#pragma mark - Document Date

+ (void)setDocumentDateFont:(UIFont *)font;
+ (UIFont *)documentDateFont;

+ (void)setDocumentDateColor:(UIColor *)color;
+ (UIColor *)documentDateColor;

#pragma mark - Section Title

+ (void)setSectionTitleFont:(UIFont *)font;
+ (UIFont *)sectionTitleFont;

+ (void)setSectionTitleColor:(UIColor *)color;
+ (UIColor *)sectionTitleColor;

#pragma mark - Section Body

+ (void)setSectionBodyFont:(UIFont *)font;
+ (UIFont *)sectionBodyFont;

+ (void)setSectionBodyColor:(UIColor *)color;
+ (UIColor *)sectionBodyColor;

@end
