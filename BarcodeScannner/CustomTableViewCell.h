//
//  CustomTableViewCell.h
//  BarcodeScannner
//
//  Created by LuisLazarus on 4/13/15.
//  Copyright (c) 2015 LuisLazarus. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *codeLabel;
@property (weak, nonatomic) IBOutlet UILabel *codeType;
@property (weak, nonatomic) IBOutlet UILabel *number;
@end
