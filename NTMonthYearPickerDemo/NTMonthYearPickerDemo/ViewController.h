//
//  ViewController.h
//  NTMonthYearPickerDemo
//
//  Created by Arun Nair on 11/4/13.
//  Copyright (c) 2013 Arun Nair. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UISegmentedControl *pickerModeSelector;
    IBOutlet UILabel *selectedDate;
}

- (IBAction)pickerModeChanged;

@end
