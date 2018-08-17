//
//  JXCategoryCollectionView.h
//  UI系列测试
//
//  Created by jiaxin on 2018/3/21.
//  Copyright © 2018年 jiaxin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JXCategoryComponentProtocol.h"

@interface JXCategoryCollectionView : UICollectionView

@property (nonatomic, strong) NSArray <UIView<JXCategoryComponentProtocol> *> *components;

@end
