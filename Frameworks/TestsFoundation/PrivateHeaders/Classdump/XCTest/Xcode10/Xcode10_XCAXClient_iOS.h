#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 120000

#import "Xcode10_XCTest_CDStructures.h"
#import "Xcode10_SharedHeader.h"
#import "Xcode10_XCUIAccessibilityInterface.h"
#import <Foundation/Foundation.h>

@protocol XCUIApplicationProcessTracker, XCUIRemoteAXInterface;

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface XCAXClient_iOS : NSObject <XCUIAccessibilityInterface>
{
    id <XCUIApplicationProcessTracker> _applicationProcessTracker;
    id <XCUIRemoteAXInterface> _remoteAXInterface;
    NSObject *_queue;
    NSMutableDictionary *_userTestingNotificationHandlers;
    NSMutableDictionary *_cachedAccessibilityLoadedValuesForPIDs;
}

+ (instancetype)sharedClient;
@property(retain) NSMutableDictionary *cachedAccessibilityLoadedValuesForPIDs; // @synthesize cachedAccessibilityLoadedValuesForPIDs=_cachedAccessibilityLoadedValuesForPIDs;
@property(retain) NSMutableDictionary *userTestingNotificationHandlers; // @synthesize userTestingNotificationHandlers=_userTestingNotificationHandlers;
@property(retain) NSObject *queue; // @synthesize queue=_queue;
- (id)accessibilityElementForElementAtPoint:(struct CGPoint)arg1 error:(id *)arg2;
- (void)performWhenMenuOpens:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1 forAXNotification:(id)arg2;
- (id)addObserverForAXNotification:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)registerForAXNotificationsForApplicationWithPID:(int)arg1 completion:(CDUnknownBlockType)arg2;
@property double AXTimeout;
- (_Bool)_setAXTimeout:(double)arg1 error:(id *)arg2;
- (id)localizableStringsDataForActiveApplications;
- (_Bool)performAction:(int)arg1 onElement:(id)arg2 value:(id)arg3 error:(id *)arg4;
- (id)parameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 error:(id *)arg4;
- (_Bool)setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 outError:(id *)arg4;
@property(readonly) _Bool allowsRemoteAccess;
- (id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (id)attributesForElement:(id)arg1 attributes:(id)arg2;
- (id)attributesForElementSnapshot:(id)arg1 attributeList:(id)arg2;
- (id)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 error:(id *)arg4;
- (id)defaultParameters;
- (void)notifyWhenViewControllerViewDidDisappearReply:(CDUnknownBlockType)arg1;
- (void)notifyWhenViewControllerViewDidAppearReply:(CDUnknownBlockType)arg1;
- (void)notifyWhenNoAnimationsAreActiveForApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly) _Bool supportsAnimationsInactiveNotifications;
- (void)notifyWhenEventLoopIsIdleForApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)interruptingUIElementsAffectingSnapshot:(id)arg1;
@property(readonly) _Bool usePointTransformationsForFrameConversions;
@property(readonly) _Bool supportsHostedViewCoordinateTransformations;
@property(readonly) _Bool axNotificationsIncludeElement;
- (void)handleAccessibilityNotification:(long long)arg1 fromElement:(id)arg2 payload:(id)arg3;
- (void)notifyOnNextOccurrenceOfUserTestingEvent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)handleUserTestingNotification:(id)arg1;
- (id)hitTestElement:(id)arg1 withPoint:(struct CGPoint)arg2 error:(id *)arg3;
- (_Bool)cachedAccessibilityLoadedValueForPID:(int)arg1;
- (id)activeApplications;
- (id)systemApplication;
- (_Bool)enableFauxCollectionViewCells:(id *)arg1;
- (_Bool)loadAccessibility:(id *)arg1;
- (_Bool)_registerForAXNotification:(long long)arg1 error:(id *)arg2;
- (_Bool)_loadAccessibility:(id *)arg1;
@property(readonly) id <XCUIRemoteAXInterface> remoteAXInterface; // @synthesize remoteAXInterface=_remoteAXInterface;
@property(readonly) id <XCUIApplicationProcessTracker> applicationProcessTracker; // @synthesize applicationProcessTracker=_applicationProcessTracker;
- (id)initWithApplicationProcessTracker:(id)arg1 remoteAXInterface:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

#endif