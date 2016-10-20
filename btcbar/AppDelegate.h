//
//  AppDelegate.h
//  btcbar
//

#import <Cocoa/Cocoa.h>

#import "YunbiEthFetcher.h"
#import "YunbiBtcFetcher.h"
#import "YunbiFirstbloodFetcher.h"

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    NSMenu *btcbarMainMenu;
    NSInteger currentFetcherTag;

    NSStatusItem *btcbarStatusItem;

    NSTimer *updateViewTimer;
    NSTimer *updateDataTimer;

    NSMutableArray *tickers;
    NSUserDefaults *prefs;
}

- (void)menuActionSetTicker:(id)sender;
- (void)menuActionBrowser:(id)sender;
- (void)menuActionQuit:(id)sender;

- (void)handleTickerNotification:(NSNotification *)pNotification;
- (void)updateDataTimerAction:(NSTimer*)timer;

@end
