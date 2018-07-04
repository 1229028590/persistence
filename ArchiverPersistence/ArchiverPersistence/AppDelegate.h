//
//  AppDelegate.h
//  ArchiverPersistence
//
//  Created by wcb1229028590 on 2018/7/5.
//  Copyright © 2018年 wcb1229028590. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

