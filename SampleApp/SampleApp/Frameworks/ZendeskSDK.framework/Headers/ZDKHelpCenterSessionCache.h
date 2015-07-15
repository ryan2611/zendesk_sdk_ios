/*
 *
 *  ZDKHelpCenterSessionCache.h
 *  ZendeskSDK
 *
 *  Created by Zendesk on 15/07/2015.
 *
 *  Copyright (c) 2015 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Terms
 *  of Service https://www.zendesk.com/company/terms and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/application-developer-and-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import <Foundation/Foundation.h>

@class ZDKHelpCenterLastSearch;

@interface ZDKHelpCenterSessionCache : NSObject

@property (nonatomic) ZDKHelpCenterLastSearch *last_search;

/**
 *  Cache a search. This has the side efect of setting a unique search result click BOOL to yes.
 *
 *  @since 1.3.2.1
 *
 *  @param lastSearch The search to be cached.
 */
+ (void) cacheLastSearch:(ZDKHelpCenterLastSearch*)lastSearch;


/**
 *  Un-sets the unique search result click flag
 *
 *  @since 1.3.2.1
 */
+ (void) unsetUniqueSearchResultClick;


/**
 *  Used when submitting an article view with the Help Center provider.
 *
 *  @return A dictionary containing the last search model and a unique search result click.
 *
 *  @since 1.3.2.1
 */
+ (NSDictionary *)recordArticleViewRequestJson;

@end
