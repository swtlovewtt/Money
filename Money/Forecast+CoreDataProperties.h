//
//  Forecast+CoreDataProperties.h
//  Money
//
//  Created by SongWentong on 12/8/15.
//  Copyright © 2015 275712575@qq.com. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Forecast.h"

NS_ASSUME_NONNULL_BEGIN

@interface Forecast (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *code;
@property (nullable, nonatomic, retain) NSDate *time;
@property (nullable, nonatomic, retain) NSNumber *isbuy;
@property (nullable, nonatomic, retain) NSNumber *success;

@end

NS_ASSUME_NONNULL_END
