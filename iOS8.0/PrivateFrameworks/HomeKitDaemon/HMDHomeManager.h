//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDAccessoryManagerDelegate.h"
#import "HMMessageReceiver.h"
#import "IDSServiceDelegate.h"

@class HMDAccessoryManager, HMDCloudDataSyncManager, HMDCloudDataSyncStateFilter, HMDIDSMessageDispatcher, HMDIdentityRegistry, HMDMessageFilterChain, HMDNameValidator, HMDPersistentStore, HMDPowerManager, HMMessageDispatcher, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID;

@interface HMDHomeManager : NSObject <HMMessageReceiver, IDSServiceDelegate, HMDAccessoryManagerDelegate>
{
    BOOL _accountActive;
    BOOL _accountStatusFailedDueToNetworkFailure;
    BOOL _uploadToCloudIsPending;
    BOOL _lastAnswerForShouldCloudSyncData;
    NSUUID *_uuid;
    HMDPersistentStore *_store;
    NSMutableArray *_homes;
    NSMutableDictionary *_homeNames;
    NSUUID *_primaryHomeUUID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_messageDispatcher;
    HMDIDSMessageDispatcher *_idsMessageDispatcher;
    HMDAccessoryManager *_accessoryManager;
    NSMutableSet *_unassociatedRemotePeers;
    NSMutableDictionary *_associatedRemotePeers;
    unsigned int _generationCounter;
    HMDNameValidator *_nameValidator;
    NSObject<OS_dispatch_source> *_accessoryFinderTimer;
    NSMutableArray *_pendingResponsesForAccessoryFinder;
    NSMutableArray *_pendingAccessoryTransactions;
    HMDPowerManager *_powerManager;
    HMDCloudDataSyncManager *_cloudDataSyncManager;
    struct __SCNetworkReachability *_reachability;
    int _networkConnectionAvailable;
    NSMutableDictionary *_pendingDataSyncAcks;
    NSMutableDictionary *_pendingRemoteSessions;
    HMDMessageFilterChain *_msgFilterChain;
    NSMutableSet *_pendingResponsesForRemoteAccessSetup;
    HMDIdentityRegistry *_identityRegistry;
    NSObject<OS_dispatch_source> *_cloudUploadTimer;
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;
}

+ (id)getCurrentUserID;
+ (id)activeAccountIdentifier;
+ (BOOL)shouldDisableCloudDataSync;
@property(retain, nonatomic) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // @synthesize cloudDataSyncStateFilter=_cloudDataSyncStateFilter;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *cloudUploadTimer; // @synthesize cloudUploadTimer=_cloudUploadTimer;
@property(nonatomic) BOOL lastAnswerForShouldCloudSyncData; // @synthesize lastAnswerForShouldCloudSyncData=_lastAnswerForShouldCloudSyncData;
@property(nonatomic) BOOL uploadToCloudIsPending; // @synthesize uploadToCloudIsPending=_uploadToCloudIsPending;
@property(nonatomic) BOOL accountStatusFailedDueToNetworkFailure; // @synthesize accountStatusFailedDueToNetworkFailure=_accountStatusFailedDueToNetworkFailure;
@property(nonatomic) BOOL accountActive; // @synthesize accountActive=_accountActive;
@property(retain, nonatomic) HMDIdentityRegistry *identityRegistry; // @synthesize identityRegistry=_identityRegistry;
@property(retain, nonatomic) NSMutableSet *pendingResponsesForRemoteAccessSetup; // @synthesize pendingResponsesForRemoteAccessSetup=_pendingResponsesForRemoteAccessSetup;
@property(retain, nonatomic) HMDMessageFilterChain *msgFilterChain; // @synthesize msgFilterChain=_msgFilterChain;
@property(retain, nonatomic) NSMutableDictionary *pendingRemoteSessions; // @synthesize pendingRemoteSessions=_pendingRemoteSessions;
@property(retain, nonatomic) NSMutableDictionary *pendingDataSyncAcks; // @synthesize pendingDataSyncAcks=_pendingDataSyncAcks;
@property(nonatomic) int networkConnectionAvailable; // @synthesize networkConnectionAvailable=_networkConnectionAvailable;
@property(nonatomic) struct __SCNetworkReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) HMDCloudDataSyncManager *cloudDataSyncManager; // @synthesize cloudDataSyncManager=_cloudDataSyncManager;
@property(retain, nonatomic) HMDPowerManager *powerManager; // @synthesize powerManager=_powerManager;
@property(retain, nonatomic) NSMutableArray *pendingAccessoryTransactions; // @synthesize pendingAccessoryTransactions=_pendingAccessoryTransactions;
@property(retain, nonatomic) NSMutableArray *pendingResponsesForAccessoryFinder; // @synthesize pendingResponsesForAccessoryFinder=_pendingResponsesForAccessoryFinder;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *accessoryFinderTimer; // @synthesize accessoryFinderTimer=_accessoryFinderTimer;
@property(retain, nonatomic) HMDNameValidator *nameValidator; // @synthesize nameValidator=_nameValidator;
@property(nonatomic) unsigned int generationCounter; // @synthesize generationCounter=_generationCounter;
@property(retain, nonatomic) NSMutableDictionary *associatedRemotePeers; // @synthesize associatedRemotePeers=_associatedRemotePeers;
@property(retain, nonatomic) NSMutableSet *unassociatedRemotePeers; // @synthesize unassociatedRemotePeers=_unassociatedRemotePeers;
@property(retain, nonatomic) HMDAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(retain, nonatomic) HMDIDSMessageDispatcher *idsMessageDispatcher; // @synthesize idsMessageDispatcher=_idsMessageDispatcher;
@property(retain, nonatomic) HMMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSUUID *primaryHomeUUID; // @synthesize primaryHomeUUID=_primaryHomeUUID;
@property(retain, nonatomic) NSMutableDictionary *homeNames; // @synthesize homeNames=_homeNames;
@property(retain, nonatomic) NSMutableArray *homes; // @synthesize homes=_homes;
@property(retain, nonatomic) HMDPersistentStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)accessoryManager:(id)arg1 didRemovePairedAccessories:(id)arg2 fromBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didAddPairedAccessories:(id)arg2 toBridgeAccessory:(id)arg3;
- (void)accessoryManager:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)_postiCloudSigninState:(BOOL)arg1;
- (void)_teardownRemoteAccessForHome:(id)arg1;
- (void)_handlePrimaryAccountDeleted:(id)arg1;
- (void)_handlePrimaryAccountModified:(id)arg1;
- (void)_handleLogControl:(id)arg1;
- (void)_handleRemoteSessionTornDown:(id)arg1;
- (void)_electRemoteAccessPeerForHome:(id)arg1;
- (void)_addPairingForRemoteAccessPoint:(id)arg1 destination:(id)arg2 controllerInfo:(id)arg3 forHome:(id)arg4;
- (void)_autoAddUser:(id)arg1 destination:(id)arg2 forHome:(id)arg3;
- (void)_findRemotePeerContainingAccessories:(id)arg1 forHome:(id)arg2;
- (void)_accessoriesAreLocallyReachableOnTransientDevice:(BOOL)arg1 forHome:(id)arg2;
- (id)_accessoryIdentifiersForHome:(id)arg1;
- (void)_removeFromUnassociatedPeers:(id)arg1;
- (void)_checkForRemotePeers;
- (void)_handleRemoteAccessPeersFoundNotification:(id)arg1;
- (void)_handleAreYouAtHome:(id)arg1;
- (void)_handleControllerKeyAvailable;
- (BOOL)_eraseLocalHomeConfiguration:(BOOL)arg1;
- (void)_eraseConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleResetConfiguration:(id)arg1;
- (void)_handleHomeDataSync:(id)arg1;
- (void)_handleUserRemoved:(id)arg1;
- (void)_handleResetHome:(id)arg1;
- (void)_removeAllUsersOfHome:(id)arg1;
- (BOOL)isThisDeviceAdminOfHome:(id)arg1;
- (void)_sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3;
- (void)_sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)_acceptHomeInvite:(id)arg1;
- (void)_handleAccessHomeInvite:(id)arg1;
- (void)_handleElectDeviceForIDSSession:(id)arg1;
- (void)_handleAddRemoteAccessRequest:(id)arg1;
- (void)_handleDoYouSeeUnpairedAccessories:(id)arg1;
- (BOOL)_findAnyAccessoryWithIdentities:(id)arg1 inAccessories:(id)arg2;
- (void)_startScanningForAccessories:(id)arg1;
- (void)_processAnyPendingRequestsForRemoteAccess:(BOOL)arg1;
- (void)_cancelAccessoryFinderTimer;
- (void)_startAccessoryFinderTimerExpired;
- (void)_startAccessoryFinderTimer;
- (void)_sendInviteRequestToUser:(id)arg1 forHome:(id)arg2 confirm:(BOOL)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_handleRequestSubmitAWDMetric:(id)arg1;
- (void)_handleRequestIsUserUsingHomeKit:(id)arg1;
- (void)_handleRequestSetPrimaryHome:(id)arg1;
- (void)_handleRequestRemoveHome:(id)arg1;
- (void)_removeHome:(id)arg1 withMessage:(id)arg2;
- (void)_handleRequestAddHome:(id)arg1;
- (void)notifyPrimaryHomeUpdated:(id)arg1;
- (void)_handleRequestFetchHomeConfiguration:(id)arg1;
- (void)_monitorReachability;
- (void)_registerForMessages;
- (void)_postHomesDidUpdateNotification;
- (void)postHomesDidUpdateNotification;
- (void)_mergeHomeDataWithRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(BOOL)arg4 idsDataSync:(BOOL)arg5;
- (void)_suspendXPCConnectionAndMergeRemoteHomes:(id)arg1 remotePrimaryHome:(id)arg2 remoteAccessories:(id)arg3 needConflictResolution:(BOOL)arg4 idsDataSync:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_handleDataFromCloudWithHomes:(id)arg1 primaryHome:(id)arg2 accessories:(id)arg3 needConflictResolution:(BOOL)arg4;
- (id)_filterAccessories:(id)arg1 inHome:(id)arg2;
- (id)_filterAccessories:(id)arg1 withUUIDs:(id)arg2;
- (void)identifiersOfAccessoriesFromLocalAccessoryTransactions:(id *)arg1 accessoriesRemoved:(id *)arg2;
- (id)identifiersOfAccessories:(id)arg1;
- (void)_updateCloudDataSyncWithAccountState:(BOOL)arg1;
- (void)_fetchDataFromCloud;
- (void)_configureHomes:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleBackgroundTaskAgentJob:(const char *)arg1 forHomeWithUUID:(id)arg2;
- (void)checkTimerTriggersForHomes;
- (void)accessoriesAreLocallyReachableOnTransientDevice:(BOOL)arg1 forHome:(id)arg2;
- (void)notifySyncDataChanged;
- (id)replaceName:(id)arg1 withNewName:(id)arg2 inNamespaces:(id)arg3;
- (id)removeName:(id)arg1 namespace:(id)arg2;
- (id)addName:(id)arg1 namespace:(id)arg2;
- (id)_homeWithUUID:(id)arg1;
- (id)_homeWithName:(id)arg1;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)sendUserRemoved:(id)arg1 fromHome:(id)arg2 pairingUsername:(id)arg3;
- (void)sendUserAdded:(id)arg1 destination:(id)arg2 toHome:(id)arg3;
- (void)sendInviteRequestToUser:(id)arg1 forHome:(id)arg2 confirm:(BOOL)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_handleAccountStatusDetermined:(id)arg1;
- (void)_stopUploadTimer;
- (void)_startUploadTimer;
- (void)_uploadHomeConfigToCloud;
- (void)_pushChangesToCloud;
- (void)_removePendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_addPendingDataSyncAcksForUser:(id)arg1 forHome:(id)arg2;
- (void)_pushChangesForHome:(id)arg1 toRegularUsersOfHome:(id)arg2;
- (void)_pushChangesForHome:(id)arg1 toRemoteDevicesOnSameAccount:(id)arg2;
- (void)_pushChangesToUsers:(id)arg1 forHome:(id)arg2;
- (void)_pushChangesToUsersThatHaveNotAcknowledged;
- (void)_pushChangesToAllUsersOfAllHomes;
- (BOOL)doesSaveReasonAffectOnlyLocalData:(id)arg1;
- (void)_saveWithReason:(id)arg1 postSyncNotification:(BOOL)arg2;
- (void)_saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3;
- (void)saveWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3;
- (void)saveWithReason:(id)arg1 postSyncNotification:(BOOL)arg2;
- (void)saveRequestFromHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(BOOL)arg4;
- (void)_saveToPersistentStore;
- (id)initWithMessageDispatcher:(id)arg1 idsMessageDispatcher:(id)arg2 accessoryManager:(id)arg3 messageFilterChain:(id)arg4 homes:(id)arg5 primaryHome:(id)arg6 identityRegistry:(id)arg7 store:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

