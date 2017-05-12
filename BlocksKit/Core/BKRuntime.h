//
//  BKRuntime.h
//  BlocksKit
//
//  Created by Béla Szombathelyi on 2017. 05. 12.
//  Copyright © 2017. Zachary Waldowski and Pandamonia LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_INLINE dispatch_time_t BKTimeDelay(NSTimeInterval secounds) {
  return dispatch_time(DISPATCH_TIME_NOW, (uint64_t)(NSEC_PER_SEC * secounds));
}

NS_INLINE dispatch_time_t BKTimeNow() {
  return dispatch_time(DISPATCH_TIME_NOW, 0);
}
