//
//  ZKViewController.m
//  ZumoKit
//
//  Created by Ivan Romanovski on 11/13/2019.
//  Copyright (c) 2019 Ivan Romanovski. All rights reserved.
//

#import "ZKViewController.h"
#import "ZKAppDelegate.h"

@interface ZKViewController ()

@end

@implementation ZKViewController

- (void)viewDidLoad
{
    [super viewDidLoad];

    [self authenticateWithZumoKit];
}

- (void)authenticateWithZumoKit {
    ZKAppDelegate *appDelegate = (ZKAppDelegate *)[[UIApplication sharedApplication] delegate];
}

@end
