#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MHSCardState, MHSDataState<T>, MHSCommonFlow<T>, MHSPaymentState, MHSPayoutState, MHSAuthResponse, MHSDemoIntentResponse, MHSCardIntentResult, MHSCardStateUnknown, MHSPaymentIntentResult, MHSPaymentStateUnknown, MHSPayoutIntentResult, MHSPayoutStateUnknown, MHSKotlinUnit, MHSAppException, MHSDataStateCompanion, MHSKotlinThrowable, MHSKotlinArray<T>, MHSConstants, MHSKotlinEnumCompanion, MHSKotlinEnum<E>, MHSEnvironment, MHSType, MHSKtor_client_coreHttpClient, MHSBrandSettingsDataCompanion, MHSBrandSettingsData, MHSBrandSettingsModelCompanion, MHSBrandSettingsModel, MHSRedirectCompanion, MHSRedirect, MHSDemoIntentItem, MHSDemoIntentDataCompanion, MHSDemoIntentData, MHSDemoIntentItemCompanion, MHSStatus, MHSDemoIntentResponseCompanion, MHSUser, MHSAuthToken, MHSAuthDataCompanion, MHSAuthData, MHSAuthResponseCompanion, MHSAuthTokenCompanion, MHSLoginRequestCompanion, MHSLoginRequest, MHSUserCompanion, MHSTransaction, MHSActionDataCompanion, MHSActionData, MHSIntent, MHSDataCompanion, MHSData, MHSPaymentMethodsItem, MHSIntentCompanion, MHSPaymentInformationCompanion, MHSPaymentInformation, MHSPaymentIntentCompanion, MHSPaymentIntent, MHSPaymentTransaction, MHSPaymentIntentResultCompanion, MHSPaymentMethodCompanion, MHSPaymentMethod, MHSPaymentMethodsItemCompanion, MHSPaymentTransactionCompanion, MHSStatusCompanion, MHSKotlinx_serialization_jsonJsonElement, MHSTransactionCompanion, MHSPayoutTransactionData, MHSPayoutActionDataCompanion, MHSPayoutActionData, MHSPayoutIntentData, MHSPayoutDataCompanion, MHSPayoutData, MHSPayoutDetailsCompanion, MHSPayoutDetails, MHSPayoutIntentCompanion, MHSPayoutIntent, MHSPayoutMethodsItem, MHSPayoutIntentDataCompanion, MHSPayoutTransaction, MHSPayoutIntentResultCompanion, MHSPayoutMethodCompanion, MHSPayoutMethod, MHSPayoutMethodsItemCompanion, MHSPayoutTransactionCompanion, MHSPayoutTransactionDataCompanion, MHSCardActionDataCompanion, MHSCardActionData, MHSCardIntent, MHSCardDataCompanion, MHSCardData, MHSCardDetailsCompanion, MHSCardDetails, MHSCardIntentCompanion, MHSCardIntentResultCompanion, MHSNetworkModule, MHSAuthUseCase, MHSPaymentUseCase, MHSSandboxUseCase, MHSKotlinException, MHSKotlinRuntimeException, MHSKotlinIllegalStateException, MHSKtor_client_coreHttpClientEngineConfig, MHSKtor_client_coreHttpClientConfig<T>, MHSKtor_client_coreHttpRequestBuilder, MHSKtor_client_coreHttpClientCall, MHSKotlinx_coroutines_coreCoroutineDispatcher, MHSKtor_client_coreHttpReceivePipeline, MHSKtor_client_coreHttpRequestPipeline, MHSKtor_client_coreHttpResponsePipeline, MHSKtor_client_coreHttpSendPipeline, MHSKotlinx_serialization_jsonJsonElementCompanion, MHSKtor_client_coreHttpRequestData, MHSKtor_client_coreHttpResponseData, MHSKtor_client_coreProxyConfig, MHSKotlinNothing, MHSKtor_httpHeadersBuilder, MHSKtor_client_coreHttpRequestBuilderCompanion, MHSKtor_httpURLBuilder, MHSKtor_httpHttpMethod, MHSKtor_client_coreHttpClientCallCompanion, MHSKtor_client_coreTypeInfo, MHSKtor_client_coreHttpResponse, MHSKtor_utilsAttributeKey<T>, MHSKotlinAbstractCoroutineContextElement, MHSKotlinx_coroutines_coreCoroutineDispatcherKey, MHSKtor_utilsPipelinePhase, MHSKtor_utilsPipeline<TSubject, TContext>, MHSKtor_client_coreHttpReceivePipelinePhases, MHSKtor_client_coreHttpRequestPipelinePhases, MHSKtor_client_coreHttpResponsePipelinePhases, MHSKtor_client_coreHttpResponseContainer, MHSKtor_client_coreHttpSendPipelinePhases, MHSKotlinx_serialization_coreSerializersModule, MHSKotlinx_serialization_coreSerialKind, MHSKtor_httpUrl, MHSKtor_httpOutgoingContent, MHSKtor_httpHttpStatusCode, MHSKtor_utilsGMTDate, MHSKtor_httpHttpProtocolVersion, MHSKtor_utilsStringValuesBuilder, MHSKtor_httpURLProtocol, MHSKtor_httpParametersBuilder, MHSKtor_httpURLBuilderCompanion, MHSKotlinCancellationException, MHSKtor_httpHttpMethodCompanion, MHSKtor_ioMemory, MHSKtor_ioIoBuffer, MHSKotlinByteArray, MHSKtor_ioByteReadPacket, MHSKtor_ioByteOrder, MHSKotlinAbstractCoroutineContextKey<B, E>, MHSKtor_httpUrlCompanion, MHSKtor_httpContentType, MHSKtor_httpHttpStatusCodeCompanion, MHSKtor_utilsGMTDateCompanion, MHSKtor_utilsWeekDay, MHSKtor_utilsMonth, MHSKtor_httpHttpProtocolVersionCompanion, MHSKtor_httpURLProtocolCompanion, MHSKtor_httpUrlEncodingOption, MHSKtor_ioMemoryCompanion, MHSKtor_ioBufferCompanion, MHSKtor_ioBuffer, MHSKtor_ioChunkBuffer, MHSKtor_ioChunkBufferCompanion, MHSKotlinCharArray, MHSKtor_ioIoBufferCompanion, MHSKotlinByteIterator, MHSKtor_ioAbstractInputCompanion, MHSKtor_ioAbstractInput, MHSKtor_ioByteReadPacketBaseCompanion, MHSKtor_ioByteReadPacketBase, MHSKtor_ioByteReadPacketPlatformBase, MHSKtor_ioByteReadPacketCompanion, MHSKtor_ioByteOrderCompanion, MHSKotlinKTypeProjection, MHSKtor_httpHeaderValueParam, MHSKtor_httpHeaderValueWithParametersCompanion, MHSKtor_httpHeaderValueWithParameters, MHSKtor_httpContentTypeCompanion, MHSKtor_utilsWeekDayCompanion, MHSKtor_utilsMonthCompanion, MHSKotlinx_coroutines_coreAtomicDesc, MHSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, MHSKotlinCharIterator, MHSKotlinKVariance, MHSKotlinKTypeProjectionCompanion, MHSKotlinx_coroutines_coreAtomicOp<__contravariant T>, MHSKotlinx_coroutines_coreOpDescriptor, MHSKotlinx_coroutines_coreLockFreeLinkedListNode, MHSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, MHSKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, MHSKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol MHSPaymentService, MHSAuthService, MHSSandboxService, MHSKotlinx_coroutines_coreFlowCollector, MHSKotlinx_coroutines_coreFlow, MHSKotlinx_coroutines_coreCoroutineScope, MHSKotlinComparable, MHSKotlinx_serialization_coreKSerializer, MHSKotlinCoroutineContext, MHSKotlinIterator, MHSKtor_ioCloseable, MHSKtor_client_coreHttpClientEngine, MHSKtor_client_coreHttpClientEngineCapability, MHSKtor_utilsAttributes, MHSKotlinx_serialization_coreEncoder, MHSKotlinx_serialization_coreSerialDescriptor, MHSKotlinx_serialization_coreSerializationStrategy, MHSKotlinx_serialization_coreDecoder, MHSKotlinx_serialization_coreDeserializationStrategy, MHSKotlinCoroutineContextElement, MHSKotlinCoroutineContextKey, MHSKtor_client_coreHttpClientFeature, MHSKtor_httpHttpMessageBuilder, MHSKotlinx_coroutines_coreJob, MHSKtor_ioByteReadChannel, MHSKtor_utilsTypeInfo, MHSKtor_client_coreHttpRequest, MHSKotlinContinuation, MHSKotlinContinuationInterceptor, MHSKotlinx_coroutines_coreRunnable, MHSKotlinSuspendFunction2, MHSKotlinx_serialization_coreCompositeEncoder, MHSKotlinAnnotation, MHSKotlinx_serialization_coreCompositeDecoder, MHSKtor_httpHeaders, MHSKtor_utilsStringValues, MHSKotlinMapEntry, MHSKotlinx_coroutines_coreChildHandle, MHSKotlinx_coroutines_coreChildJob, MHSKotlinx_coroutines_coreDisposableHandle, MHSKotlinSequence, MHSKotlinx_coroutines_coreSelectClause0, MHSKtor_ioReadSession, MHSKotlinSuspendFunction1, MHSKotlinAppendable, MHSKotlinKType, MHSKotlinKClass, MHSKtor_httpHttpMessage, MHSKotlinFunction, MHSKotlinx_serialization_coreSerializersModuleCollector, MHSKtor_httpParameters, MHSKotlinx_coroutines_coreParentJob, MHSKotlinx_coroutines_coreSelectInstance, MHSKotlinSuspendFunction0, MHSKtor_ioObjectPool, MHSKtor_ioInput, MHSKtor_ioOutput, MHSKotlinKClassifier, MHSKotlinKDeclarationContainer, MHSKotlinKAnnotatedElement;

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
@interface MHSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MHSBase (MHSBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MHSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MHSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMHSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MHSNumber : NSNumber
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
@end;

__attribute__((swift_name("KotlinByte")))
@interface MHSByte : MHSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MHSUByte : MHSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MHSShort : MHSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MHSUShort : MHSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MHSInt : MHSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MHSUInt : MHSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MHSLong : MHSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MHSULong : MHSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MHSFloat : MHSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MHSDouble : MHSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MHSBoolean : MHSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentUseCase")))
@interface MHSPaymentUseCase : MHSBase
- (instancetype)initWithPaymentService:(id<MHSPaymentService>)paymentService __attribute__((swift_name("init(paymentService:)"))) __attribute__((objc_designated_initializer));
- (MHSCommonFlow<MHSDataState<MHSCardState *> *> *)getCardInformationCardIntentId:(NSString *)cardIntentId __attribute__((swift_name("getCardInformation(cardIntentId:)")));
- (MHSCommonFlow<MHSDataState<MHSPaymentState *> *> *)getPaymentInformationPaymentId:(NSString *)paymentId __attribute__((swift_name("getPaymentInformation(paymentId:)")));
- (MHSCommonFlow<MHSDataState<MHSPayoutState *> *> *)getPayoutInformationPayoutId:(NSString *)payoutId __attribute__((swift_name("getPayoutInformation(payoutId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthUseCase")))
@interface MHSAuthUseCase : MHSBase
- (instancetype)initWithAuthService:(id<MHSAuthService>)authService __attribute__((swift_name("init(authService:)"))) __attribute__((objc_designated_initializer));
- (MHSCommonFlow<MHSDataState<MHSAuthResponse *> *> *)loginEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("login(email:password:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SandboxUseCase")))
@interface MHSSandboxUseCase : MHSBase
- (instancetype)initWithSandboxService:(id<MHSSandboxService>)sandboxService __attribute__((swift_name("init(sandboxService:)"))) __attribute__((objc_designated_initializer));
- (MHSCommonFlow<MHSDataState<MHSDemoIntentResponse *> *> *)getDemoIntentsAccessToken:(NSString *)accessToken __attribute__((swift_name("getDemoIntents(accessToken:)")));
@end;

__attribute__((swift_name("CardState")))
@interface MHSCardState : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardState.Error")))
@interface MHSCardStateError : MHSCardState
- (instancetype)initWithErrors:(NSArray<NSString *> *)errors __attribute__((swift_name("init(errors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSArray<NSString *> *errors __attribute__((swift_name("errors")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardState.Failed")))
@interface MHSCardStateFailed : MHSCardState
- (instancetype)initWithCardResult:(MHSCardIntentResult *)cardResult __attribute__((swift_name("init(cardResult:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MHSCardIntentResult *cardResult __attribute__((swift_name("cardResult")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardState.Success")))
@interface MHSCardStateSuccess : MHSCardState
- (instancetype)initWithCardResult:(MHSCardIntentResult *)cardResult __attribute__((swift_name("init(cardResult:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MHSCardIntentResult *cardResult __attribute__((swift_name("cardResult")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardState.Unknown")))
@interface MHSCardStateUnknown : MHSCardState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)unknown __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSCardStateUnknown *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("PaymentState")))
@interface MHSPaymentState : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentState.Error")))
@interface MHSPaymentStateError : MHSPaymentState
- (instancetype)initWithErrors:(NSArray<NSString *> *)errors __attribute__((swift_name("init(errors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSArray<NSString *> *errors __attribute__((swift_name("errors")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentState.Failed")))
@interface MHSPaymentStateFailed : MHSPaymentState
- (instancetype)initWithPaymentIntentResult:(MHSPaymentIntentResult *)paymentIntentResult errors:(NSArray<NSString *> *)errors __attribute__((swift_name("init(paymentIntentResult:errors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSArray<NSString *> *errors __attribute__((swift_name("errors")));
@property (readonly) MHSPaymentIntentResult *paymentIntentResult __attribute__((swift_name("paymentIntentResult")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentState.Redirect")))
@interface MHSPaymentStateRedirect : MHSPaymentState
- (instancetype)initWithPaymentIntentResult:(MHSPaymentIntentResult *)paymentIntentResult redirectUrl:(NSString *)redirectUrl __attribute__((swift_name("init(paymentIntentResult:redirectUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MHSPaymentIntentResult *paymentIntentResult __attribute__((swift_name("paymentIntentResult")));
@property (readonly) NSString *redirectUrl __attribute__((swift_name("redirectUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentState.RequireExtraAction")))
@interface MHSPaymentStateRequireExtraAction : MHSPaymentState
- (instancetype)initWithActions:(NSArray<NSString *> *)actions paymentIntentResult:(MHSPaymentIntentResult *)paymentIntentResult __attribute__((swift_name("init(actions:paymentIntentResult:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSArray<NSString *> *actions __attribute__((swift_name("actions")));
@property (readonly) MHSPaymentIntentResult *paymentIntentResult __attribute__((swift_name("paymentIntentResult")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentState.Success")))
@interface MHSPaymentStateSuccess : MHSPaymentState
- (instancetype)initWithPaymentIntentResult:(MHSPaymentIntentResult *)paymentIntentResult __attribute__((swift_name("init(paymentIntentResult:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MHSPaymentIntentResult *paymentIntentResult __attribute__((swift_name("paymentIntentResult")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentState.Unknown")))
@interface MHSPaymentStateUnknown : MHSPaymentState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)unknown __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPaymentStateUnknown *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("PayoutState")))
@interface MHSPayoutState : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutState.Error")))
@interface MHSPayoutStateError : MHSPayoutState
- (instancetype)initWithErrors:(NSArray<NSString *> *)errors __attribute__((swift_name("init(errors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSArray<NSString *> *errors __attribute__((swift_name("errors")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutState.Failed")))
@interface MHSPayoutStateFailed : MHSPayoutState
- (instancetype)initWithPayoutResult:(MHSPayoutIntentResult *)payoutResult errors:(NSArray<NSString *> *)errors __attribute__((swift_name("init(payoutResult:errors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSArray<NSString *> *errors __attribute__((swift_name("errors")));
@property (readonly) MHSPayoutIntentResult *payoutResult __attribute__((swift_name("payoutResult")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutState.Redirect")))
@interface MHSPayoutStateRedirect : MHSPayoutState
- (instancetype)initWithPayoutResult:(MHSPayoutIntentResult *)payoutResult redirectUrl:(NSString *)redirectUrl __attribute__((swift_name("init(payoutResult:redirectUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MHSPayoutIntentResult *payoutResult __attribute__((swift_name("payoutResult")));
@property (readonly) NSString *redirectUrl __attribute__((swift_name("redirectUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutState.RequireExtraAction")))
@interface MHSPayoutStateRequireExtraAction : MHSPayoutState
- (instancetype)initWithActions:(NSArray<NSString *> *)actions payoutResult:(MHSPayoutIntentResult *)payoutResult __attribute__((swift_name("init(actions:payoutResult:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSArray<NSString *> *actions __attribute__((swift_name("actions")));
@property (readonly) MHSPayoutIntentResult *payoutResult __attribute__((swift_name("payoutResult")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutState.Success")))
@interface MHSPayoutStateSuccess : MHSPayoutState
- (instancetype)initWithPayoutResult:(MHSPayoutIntentResult *)payoutResult __attribute__((swift_name("init(payoutResult:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MHSPayoutIntentResult *payoutResult __attribute__((swift_name("payoutResult")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutState.Unknown")))
@interface MHSPayoutStateUnknown : MHSPayoutState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)unknown __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPayoutStateUnknown *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol MHSKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MHSKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(MHSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonFlow")))
@interface MHSCommonFlow<T> : MHSBase <MHSKotlinx_coroutines_coreFlow>
- (instancetype)initWithOrigin:(id<MHSKotlinx_coroutines_coreFlow>)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<MHSKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(MHSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (void)collectCommonCoroutineScope:(id<MHSKotlinx_coroutines_coreCoroutineScope> _Nullable)coroutineScope callback:(void (^)(T _Nullable))callback __attribute__((swift_name("collectCommon(coroutineScope:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataState")))
@interface MHSDataState<T> : MHSBase
- (instancetype)initWithData:(T _Nullable)data error:(MHSAppException * _Nullable)error isLoading:(BOOL)isLoading __attribute__((swift_name("init(data:error:isLoading:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSDataStateCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSAppException * _Nullable)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (MHSDataState<T> *)doCopyData:(T _Nullable)data error:(MHSAppException * _Nullable)error isLoading:(BOOL)isLoading __attribute__((swift_name("doCopy(data:error:isLoading:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) MHSAppException * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataStateCompanion")))
@interface MHSDataStateCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSDataStateCompanion *shared __attribute__((swift_name("shared")));
- (MHSDataState<id> *)dataData:(id _Nullable)data __attribute__((swift_name("data(data:)")));
- (MHSDataState<id> *)errorError:(MHSAppException *)error __attribute__((swift_name("error(error:)")));
- (MHSDataState<id> *)loading __attribute__((swift_name("loading()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MHSKotlinThrowable : MHSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MHSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("AppException")))
@interface MHSAppException : MHSKotlinThrowable
- (instancetype)initWithErrors:(NSArray<NSString *> *)errors errorBody:(NSString * _Nullable)errorBody throwable:(MHSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(errors:errorBody:throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString * _Nullable errorBody __attribute__((swift_name("errorBody")));
@property (readonly) NSArray<NSString *> *errors __attribute__((swift_name("errors")));
@property (readonly) MHSKotlinThrowable * _Nullable throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoConnectionException")))
@interface MHSNoConnectionException : MHSAppException
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithErrors:(NSArray<NSString *> *)errors errorBody:(NSString * _Nullable)errorBody throwable:(MHSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(errors:errorBody:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeOutException")))
@interface MHSTimeOutException : MHSAppException
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithErrors:(NSArray<NSString *> *)errors errorBody:(NSString * _Nullable)errorBody throwable:(MHSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(errors:errorBody:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnAuthorizedException")))
@interface MHSUnAuthorizedException : MHSAppException
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message throwable:(MHSKotlinThrowable *)throwable __attribute__((swift_name("init(code:message:throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithErrors:(NSArray<NSString *> *)errors errorBody:(NSString * _Nullable)errorBody throwable:(MHSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(errors:errorBody:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnexpectedException")))
@interface MHSUnexpectedException : MHSAppException
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message throwable:(MHSKotlinThrowable *)throwable __attribute__((swift_name("init(code:message:throwable:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithErrors:(NSArray<NSString *> *)errors errorBody:(NSString * _Nullable)errorBody throwable:(MHSKotlinThrowable * _Nullable)throwable __attribute__((swift_name("init(errors:errorBody:throwable:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constants")))
@interface MHSConstants : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)constants __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSConstants *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *STATUS_KEY __attribute__((swift_name("STATUS_KEY")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MHSKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MHSKotlinEnum<E> : MHSBase <MHSKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environment")))
@interface MHSEnvironment : MHSKotlinEnum<MHSEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MHSEnvironment *staging __attribute__((swift_name("staging")));
@property (class, readonly) MHSEnvironment *production __attribute__((swift_name("production")));
+ (MHSKotlinArray<MHSEnvironment *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) NSString *embedUrl __attribute__((swift_name("embedUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Type")))
@interface MHSType : MHSKotlinEnum<MHSType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MHSType *payment __attribute__((swift_name("payment")));
@property (class, readonly) MHSType *payout __attribute__((swift_name("payout")));
@property (class, readonly) MHSType *cards __attribute__((swift_name("cards")));
+ (MHSKotlinArray<MHSType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *resultSuffix __attribute__((swift_name("resultSuffix")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorClientFactory")))
@interface MHSKtorClientFactory : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MHSKtor_client_coreHttpClient *)buildEnableLogs:(BOOL)enableLogs __attribute__((swift_name("build(enableLogs:)")));
@end;

__attribute__((swift_name("AuthService")))
@protocol MHSAuthService
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginEmail:(NSString *)email password:(NSString *)password completionHandler:(void (^)(MHSAuthResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(email:password:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthServiceImpl")))
@interface MHSAuthServiceImpl : MHSBase <MHSAuthService>
- (instancetype)initWithEnvironment:(MHSEnvironment *)environment httpClient:(MHSKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(environment:httpClient:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginEmail:(NSString *)email password:(NSString *)password completionHandler:(void (^)(MHSAuthResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(email:password:completionHandler:)")));
@end;

__attribute__((swift_name("SandboxService")))
@protocol MHSSandboxService
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDemoIntentsAccessToken:(NSString *)accessToken completionHandler:(void (^)(MHSDemoIntentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDemoIntents(accessToken:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SandboxServiceImpl")))
@interface MHSSandboxServiceImpl : MHSBase <MHSSandboxService>
- (instancetype)initWithEnvironment:(MHSEnvironment *)environment httpClient:(MHSKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(environment:httpClient:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDemoIntentsAccessToken:(NSString *)accessToken completionHandler:(void (^)(MHSDemoIntentResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDemoIntents(accessToken:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandSettingsData")))
@interface MHSBrandSettingsData : MHSBase
- (instancetype)initWithBrandPrimaryColor:(NSString * _Nullable)brandPrimaryColor brandAccentColor:(NSString * _Nullable)brandAccentColor icon:(NSString * _Nullable)icon privacyPolicy:(NSString * _Nullable)privacyPolicy termsOfService:(NSString * _Nullable)termsOfService __attribute__((swift_name("init(brandPrimaryColor:brandAccentColor:icon:privacyPolicy:termsOfService:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSBrandSettingsDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (MHSBrandSettingsData *)doCopyBrandPrimaryColor:(NSString * _Nullable)brandPrimaryColor brandAccentColor:(NSString * _Nullable)brandAccentColor icon:(NSString * _Nullable)icon privacyPolicy:(NSString * _Nullable)privacyPolicy termsOfService:(NSString * _Nullable)termsOfService __attribute__((swift_name("doCopy(brandPrimaryColor:brandAccentColor:icon:privacyPolicy:termsOfService:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable brandAccentColor __attribute__((swift_name("brandAccentColor")));
@property (readonly) NSString * _Nullable brandPrimaryColor __attribute__((swift_name("brandPrimaryColor")));
@property (readonly) NSString * _Nullable icon __attribute__((swift_name("icon")));
@property (readonly) NSString * _Nullable privacyPolicy __attribute__((swift_name("privacyPolicy")));
@property (readonly) NSString * _Nullable termsOfService __attribute__((swift_name("termsOfService")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandSettingsData.Companion")))
@interface MHSBrandSettingsDataCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSBrandSettingsDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandSettingsModel")))
@interface MHSBrandSettingsModel : MHSBase
- (instancetype)initWithBrandPrimaryColor:(NSString * _Nullable)brandPrimaryColor brandAccentColor:(NSString * _Nullable)brandAccentColor icon:(NSString * _Nullable)icon privacyPolicy:(NSString * _Nullable)privacyPolicy termsOfService:(NSString * _Nullable)termsOfService hideHeader:(MHSBoolean * _Nullable)hideHeader hideAmountSidebar:(MHSBoolean * _Nullable)hideAmountSidebar __attribute__((swift_name("init(brandPrimaryColor:brandAccentColor:icon:privacyPolicy:termsOfService:hideHeader:hideAmountSidebar:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSBrandSettingsModelCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (MHSBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MHSBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MHSBrandSettingsModel *)doCopyBrandPrimaryColor:(NSString * _Nullable)brandPrimaryColor brandAccentColor:(NSString * _Nullable)brandAccentColor icon:(NSString * _Nullable)icon privacyPolicy:(NSString * _Nullable)privacyPolicy termsOfService:(NSString * _Nullable)termsOfService hideHeader:(MHSBoolean * _Nullable)hideHeader hideAmountSidebar:(MHSBoolean * _Nullable)hideAmountSidebar __attribute__((swift_name("doCopy(brandPrimaryColor:brandAccentColor:icon:privacyPolicy:termsOfService:hideHeader:hideAmountSidebar:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable brandAccentColor __attribute__((swift_name("brandAccentColor")));
@property (readonly) NSString * _Nullable brandPrimaryColor __attribute__((swift_name("brandPrimaryColor")));
@property (readonly) MHSBoolean * _Nullable hideAmountSidebar __attribute__((swift_name("hideAmountSidebar")));
@property (readonly) MHSBoolean * _Nullable hideHeader __attribute__((swift_name("hideHeader")));
@property (readonly) NSString * _Nullable icon __attribute__((swift_name("icon")));
@property (readonly) NSString * _Nullable privacyPolicy __attribute__((swift_name("privacyPolicy")));
@property (readonly) NSString * _Nullable termsOfService __attribute__((swift_name("termsOfService")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandSettingsModel.Companion")))
@interface MHSBrandSettingsModelCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSBrandSettingsModelCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Redirect")))
@interface MHSRedirect : MHSBase
- (instancetype)initWithRedirect_url:(NSString * _Nullable)redirect_url redirect_strategy:(NSString * _Nullable)redirect_strategy __attribute__((swift_name("init(redirect_url:redirect_strategy:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSRedirectCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSRedirect *)doCopyRedirect_url:(NSString * _Nullable)redirect_url redirect_strategy:(NSString * _Nullable)redirect_strategy __attribute__((swift_name("doCopy(redirect_url:redirect_strategy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable redirect_strategy __attribute__((swift_name("redirect_strategy")));
@property (readonly) NSString * _Nullable redirect_url __attribute__((swift_name("redirect_url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Redirect.Companion")))
@interface MHSRedirectCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSRedirectCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DemoIntentData")))
@interface MHSDemoIntentData : MHSBase
- (instancetype)initWithPayment:(NSArray<MHSDemoIntentItem *> * _Nullable)payment payout:(NSArray<MHSDemoIntentItem *> * _Nullable)payout card:(NSArray<MHSDemoIntentItem *> * _Nullable)card __attribute__((swift_name("init(payment:payout:card:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSDemoIntentDataCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<MHSDemoIntentItem *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<MHSDemoIntentItem *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<MHSDemoIntentItem *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSDemoIntentData *)doCopyPayment:(NSArray<MHSDemoIntentItem *> * _Nullable)payment payout:(NSArray<MHSDemoIntentItem *> * _Nullable)payout card:(NSArray<MHSDemoIntentItem *> * _Nullable)card __attribute__((swift_name("doCopy(payment:payout:card:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<MHSDemoIntentItem *> * _Nullable card __attribute__((swift_name("card")));
@property (readonly) NSArray<MHSDemoIntentItem *> * _Nullable payment __attribute__((swift_name("payment")));
@property (readonly) NSArray<MHSDemoIntentItem *> * _Nullable payout __attribute__((swift_name("payout")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DemoIntentData.Companion")))
@interface MHSDemoIntentDataCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSDemoIntentDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DemoIntentItem")))
@interface MHSDemoIntentItem : MHSBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSDemoIntentItemCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSDemoIntentItem *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DemoIntentItem.Companion")))
@interface MHSDemoIntentItemCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSDemoIntentItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DemoIntentResponse")))
@interface MHSDemoIntentResponse : MHSBase
- (instancetype)initWithData:(MHSDemoIntentData * _Nullable)data status:(MHSStatus * _Nullable)status __attribute__((swift_name("init(data:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSDemoIntentResponseCompanion *companion __attribute__((swift_name("companion")));
- (MHSDemoIntentData * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSStatus * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSDemoIntentResponse *)doCopyData:(MHSDemoIntentData * _Nullable)data status:(MHSStatus * _Nullable)status __attribute__((swift_name("doCopy(data:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSDemoIntentData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) MHSStatus * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DemoIntentResponse.Companion")))
@interface MHSDemoIntentResponseCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSDemoIntentResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthData")))
@interface MHSAuthData : MHSBase
- (instancetype)initWithUser:(MHSUser * _Nullable)user token:(MHSAuthToken * _Nullable)token __attribute__((swift_name("init(user:token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSAuthDataCompanion *companion __attribute__((swift_name("companion")));
- (MHSUser * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSAuthToken * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSAuthData *)doCopyUser:(MHSUser * _Nullable)user token:(MHSAuthToken * _Nullable)token __attribute__((swift_name("doCopy(user:token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSAuthToken * _Nullable token __attribute__((swift_name("token")));
@property (readonly) MHSUser * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthData.Companion")))
@interface MHSAuthDataCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSAuthDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthResponse")))
@interface MHSAuthResponse : MHSBase
- (instancetype)initWithData:(MHSAuthData * _Nullable)data status:(MHSStatus * _Nullable)status __attribute__((swift_name("init(data:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSAuthResponseCompanion *companion __attribute__((swift_name("companion")));
- (MHSAuthData * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSStatus * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSAuthResponse *)doCopyData:(MHSAuthData * _Nullable)data status:(MHSStatus * _Nullable)status __attribute__((swift_name("doCopy(data:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSAuthData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) MHSStatus * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthResponse.Companion")))
@interface MHSAuthResponseCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSAuthResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthToken")))
@interface MHSAuthToken : MHSBase
- (instancetype)initWithAccess:(NSString * _Nullable)access refresh:(NSString * _Nullable)refresh __attribute__((swift_name("init(access:refresh:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSAuthTokenCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSAuthToken *)doCopyAccess:(NSString * _Nullable)access refresh:(NSString * _Nullable)refresh __attribute__((swift_name("doCopy(access:refresh:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable access __attribute__((swift_name("access")));
@property (readonly) NSString * _Nullable refresh __attribute__((swift_name("refresh")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthToken.Companion")))
@interface MHSAuthTokenCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSAuthTokenCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest")))
@interface MHSLoginRequest : MHSBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("init(email:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSLoginRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MHSLoginRequest *)doCopyEmail:(NSString *)email password:(NSString *)password __attribute__((swift_name("doCopy(email:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginRequest.Companion")))
@interface MHSLoginRequestCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSLoginRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface MHSUser : MHSBase
- (instancetype)initWithIsSuperuser:(MHSBoolean * _Nullable)isSuperuser name:(NSString * _Nullable)name id:(MHSInt * _Nullable)id email:(NSString * _Nullable)email isOrgAdmin:(MHSBoolean * _Nullable)isOrgAdmin __attribute__((swift_name("init(isSuperuser:name:id:email:isOrgAdmin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSUserCompanion *companion __attribute__((swift_name("companion")));
- (MHSBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MHSBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (MHSUser *)doCopyIsSuperuser:(MHSBoolean * _Nullable)isSuperuser name:(NSString * _Nullable)name id:(MHSInt * _Nullable)id email:(NSString * _Nullable)email isOrgAdmin:(MHSBoolean * _Nullable)isOrgAdmin __attribute__((swift_name("doCopy(isSuperuser:name:id:email:isOrgAdmin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) MHSInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MHSBoolean * _Nullable isOrgAdmin __attribute__((swift_name("isOrgAdmin")));
@property (readonly) MHSBoolean * _Nullable isSuperuser __attribute__((swift_name("isSuperuser")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Companion")))
@interface MHSUserCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSUserCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionData")))
@interface MHSActionData : MHSBase
- (instancetype)initWithTransaction:(MHSTransaction * _Nullable)transaction redirect:(MHSRedirect * _Nullable)redirect __attribute__((swift_name("init(transaction:redirect:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSActionDataCompanion *companion __attribute__((swift_name("companion")));
- (MHSTransaction * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSRedirect * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSActionData *)doCopyTransaction:(MHSTransaction * _Nullable)transaction redirect:(MHSRedirect * _Nullable)redirect __attribute__((swift_name("doCopy(transaction:redirect:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSRedirect * _Nullable redirect __attribute__((swift_name("redirect")));
@property (readonly) MHSTransaction * _Nullable transaction __attribute__((swift_name("transaction")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionData.Companion")))
@interface MHSActionDataCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSActionDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Data")))
@interface MHSData : MHSBase
- (instancetype)initWithSelectedMethod:(NSString * _Nullable)selectedMethod nextAction:(NSString * _Nullable)nextAction intent:(MHSIntent * _Nullable)intent brandSettings:(MHSBrandSettingsData * _Nullable)brandSettings actionData:(MHSActionData * _Nullable)actionData __attribute__((swift_name("init(selectedMethod:nextAction:intent:brandSettings:actionData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSIntent * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSBrandSettingsData * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MHSActionData * _Nullable)component5 __attribute__((swift_name("component5()")));
- (MHSData *)doCopySelectedMethod:(NSString * _Nullable)selectedMethod nextAction:(NSString * _Nullable)nextAction intent:(MHSIntent * _Nullable)intent brandSettings:(MHSBrandSettingsData * _Nullable)brandSettings actionData:(MHSActionData * _Nullable)actionData __attribute__((swift_name("doCopy(selectedMethod:nextAction:intent:brandSettings:actionData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSActionData * _Nullable actionData __attribute__((swift_name("actionData")));
@property (readonly) MHSBrandSettingsData * _Nullable brandSettings __attribute__((swift_name("brandSettings")));
@property (readonly) MHSIntent * _Nullable intent __attribute__((swift_name("intent")));
@property (readonly) NSString * _Nullable nextAction __attribute__((swift_name("nextAction")));
@property (readonly) NSString * _Nullable selectedMethod __attribute__((swift_name("selectedMethod")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Data.Companion")))
@interface MHSDataCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Intent")))
@interface MHSIntent : MHSBase
- (instancetype)initWithPaymentMethods:(NSArray<MHSPaymentMethodsItem *> * _Nullable)paymentMethods amount:(NSString * _Nullable)amount amountCurrency:(NSString * _Nullable)amountCurrency isLive:(MHSBoolean * _Nullable)isLive hideAmountSidebar:(MHSBoolean * _Nullable)hideAmountSidebar hideHeader:(MHSBoolean * _Nullable)hideHeader id:(NSString * _Nullable)id formOnly:(MHSBoolean * _Nullable)formOnly secret:(NSString * _Nullable)secret status:(NSString * _Nullable)status showSteps:(MHSBoolean * _Nullable)showSteps __attribute__((swift_name("init(paymentMethods:amount:amountCurrency:isLive:hideAmountSidebar:hideHeader:id:formOnly:secret:status:showSteps:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSIntentCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<MHSPaymentMethodsItem *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (MHSBoolean * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MHSBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (MHSBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MHSBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MHSIntent *)doCopyPaymentMethods:(NSArray<MHSPaymentMethodsItem *> * _Nullable)paymentMethods amount:(NSString * _Nullable)amount amountCurrency:(NSString * _Nullable)amountCurrency isLive:(MHSBoolean * _Nullable)isLive hideAmountSidebar:(MHSBoolean * _Nullable)hideAmountSidebar hideHeader:(MHSBoolean * _Nullable)hideHeader id:(NSString * _Nullable)id formOnly:(MHSBoolean * _Nullable)formOnly secret:(NSString * _Nullable)secret status:(NSString * _Nullable)status showSteps:(MHSBoolean * _Nullable)showSteps __attribute__((swift_name("doCopy(paymentMethods:amount:amountCurrency:isLive:hideAmountSidebar:hideHeader:id:formOnly:secret:status:showSteps:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable amountCurrency __attribute__((swift_name("amountCurrency")));
@property (readonly) MHSBoolean * _Nullable formOnly __attribute__((swift_name("formOnly")));
@property (readonly) MHSBoolean * _Nullable hideAmountSidebar __attribute__((swift_name("hideAmountSidebar")));
@property (readonly) MHSBoolean * _Nullable hideHeader __attribute__((swift_name("hideHeader")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MHSBoolean * _Nullable isLive __attribute__((swift_name("isLive")));
@property (readonly) NSArray<MHSPaymentMethodsItem *> * _Nullable paymentMethods __attribute__((swift_name("paymentMethods")));
@property (readonly) NSString * _Nullable secret __attribute__((swift_name("secret")));
@property (readonly) MHSBoolean * _Nullable showSteps __attribute__((swift_name("showSteps")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Intent.Companion")))
@interface MHSIntentCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSIntentCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentInformation")))
@interface MHSPaymentInformation : MHSBase
- (instancetype)initWithData:(MHSData * _Nullable)data status:(MHSStatus * _Nullable)status __attribute__((swift_name("init(data:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPaymentInformationCompanion *companion __attribute__((swift_name("companion")));
- (MHSData * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSStatus * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSPaymentInformation *)doCopyData:(MHSData * _Nullable)data status:(MHSStatus * _Nullable)status __attribute__((swift_name("doCopy(data:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) MHSStatus * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentInformation.Companion")))
@interface MHSPaymentInformationCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPaymentInformationCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntent")))
@interface MHSPaymentIntent : MHSBase
- (instancetype)initWithId:(NSString * _Nullable)id amount:(MHSDouble * _Nullable)amount amountValue:(NSString * _Nullable)amountValue currency:(NSString * _Nullable)currency isLive:(MHSBoolean * _Nullable)isLive selectedMethod:(NSString * _Nullable)selectedMethod __attribute__((swift_name("init(id:amount:amountValue:currency:isLive:selectedMethod:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPaymentIntentCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MHSBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MHSPaymentIntent *)doCopyId:(NSString * _Nullable)id amount:(MHSDouble * _Nullable)amount amountValue:(NSString * _Nullable)amountValue currency:(NSString * _Nullable)currency isLive:(MHSBoolean * _Nullable)isLive selectedMethod:(NSString * _Nullable)selectedMethod __attribute__((swift_name("doCopy(id:amount:amountValue:currency:isLive:selectedMethod:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable amountValue __attribute__((swift_name("amountValue")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MHSBoolean * _Nullable isLive __attribute__((swift_name("isLive")));
@property (readonly) NSString * _Nullable selectedMethod __attribute__((swift_name("selectedMethod")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntent.Companion")))
@interface MHSPaymentIntentCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPaymentIntentCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentResult")))
@interface MHSPaymentIntentResult : MHSBase
- (instancetype)initWithIntent:(MHSPaymentIntent * _Nullable)intent transaction:(MHSPaymentTransaction * _Nullable)transaction brandSettings:(MHSBrandSettingsModel * _Nullable)brandSettings __attribute__((swift_name("init(intent:transaction:brandSettings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPaymentIntentResultCompanion *companion __attribute__((swift_name("companion")));
- (MHSPaymentIntent * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSPaymentTransaction * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSBrandSettingsModel * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSPaymentIntentResult *)doCopyIntent:(MHSPaymentIntent * _Nullable)intent transaction:(MHSPaymentTransaction * _Nullable)transaction brandSettings:(MHSBrandSettingsModel * _Nullable)brandSettings __attribute__((swift_name("doCopy(intent:transaction:brandSettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSBrandSettingsModel * _Nullable brandSettings __attribute__((swift_name("brandSettings")));
@property (readonly) MHSPaymentIntent * _Nullable intent __attribute__((swift_name("intent")));
@property (readonly) MHSPaymentTransaction * _Nullable transaction __attribute__((swift_name("transaction")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentIntentResult.Companion")))
@interface MHSPaymentIntentResultCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPaymentIntentResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethod")))
@interface MHSPaymentMethod : MHSBase
- (instancetype)initWithCheckoutIcons:(NSArray<NSString *> * _Nullable)checkoutIcons paymentMethodName:(NSString * _Nullable)paymentMethodName paymentMethod:(NSString * _Nullable)paymentMethod __attribute__((swift_name("init(checkoutIcons:paymentMethodName:paymentMethod:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPaymentMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSPaymentMethod *)doCopyCheckoutIcons:(NSArray<NSString *> * _Nullable)checkoutIcons paymentMethodName:(NSString * _Nullable)paymentMethodName paymentMethod:(NSString * _Nullable)paymentMethod __attribute__((swift_name("doCopy(checkoutIcons:paymentMethodName:paymentMethod:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable checkoutIcons __attribute__((swift_name("checkoutIcons")));
@property (readonly) NSString * _Nullable paymentMethod __attribute__((swift_name("paymentMethod")));
@property (readonly) NSString * _Nullable paymentMethodName __attribute__((swift_name("paymentMethodName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethod.Companion")))
@interface MHSPaymentMethodCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPaymentMethodCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethodsItem")))
@interface MHSPaymentMethodsItem : MHSBase
- (instancetype)initWithCheckoutIcons:(NSArray<NSString *> * _Nullable)checkoutIcons paymentMethodName:(NSString * _Nullable)paymentMethodName paymentMethod:(NSString * _Nullable)paymentMethod __attribute__((swift_name("init(checkoutIcons:paymentMethodName:paymentMethod:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPaymentMethodsItemCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSPaymentMethodsItem *)doCopyCheckoutIcons:(NSArray<NSString *> * _Nullable)checkoutIcons paymentMethodName:(NSString * _Nullable)paymentMethodName paymentMethod:(NSString * _Nullable)paymentMethod __attribute__((swift_name("doCopy(checkoutIcons:paymentMethodName:paymentMethod:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable checkoutIcons __attribute__((swift_name("checkoutIcons")));
@property (readonly) NSString * _Nullable paymentMethod __attribute__((swift_name("paymentMethod")));
@property (readonly) NSString * _Nullable paymentMethodName __attribute__((swift_name("paymentMethodName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethodsItem.Companion")))
@interface MHSPaymentMethodsItemCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPaymentMethodsItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentTransaction")))
@interface MHSPaymentTransaction : MHSBase
- (instancetype)initWithId:(NSString * _Nullable)id date:(NSString * _Nullable)date status:(NSString * _Nullable)status paymentMethod:(MHSPaymentMethod * _Nullable)paymentMethod billingData:(NSString * _Nullable)billingData customFields:(NSString * _Nullable)customFields customFormAnswers:(NSString * _Nullable)customFormAnswers __attribute__((swift_name("init(id:date:status:paymentMethod:billingData:customFields:customFormAnswers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPaymentTransactionCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSPaymentMethod * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MHSPaymentTransaction *)doCopyId:(NSString * _Nullable)id date:(NSString * _Nullable)date status:(NSString * _Nullable)status paymentMethod:(MHSPaymentMethod * _Nullable)paymentMethod billingData:(NSString * _Nullable)billingData customFields:(NSString * _Nullable)customFields customFormAnswers:(NSString * _Nullable)customFormAnswers __attribute__((swift_name("doCopy(id:date:status:paymentMethod:billingData:customFields:customFormAnswers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable billingData __attribute__((swift_name("billingData")));
@property (readonly) NSString * _Nullable customFields __attribute__((swift_name("customFields")));
@property (readonly) NSString * _Nullable customFormAnswers __attribute__((swift_name("customFormAnswers")));
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MHSPaymentMethod * _Nullable paymentMethod __attribute__((swift_name("paymentMethod")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentTransaction.Companion")))
@interface MHSPaymentTransactionCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPaymentTransactionCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status")))
@interface MHSStatus : MHSBase
- (instancetype)initWithCode:(MHSInt * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("init(code:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSStatusCompanion *companion __attribute__((swift_name("companion")));
- (MHSInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSStatus *)doCopyCode:(MHSInt * _Nullable)code message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSInt * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Companion")))
@interface MHSStatusCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction")))
@interface MHSTransaction : MHSBase
- (instancetype)initWithBillingData:(NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)billingData amount:(MHSDouble * _Nullable)amount externalActionMessage:(NSArray<MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)externalActionMessage created:(NSString * _Nullable)created amountCurrency:(NSString * _Nullable)amountCurrency id:(NSString * _Nullable)id paymentMethodName:(NSString * _Nullable)paymentMethodName status:(NSString * _Nullable)status customFields:(NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)customFields customFormAnswers:(NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)customFormAnswers __attribute__((swift_name("init(billingData:amount:externalActionMessage:created:amountCurrency:id:paymentMethodName:status:customFields:customFormAnswers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSTransactionCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)component10 __attribute__((swift_name("component10()")));
- (MHSDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MHSTransaction *)doCopyBillingData:(NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)billingData amount:(MHSDouble * _Nullable)amount externalActionMessage:(NSArray<MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)externalActionMessage created:(NSString * _Nullable)created amountCurrency:(NSString * _Nullable)amountCurrency id:(NSString * _Nullable)id paymentMethodName:(NSString * _Nullable)paymentMethodName status:(NSString * _Nullable)status customFields:(NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)customFields customFormAnswers:(NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)customFormAnswers __attribute__((swift_name("doCopy(billingData:amount:externalActionMessage:created:amountCurrency:id:paymentMethodName:status:customFields:customFormAnswers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable amountCurrency __attribute__((swift_name("amountCurrency")));
@property (readonly) NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable billingData __attribute__((swift_name("billingData")));
@property (readonly) NSString * _Nullable created __attribute__((swift_name("created")));
@property (readonly) NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable customFields __attribute__((swift_name("customFields")));
@property (readonly) NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable customFormAnswers __attribute__((swift_name("customFormAnswers")));
@property (readonly) NSArray<MHSKotlinx_serialization_jsonJsonElement *> * _Nullable externalActionMessage __attribute__((swift_name("externalActionMessage")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable paymentMethodName __attribute__((swift_name("paymentMethodName")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction.Companion")))
@interface MHSTransactionCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSTransactionCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutActionData")))
@interface MHSPayoutActionData : MHSBase
- (instancetype)initWithTransaction:(MHSPayoutTransactionData * _Nullable)transaction redirect:(MHSRedirect * _Nullable)redirect __attribute__((swift_name("init(transaction:redirect:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPayoutActionDataCompanion *companion __attribute__((swift_name("companion")));
- (MHSPayoutTransactionData * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSRedirect * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSPayoutActionData *)doCopyTransaction:(MHSPayoutTransactionData * _Nullable)transaction redirect:(MHSRedirect * _Nullable)redirect __attribute__((swift_name("doCopy(transaction:redirect:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSRedirect * _Nullable redirect __attribute__((swift_name("redirect")));
@property (readonly) MHSPayoutTransactionData * _Nullable transaction __attribute__((swift_name("transaction")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutActionData.Companion")))
@interface MHSPayoutActionDataCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPayoutActionDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutData")))
@interface MHSPayoutData : MHSBase
- (instancetype)initWithSelectedMethod:(NSString * _Nullable)selectedMethod brandSettings:(MHSBrandSettingsData * _Nullable)brandSettings nextAction:(NSString * _Nullable)nextAction intent:(MHSPayoutIntentData * _Nullable)intent actionData:(MHSPayoutActionData * _Nullable)actionData __attribute__((swift_name("init(selectedMethod:brandSettings:nextAction:intent:actionData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPayoutDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSBrandSettingsData * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSPayoutIntentData * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MHSPayoutActionData * _Nullable)component5 __attribute__((swift_name("component5()")));
- (MHSPayoutData *)doCopySelectedMethod:(NSString * _Nullable)selectedMethod brandSettings:(MHSBrandSettingsData * _Nullable)brandSettings nextAction:(NSString * _Nullable)nextAction intent:(MHSPayoutIntentData * _Nullable)intent actionData:(MHSPayoutActionData * _Nullable)actionData __attribute__((swift_name("doCopy(selectedMethod:brandSettings:nextAction:intent:actionData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSPayoutActionData * _Nullable actionData __attribute__((swift_name("actionData")));
@property (readonly) MHSBrandSettingsData * _Nullable brandSettings __attribute__((swift_name("brandSettings")));
@property (readonly) MHSPayoutIntentData * _Nullable intent __attribute__((swift_name("intent")));
@property (readonly) NSString * _Nullable nextAction __attribute__((swift_name("nextAction")));
@property (readonly) NSString * _Nullable selectedMethod __attribute__((swift_name("selectedMethod")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutData.Companion")))
@interface MHSPayoutDataCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPayoutDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutDetails")))
@interface MHSPayoutDetails : MHSBase
- (instancetype)initWithData:(MHSPayoutData * _Nullable)data status:(MHSStatus * _Nullable)status __attribute__((swift_name("init(data:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPayoutDetailsCompanion *companion __attribute__((swift_name("companion")));
- (MHSPayoutData * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSStatus * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSPayoutDetails *)doCopyData:(MHSPayoutData * _Nullable)data status:(MHSStatus * _Nullable)status __attribute__((swift_name("doCopy(data:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSPayoutData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) MHSStatus * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutDetails.Companion")))
@interface MHSPayoutDetailsCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPayoutDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutIntent")))
@interface MHSPayoutIntent : MHSBase
- (instancetype)initWithId:(NSString * _Nullable)id amount:(MHSDouble * _Nullable)amount amountCurrency:(NSString * _Nullable)amountCurrency isLive:(MHSBoolean * _Nullable)isLive maxPayoutAmount:(MHSDouble * _Nullable)maxPayoutAmount __attribute__((swift_name("init(id:amount:amountCurrency:isLive:maxPayoutAmount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPayoutIntentCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MHSDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (MHSPayoutIntent *)doCopyId:(NSString * _Nullable)id amount:(MHSDouble * _Nullable)amount amountCurrency:(NSString * _Nullable)amountCurrency isLive:(MHSBoolean * _Nullable)isLive maxPayoutAmount:(MHSDouble * _Nullable)maxPayoutAmount __attribute__((swift_name("doCopy(id:amount:amountCurrency:isLive:maxPayoutAmount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable amountCurrency __attribute__((swift_name("amountCurrency")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MHSBoolean * _Nullable isLive __attribute__((swift_name("isLive")));
@property (readonly) MHSDouble * _Nullable maxPayoutAmount __attribute__((swift_name("maxPayoutAmount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutIntent.Companion")))
@interface MHSPayoutIntentCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPayoutIntentCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutIntentData")))
@interface MHSPayoutIntentData : MHSBase
- (instancetype)initWithAmount:(MHSDouble * _Nullable)amount amountCurrency:(NSString * _Nullable)amountCurrency isLive:(MHSBoolean * _Nullable)isLive maxPayoutAmount:(MHSDouble * _Nullable)maxPayoutAmount id:(NSString * _Nullable)id formOnly:(MHSBoolean * _Nullable)formOnly payoutMethods:(NSArray<MHSPayoutMethodsItem *> * _Nullable)payoutMethods status:(NSString * _Nullable)status hideAmountSidebar:(MHSBoolean * _Nullable)hideAmountSidebar hideHeader:(MHSBoolean * _Nullable)hideHeader __attribute__((swift_name("init(amount:amountCurrency:isLive:maxPayoutAmount:id:formOnly:payoutMethods:status:hideAmountSidebar:hideHeader:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPayoutIntentDataCompanion *companion __attribute__((swift_name("companion")));
- (MHSDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSBoolean * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (MHSBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<MHSPayoutMethodsItem *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (MHSBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MHSPayoutIntentData *)doCopyAmount:(MHSDouble * _Nullable)amount amountCurrency:(NSString * _Nullable)amountCurrency isLive:(MHSBoolean * _Nullable)isLive maxPayoutAmount:(MHSDouble * _Nullable)maxPayoutAmount id:(NSString * _Nullable)id formOnly:(MHSBoolean * _Nullable)formOnly payoutMethods:(NSArray<MHSPayoutMethodsItem *> * _Nullable)payoutMethods status:(NSString * _Nullable)status hideAmountSidebar:(MHSBoolean * _Nullable)hideAmountSidebar hideHeader:(MHSBoolean * _Nullable)hideHeader __attribute__((swift_name("doCopy(amount:amountCurrency:isLive:maxPayoutAmount:id:formOnly:payoutMethods:status:hideAmountSidebar:hideHeader:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable amountCurrency __attribute__((swift_name("amountCurrency")));
@property (readonly) MHSBoolean * _Nullable formOnly __attribute__((swift_name("formOnly")));
@property (readonly) MHSBoolean * _Nullable hideAmountSidebar __attribute__((swift_name("hideAmountSidebar")));
@property (readonly) MHSBoolean * _Nullable hideHeader __attribute__((swift_name("hideHeader")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MHSBoolean * _Nullable isLive __attribute__((swift_name("isLive")));
@property (readonly) MHSDouble * _Nullable maxPayoutAmount __attribute__((swift_name("maxPayoutAmount")));
@property (readonly) NSArray<MHSPayoutMethodsItem *> * _Nullable payoutMethods __attribute__((swift_name("payoutMethods")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutIntentData.Companion")))
@interface MHSPayoutIntentDataCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPayoutIntentDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutIntentResult")))
@interface MHSPayoutIntentResult : MHSBase
- (instancetype)initWithIntent:(MHSPayoutIntent * _Nullable)intent transaction:(MHSPayoutTransaction * _Nullable)transaction brandSettings:(MHSBrandSettingsModel * _Nullable)brandSettings __attribute__((swift_name("init(intent:transaction:brandSettings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPayoutIntentResultCompanion *companion __attribute__((swift_name("companion")));
- (MHSPayoutIntent * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSPayoutTransaction * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSBrandSettingsModel * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSPayoutIntentResult *)doCopyIntent:(MHSPayoutIntent * _Nullable)intent transaction:(MHSPayoutTransaction * _Nullable)transaction brandSettings:(MHSBrandSettingsModel * _Nullable)brandSettings __attribute__((swift_name("doCopy(intent:transaction:brandSettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSBrandSettingsModel * _Nullable brandSettings __attribute__((swift_name("brandSettings")));
@property (readonly) MHSPayoutIntent * _Nullable intent __attribute__((swift_name("intent")));
@property (readonly) MHSPayoutTransaction * _Nullable transaction __attribute__((swift_name("transaction")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutIntentResult.Companion")))
@interface MHSPayoutIntentResultCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPayoutIntentResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutMethod")))
@interface MHSPayoutMethod : MHSBase
- (instancetype)initWithCheckoutIcons:(NSArray<NSString *> * _Nullable)checkoutIcons payoutMethodName:(NSString * _Nullable)payoutMethodName payoutMethod:(NSString * _Nullable)payoutMethod confirmationRequired:(MHSBoolean * _Nullable)confirmationRequired __attribute__((swift_name("init(checkoutIcons:payoutMethodName:payoutMethod:confirmationRequired:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPayoutMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<NSString *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MHSPayoutMethod *)doCopyCheckoutIcons:(NSArray<NSString *> * _Nullable)checkoutIcons payoutMethodName:(NSString * _Nullable)payoutMethodName payoutMethod:(NSString * _Nullable)payoutMethod confirmationRequired:(MHSBoolean * _Nullable)confirmationRequired __attribute__((swift_name("doCopy(checkoutIcons:payoutMethodName:payoutMethod:confirmationRequired:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable checkoutIcons __attribute__((swift_name("checkoutIcons")));
@property (readonly) MHSBoolean * _Nullable confirmationRequired __attribute__((swift_name("confirmationRequired")));
@property (readonly) NSString * _Nullable payoutMethod __attribute__((swift_name("payoutMethod")));
@property (readonly) NSString * _Nullable payoutMethodName __attribute__((swift_name("payoutMethodName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutMethod.Companion")))
@interface MHSPayoutMethodCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPayoutMethodCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutMethodsItem")))
@interface MHSPayoutMethodsItem : MHSBase
- (instancetype)initWithConfirmationRequired:(MHSBoolean * _Nullable)confirmationRequired checkoutIcons:(NSArray<NSString *> * _Nullable)checkoutIcons payoutMethodName:(NSString * _Nullable)payoutMethodName payoutMethod:(NSString * _Nullable)payoutMethod __attribute__((swift_name("init(confirmationRequired:checkoutIcons:payoutMethodName:payoutMethod:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPayoutMethodsItemCompanion *companion __attribute__((swift_name("companion")));
- (MHSBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MHSPayoutMethodsItem *)doCopyConfirmationRequired:(MHSBoolean * _Nullable)confirmationRequired checkoutIcons:(NSArray<NSString *> * _Nullable)checkoutIcons payoutMethodName:(NSString * _Nullable)payoutMethodName payoutMethod:(NSString * _Nullable)payoutMethod __attribute__((swift_name("doCopy(confirmationRequired:checkoutIcons:payoutMethodName:payoutMethod:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable checkoutIcons __attribute__((swift_name("checkoutIcons")));
@property (readonly) MHSBoolean * _Nullable confirmationRequired __attribute__((swift_name("confirmationRequired")));
@property (readonly) NSString * _Nullable payoutMethod __attribute__((swift_name("payoutMethod")));
@property (readonly) NSString * _Nullable payoutMethodName __attribute__((swift_name("payoutMethodName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutMethodsItem.Companion")))
@interface MHSPayoutMethodsItemCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPayoutMethodsItemCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutTransaction")))
@interface MHSPayoutTransaction : MHSBase
- (instancetype)initWithId:(NSString * _Nullable)id date:(NSString * _Nullable)date status:(NSString * _Nullable)status payoutMethod:(MHSPayoutMethod * _Nullable)payoutMethod maxPayoutAmount:(MHSDouble * _Nullable)maxPayoutAmount amount:(MHSDouble * _Nullable)amount amountCurrency:(NSString * _Nullable)amountCurrency customFields:(NSString * _Nullable)customFields billingData:(NSString * _Nullable)billingData customMessage:(NSString * _Nullable)customMessage __attribute__((swift_name("init(id:date:status:payoutMethod:maxPayoutAmount:amount:amountCurrency:customFields:billingData:customMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPayoutTransactionCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSPayoutMethod * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MHSDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (MHSDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MHSPayoutTransaction *)doCopyId:(NSString * _Nullable)id date:(NSString * _Nullable)date status:(NSString * _Nullable)status payoutMethod:(MHSPayoutMethod * _Nullable)payoutMethod maxPayoutAmount:(MHSDouble * _Nullable)maxPayoutAmount amount:(MHSDouble * _Nullable)amount amountCurrency:(NSString * _Nullable)amountCurrency customFields:(NSString * _Nullable)customFields billingData:(NSString * _Nullable)billingData customMessage:(NSString * _Nullable)customMessage __attribute__((swift_name("doCopy(id:date:status:payoutMethod:maxPayoutAmount:amount:amountCurrency:customFields:billingData:customMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable amountCurrency __attribute__((swift_name("amountCurrency")));
@property (readonly) NSString * _Nullable billingData __attribute__((swift_name("billingData")));
@property (readonly) NSString * _Nullable customFields __attribute__((swift_name("customFields")));
@property (readonly) NSString * _Nullable customMessage __attribute__((swift_name("customMessage")));
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MHSDouble * _Nullable maxPayoutAmount __attribute__((swift_name("maxPayoutAmount")));
@property (readonly) MHSPayoutMethod * _Nullable payoutMethod __attribute__((swift_name("payoutMethod")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutTransaction.Companion")))
@interface MHSPayoutTransactionCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPayoutTransactionCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutTransactionData")))
@interface MHSPayoutTransactionData : MHSBase
- (instancetype)initWithBillingData:(NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)billingData amount:(MHSDouble * _Nullable)amount customMessage:(NSString * _Nullable)customMessage externalActionMessage:(NSArray<MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)externalActionMessage created:(NSString * _Nullable)created customFields:(NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)customFields amountCurrency:(NSString * _Nullable)amountCurrency maxPayoutAmount:(MHSDouble * _Nullable)maxPayoutAmount payoutMethodName:(NSString * _Nullable)payoutMethodName id:(NSString * _Nullable)id status:(NSString * _Nullable)status __attribute__((swift_name("init(billingData:amount:customMessage:externalActionMessage:created:customFields:amountCurrency:maxPayoutAmount:payoutMethodName:id:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSPayoutTransactionDataCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (MHSDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MHSDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MHSPayoutTransactionData *)doCopyBillingData:(NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)billingData amount:(MHSDouble * _Nullable)amount customMessage:(NSString * _Nullable)customMessage externalActionMessage:(NSArray<MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)externalActionMessage created:(NSString * _Nullable)created customFields:(NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable)customFields amountCurrency:(NSString * _Nullable)amountCurrency maxPayoutAmount:(MHSDouble * _Nullable)maxPayoutAmount payoutMethodName:(NSString * _Nullable)payoutMethodName id:(NSString * _Nullable)id status:(NSString * _Nullable)status __attribute__((swift_name("doCopy(billingData:amount:customMessage:externalActionMessage:created:customFields:amountCurrency:maxPayoutAmount:payoutMethodName:id:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable amountCurrency __attribute__((swift_name("amountCurrency")));
@property (readonly) NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable billingData __attribute__((swift_name("billingData")));
@property (readonly) NSString * _Nullable created __attribute__((swift_name("created")));
@property (readonly) NSDictionary<NSString *, MHSKotlinx_serialization_jsonJsonElement *> * _Nullable customFields __attribute__((swift_name("customFields")));
@property (readonly) NSString * _Nullable customMessage __attribute__((swift_name("customMessage")));
@property (readonly) NSArray<MHSKotlinx_serialization_jsonJsonElement *> * _Nullable externalActionMessage __attribute__((swift_name("externalActionMessage")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) MHSDouble * _Nullable maxPayoutAmount __attribute__((swift_name("maxPayoutAmount")));
@property (readonly) NSString * _Nullable payoutMethodName __attribute__((swift_name("payoutMethodName")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayoutTransactionData.Companion")))
@interface MHSPayoutTransactionDataCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSPayoutTransactionDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardActionData")))
@interface MHSCardActionData : MHSBase
- (instancetype)initWithStatus:(NSString * _Nullable)status __attribute__((swift_name("init(status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSCardActionDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSCardActionData *)doCopyStatus:(NSString * _Nullable)status __attribute__((swift_name("doCopy(status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardActionData.Companion")))
@interface MHSCardActionDataCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSCardActionDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardData")))
@interface MHSCardData : MHSBase
- (instancetype)initWithNextAction:(NSString * _Nullable)nextAction actionData:(MHSCardActionData * _Nullable)actionData cardIntent:(MHSCardIntent * _Nullable)cardIntent brandSettings:(MHSBrandSettingsData * _Nullable)brandSettings __attribute__((swift_name("init(nextAction:actionData:cardIntent:brandSettings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSCardDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSCardActionData * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSCardIntent * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSBrandSettingsData * _Nullable)component4 __attribute__((swift_name("component4()")));
- (MHSCardData *)doCopyNextAction:(NSString * _Nullable)nextAction actionData:(MHSCardActionData * _Nullable)actionData cardIntent:(MHSCardIntent * _Nullable)cardIntent brandSettings:(MHSBrandSettingsData * _Nullable)brandSettings __attribute__((swift_name("doCopy(nextAction:actionData:cardIntent:brandSettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSCardActionData * _Nullable actionData __attribute__((swift_name("actionData")));
@property (readonly) MHSBrandSettingsData * _Nullable brandSettings __attribute__((swift_name("brandSettings")));
@property (readonly) MHSCardIntent * _Nullable cardIntent __attribute__((swift_name("cardIntent")));
@property (readonly) NSString * _Nullable nextAction __attribute__((swift_name("nextAction")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardData.Companion")))
@interface MHSCardDataCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSCardDataCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardDetails")))
@interface MHSCardDetails : MHSBase
- (instancetype)initWithData:(MHSCardData * _Nullable)data status:(MHSStatus * _Nullable)status __attribute__((swift_name("init(data:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSCardDetailsCompanion *companion __attribute__((swift_name("companion")));
- (MHSCardData * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSStatus * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSCardDetails *)doCopyData:(MHSCardData * _Nullable)data status:(MHSStatus * _Nullable)status __attribute__((swift_name("doCopy(data:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSCardData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) MHSStatus * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardDetails.Companion")))
@interface MHSCardDetailsCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSCardDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardIntent")))
@interface MHSCardIntent : MHSBase
- (instancetype)initWithId:(NSString * _Nullable)id hideAmountSidebar:(MHSBoolean * _Nullable)hideAmountSidebar hideHeader:(MHSBoolean * _Nullable)hideHeader __attribute__((swift_name("init(id:hideAmountSidebar:hideHeader:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSCardIntentCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (MHSBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSCardIntent *)doCopyId:(NSString * _Nullable)id hideAmountSidebar:(MHSBoolean * _Nullable)hideAmountSidebar hideHeader:(MHSBoolean * _Nullable)hideHeader __attribute__((swift_name("doCopy(id:hideAmountSidebar:hideHeader:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSBoolean * _Nullable hideAmountSidebar __attribute__((swift_name("hideAmountSidebar")));
@property (readonly) MHSBoolean * _Nullable hideHeader __attribute__((swift_name("hideHeader")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardIntent.Companion")))
@interface MHSCardIntentCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSCardIntentCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardIntentResult")))
@interface MHSCardIntentResult : MHSBase
- (instancetype)initWithId:(NSString * _Nullable)id status:(NSString * _Nullable)status brandSettings:(MHSBrandSettingsModel * _Nullable)brandSettings __attribute__((swift_name("init(id:status:brandSettings:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSCardIntentResultCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) MHSBrandSettingsModel * _Nullable brandSettings __attribute__((swift_name("brandSettings")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardIntentResult.Companion")))
@interface MHSCardIntentResultCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSCardIntentResultCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("PaymentService")))
@protocol MHSPaymentService
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCardInformationCardIntentId:(NSString *)cardIntentId completionHandler:(void (^)(MHSCardDetails * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCardInformation(cardIntentId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPaymentInformationPaymentIntentId:(NSString *)paymentIntentId completionHandler:(void (^)(MHSPaymentInformation * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPaymentInformation(paymentIntentId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPayoutInformationPayoutIntentId:(NSString *)payoutIntentId completionHandler:(void (^)(MHSPayoutDetails * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPayoutInformation(payoutIntentId:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthModule")))
@interface MHSAuthModule : MHSBase
- (instancetype)initWithNetworkModule:(MHSNetworkModule *)networkModule __attribute__((swift_name("init(networkModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MHSAuthUseCase *authUseCase __attribute__((swift_name("authUseCase")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkModule")))
@interface MHSNetworkModule : MHSBase
- (instancetype)initWithEnvironment:(MHSEnvironment *)environment enableLogs:(BOOL)enableLogs __attribute__((swift_name("init(environment:enableLogs:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MHSAuthService> authService __attribute__((swift_name("authService")));
@property (readonly) id<MHSPaymentService> paymentService __attribute__((swift_name("paymentService")));
@property (readonly) id<MHSSandboxService> sandboxService __attribute__((swift_name("sandboxService")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentInformationModule")))
@interface MHSPaymentInformationModule : MHSBase
- (instancetype)initWithNetworkModule:(MHSNetworkModule *)networkModule __attribute__((swift_name("init(networkModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MHSNetworkModule *networkModule __attribute__((swift_name("networkModule")));
@property (readonly) MHSPaymentUseCase *payment __attribute__((swift_name("payment")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SandboxModule")))
@interface MHSSandboxModule : MHSBase
- (instancetype)initWithNetworkModule:(MHSNetworkModule *)networkModule __attribute__((swift_name("init(networkModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MHSSandboxUseCase *sandboxUseCase __attribute__((swift_name("sandboxUseCase")));
@end;

@interface MHSBrandSettingsData (Extensions)
- (MHSBrandSettingsModel *)toModelHideHeader:(MHSBoolean * _Nullable)hideHeader hideAmountSidebar:(MHSBoolean * _Nullable)hideAmountSidebar __attribute__((swift_name("toModel(hideHeader:hideAmountSidebar:)")));
@end;

@interface MHSPaymentInformation (Extensions)
- (MHSPaymentIntentResult *)toPaymentDetails __attribute__((swift_name("toPaymentDetails()")));
- (MHSPaymentState *)toPaymentState __attribute__((swift_name("toPaymentState()")));
@end;

@interface MHSPayoutDetails (Extensions)
- (MHSPayoutIntentResult *)toPayoutResult __attribute__((swift_name("toPayoutResult()")));
- (MHSPayoutState *)toPayoutState __attribute__((swift_name("toPayoutState()")));
@end;

@interface MHSCardDetails (Extensions)
- (MHSCardIntentResult *)toCardIntentResult __attribute__((swift_name("toCardIntentResult()")));
- (MHSCardState *)toCardState __attribute__((swift_name("toCardState()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonExtensionsKt")))
@interface MHSCommonExtensionsKt : MHSBase
+ (NSArray<NSString *> *)toStringContent:(NSArray<MHSKotlinx_serialization_jsonJsonElement *> *)receiver __attribute__((swift_name("toStringContent(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowHelperKt")))
@interface MHSFlowHelperKt : MHSBase
+ (MHSCommonFlow<id> *)asCommonFlow:(id<MHSKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("asCommonFlow(_:)")));
@end;

__attribute__((swift_name("KotlinException")))
@interface MHSKotlinException : MHSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface MHSKotlinRuntimeException : MHSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MHSKotlinIllegalStateException : MHSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface MHSKotlinCancellationException : MHSKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol MHSKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(MHSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MHSKotlinUnit : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MHSKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MHSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MHSKotlinArray<T> : MHSBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MHSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MHSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MHSKotlinEnumCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol MHSKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface MHSKtor_client_coreHttpClient : MHSBase <MHSKotlinx_coroutines_coreCoroutineScope, MHSKtor_ioCloseable>
- (instancetype)initWithEngine:(id<MHSKtor_client_coreHttpClientEngine>)engine userConfig:(MHSKtor_client_coreHttpClientConfig<MHSKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (MHSKtor_client_coreHttpClient *)configBlock:(void (^)(MHSKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(MHSKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(MHSKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<MHSKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MHSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<MHSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) MHSKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<MHSKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) MHSKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) MHSKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) MHSKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) MHSKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) MHSKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MHSKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MHSKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MHSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MHSKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MHSKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MHSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MHSKotlinx_serialization_coreKSerializer <MHSKotlinx_serialization_coreSerializationStrategy, MHSKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface MHSKotlinx_serialization_jsonJsonElement : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MHSKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MHSKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MHSKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MHSKotlinCoroutineContextElement> _Nullable)getKey:(id<MHSKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MHSKotlinCoroutineContext>)minusKeyKey:(id<MHSKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MHSKotlinCoroutineContext>)plusContext:(id<MHSKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MHSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol MHSKtor_client_coreHttpClientEngine <MHSKotlinx_coroutines_coreCoroutineScope, MHSKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(MHSKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(MHSKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(MHSKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) MHSKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) MHSKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<MHSKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface MHSKtor_client_coreHttpClientEngineConfig : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property MHSKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) MHSKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface MHSKtor_client_coreHttpClientConfig<T> : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MHSKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(MHSKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<MHSKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(MHSKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(MHSKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol MHSKtor_httpHttpMessageBuilder
@required
@property (readonly) MHSKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface MHSKtor_client_coreHttpRequestBuilder : MHSBase <MHSKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MHSKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (MHSKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<MHSKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<MHSKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<MHSKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (MHSKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(MHSKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (MHSKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(MHSKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(MHSKtor_httpURLBuilder *, MHSKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<MHSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<MHSKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) MHSKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property MHSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MHSKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface MHSKtor_client_coreHttpClientCall : MHSBase <MHSKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) MHSKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<MHSKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(MHSKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(id<MHSKtor_utilsTypeInfo>)info completionHandler_:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<MHSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MHSKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<MHSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MHSKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) MHSKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol MHSKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol MHSKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(MHSKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(MHSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(MHSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(MHSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(MHSKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(MHSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(MHSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(MHSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<MHSKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MHSKotlinCoroutineContextElement <MHSKotlinCoroutineContext>
@required
@property (readonly) id<MHSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MHSKotlinAbstractCoroutineContextElement : MHSBase <MHSKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<MHSKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MHSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MHSKotlinContinuationInterceptor <MHSKotlinCoroutineContextElement>
@required
- (id<MHSKotlinContinuation>)interceptContinuationContinuation:(id<MHSKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MHSKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface MHSKotlinx_coroutines_coreCoroutineDispatcher : MHSKotlinAbstractCoroutineContextElement <MHSKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MHSKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<MHSKotlinCoroutineContext>)context block:(id<MHSKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<MHSKotlinCoroutineContext>)context block:(id<MHSKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<MHSKotlinContinuation>)interceptContinuationContinuation:(id<MHSKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<MHSKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (MHSKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(MHSKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<MHSKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface MHSKtor_utilsPipeline<TSubject, TContext> : MHSBase
- (instancetype)initWithPhase:(MHSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MHSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MHSKotlinArray<MHSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(MHSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(MHSKtor_utilsPipelinePhase *)reference phase:(MHSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(MHSKtor_utilsPipelinePhase *)reference phase:(MHSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(MHSKtor_utilsPipelinePhase *)phase block:(id<MHSKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(MHSKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<MHSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<MHSKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface MHSKtor_client_coreHttpReceivePipeline : MHSKtor_utilsPipeline<MHSKtor_client_coreHttpResponse *, MHSKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MHSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MHSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MHSKotlinArray<MHSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface MHSKtor_client_coreHttpRequestPipeline : MHSKtor_utilsPipeline<id, MHSKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MHSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MHSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MHSKotlinArray<MHSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface MHSKtor_client_coreHttpResponsePipeline : MHSKtor_utilsPipeline<MHSKtor_client_coreHttpResponseContainer *, MHSKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MHSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MHSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MHSKotlinArray<MHSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface MHSKtor_client_coreHttpSendPipeline : MHSKtor_utilsPipeline<id, MHSKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MHSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MHSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MHSKotlinArray<MHSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MHSKotlinx_serialization_coreEncoder
@required
- (id<MHSKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MHSKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MHSKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<MHSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MHSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MHSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MHSKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<MHSKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MHSKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MHSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MHSKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MHSKotlinx_serialization_coreDecoder
@required
- (id<MHSKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MHSKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MHSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MHSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MHSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MHSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface MHSKotlinx_serialization_jsonJsonElementCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MHSKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface MHSKtor_client_coreHttpRequestData : MHSBase
- (instancetype)initWithUrl:(MHSKtor_httpUrl *)url method:(MHSKtor_httpHttpMethod *)method headers:(id<MHSKtor_httpHeaders>)headers body:(MHSKtor_httpOutgoingContent *)body executionContext:(id<MHSKotlinx_coroutines_coreJob>)executionContext attributes:(id<MHSKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<MHSKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MHSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MHSKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<MHSKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<MHSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MHSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MHSKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface MHSKtor_client_coreHttpResponseData : MHSBase
- (instancetype)initWithStatusCode:(MHSKtor_httpHttpStatusCode *)statusCode requestTime:(MHSKtor_utilsGMTDate *)requestTime headers:(id<MHSKtor_httpHeaders>)headers version:(MHSKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<MHSKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<MHSKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<MHSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MHSKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) MHSKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) MHSKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) MHSKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface MHSKtor_client_coreProxyConfig : MHSBase
- (instancetype)initWithUrl:(MHSKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MHSKotlinNothing : MHSBase
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol MHSKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(MHSKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) MHSKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface MHSKtor_utilsStringValuesBuilder : MHSBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<MHSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<MHSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<MHSKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MHSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property BOOL built __attribute__((swift_name("built")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) MHSMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface MHSKtor_httpHeadersBuilder : MHSKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MHSKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface MHSKtor_client_coreHttpRequestBuilderCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface MHSKtor_httpURLBuilder : MHSBase
- (instancetype)initWithProtocol:(MHSKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(MHSKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (MHSKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (MHSKtor_httpURLBuilder *)pathComponents:(MHSKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (MHSKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) MHSKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property MHSKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol MHSKotlinx_coroutines_coreJob <MHSKotlinCoroutineContextElement>
@required
- (id<MHSKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<MHSKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(MHSKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (MHSKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<MHSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(MHSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<MHSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(MHSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(MHSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<MHSKotlinx_coroutines_coreJob>)plusOther_:(id<MHSKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<MHSKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<MHSKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface MHSKtor_httpHttpMethod : MHSBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MHSKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface MHSKtor_client_coreHttpClientCallCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((deprecated("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol MHSKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(MHSKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(MHSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(MHSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(MHSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(MHSKtor_ioIoBuffer *)dst completionHandler:(void (^)(MHSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(MHSKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(MHSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(MHSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(MHSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(MHSBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(MHSByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(MHSDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(MHSFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(MHSKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(MHSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(MHSKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(MHSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(MHSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(MHSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(MHSInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(MHSLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(MHSKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(MHSKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<MHSKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(MHSShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<MHSKotlinSuspendFunction1>)consumer completionHandler:(void (^)(MHSKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<MHSKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(MHSBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) MHSKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property MHSKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsTypeInfo")))
@protocol MHSKtor_utilsTypeInfo
@required
@property (readonly) id<MHSKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<MHSKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<MHSKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface MHSKtor_client_coreTypeInfo : MHSBase <MHSKtor_utilsTypeInfo>
- (instancetype)initWithType:(id<MHSKotlinKClass>)type reifiedType:(id<MHSKotlinKType>)reifiedType kotlinType:(id<MHSKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("This was moved to another package.")));
- (id<MHSKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<MHSKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<MHSKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHSKtor_client_coreTypeInfo *)doCopyType:(id<MHSKotlinKClass>)type reifiedType:(id<MHSKotlinKType>)reifiedType kotlinType:(id<MHSKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MHSKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<MHSKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<MHSKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol MHSKtor_httpHttpMessage
@required
@property (readonly) id<MHSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol MHSKtor_client_coreHttpRequest <MHSKtor_httpHttpMessage, MHSKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<MHSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MHSKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) MHSKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) MHSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MHSKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface MHSKtor_client_coreHttpResponse : MHSBase <MHSKtor_httpHttpMessage, MHSKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<MHSKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) MHSKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) MHSKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) MHSKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) MHSKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface MHSKtor_utilsAttributeKey<T> : MHSBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol MHSKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MHSKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface MHSKotlinAbstractCoroutineContextKey<B, E> : MHSBase <MHSKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<MHSKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<MHSKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface MHSKotlinx_coroutines_coreCoroutineDispatcherKey : MHSKotlinAbstractCoroutineContextKey<id<MHSKotlinContinuationInterceptor>, MHSKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<MHSKotlinCoroutineContextKey>)baseKey safeCast:(id<MHSKotlinCoroutineContextElement> _Nullable (^)(id<MHSKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol MHSKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface MHSKtor_utilsPipelinePhase : MHSBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol MHSKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol MHSKotlinSuspendFunction2 <MHSKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface MHSKtor_client_coreHttpReceivePipelinePhases : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MHSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MHSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface MHSKtor_client_coreHttpRequestPipelinePhases : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MHSKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) MHSKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) MHSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) MHSKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface MHSKtor_client_coreHttpResponsePipelinePhases : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MHSKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) MHSKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) MHSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) MHSKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface MHSKtor_client_coreHttpResponseContainer : MHSBase
- (instancetype)initWithExpectedType:(id<MHSKtor_utilsTypeInfo>)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithExpectedType:(MHSKtor_client_coreTypeInfo *)expectedType response_:(id)response __attribute__((swift_name("init(expectedType:response_:)"))) __attribute__((objc_designated_initializer));
- (MHSKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (MHSKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(MHSKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface MHSKtor_client_coreHttpSendPipelinePhases : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MHSKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) MHSKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) MHSKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) MHSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MHSKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MHSKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MHSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MHSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MHSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MHSKotlinx_serialization_coreSerializersModule : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<MHSKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<MHSKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MHSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MHSKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<MHSKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MHSKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<MHSKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MHSKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol MHSKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MHSKotlinx_serialization_coreSerialKind : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MHSKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MHSKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MHSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MHSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MHSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MHSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface MHSKtor_httpUrl : MHSBase
- (instancetype)initWithProtocol:(MHSKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<MHSKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (MHSKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<MHSKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (MHSKtor_httpUrl *)doCopyProtocol:(MHSKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<MHSKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<MHSKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) MHSKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol MHSKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MHSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol MHSKtor_httpHeaders <MHSKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface MHSKtor_httpOutgoingContent : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)getPropertyKey:(MHSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(MHSKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) MHSLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) MHSKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<MHSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MHSKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface MHSKtor_httpHttpStatusCode : MHSBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MHSKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (MHSKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface MHSKtor_utilsGMTDate : MHSBase <MHSKotlinComparable>
@property (class, readonly, getter=companion) MHSKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MHSKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (MHSKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (MHSKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (MHSKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(MHSKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(MHSKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) MHSKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) MHSKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface MHSKtor_httpHttpProtocolVersion : MHSBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (MHSKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol MHSKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface MHSKtor_httpURLProtocol : MHSBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (MHSKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface MHSKtor_httpParametersBuilder : MHSKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size urlEncodingOption:(MHSKtor_httpUrlEncodingOption *)urlEncodingOption __attribute__((swift_name("init(size:urlEncodingOption:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MHSKtor_httpParameters>)build __attribute__((swift_name("build()")));
@property MHSKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface MHSKtor_httpURLBuilderCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MHSKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol MHSKotlinx_coroutines_coreChildHandle <MHSKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(MHSKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<MHSKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol MHSKotlinx_coroutines_coreChildJob <MHSKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<MHSKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol MHSKotlinSequence
@required
- (id<MHSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol MHSKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<MHSKotlinx_coroutines_coreSelectInstance>)select block:(id<MHSKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface MHSKtor_httpHttpMethodCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (MHSKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<MHSKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) MHSKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) MHSKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) MHSKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) MHSKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) MHSKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) MHSKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) MHSKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface MHSKtor_ioMemory : MHSBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(MHSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(MHSKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (MHSKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (MHSKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface MHSKtor_ioBuffer : MHSBase
- (instancetype)initWithMemory:(MHSKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (MHSKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(MHSKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((deprecated("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) MHSKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface MHSKtor_ioChunkBuffer : MHSKtor_ioBuffer
- (instancetype)initWithMemory:(MHSKtor_ioMemory *)memory origin:(MHSKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<MHSKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(MHSKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (MHSKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (MHSKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<MHSKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) MHSKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) MHSKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol MHSKtor_ioInput <MHSKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(MHSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property MHSKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol MHSKotlinAppendable
@required
- (id<MHSKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<MHSKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<MHSKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol MHSKtor_ioOutput <MHSKotlinAppendable, MHSKtor_ioCloseable>
@required
- (id<MHSKotlinAppendable>)appendCsq:(MHSKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property MHSKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface MHSKtor_ioIoBuffer : MHSKtor_ioChunkBuffer <MHSKtor_ioInput, MHSKtor_ioOutput>
- (instancetype)initWithMemory:(MHSKtor_ioMemory *)memory origin:(MHSKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(MHSKtor_ioMemory *)memory origin:(MHSKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<MHSKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKtor_ioIoBufferCompanion *companion __attribute__((swift_name("companion")));
- (id<MHSKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<MHSKotlinAppendable>)appendCsq:(MHSKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<MHSKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<MHSKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(MHSKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (MHSKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (MHSKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(MHSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(MHSInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<MHSKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(MHSInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property MHSKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MHSKotlinByteArray : MHSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MHSByte *(^)(MHSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MHSKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface MHSKtor_ioAbstractInput : MHSBase <MHSKtor_ioInput>
- (instancetype)initWithHead:(MHSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<MHSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("AbstractInput is deprecated and will be merged with Input in 2.0.0")));
@property (class, readonly, getter=companion) MHSKtor_ioAbstractInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (MHSKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(MHSKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (MHSKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(MHSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(MHSKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(MHSKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (MHSKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<MHSKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<MHSKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property MHSKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<MHSKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface MHSKtor_ioByteReadPacketBase : MHSKtor_ioAbstractInput
- (instancetype)initWithHead:(MHSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<MHSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@property (class, readonly, getter=companion) MHSKtor_ioByteReadPacketBaseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface MHSKtor_ioByteReadPacketPlatformBase : MHSKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(MHSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<MHSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface MHSKtor_ioByteReadPacket : MHSKtor_ioByteReadPacketPlatformBase <MHSKtor_ioInput>
- (instancetype)initWithHead:(MHSKtor_ioChunkBuffer *)head pool:(id<MHSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(MHSKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<MHSKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (MHSKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (MHSKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(MHSKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol MHSKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (MHSKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol MHSKotlinSuspendFunction1 <MHSKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface MHSKtor_ioByteOrder : MHSKotlinEnum<MHSKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKtor_ioByteOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MHSKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) MHSKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (MHSKotlinArray<MHSKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol MHSKotlinKType
@required
@property (readonly) NSArray<MHSKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<MHSKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MHSKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MHSKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MHSKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol MHSKotlinKClass <MHSKotlinKDeclarationContainer, MHSKotlinKAnnotatedElement, MHSKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MHSKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MHSKotlinKClass>)kClass provider:(id<MHSKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MHSKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MHSKotlinKClass>)kClass serializer:(id<MHSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MHSKotlinKClass>)baseClass actualClass:(id<MHSKotlinKClass>)actualClass actualSerializer:(id<MHSKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MHSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MHSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MHSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MHSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MHSKotlinKClass>)baseClass defaultSerializerProvider:(id<MHSKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol MHSKtor_httpParameters <MHSKtor_utilsStringValues>
@required
@property (readonly) MHSKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface MHSKtor_httpUrlCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface MHSKtor_httpHeaderValueWithParameters : MHSBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MHSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<MHSKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface MHSKtor_httpContentType : MHSKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<MHSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MHSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(MHSKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (MHSKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (MHSKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface MHSKtor_httpHttpStatusCodeCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (MHSKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) MHSKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) MHSKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) MHSKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) MHSKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) MHSKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) MHSKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) MHSKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) MHSKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) MHSKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) MHSKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) MHSKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) MHSKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) MHSKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) MHSKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) MHSKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) MHSKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) MHSKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) MHSKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) MHSKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) MHSKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) MHSKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) MHSKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) MHSKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) MHSKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) MHSKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) MHSKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) MHSKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) MHSKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) MHSKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) MHSKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) MHSKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) MHSKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) MHSKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) MHSKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) MHSKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) MHSKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) MHSKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) MHSKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) MHSKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) MHSKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) MHSKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) MHSKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) MHSKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) MHSKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) MHSKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) MHSKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) MHSKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) MHSKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) MHSKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) MHSKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) MHSKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) MHSKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<MHSKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface MHSKtor_utilsGMTDateCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface MHSKtor_utilsWeekDay : MHSKotlinEnum<MHSKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MHSKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) MHSKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) MHSKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) MHSKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) MHSKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) MHSKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) MHSKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (MHSKotlinArray<MHSKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface MHSKtor_utilsMonth : MHSKotlinEnum<MHSKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MHSKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MHSKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) MHSKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) MHSKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) MHSKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) MHSKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) MHSKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) MHSKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) MHSKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) MHSKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) MHSKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) MHSKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) MHSKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (MHSKotlinArray<MHSKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface MHSKtor_httpHttpProtocolVersionCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (MHSKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (MHSKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) MHSKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) MHSKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) MHSKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) MHSKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) MHSKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface MHSKtor_httpURLProtocolCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (MHSKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) MHSKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) MHSKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) MHSKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) MHSKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) MHSKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, MHSKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrlEncodingOption")))
@interface MHSKtor_httpUrlEncodingOption : MHSKotlinEnum<MHSKtor_httpUrlEncodingOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MHSKtor_httpUrlEncodingOption *default_ __attribute__((swift_name("default_")));
@property (class, readonly) MHSKtor_httpUrlEncodingOption *keyOnly __attribute__((swift_name("keyOnly")));
@property (class, readonly) MHSKtor_httpUrlEncodingOption *valueOnly __attribute__((swift_name("valueOnly")));
@property (class, readonly) MHSKtor_httpUrlEncodingOption *noEncoding __attribute__((swift_name("noEncoding")));
+ (MHSKotlinArray<MHSKtor_httpUrlEncodingOption *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol MHSKotlinx_coroutines_coreParentJob <MHSKotlinx_coroutines_coreJob>
@required
- (MHSKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol MHSKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<MHSKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(MHSKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(MHSKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(MHSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<MHSKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol MHSKotlinSuspendFunction0 <MHSKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface MHSKtor_ioMemoryCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface MHSKtor_ioBufferCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol MHSKtor_ioObjectPool <MHSKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface MHSKtor_ioChunkBufferCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<MHSKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<MHSKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface MHSKotlinCharArray : MHSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(MHSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MHSKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer.Companion")))
@interface MHSKtor_ioIoBufferCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_ioIoBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_ioIoBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<MHSKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<MHSKtor_ioObjectPool> NoPool __attribute__((swift_name("NoPool")));
@property (readonly) id<MHSKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface MHSKotlinByteIterator : MHSBase <MHSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MHSByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioAbstractInput.Companion")))
@interface MHSKtor_ioAbstractInputCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_ioAbstractInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacketBase.Companion")))
@interface MHSKtor_ioByteReadPacketBaseCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_ioByteReadPacketBaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty"))) __attribute__((unavailable("Use ByteReadPacket.Empty instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface MHSKtor_ioByteReadPacketCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MHSKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder.Companion")))
@interface MHSKtor_ioByteOrderCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_ioByteOrderCompanion *shared __attribute__((swift_name("shared")));
- (MHSKtor_ioByteOrder *)nativeOrder __attribute__((swift_name("nativeOrder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface MHSKotlinKTypeProjection : MHSBase
- (instancetype)initWithVariance:(MHSKotlinKVariance * _Nullable)variance type:(id<MHSKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHSKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (MHSKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<MHSKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHSKotlinKTypeProjection *)doCopyVariance:(MHSKotlinKVariance * _Nullable)variance type:(id<MHSKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MHSKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) MHSKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface MHSKtor_httpHeaderValueParam : MHSBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MHSKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface MHSKtor_httpHeaderValueWithParametersCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<MHSKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface MHSKtor_httpContentTypeCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (MHSKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) MHSKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface MHSKtor_utilsWeekDayCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (MHSKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MHSKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface MHSKtor_utilsMonthCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (MHSKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MHSKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface MHSKotlinx_coroutines_coreAtomicDesc : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MHSKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(MHSKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property MHSKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface MHSKotlinx_coroutines_coreOpDescriptor : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(MHSKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface MHSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : MHSKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(MHSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) MHSKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface MHSKotlinCharIterator : MHSBase <MHSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface MHSKotlinKVariance : MHSKotlinEnum<MHSKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MHSKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) MHSKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) MHSKotlinKVariance *out __attribute__((swift_name("out")));
+ (MHSKotlinArray<MHSKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface MHSKotlinKTypeProjectionCompanion : MHSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHSKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (MHSKotlinKTypeProjection *)contravariantType:(id<MHSKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (MHSKotlinKTypeProjection *)covariantType:(id<MHSKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (MHSKotlinKTypeProjection *)invariantType:(id<MHSKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) MHSKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface MHSKotlinx_coroutines_coreAtomicOp<__contravariant T> : MHSKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) MHSKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface MHSKotlinx_coroutines_coreLockFreeLinkedListNode : MHSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(MHSBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(MHSBoolean *(^)(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(MHSBoolean *(^)(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(MHSBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (MHSKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<MHSKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (MHSKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<MHSKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(MHSBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface MHSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : MHSKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MHSKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MHSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(MHSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(MHSKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MHSKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface MHSKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : MHSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MHSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MHSKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface MHSKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : MHSKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MHSKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MHSKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MHSKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MHSKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
