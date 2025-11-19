#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CKSBaseViewModel, CKSBusinessCard, CKSBusinessCardDraft, CKSCameraController, CKSCaptureResult, CKSCaptureResultCancelled, CKSCaptureResultSuccess, CKSCardKit, CKSCardListItem, CKSCardsUiState, CKSInMemoryPhotoStore, CKSKotlinArray<T>, CKSKotlinException, CKSKotlinIllegalStateException, CKSKotlinRuntimeException, CKSKotlinThrowable, CKSPhotoCard, CKSPlatformBitmap, CKSScanResult, CKSScanResultCancelled, CKSScanResultSuccess;

@protocol CKSBusinessCardRepository, CKSKotlinCoroutineContext, CKSKotlinCoroutineContextElement, CKSKotlinCoroutineContextKey, CKSKotlinIterator, CKSKotlinx_coroutines_coreCoroutineScope, CKSKotlinx_coroutines_coreFlow, CKSKotlinx_coroutines_coreFlowCollector, CKSKotlinx_coroutines_coreSharedFlow, CKSKotlinx_coroutines_coreStateFlow, CKSPlatform;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CKSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface CKSBase (CKSBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface CKSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CKSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorCKSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface CKSNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface CKSByte : CKSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface CKSUByte : CKSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface CKSShort : CKSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface CKSUShort : CKSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface CKSInt : CKSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface CKSUInt : CKSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface CKSLong : CKSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface CKSULong : CKSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface CKSFloat : CKSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface CKSDouble : CKSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface CKSBoolean : CKSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("BaseViewModel")))
@interface CKSBaseViewModel : CKSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addTeardownBlock:(void (^)(void))block __attribute__((swift_name("addTeardown(block:)")));

/** Call this when the VM is being released (e.g., from owner deinit). */
- (void)dispose __attribute__((swift_name("dispose()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finalize __attribute__((swift_name("finalize()")));
@property (readonly) id<CKSKotlinx_coroutines_coreCoroutineScope> scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraController")))
@interface CKSCameraController : CKSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)captureDraftWithCompletionHandler:(void (^)(CKSBusinessCardDraft * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("captureDraft(completionHandler:)")));
@end


/**
 * Result of trying to capture an image for a business card.
 */
__attribute__((swift_name("CaptureResult")))
@interface CKSCaptureResult : CKSBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CaptureResult.Cancelled")))
@interface CKSCaptureResultCancelled : CKSCaptureResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cancelled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CKSCaptureResultCancelled *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CaptureResult.Success")))
@interface CKSCaptureResultSuccess : CKSCaptureResult
- (instancetype)initWithImageRef:(id)imageRef __attribute__((swift_name("init(imageRef:)"))) __attribute__((objc_designated_initializer));
- (CKSCaptureResultSuccess *)doCopyImageRef:(id)imageRef __attribute__((swift_name("doCopy(imageRef:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id imageRef __attribute__((swift_name("imageRef")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardKit")))
@interface CKSCardKit : CKSBase
- (instancetype)initWithRepository:(id<CKSBusinessCardRepository>)repository cameraController:(CKSCameraController *)cameraController timeProvider:(CKSLong *(^)(void))timeProvider idProvider:(NSString *(^)(void))idProvider __attribute__((swift_name("init(repository:cameraController:timeProvider:idProvider:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createCardDraft:(CKSBusinessCardDraft *)draft completionHandler:(void (^)(CKSBusinessCard * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createCard(draft:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteCardId:(NSString *)id completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteCard(id:completionHandler:)")));
- (id<CKSKotlinx_coroutines_coreFlow>)observeCards __attribute__((swift_name("observeCards()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)startScanFlowWithCompletionHandler:(void (^)(CKSScanResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("startScanFlow(completionHandler:)")));
@end

__attribute__((swift_name("Platform")))
@protocol CKSPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface CKSIOSPlatform : CKSBase <CKSPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InMemoryPhotoStore")))
@interface CKSInMemoryPhotoStore : CKSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inMemoryPhotoStore __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CKSInMemoryPhotoStore *shared __attribute__((swift_name("shared")));
- (CKSPlatformBitmap * _Nullable)getId:(NSString *)id __attribute__((swift_name("get(id:)")));
- (NSString *)putBitmap:(CKSPlatformBitmap *)bitmap __attribute__((swift_name("put(bitmap:)")));
- (void)removeId:(NSString *)id __attribute__((swift_name("remove(id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformBitmap")))
@interface CKSPlatformBitmap : CKSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("ScanResult")))
@interface CKSScanResult : CKSBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScanResult.Cancelled")))
@interface CKSScanResultCancelled : CKSScanResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cancelled __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CKSScanResultCancelled *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScanResult.Success")))
@interface CKSScanResultSuccess : CKSScanResult
- (instancetype)initWithCard:(CKSBusinessCard *)card __attribute__((swift_name("init(card:)"))) __attribute__((objc_designated_initializer));
- (CKSScanResultSuccess *)doCopyCard:(CKSBusinessCard *)card __attribute__((swift_name("doCopy(card:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CKSBusinessCard *card __attribute__((swift_name("card")));
@end

__attribute__((swift_name("BusinessCardRepository")))
@protocol CKSBusinessCardRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteId:(NSString *)id completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delete(id:completionHandler:)")));
- (id<CKSKotlinx_coroutines_coreFlow>)observeCards __attribute__((swift_name("observeCards()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)upsertCard:(CKSBusinessCard *)card completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("upsert(card:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InMemoryBusinessCardRepository")))
@interface CKSInMemoryBusinessCardRepository : CKSBase <CKSBusinessCardRepository>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteId:(NSString *)id completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delete(id:completionHandler:)")));
- (id<CKSKotlinx_coroutines_coreFlow>)observeCards __attribute__((swift_name("observeCards()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)upsertCard:(CKSBusinessCard *)card completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("upsert(card:completionHandler:)")));
@end


/**
 * Immutable snapshot of a scanned / saved business card.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BusinessCard")))
@interface CKSBusinessCard : CKSBase
- (instancetype)initWithId:(NSString *)id fullName:(NSString *)fullName company:(NSString * _Nullable)company email:(NSString * _Nullable)email phone:(NSString * _Nullable)phone website:(NSString * _Nullable)website notes:(NSString * _Nullable)notes imageRef:(id _Nullable)imageRef createdAtMillis:(int64_t)createdAtMillis __attribute__((swift_name("init(id:fullName:company:email:phone:website:notes:imageRef:createdAtMillis:)"))) __attribute__((objc_designated_initializer));
- (CKSBusinessCard *)doCopyId:(NSString *)id fullName:(NSString *)fullName company:(NSString * _Nullable)company email:(NSString * _Nullable)email phone:(NSString * _Nullable)phone website:(NSString * _Nullable)website notes:(NSString * _Nullable)notes imageRef:(id _Nullable)imageRef createdAtMillis:(int64_t)createdAtMillis __attribute__((swift_name("doCopy(id:fullName:company:email:phone:website:notes:imageRef:createdAtMillis:)")));

/**
 * Immutable snapshot of a scanned / saved business card.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Immutable snapshot of a scanned / saved business card.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Immutable snapshot of a scanned / saved business card.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable company __attribute__((swift_name("company")));
@property (readonly) int64_t createdAtMillis __attribute__((swift_name("createdAtMillis")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString *fullName __attribute__((swift_name("fullName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) id _Nullable imageRef __attribute__((swift_name("imageRef")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) NSString * _Nullable website __attribute__((swift_name("website")));
@end


/**
 * Draft coming from OCR or manual input.
 * SDK will turn this into a BusinessCard with id + timestamps.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BusinessCardDraft")))
@interface CKSBusinessCardDraft : CKSBase
- (instancetype)initWithFullName:(NSString *)fullName company:(NSString * _Nullable)company email:(NSString * _Nullable)email phone:(NSString * _Nullable)phone website:(NSString * _Nullable)website notes:(NSString * _Nullable)notes imageRef:(id _Nullable)imageRef __attribute__((swift_name("init(fullName:company:email:phone:website:notes:imageRef:)"))) __attribute__((objc_designated_initializer));
- (CKSBusinessCardDraft *)doCopyFullName:(NSString *)fullName company:(NSString * _Nullable)company email:(NSString * _Nullable)email phone:(NSString * _Nullable)phone website:(NSString * _Nullable)website notes:(NSString * _Nullable)notes imageRef:(id _Nullable)imageRef __attribute__((swift_name("doCopy(fullName:company:email:phone:website:notes:imageRef:)")));

/**
 * Draft coming from OCR or manual input.
 * SDK will turn this into a BusinessCard with id + timestamps.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Draft coming from OCR or manual input.
 * SDK will turn this into a BusinessCard with id + timestamps.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Draft coming from OCR or manual input.
 * SDK will turn this into a BusinessCard with id + timestamps.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable company __attribute__((swift_name("company")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString *fullName __attribute__((swift_name("fullName")));
@property (readonly) id _Nullable imageRef __attribute__((swift_name("imageRef")));
@property (readonly) NSString * _Nullable notes __attribute__((swift_name("notes")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) NSString * _Nullable website __attribute__((swift_name("website")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardListItem")))
@interface CKSCardListItem : CKSBase
- (instancetype)initWithId:(NSString *)id title:(NSString *)title subtitle:(NSString * _Nullable)subtitle primaryContact:(NSString * _Nullable)primaryContact createdAtMillis:(int64_t)createdAtMillis imageRef:(NSString * _Nullable)imageRef __attribute__((swift_name("init(id:title:subtitle:primaryContact:createdAtMillis:imageRef:)"))) __attribute__((objc_designated_initializer));
- (CKSCardListItem *)doCopyId:(NSString *)id title:(NSString *)title subtitle:(NSString * _Nullable)subtitle primaryContact:(NSString * _Nullable)primaryContact createdAtMillis:(int64_t)createdAtMillis imageRef:(NSString * _Nullable)imageRef __attribute__((swift_name("doCopy(id:title:subtitle:primaryContact:createdAtMillis:imageRef:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAtMillis __attribute__((swift_name("createdAtMillis")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable imageRef __attribute__((swift_name("imageRef")));
@property (readonly) NSString * _Nullable primaryContact __attribute__((swift_name("primaryContact")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoCard")))
@interface CKSPhotoCard : CKSBase
- (instancetype)initWithId:(NSString *)id createdAtMillis:(int64_t)createdAtMillis __attribute__((swift_name("init(id:createdAtMillis:)"))) __attribute__((objc_designated_initializer));
- (CKSPhotoCard *)doCopyId:(NSString *)id createdAtMillis:(int64_t)createdAtMillis __attribute__((swift_name("doCopy(id:createdAtMillis:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAtMillis __attribute__((swift_name("createdAtMillis")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsUiState")))
@interface CKSCardsUiState : CKSBase
- (instancetype)initWithCards:(NSArray<CKSCardListItem *> *)cards photoCards:(NSArray<CKSPhotoCard *> *)photoCards isLoading:(BOOL)isLoading error:(NSString * _Nullable)error __attribute__((swift_name("init(cards:photoCards:isLoading:error:)"))) __attribute__((objc_designated_initializer));
- (CKSCardsUiState *)doCopyCards:(NSArray<CKSCardListItem *> *)cards photoCards:(NSArray<CKSPhotoCard *> *)photoCards isLoading:(BOOL)isLoading error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(cards:photoCards:isLoading:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CKSCardListItem *> *cards __attribute__((swift_name("cards")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@property (readonly) NSArray<CKSPhotoCard *> *photoCards __attribute__((swift_name("photoCards")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsViewModel")))
@interface CKSCardsViewModel : CKSBaseViewModel
- (instancetype)initWithCardKit:(CKSCardKit *)cardKit __attribute__((swift_name("init(cardKit:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onDeleteCardClickedId:(NSString *)id __attribute__((swift_name("onDeleteCardClicked(id:)")));
- (void)onDeletePhotoClickedId:(NSString *)id __attribute__((swift_name("onDeletePhotoClicked(id:)")));
- (void)onPhotoCapturedPhotoId:(NSString *)photoId __attribute__((swift_name("onPhotoCaptured(photoId:)")));
- (void)onScanClicked __attribute__((swift_name("onScanClicked()")));
@property (readonly) id<CKSKotlinx_coroutines_coreStateFlow> uiState __attribute__((swift_name("uiState")));
@end

@interface CKSBusinessCard (Extensions)

/**
 * Domain → UI mapper.
 */
- (CKSCardListItem *)toCardListItem __attribute__((swift_name("toCardListItem()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface CKSPlatform_iosKt : CKSBase
+ (id<CKSPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeProvider_iosKt")))
@interface CKSTimeProvider_iosKt : CKSBase
+ (int64_t)currentTimeMillis __attribute__((swift_name("currentTimeMillis()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol CKSKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<CKSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface CKSKotlinThrowable : CKSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (CKSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CKSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface CKSKotlinException : CKSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface CKSKotlinRuntimeException : CKSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CKSKotlinIllegalStateException : CKSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface CKSKotlinCancellationException : CKSKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CKSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol CKSKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<CKSKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol CKSKotlinx_coroutines_coreSharedFlow <CKSKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol CKSKotlinx_coroutines_coreStateFlow <CKSKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CKSKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CKSKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CKSKotlinCoroutineContextElement> _Nullable)getKey:(id<CKSKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CKSKotlinCoroutineContext>)minusKeyKey:(id<CKSKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CKSKotlinCoroutineContext>)plusContext:(id<CKSKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CKSKotlinArray<T> : CKSBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CKSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CKSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol CKSKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CKSKotlinCoroutineContextElement <CKSKotlinCoroutineContext>
@required
@property (readonly) id<CKSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CKSKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("KotlinIterator")))
@protocol CKSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
