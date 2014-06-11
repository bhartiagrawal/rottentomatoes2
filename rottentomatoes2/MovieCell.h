//
//  MovieCell.h
//  rottentomatoes2
//
//  Created by Bharti Agrawal on 6/10/14.
//  Copyright (c) 2014 Yahoo Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MovieCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *movieTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *movieSynopsisLabel;
@property (weak, nonatomic) IBOutlet UIImageView *posterView;

@end
