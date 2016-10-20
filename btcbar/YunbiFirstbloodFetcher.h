//
//  YunbiFirstbloodFetcher.h
//  EthBar
//
//  Created by shooter on 10/20/16.
//  Copyright © 2016 cnkevinlee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fetcher.h"

@interface YunbiFirstbloodFetcher : NSObject<Fetcher, NSURLConnectionDelegate>

@property (nonatomic) NSString* ticker;
@property (nonatomic) NSString* ticker_menu;
@property (nonatomic) NSString* url;
@property (nonatomic) NSError* error;
@property (nonatomic) NSMutableData *responseData;

- (void)requestUpdate;

@end