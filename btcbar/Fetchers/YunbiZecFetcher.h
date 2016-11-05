//
//  YunbiZecFetcher.h
//  EthBar
//
//  Created by shooter on 11/5/16.
//  Copyright © 2016 cnkevinlee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fetcher.h"

@interface YunbiZecFetcher : NSObject<Fetcher, NSURLConnectionDelegate>

@property (nonatomic) NSString* ticker;
@property (nonatomic) NSString* ticker_menu;
@property (nonatomic) NSString* url;
@property (nonatomic) NSError* error;
@property (nonatomic) NSMutableData *responseData;

- (void)requestUpdate;

@end