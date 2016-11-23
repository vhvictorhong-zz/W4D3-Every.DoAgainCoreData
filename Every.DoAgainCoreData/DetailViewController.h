//
//  DetailViewController.h
//  Every.DoAgainCoreData
//
//  Created by Victor Hong on 23/11/2016.
//  Copyright © 2016 Victor Hong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Every_DoAgainCoreData+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Todo *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

