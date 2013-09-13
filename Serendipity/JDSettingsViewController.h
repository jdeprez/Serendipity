//
//  JDSettingsViewController.h
//  Serendipity
//
//  Created by Josh Deprez on 11/08/13.
//  Copyright (c) 2013 Josh Deprez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JDSettingsViewController : UITableViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (weak, nonatomic) IBOutlet UISwitch *dangerModeSwitch;

@property (weak, nonatomic) IBOutlet UISwitch *iPhoneTypeSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *MobileTypeSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *HomeTypeSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *WorkTypeSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *MainTypeSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *HomeFaxTypeSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *WorkFaxTypeSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *OtherFaxTypeSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *OtherTypeSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *PagerTypeSwitch;

- (IBAction)dangerModeSwitchChanged:(id)sender;
- (IBAction)iPhoneTypeSwitchChanged:(id)sender;
- (IBAction)mobileTypeSwitchChanged:(id)sender;
- (IBAction)homeTypeSwitchChanged:(id)sender;
- (IBAction)workTypeSwitchChanged:(id)sender;
- (IBAction)mainTypeSwitchChanged:(id)sender;
- (IBAction)otherTypeSwitchChanged:(id)sender;
- (IBAction)homeFaxTypeSwitchChanged:(id)sender;
- (IBAction)pagerTypeSwitchChanged:(id)sender;
- (IBAction)workFaxTypeSwitchChanged:(id)sender;
- (IBAction)otherFaxTypeSwitchChanged:(id)sender;


@end
