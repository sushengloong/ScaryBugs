//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by Su Sheng Loong on 12/20/12.
//  Copyright (c) 2012 Su Sheng Loong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle:(NSString*)title rating:(float)rating;

@end
