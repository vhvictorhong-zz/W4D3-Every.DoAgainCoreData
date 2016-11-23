//
//  CustomTableViewCell.h
//  Every.DoAgainCoreData
//
//  Created by Victor Hong on 23/11/2016.
//  Copyright © 2016 Victor Hong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *todoDescriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *deadlineLabel;
@property (weak, nonatomic) IBOutlet UILabel *priorityLabel;

@end
