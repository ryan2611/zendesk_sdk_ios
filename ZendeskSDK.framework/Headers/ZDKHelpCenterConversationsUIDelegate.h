/*
 *
 *  ZDKHelpCenterConversationsUIDelegate.h
 *  ZendeskSDK
 *
 *  Created by Zendesk on 11/11/2014.  
 *
 *  Copyright (c) 2014 Zendesk. All rights reserved.
 *
 *  By downloading or using the Zendesk Mobile SDK, You agree to the Zendesk Master
 *  Subscription Agreement https://www.zendesk.com/company/customers-partners/#master-subscription-agreement and Application Developer and API License
 *  Agreement https://www.zendesk.com/company/customers-partners/#application-developer-api-license-agreement and
 *  acknowledge that such terms govern Your use of and access to the Mobile SDK.
 *
 */

#import <Foundation/Foundation.h>


/**
 *  Enum to describe the types of nav bar button that display conversations.
 */
typedef NS_ENUM(NSUInteger, ZDKNavBarConversationsUIType) {
    /**
     *  Nav bar button with localized label for conversations.
     */
    ZDKNavBarConversationsUITypeLocalizedLabel,
    /**
     *  Nav bar button with image for conversations.
     */
    ZDKNavBarConversationsUITypeImage,
    /**
     *  No conversations nav bar in Help Center. 
     */
    ZDKNavBarConversationsUITypeNone,
};

@protocol ZDKHelpCenterConversationsUIDelegate <NSObject>


/**
 *  To conform implementations should return the conversations UI type desired.
 *
 *  @return The ZDKNavBarConversationsUIType to display.
 */
- (ZDKNavBarConversationsUIType) navBarConversationsUIType;


/**
 *  To conform implementations should return an image for the right nav bar button.
 *
 *  @return An image for the right nav bar button.
 */
- (UIImage *) conversationsBarButtonImage;


/**
 *  To conform implementations should return a localized string for the right nav bar button title.
 *
 *  @return A localized string for the right nav bar button.
 */
- (NSString *) conversationsBarButtonLocalizedLabel;


@end
