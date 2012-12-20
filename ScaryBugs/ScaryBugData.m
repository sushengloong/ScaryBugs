//
//  ScaryBugData.m
//  ScaryBugs
//
//  Created by Su Sheng Loong on 12/20/12.
//  Copyright (c) 2012 Su Sheng Loong. All rights reserved.
//

#import "ScaryBugData.h"

@implementation ScaryBugData

@synthesize title = _title;
@synthesize rating = _rating;

- (id)initWithTitle:(NSString *)title rating:(float)rating {
    if (self = [super init]) {
        self.title = title;
        self.rating = rating;
    }
    return self;
}

@end
