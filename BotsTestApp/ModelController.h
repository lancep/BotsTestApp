//
//  ModelController.h
//  BotsTestApp
//
//  Created by Lance Parker on 10/8/13.
//  Copyright (c) 2013 Lance Parker. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
