//
//  ScoreView.h
//  LineSum
//
//  Created by Lanston Peng on 4/18/14.
//  Copyright (c) 2014 Vtm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ScoreBoardView : UIView
-(void)initScoreBoradView:(NSUInteger)tagetSum;
-(void)addNum:(NSUInteger)num;
-(void)minusNum:(NSUInteger)num;
@end