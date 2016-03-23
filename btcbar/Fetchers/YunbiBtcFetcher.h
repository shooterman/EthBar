//
//  YunbiBtcFetcher.h
//  EthBar
//
//  Created by shooter on 3/23/16.
//  Copyright © 2016 cnkevinlee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fetcher.h"

@interface YunbiBtcFetcher : NSObject<Fetcher, NSURLConnectionDelegate>

@property (nonatomic) NSString* ticker;
@property (nonatomic) NSString* ticker_menu;
@property (nonatomic) NSString* url;
@property (nonatomic) NSError* error;
@property (nonatomic) NSMutableData *responseData;

- (void)requestUpdate;

@end