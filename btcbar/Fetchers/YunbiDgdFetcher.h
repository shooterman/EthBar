//
//  YunbiDgdFetcher.h
//  EthBar
//
//  Created by shooter on 5/10/16.
//  Copyright © 2016 cnkevinlee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fetcher.h"

@interface YunbiDgdFetcher : NSObject<Fetcher, NSURLConnectionDelegate>

@property (nonatomic) NSString* ticker;
@property (nonatomic) NSString* ticker_menu;
@property (nonatomic) NSString* url;
@property (nonatomic) NSError* error;
@property (nonatomic) NSMutableData *responseData;

- (void)requestUpdate;

@end