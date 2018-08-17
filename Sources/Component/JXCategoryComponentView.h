//
//  JXCategoryComponentView.h
//  DQGuess
//
//  Created by jiaxin on 2018/7/25.
//  Copyright © 2018年 jingbo. All rights reserved.
//

#import "JXCategoryBaseView.h"
#import "JXCategoryComponentCell.h"
#import "JXCategoryComponentCellModel.h"
#import "JXCategoryComponentProtocol.h"

@interface JXCategoryComponentView : JXCategoryBaseView

@property (nonatomic, strong) NSArray <UIView<JXCategoryComponentProtocol> *> *components;

//----------------------zoomEnabled-----------------------//
@property (nonatomic, assign) BOOL zoomEnabled;     //默认为NO

@property (nonatomic, assign) CGFloat zoomScale;    //默认1.2，zoomEnabled为YES才生效

//----------------------separatorLine-----------------------//
@property (nonatomic, assign) BOOL separatorLineShowEnabled;    //默认为NO

@property (nonatomic, strong) UIColor *separatorLineColor;    //默认为[UIColor lightGrayColor]

@property (nonatomic, assign) CGSize separatorLineSize;    //默认为CGSizeMake(1/[UIScreen mainScreen].scale, 20)

/**
 当contentScrollView滚动时候，处理跟随手势的过渡效果。
 根据cellModel的左右位置、是否选中、ratio进行过滤数据计算。
 
 @param leftCellModel 左边的cellModel
 @param rightCellModel 右边的cellModel
 @param ratio 从左往右方向计算的百分比
 */
- (void)refreshLeftCellModel:(JXCategoryBaseCellModel *)leftCellModel rightCellModel:(JXCategoryBaseCellModel *)rightCellModel ratio:(CGFloat)ratio NS_REQUIRES_SUPER;

@end
