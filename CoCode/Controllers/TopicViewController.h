//
//  TopicViewController.h
//  CoCode
//
//  Created by wuxueqian on 15/11/10.
//  Copyright (c) 2015年 wuxueqian. All rights reserved.
//

#import "CCTopicModel.h"
#import "SCPullRefreshViewController.h"

@interface TopicViewController : SCPullRefreshViewController

@property (nonatomic, strong) CCTopicModel *topic;

//@property (nonatomic, assign, getter = isCreate) BOOL create;

@end
