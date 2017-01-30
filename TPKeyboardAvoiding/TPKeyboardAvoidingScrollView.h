//
//  TPKeyboardAvoidingScrollView.h
//  TPKeyboardAvoiding
//
//  Created by Michael Tyson on 30/09/2013.
//  Copyright 2015 A Tasty Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIScrollView+TPKeyboardAvoidingAdditions.h"

@protocol TPKeyboardAvoidingScrollViewDelegate;

@interface TPKeyboardAvoidingScrollView : UIScrollView <UITextFieldDelegate, UITextViewDelegate>
- (void)contentSizeToFit;
- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;

@property(nonatomic, assign) id <TPKeyboardAvoidingScrollViewDelegate> tpDelegate;

@end

@protocol TPKeyboardAvoidingScrollViewDelegate
- (void)didTapDoneButtonFromTextField:(UITextField *)textField;
@end
