//
//  Todo+CoreDataProperties.m
//  Every.DoAgainCoreData
//
//  Created by Victor Hong on 23/11/2016.
//  Copyright © 2016 Victor Hong. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "Todo+CoreDataProperties.h"

@implementation Todo (CoreDataProperties)

+ (NSFetchRequest<Todo *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Todo"];
}

@dynamic title;
@dynamic todoDescription;
@dynamic priorityNumber;
@dynamic isCompleted;
@dynamic deadlineDate;

@end
