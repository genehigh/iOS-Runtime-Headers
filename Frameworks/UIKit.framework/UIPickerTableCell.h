/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerTableCell : UIImageAndTextTableCell {
    unsigned int _checked : 1;
    unsigned int _reserved : 31;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isChecked;
- (void)layoutSubviews;
- (void)setChecked:(BOOL)arg1;
- (void)updateHighlightColors;

@end