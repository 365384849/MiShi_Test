#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3, T4, T5, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		void* params[6] = { p1, p2, &p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4*, T5, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6)
	{
		void* params[6] = { p1, p2, p3, p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, params[5]);
	}
};

// System.Action`1<WeChatWASM.GeneralCallbackResult>
struct Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43;
// System.Action`1<WeChatWASM.OnAddToFavoritesListenerResult>
struct Action_1_tFACB83D1B69D3C7799F895FFA2CF6AC3ABB68AA7;
// System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>
struct Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288;
// System.Action`1<WeChatWASM.OnCopyUrlListenerResult>
struct Action_1_tD085D06D4D15848D0E0A50B744389569CEABB567;
// System.Action`1<WeChatWASM.OnGameLiveStateChangeCallbackResponse>
struct Action_1_t341C6DF1F77D0B03A3629529DB9BFA2FE6C15E2A;
// System.Action`1<WeChatWASM.OnHandoffListenerResult>
struct Action_1_t568C79DE7FA71ADFBEA3492F62C9AE1A2425F1D0;
// System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>
struct Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F;
// System.Action`1<WeChatWASM.OnShareTimelineListenerResult>
struct Action_1_t5C550D57FAADE0F9095D4F9E5B5F8B5238BD5FFA;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>
struct Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F;
// System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>
struct Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2;
// System.Action`1<WeChatWASM.UploadFileSuccessCallbackResult>
struct Action_1_tB69D9705C232593C9E9F4F7DB8397BF142DB4938;
// System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>
struct Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E;
// System.Action`1<WeChatWASM.WXShareAppMessageParam>
struct Action_1_t047EB11852CB25578DE954F221BEBC07FBC73215;
// System.Action`1<WeChatWASM.WXUserInfoResponse>
struct Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E;
// System.Action`1<WeChatWASM.WXVideoProgress>
struct Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007;
// System.Action`1<WeChatWASM.WXVideoTimeUpdate>
struct Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>
struct Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>
struct Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>
struct Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>
struct Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>
struct Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>
struct Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>
struct Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUserInfoButton>
struct Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXVideo>
struct Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>
struct KeyCollection_tD4A362ED0BFFDD335CFBA956FCD6F0D1B9FDB7BF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>
struct KeyCollection_t854598BC80DC5B69A77AD2F86AD4C3EB83A2298B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>
struct KeyCollection_t9DE268D077E10C5C603F7464DD41D46D8C557165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<System.String>>
struct KeyCollection_tDC9905DAB7B3D843994B8AF143B97B5C1D5B6936;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>
struct KeyCollection_tDD6D0F41479DE9184C078C878B44B4B82D90CF95;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>
struct KeyCollection_tF9706AC4C802BB17C70DAD15966A69DAD506AD53;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>
struct KeyCollection_tD889EF214A68A4A9809CBBE6BB83A52B96721259;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,WeChatWASM.WXUserInfoButton>
struct KeyCollection_tF1CCD925E62707E3419C9A42E09D5BB08CCE538B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,WeChatWASM.WXVideo>
struct KeyCollection_t66EF1284D87D1B6B2129C83E8D26BE1902FD77AE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>
struct ValueCollection_t742174BD0FC0BC700DD7CBF7F4A15D67764F7FFA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>
struct ValueCollection_tC735BF8754AC84552EF37113645FECD2284D355F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>
struct ValueCollection_t8C40B7C153A4C0DA59844AD951DC2F71CFC139C4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<System.String>>
struct ValueCollection_t1BFE2D9246539713D76621C5D038C86BA2DA3F76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>
struct ValueCollection_t4E946C1BE503A2BEAACFF4E6B28694711BA89CC1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>
struct ValueCollection_t3578BB4D75B8C180D9A16E5D2BF519281655A28E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>
struct ValueCollection_t64E10112CF5B34F12C71C9DA1C4828CBA1B7A2CB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,WeChatWASM.WXUserInfoButton>
struct ValueCollection_t83039C0951FCEB58045D0A27FEA7229AF7BDBBD3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,WeChatWASM.WXVideo>
struct ValueCollection_tB1F94D3873F01E5013055B70A0C4821FC8D97804;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>[]
struct EntryU5BU5D_tB3DAE1FBB1A4414B9465D8524F22FCC95B5297C7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>[]
struct EntryU5BU5D_t5A97F03AF24F475DCC6EFE65D7BE28AF0DA8E48D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>[]
struct EntryU5BU5D_tD4C572571D6B585B11C4C3C002AC935122E97427;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<System.String>>[]
struct EntryU5BU5D_t17B4B52BA0C980E519D97C6C5B12E911F4167F02;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>[]
struct EntryU5BU5D_t1C24AA84FF9C2E7B788A709C25453E7DC9713B40;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>[]
struct EntryU5BU5D_tA9121881E1BFB3A5025203EEB9A9BDA7A50F24E4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>[]
struct EntryU5BU5D_t680968BBEACFF3967F7A37AE6ACBB5580867EBE8;
// System.Collections.Generic.Dictionary`2/Entry<System.String,WeChatWASM.WXUserInfoButton>[]
struct EntryU5BU5D_t2ABCFBE476A13729A1A612904551D5FFCB2574E9;
// System.Collections.Generic.Dictionary`2/Entry<System.String,WeChatWASM.WXVideo>[]
struct EntryU5BU5D_t085A428986528F248F3A8D7148B970DB1F1EFBE9;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// WeChatWASM.FrameDataOptions
struct FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5;
// WeChatWASM.GeneralCallbackResult
struct GeneralCallbackResult_t6C41FFE06D0525B71B07886F508EA8255A7BDEE6;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// WeChatWASM.OnAddToFavoritesListenerResult
struct OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4;
// WeChatWASM.OnCheckForUpdateListenerResult
struct OnCheckForUpdateListenerResult_tDC5B675991479F4EE08E762804907DADF519804F;
// WeChatWASM.OnCopyUrlListenerResult
struct OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6;
// WeChatWASM.OnGameLiveStateChangeCallbackResponse
struct OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084;
// WeChatWASM.OnHandoffListenerResult
struct OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704;
// WeChatWASM.OnHeadersReceivedCallbackResult
struct OnHeadersReceivedCallbackResult_tE33C1DD76C625799D787364F0DFA4A9E4A407B3E;
// WeChatWASM.OnShareTimelineListenerResult
struct OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753;
// System.String
struct String_t;
// WeChatWASM.TCPSocketBindWifiOption
struct TCPSocketBindWifiOption_tC91FCB7A5D38D2B3671CA08805A5117101D9C3E5;
// WeChatWASM.TCPSocketConnectOption
struct TCPSocketConnectOption_t3B8F028C07129833BFE34DF0999A7A5C09EFFB58;
// WeChatWASM.TCPSocketOnMessageListenerResult
struct TCPSocketOnMessageListenerResult_tDAD1CCB23AB64481EA3514599C685F763C6BD427;
// WeChatWASM.UDPSocketBindParam
struct UDPSocketBindParam_t16B4485DE814711603E631D3264BFD32D47BCEE8;
// WeChatWASM.UDPSocketConnectOption
struct UDPSocketConnectOption_t00C3ADCBF42495B5FEB5120517985DFD7E0B672E;
// WeChatWASM.UDPSocketOnMessageListenerResult
struct UDPSocketOnMessageListenerResult_t4D37BDB82588B91504A08629386834312C1AA06D;
// WeChatWASM.UDPSocketSendOption
struct UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38;
// WeChatWASM.UDPSocketSendParam
struct UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573;
// WeChatWASM.UploadFileOption
struct UploadFileOption_tBC8740BD13F675FCD3A5FAC81667F7516B51CA45;
// WeChatWASM.UploadFileSuccessCallbackResult
struct UploadFileSuccessCallbackResult_t8C8F2FA3D3BD2388E024B212B1B48116286068D4;
// WeChatWASM.UploadTaskOnProgressUpdateCallbackResult
struct UploadTaskOnProgressUpdateCallbackResult_tE5CF9A44C8B21161D5538B1F67C26AF3E3A79CE3;
// WeChatWASM.VideoDecoderStartOption
struct VideoDecoderStartOption_tC19674BC1FCCBCA5BD4CE3C6203D6952424C460C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WeChatWASM.WXCreateVideoParam
struct WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA;
// WeChatWASM.WXShareAppMessageParam
struct WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5;
// WeChatWASM.WXTCPSocket
struct WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9;
// WeChatWASM.WXUDPSocket
struct WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F;
// WeChatWASM.WXUpdateManager
struct WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5;
// WeChatWASM.WXUploadTask
struct WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5;
// WeChatWASM.WXUserInfoButton
struct WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF;
// WeChatWASM.WXUserInfoResponse
struct WXUserInfoResponse_t55833477F8130AFBD41E5C2926F6C584945A669F;
// WeChatWASM.WXVideo
struct WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39;
// WeChatWASM.WXVideoCallback
struct WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E;
// WeChatWASM.WXVideoDecoder
struct WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5;
// WeChatWASM.WXVideoProgress
struct WXVideoProgress_t6B101DAB37AD015E930CFCC77B30D36C2C0BF69D;
// WeChatWASM.WXVideoTimeUpdate
struct WXVideoTimeUpdate_tA62D4525E528FA9B0082D350F5F816C2F0C296EA;
// WeChatWASM.WXSDKManagerHandler/OnBLECharacteristicValueChangeCallback
struct OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A;
// WeChatWASM.WXSDKManagerHandler/OnGyroscopeChangeCallback
struct OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA;
// WeChatWASM.WXSDKManagerHandler/OnTouchCancelCallback
struct OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734;
// WeChatWASM.WXSDKManagerHandler/OnTouchEndCallback
struct OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823;
// WeChatWASM.WXSDKManagerHandler/OnTouchMoveCallback
struct OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311;
// WeChatWASM.WXSDKManagerHandler/OnTouchStartCallback
struct OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6;
// WeChatWASM.WXSDKManagerHandler/StartGyroscopeCallback
struct StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59;
// WeChatWASM.WXSDKManagerHandler/StopGyroscopeCallback
struct StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2;
// WeChatWASM.WXSDKManagerHandler/TCPSocketOnMessageCallback
struct TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE;
// WeChatWASM.WXSDKManagerHandler/UDPSocketOnMessageCallback
struct UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217;
// WeChatWASM.WXSDKManagerHandler/f
struct f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UDPSocketBindParam_t16B4485DE814711603E631D3264BFD32D47BCEE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXVideoProgress_t6B101DAB37AD015E930CFCC77B30D36C2C0BF69D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXVideoTimeUpdate_tA62D4525E528FA9B0082D350F5F816C2F0C296EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral004C2A0BB12589B1DD689AE6E3B5BEEA5596B2A7;
IL2CPP_EXTERN_C String_t* _stringLiteral03C18C558CF457131D145134BB121B4C678C5B07;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral1051ECAD376DFA7401D0FAA334972924BD291944;
IL2CPP_EXTERN_C String_t* _stringLiteral175E248CCEB05743C6D87BCE20916CC55A49D0EC;
IL2CPP_EXTERN_C String_t* _stringLiteral205DE8E4F1ED52D3B7D39F5659F1B19CCBE3EE3E;
IL2CPP_EXTERN_C String_t* _stringLiteral223859FFE6A8F64589BA5405D5DC14FC573C3C8F;
IL2CPP_EXTERN_C String_t* _stringLiteral254793765998428FB3B3D993D256A2C1D469F960;
IL2CPP_EXTERN_C String_t* _stringLiteral2A743A69B4CBFB7918724BF11011673E3D366C14;
IL2CPP_EXTERN_C String_t* _stringLiteral2E361FA2D2C11E971A37AC44DB1445C3121CABE2;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
IL2CPP_EXTERN_C String_t* _stringLiteral3BA9B655CAE0C5D3811088970E332CE66C5D74E1;
IL2CPP_EXTERN_C String_t* _stringLiteral41E624AD04B11E241FA648D87AEC081EBEC7C39C;
IL2CPP_EXTERN_C String_t* _stringLiteral4EA55AEB63A32FC37139631289BE3F0FD33E7F0F;
IL2CPP_EXTERN_C String_t* _stringLiteral5B579C708C0DBDD5A98B2CAA0B6936FB6B974B5B;
IL2CPP_EXTERN_C String_t* _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral6B5B8401D2C97A071FA67165E3E8389490441592;
IL2CPP_EXTERN_C String_t* _stringLiteral6F45AE1F6DDDD4F0B29149B9126317C62C36E5A5;
IL2CPP_EXTERN_C String_t* _stringLiteral70FC9A72177735B2BA8C44B713453E72A9AA40DE;
IL2CPP_EXTERN_C String_t* _stringLiteral76BF676321AA7F5594644D8EA78EC6C94915979A;
IL2CPP_EXTERN_C String_t* _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5;
IL2CPP_EXTERN_C String_t* _stringLiteral800C762D9EF92B399EC87C776239043ACEEC0717;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral8C1F89F7A8AA971167E226D545A9F4A38EA561EB;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9387EC662A2AD8BACAECCC449E4303553792ADEA;
IL2CPP_EXTERN_C String_t* _stringLiteral95D05BE86B72BFBCBBA559FE3A7C9F18044A576F;
IL2CPP_EXTERN_C String_t* _stringLiteral96476BEC900CD13BC4B8CD24C1C320EF8094EAAA;
IL2CPP_EXTERN_C String_t* _stringLiteral97D446D465B993343D90B955F615249017E0E034;
IL2CPP_EXTERN_C String_t* _stringLiteral9E0901DEA8B8A6639634C3D802AC5DFB8E99787D;
IL2CPP_EXTERN_C String_t* _stringLiteralA67DE3052A4352D0732DAE6F7E6F2FC233B0F2DE;
IL2CPP_EXTERN_C String_t* _stringLiteralAC20BC62F1B89EA3936498FBBCAEA84A009E3E8F;
IL2CPP_EXTERN_C String_t* _stringLiteralAD7E1BD1133CB54CB1C7DC65CE70CE9FB0C7C9B0;
IL2CPP_EXTERN_C String_t* _stringLiteralAE192CF13EEECEA2E62FE769E4FE52917CF511D5;
IL2CPP_EXTERN_C String_t* _stringLiteralB7B5F864199250592088892A9A178C1427EE0735;
IL2CPP_EXTERN_C String_t* _stringLiteralB7CA6B7A7F82DA89BFD1F6A227BE9102B12D67B3;
IL2CPP_EXTERN_C String_t* _stringLiteralC386789464914AFAB69C70A3E07C88FB68EDB4DB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18;
IL2CPP_EXTERN_C String_t* _stringLiteralDE03A81F764801D59F9819AE7451E497C9A38A5C;
IL2CPP_EXTERN_C String_t* _stringLiteralE6397801378989F81E35A20D03375FDF9C4706CA;
IL2CPP_EXTERN_C String_t* _stringLiteralE84A2EF4FDE3EA91B3FC57E8D2FA86F09111FABD;
IL2CPP_EXTERN_C String_t* _stringLiteralE9A1A568BCEBAB59FDA3EFED96062B04F39F071A;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84;
IL2CPP_EXTERN_C String_t* _stringLiteralF1E3744356EAC23657287E3F9EDA22262C5228C4;
IL2CPP_EXTERN_C String_t* _stringLiteralFA85CE3D3C5BC3E77208A4969E56C063FAED867E;
IL2CPP_EXTERN_C String_t* _stringLiteralFC2C1E33BD53389A0851A59E94138ABF887C58FE;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m3D4168603391DBC0E8F9F019E06C9D20AE76FE46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6922469CABDB27D50E869F1C5A1DAEF6B59DC429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9ABBCEA1FF46C4C41BD2E82A15DE72CE698549FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA902F719881A6B357915D5CBC47A2D561E6431C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mCA46B88F063E9105EDE4ADCA61BD5620782617C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF834A6B3C5FC5EE8FA49D0F5E125F51ABAD3C290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFD0BDBF0FBD93A5B6D3A93BED19E0AF801BA9C0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m0EB5AE22E4E425748236796EED68F44C9AE382E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m41F0BBECEA372B722B6F6513BCCA53951FA69785_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m444C48C6876AD19B024967BFC9039A0F19ACD510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6E93EDC819BF353AA23344BE87B5BE9CA5BF9ECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mA5F78BF5B052507D70C24550C1358CD64B35A6ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mDCAD333899C2905C10EEFFE8FBFE530AFCAB3108_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m4F1C6E2C77A0EB190D3862BC491F54D175F27003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mBCB7D1686DC1DA026B45D494330A165A3E6B675E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m03E62C4BCDCCE34440F2C7B98E80A0C8258D5E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m34EC61033AF223C17A96A436ED4655F252515CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m69627E54B7132978A925141A8609AAAA211D7A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7A327307DD8BD9ABA6BACCA449BBBD5EB9A62A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7F604022A4B2B1B3B3F6A0D7537B7614B8D3F0CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m83018A79BFFC223A8FD324F9316ABC5241B79996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCB6188789BA9B123219BF9EBE6963012B63015A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m84BF385838CCA63FE826B826F99204E34F686026_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA47E1799926B999476DC12DA9DFAED7A0B4442A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAB8F9ADD37A3826C8E7735E255482A0D50A6C121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF06FA07D85C06E283159DDF66527CDEB6AA2A39A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mFD5FAC598867327C1FADE53E536B2F78ABF6B328_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m3B4D783E700645173F67AEAE620DCDFBB0AB17CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m75D66426ACA098771F669518384B02A22D6CCA03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7C68E77C1B2DB7F5643E0B5EDD42B9DFC0E8C14B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC2CFE4BB6F3F2046977DE8D991332FBA73EBFB72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEFF20DFD543442FBDB65BDBC3AC35320F59A050B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisFrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5_mCDB54EF60F9623C73A7CD2931BEFC005D0032799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WXVideo_A_m31030BCD3571A728528E14EDB1B03564FEA6E95E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WXVideo_B_m09616AC965B265CB4D8E7354C50DB94CBCED7828_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WXVideo_a_mC5F7B0C7111ADD5DA2AA57169EE0874FF7AA0CE0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>
struct Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB3DAE1FBB1A4414B9465D8524F22FCC95B5297C7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD4A362ED0BFFDD335CFBA956FCD6F0D1B9FDB7BF* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t742174BD0FC0BC700DD7CBF7F4A15D67764F7FFA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>
struct Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5A97F03AF24F475DCC6EFE65D7BE28AF0DA8E48D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t854598BC80DC5B69A77AD2F86AD4C3EB83A2298B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC735BF8754AC84552EF37113645FECD2284D355F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>
struct Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD4C572571D6B585B11C4C3C002AC935122E97427* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9DE268D077E10C5C603F7464DD41D46D8C557165* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8C40B7C153A4C0DA59844AD951DC2F71CFC139C4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>
struct Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t17B4B52BA0C980E519D97C6C5B12E911F4167F02* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDC9905DAB7B3D843994B8AF143B97B5C1D5B6936* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1BFE2D9246539713D76621C5D038C86BA2DA3F76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>
struct Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1C24AA84FF9C2E7B788A709C25453E7DC9713B40* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDD6D0F41479DE9184C078C878B44B4B82D90CF95* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4E946C1BE503A2BEAACFF4E6B28694711BA89CC1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>
struct Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA9121881E1BFB3A5025203EEB9A9BDA7A50F24E4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF9706AC4C802BB17C70DAD15966A69DAD506AD53* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3578BB4D75B8C180D9A16E5D2BF519281655A28E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>
struct Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t680968BBEACFF3967F7A37AE6ACBB5580867EBE8* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD889EF214A68A4A9809CBBE6BB83A52B96721259* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t64E10112CF5B34F12C71C9DA1C4828CBA1B7A2CB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUserInfoButton>
struct Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2ABCFBE476A13729A1A612904551D5FFCB2574E9* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF1CCD925E62707E3419C9A42E09D5BB08CCE538B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t83039C0951FCEB58045D0A27FEA7229AF7BDBBD3* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXVideo>
struct Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t085A428986528F248F3A8D7148B970DB1F1EFBE9* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t66EF1284D87D1B6B2129C83E8D26BE1902FD77AE* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB1F94D3873F01E5013055B70A0C4821FC8D97804* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// A.B
struct B_t32D274328B3208B9FAF7C3E297E58C9299548D52  : public RuntimeObject
{
};

// WeChatWASM.OnAddToFavoritesListenerResult
struct OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4  : public RuntimeObject
{
	// System.Boolean WeChatWASM.OnAddToFavoritesListenerResult::disableForward
	bool ___disableForward_0;
	// System.String WeChatWASM.OnAddToFavoritesListenerResult::imageUrl
	String_t* ___imageUrl_1;
	// System.String WeChatWASM.OnAddToFavoritesListenerResult::query
	String_t* ___query_2;
	// System.String WeChatWASM.OnAddToFavoritesListenerResult::title
	String_t* ___title_3;
};

// WeChatWASM.OnCopyUrlListenerResult
struct OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6  : public RuntimeObject
{
	// System.String WeChatWASM.OnCopyUrlListenerResult::query
	String_t* ___query_0;
};

// WeChatWASM.OnGameLiveStateChangeCallbackResponse
struct OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084  : public RuntimeObject
{
	// System.String WeChatWASM.OnGameLiveStateChangeCallbackResponse::query
	String_t* ___query_0;
};

// WeChatWASM.OnHandoffListenerResult
struct OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704  : public RuntimeObject
{
	// System.String WeChatWASM.OnHandoffListenerResult::query
	String_t* ___query_0;
};

// WeChatWASM.OnHeadersReceivedCallbackResult
struct OnHeadersReceivedCallbackResult_tE33C1DD76C625799D787364F0DFA4A9E4A407B3E  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> WeChatWASM.OnHeadersReceivedCallbackResult::header
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___header_0;
};

// WeChatWASM.OnShareTimelineListenerResult
struct OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753  : public RuntimeObject
{
	// System.String WeChatWASM.OnShareTimelineListenerResult::imageUrl
	String_t* ___imageUrl_0;
	// System.String WeChatWASM.OnShareTimelineListenerResult::imagePreviewUrl
	String_t* ___imagePreviewUrl_1;
	// System.String WeChatWASM.OnShareTimelineListenerResult::imagePreviewUrlId
	String_t* ___imagePreviewUrlId_2;
	// System.String WeChatWASM.OnShareTimelineListenerResult::imageUrlId
	String_t* ___imageUrlId_3;
	// System.String WeChatWASM.OnShareTimelineListenerResult::path
	String_t* ___path_4;
	// System.String WeChatWASM.OnShareTimelineListenerResult::query
	String_t* ___query_5;
	// System.String WeChatWASM.OnShareTimelineListenerResult::title
	String_t* ___title_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// WeChatWASM.TCPSocketBindWifiOption
struct TCPSocketBindWifiOption_tC91FCB7A5D38D2B3671CA08805A5117101D9C3E5  : public RuntimeObject
{
	// System.String WeChatWASM.TCPSocketBindWifiOption::BSSID
	String_t* ___BSSID_0;
};

// WeChatWASM.UDPSocketConnectOption
struct UDPSocketConnectOption_t00C3ADCBF42495B5FEB5120517985DFD7E0B672E  : public RuntimeObject
{
	// System.String WeChatWASM.UDPSocketConnectOption::address
	String_t* ___address_0;
	// System.Int32 WeChatWASM.UDPSocketConnectOption::port
	int32_t ___port_1;
};

// WeChatWASM.UploadFileSuccessCallbackResult
struct UploadFileSuccessCallbackResult_t8C8F2FA3D3BD2388E024B212B1B48116286068D4  : public RuntimeObject
{
	// System.String WeChatWASM.UploadFileSuccessCallbackResult::data
	String_t* ___data_0;
	// System.Double WeChatWASM.UploadFileSuccessCallbackResult::statusCode
	double ___statusCode_1;
	// System.String WeChatWASM.UploadFileSuccessCallbackResult::errMsg
	String_t* ___errMsg_2;
};

// WeChatWASM.UploadTaskOnProgressUpdateCallbackResult
struct UploadTaskOnProgressUpdateCallbackResult_tE5CF9A44C8B21161D5538B1F67C26AF3E3A79CE3  : public RuntimeObject
{
	// System.Double WeChatWASM.UploadTaskOnProgressUpdateCallbackResult::progress
	double ___progress_0;
	// System.Double WeChatWASM.UploadTaskOnProgressUpdateCallbackResult::totalBytesExpectedToSend
	double ___totalBytesExpectedToSend_1;
	// System.Double WeChatWASM.UploadTaskOnProgressUpdateCallbackResult::totalBytesSent
	double ___totalBytesSent_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// WeChatWASM.WXBaseResponse
struct WXBaseResponse_tA0E6AF36BFAA135423A425AA0BB7DF012C0C955E  : public RuntimeObject
{
	// System.String WeChatWASM.WXBaseResponse::callbackId
	String_t* ___callbackId_0;
	// System.String WeChatWASM.WXBaseResponse::errMsg
	String_t* ___errMsg_1;
};

// WeChatWASM.WXCreateVideoParam
struct WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA  : public RuntimeObject
{
	// System.Int32 WeChatWASM.WXCreateVideoParam::x
	int32_t ___x_0;
	// System.Int32 WeChatWASM.WXCreateVideoParam::y
	int32_t ___y_1;
	// System.Int32 WeChatWASM.WXCreateVideoParam::width
	int32_t ___width_2;
	// System.Int32 WeChatWASM.WXCreateVideoParam::height
	int32_t ___height_3;
	// System.String WeChatWASM.WXCreateVideoParam::src
	String_t* ___src_4;
	// System.String WeChatWASM.WXCreateVideoParam::poster
	String_t* ___poster_5;
	// System.Int32 WeChatWASM.WXCreateVideoParam::initialTime
	int32_t ___initialTime_6;
	// System.Single WeChatWASM.WXCreateVideoParam::playbackRate
	float ___playbackRate_7;
	// System.Boolean WeChatWASM.WXCreateVideoParam::live
	bool ___live_8;
	// System.String WeChatWASM.WXCreateVideoParam::objectFit
	String_t* ___objectFit_9;
	// System.Boolean WeChatWASM.WXCreateVideoParam::controls
	bool ___controls_10;
	// System.Boolean WeChatWASM.WXCreateVideoParam::showProgress
	bool ___showProgress_11;
	// System.Boolean WeChatWASM.WXCreateVideoParam::showProgressInControlMode
	bool ___showProgressInControlMode_12;
	// System.String WeChatWASM.WXCreateVideoParam::backgroundColor
	String_t* ___backgroundColor_13;
	// System.Boolean WeChatWASM.WXCreateVideoParam::autoplay
	bool ___autoplay_14;
	// System.Boolean WeChatWASM.WXCreateVideoParam::loop
	bool ___loop_15;
	// System.Boolean WeChatWASM.WXCreateVideoParam::muted
	bool ___muted_16;
	// System.Boolean WeChatWASM.WXCreateVideoParam::obeyMuteSwitch
	bool ___obeyMuteSwitch_17;
	// System.Boolean WeChatWASM.WXCreateVideoParam::enableProgressGesture
	bool ___enableProgressGesture_18;
	// System.Boolean WeChatWASM.WXCreateVideoParam::enablePlayGesture
	bool ___enablePlayGesture_19;
	// System.Boolean WeChatWASM.WXCreateVideoParam::showCenterPlayBtn
	bool ___showCenterPlayBtn_20;
	// System.Boolean WeChatWASM.WXCreateVideoParam::underGameView
	bool ___underGameView_21;
};

// WeChatWASM.WXShareAppMessageParam
struct WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5  : public RuntimeObject
{
	// System.String WeChatWASM.WXShareAppMessageParam::title
	String_t* ___title_0;
	// System.String WeChatWASM.WXShareAppMessageParam::imageUrl
	String_t* ___imageUrl_1;
	// System.String WeChatWASM.WXShareAppMessageParam::query
	String_t* ___query_2;
	// System.String WeChatWASM.WXShareAppMessageParam::imageUrlId
	String_t* ___imageUrlId_3;
	// System.Boolean WeChatWASM.WXShareAppMessageParam::toCurrentGroup
	bool ___toCurrentGroup_4;
	// System.String WeChatWASM.WXShareAppMessageParam::path
	String_t* ___path_5;
};

// WeChatWASM.WXTCPSocket
struct WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9  : public RuntimeObject
{
	// System.String WeChatWASM.WXTCPSocket::gy
	String_t* ___gy_0;
};

// WeChatWASM.WXUDPSocket
struct WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F  : public RuntimeObject
{
	// System.String WeChatWASM.WXUDPSocket::gZ
	String_t* ___gZ_0;
};

// WeChatWASM.WXUpdateManager
struct WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5  : public RuntimeObject
{
	// System.String WeChatWASM.WXUpdateManager::gz
	String_t* ___gz_0;
};

// WeChatWASM.WXUploadTask
struct WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5  : public RuntimeObject
{
	// System.String WeChatWASM.WXUploadTask::HA
	String_t* ___HA_0;
};

// WeChatWASM.WXUserInfoButton
struct WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF  : public RuntimeObject
{
	// System.String WeChatWASM.WXUserInfoButton::Ha
	String_t* ___Ha_0;
	// System.Action`1<WeChatWASM.WXUserInfoResponse> WeChatWASM.WXUserInfoButton::HB
	Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E* ___HB_1;
};

// WeChatWASM.WXVideo
struct WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39  : public RuntimeObject
{
	// System.Boolean WeChatWASM.WXVideo::HC
	bool ___HC_1;
	// System.Action WeChatWASM.WXVideo::Hc
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Hc_2;
	// System.Action WeChatWASM.WXVideo::HD
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HD_3;
	// System.Action WeChatWASM.WXVideo::Hd
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Hd_4;
	// System.Action`1<WeChatWASM.WXVideoTimeUpdate> WeChatWASM.WXVideo::HE
	Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* ___HE_5;
	// System.Action`1<WeChatWASM.WXVideoProgress> WeChatWASM.WXVideo::He
	Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* ___He_6;
	// System.Action WeChatWASM.WXVideo::HF
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HF_7;
	// System.Action WeChatWASM.WXVideo::Hf
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Hf_8;
	// System.Action WeChatWASM.WXVideo::HG
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___HG_9;
	// System.Action WeChatWASM.WXVideo::Hg
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Hg_10;
	// WeChatWASM.WXCreateVideoParam WeChatWASM.WXVideo::HH
	WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* ___HH_11;
	// System.String WeChatWASM.WXVideo::Hh
	String_t* ___Hh_12;
	// System.String WeChatWASM.WXVideo::HI
	String_t* ___HI_13;
	// System.Double WeChatWASM.WXVideo::Hi
	double ___Hi_14;
	// System.Double WeChatWASM.WXVideo::HJ
	double ___HJ_15;
	// System.Double WeChatWASM.WXVideo::Hj
	double ___Hj_16;
	// System.Double WeChatWASM.WXVideo::HK
	double ___HK_17;
	// System.String WeChatWASM.WXVideo::instanceId
	String_t* ___instanceId_18;
};

// WeChatWASM.WXVideoDecoder
struct WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5  : public RuntimeObject
{
	// System.String WeChatWASM.WXVideoDecoder::Hk
	String_t* ___Hk_0;
};

// WeChatWASM.WXVideoProgress
struct WXVideoProgress_t6B101DAB37AD015E930CFCC77B30D36C2C0BF69D  : public RuntimeObject
{
	// System.Single WeChatWASM.WXVideoProgress::duration
	float ___duration_0;
	// System.Int32 WeChatWASM.WXVideoProgress::buffered
	int32_t ___buffered_1;
};

// WeChatWASM.WXVideoTimeUpdate
struct WXVideoTimeUpdate_tA62D4525E528FA9B0082D350F5F816C2F0C296EA  : public RuntimeObject
{
	// System.Single WeChatWASM.WXVideoTimeUpdate::position
	float ___position_0;
	// System.Single WeChatWASM.WXVideoTimeUpdate::duration
	float ___duration_1;
};

// WeChatWASM.WXSDKManagerHandler/f
struct f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347  : public RuntimeObject
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// WeChatWASM.WXTextResponse
struct WXTextResponse_t955AB2FA8CB481721518F6C4346164760CEA39A0  : public WXBaseResponse_tA0E6AF36BFAA135423A425AA0BB7DF012C0C955E
{
	// System.Int32 WeChatWASM.WXTextResponse::errCode
	int32_t ___errCode_2;
};

// WeChatWASM.WXUserInfo
struct WXUserInfo_tFEF9050EA02A1E09D54F9AD32DF5D18AB2ED52D5 
{
	// System.String WeChatWASM.WXUserInfo::nickName
	String_t* ___nickName_0;
	// System.String WeChatWASM.WXUserInfo::avatarUrl
	String_t* ___avatarUrl_1;
	// System.String WeChatWASM.WXUserInfo::country
	String_t* ___country_2;
	// System.String WeChatWASM.WXUserInfo::province
	String_t* ___province_3;
	// System.String WeChatWASM.WXUserInfo::city
	String_t* ___city_4;
	// System.String WeChatWASM.WXUserInfo::language
	String_t* ___language_5;
	// System.Int32 WeChatWASM.WXUserInfo::gender
	int32_t ___gender_6;
};
// Native definition for P/Invoke marshalling of WeChatWASM.WXUserInfo
struct WXUserInfo_tFEF9050EA02A1E09D54F9AD32DF5D18AB2ED52D5_marshaled_pinvoke
{
	char* ___nickName_0;
	char* ___avatarUrl_1;
	char* ___country_2;
	char* ___province_3;
	char* ___city_4;
	char* ___language_5;
	int32_t ___gender_6;
};
// Native definition for COM marshalling of WeChatWASM.WXUserInfo
struct WXUserInfo_tFEF9050EA02A1E09D54F9AD32DF5D18AB2ED52D5_marshaled_com
{
	Il2CppChar* ___nickName_0;
	Il2CppChar* ___avatarUrl_1;
	Il2CppChar* ___country_2;
	Il2CppChar* ___province_3;
	Il2CppChar* ___city_4;
	Il2CppChar* ___language_5;
	int32_t ___gender_6;
};

// WeChatWASM.WXSDKManagerHandler/G
struct G_t8A235F5286ECCF1204825C6F9D9EC5D6CBE4B378 
{
	// System.Byte[] WeChatWASM.WXSDKManagerHandler/G::HU
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HU_0;
	// System.Int32 WeChatWASM.WXSDKManagerHandler/G::Hu
	int32_t ___Hu_1;
	// System.Int32 WeChatWASM.WXSDKManagerHandler/G::HV
	int32_t ___HV_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// WeChatWASM.FrameDataOptions
struct FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5  : public RuntimeObject
{
	// System.Byte[] WeChatWASM.FrameDataOptions::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_0;
	// System.Nullable`1<System.Int32> WeChatWASM.FrameDataOptions::arrayBufferLength
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___arrayBufferLength_1;
	// System.Double WeChatWASM.FrameDataOptions::height
	double ___height_2;
	// System.Double WeChatWASM.FrameDataOptions::pkDts
	double ___pkDts_3;
	// System.Double WeChatWASM.FrameDataOptions::pkPts
	double ___pkPts_4;
	// System.Double WeChatWASM.FrameDataOptions::width
	double ___width_5;
};

// WeChatWASM.TCPSocketConnectOption
struct TCPSocketConnectOption_t3B8F028C07129833BFE34DF0999A7A5C09EFFB58  : public RuntimeObject
{
	// System.String WeChatWASM.TCPSocketConnectOption::address
	String_t* ___address_0;
	// System.Double WeChatWASM.TCPSocketConnectOption::port
	double ___port_1;
	// System.Nullable`1<System.Double> WeChatWASM.TCPSocketConnectOption::timeout
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___timeout_2;
};

// WeChatWASM.UDPSocketBindParam
struct UDPSocketBindParam_t16B4485DE814711603E631D3264BFD32D47BCEE8  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> WeChatWASM.UDPSocketBindParam::port
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___port_0;
};

// WeChatWASM.UDPSocketSendOption
struct UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38  : public RuntimeObject
{
	// System.String WeChatWASM.UDPSocketSendOption::address
	String_t* ___address_0;
	// System.Object WeChatWASM.UDPSocketSendOption::message
	RuntimeObject* ___message_1;
	// System.Int32 WeChatWASM.UDPSocketSendOption::port
	int32_t ___port_2;
	// System.Nullable`1<System.Double> WeChatWASM.UDPSocketSendOption::length
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___length_3;
	// System.Nullable`1<System.Double> WeChatWASM.UDPSocketSendOption::offset
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___offset_4;
	// System.Nullable`1<System.Boolean> WeChatWASM.UDPSocketSendOption::setBroadcast
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___setBroadcast_5;
};

// WeChatWASM.UDPSocketSendParam
struct UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573  : public RuntimeObject
{
	// System.String WeChatWASM.UDPSocketSendParam::address
	String_t* ___address_0;
	// System.Int32 WeChatWASM.UDPSocketSendParam::port
	int32_t ___port_1;
	// System.Nullable`1<System.Double> WeChatWASM.UDPSocketSendParam::length
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___length_2;
	// System.Nullable`1<System.Double> WeChatWASM.UDPSocketSendParam::offset
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___offset_3;
	// System.Nullable`1<System.Boolean> WeChatWASM.UDPSocketSendParam::setBroadcast
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___setBroadcast_4;
};

// WeChatWASM.UploadFileOption
struct UploadFileOption_tBC8740BD13F675FCD3A5FAC81667F7516B51CA45  : public RuntimeObject
{
	// System.String WeChatWASM.UploadFileOption::filePath
	String_t* ___filePath_0;
	// System.String WeChatWASM.UploadFileOption::name
	String_t* ___name_1;
	// System.String WeChatWASM.UploadFileOption::url
	String_t* ___url_2;
	// System.Action`1<WeChatWASM.GeneralCallbackResult> WeChatWASM.UploadFileOption::complete
	Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___complete_3;
	// System.Action`1<WeChatWASM.GeneralCallbackResult> WeChatWASM.UploadFileOption::fail
	Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___fail_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> WeChatWASM.UploadFileOption::formData
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___formData_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> WeChatWASM.UploadFileOption::header
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___header_6;
	// System.Action`1<WeChatWASM.UploadFileSuccessCallbackResult> WeChatWASM.UploadFileOption::success
	Action_1_tB69D9705C232593C9E9F4F7DB8397BF142DB4938* ___success_7;
	// System.Nullable`1<System.Double> WeChatWASM.UploadFileOption::timeout
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___timeout_8;
};

// WeChatWASM.VideoDecoderStartOption
struct VideoDecoderStartOption_tC19674BC1FCCBCA5BD4CE3C6203D6952424C460C  : public RuntimeObject
{
	// System.String WeChatWASM.VideoDecoderStartOption::source
	String_t* ___source_0;
	// System.Nullable`1<System.Boolean> WeChatWASM.VideoDecoderStartOption::abortAudio
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___abortAudio_1;
	// System.Nullable`1<System.Boolean> WeChatWASM.VideoDecoderStartOption::abortVideo
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___abortVideo_2;
	// System.Nullable`1<System.Double> WeChatWASM.VideoDecoderStartOption::mode
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___mode_3;
};

// WeChatWASM.WXUserInfoResponse
struct WXUserInfoResponse_t55833477F8130AFBD41E5C2926F6C584945A669F  : public WXBaseResponse_tA0E6AF36BFAA135423A425AA0BB7DF012C0C955E
{
	// System.Int32 WeChatWASM.WXUserInfoResponse::errCode
	int32_t ___errCode_2;
	// System.String WeChatWASM.WXUserInfoResponse::signature
	String_t* ___signature_3;
	// System.String WeChatWASM.WXUserInfoResponse::encryptedData
	String_t* ___encryptedData_4;
	// System.String WeChatWASM.WXUserInfoResponse::iv
	String_t* ___iv_5;
	// System.String WeChatWASM.WXUserInfoResponse::cloudID
	String_t* ___cloudID_6;
	// WeChatWASM.WXUserInfo WeChatWASM.WXUserInfoResponse::userInfo
	WXUserInfo_tFEF9050EA02A1E09D54F9AD32DF5D18AB2ED52D5 ___userInfo_7;
	// System.String WeChatWASM.WXUserInfoResponse::userInfoRaw
	String_t* ___userInfoRaw_8;
};

// WeChatWASM.WXVideoCallback
struct WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E  : public WXTextResponse_t955AB2FA8CB481721518F6C4346164760CEA39A0
{
	// System.Single WeChatWASM.WXVideoCallback::position
	float ___position_3;
	// System.Single WeChatWASM.WXVideoCallback::duration
	float ___duration_4;
	// System.Int32 WeChatWASM.WXVideoCallback::buffered
	int32_t ___buffered_5;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Action`1<WeChatWASM.GeneralCallbackResult>
struct Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43  : public MulticastDelegate_t
{
};

// System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>
struct Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288  : public MulticastDelegate_t
{
};

// System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>
struct Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>
struct Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F  : public MulticastDelegate_t
{
};

// System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>
struct Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2  : public MulticastDelegate_t
{
};

// System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>
struct Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E  : public MulticastDelegate_t
{
};

// System.Action`1<WeChatWASM.WXUserInfoResponse>
struct Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E  : public MulticastDelegate_t
{
};

// System.Action`1<WeChatWASM.WXVideoProgress>
struct Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007  : public MulticastDelegate_t
{
};

// System.Action`1<WeChatWASM.WXVideoTimeUpdate>
struct Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// WeChatWASM.WXSDKManagerHandler/OnBLECharacteristicValueChangeCallback
struct OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A  : public MulticastDelegate_t
{
};

// WeChatWASM.WXSDKManagerHandler/OnGyroscopeChangeCallback
struct OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA  : public MulticastDelegate_t
{
};

// WeChatWASM.WXSDKManagerHandler/OnTouchCancelCallback
struct OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734  : public MulticastDelegate_t
{
};

// WeChatWASM.WXSDKManagerHandler/OnTouchEndCallback
struct OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823  : public MulticastDelegate_t
{
};

// WeChatWASM.WXSDKManagerHandler/OnTouchMoveCallback
struct OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311  : public MulticastDelegate_t
{
};

// WeChatWASM.WXSDKManagerHandler/OnTouchStartCallback
struct OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6  : public MulticastDelegate_t
{
};

// WeChatWASM.WXSDKManagerHandler/StartGyroscopeCallback
struct StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59  : public MulticastDelegate_t
{
};

// WeChatWASM.WXSDKManagerHandler/StopGyroscopeCallback
struct StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2  : public MulticastDelegate_t
{
};

// WeChatWASM.WXSDKManagerHandler/TCPSocketOnMessageCallback
struct TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE  : public MulticastDelegate_t
{
};

// WeChatWASM.WXSDKManagerHandler/UDPSocketOnMessageCallback
struct UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>

// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUserInfoButton>

// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUserInfoButton>

// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXVideo>

// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXVideo>

// A.B

// A.B

// WeChatWASM.OnAddToFavoritesListenerResult

// WeChatWASM.OnAddToFavoritesListenerResult

// WeChatWASM.OnCopyUrlListenerResult

// WeChatWASM.OnCopyUrlListenerResult

// WeChatWASM.OnGameLiveStateChangeCallbackResponse

// WeChatWASM.OnGameLiveStateChangeCallbackResponse

// WeChatWASM.OnHandoffListenerResult

// WeChatWASM.OnHandoffListenerResult

// WeChatWASM.OnHeadersReceivedCallbackResult

// WeChatWASM.OnHeadersReceivedCallbackResult

// WeChatWASM.OnShareTimelineListenerResult

// WeChatWASM.OnShareTimelineListenerResult

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// WeChatWASM.TCPSocketBindWifiOption

// WeChatWASM.TCPSocketBindWifiOption

// WeChatWASM.UDPSocketConnectOption

// WeChatWASM.UDPSocketConnectOption

// WeChatWASM.UploadFileSuccessCallbackResult

// WeChatWASM.UploadFileSuccessCallbackResult

// WeChatWASM.UploadTaskOnProgressUpdateCallbackResult

// WeChatWASM.UploadTaskOnProgressUpdateCallbackResult

// WeChatWASM.WXBaseResponse

// WeChatWASM.WXBaseResponse

// WeChatWASM.WXCreateVideoParam

// WeChatWASM.WXCreateVideoParam

// WeChatWASM.WXShareAppMessageParam

// WeChatWASM.WXShareAppMessageParam

// WeChatWASM.WXTCPSocket
struct WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>> WeChatWASM.WXTCPSocket::OnBindWifiActionList
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* ___OnBindWifiActionList_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>> WeChatWASM.WXTCPSocket::OnCloseActionList
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* ___OnCloseActionList_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>> WeChatWASM.WXTCPSocket::OnConnectActionList
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* ___OnConnectActionList_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>> WeChatWASM.WXTCPSocket::OnErrorActionList
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* ___OnErrorActionList_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>> WeChatWASM.WXTCPSocket::OnMessageActionList
	Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* ___OnMessageActionList_5;
};

// WeChatWASM.WXTCPSocket

// WeChatWASM.WXUDPSocket
struct WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>> WeChatWASM.WXUDPSocket::OnCloseActionList
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* ___OnCloseActionList_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>> WeChatWASM.WXUDPSocket::OnErrorActionList
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* ___OnErrorActionList_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>> WeChatWASM.WXUDPSocket::OnListeningActionList
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* ___OnListeningActionList_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>> WeChatWASM.WXUDPSocket::OnMessageActionList
	Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* ___OnMessageActionList_4;
};

// WeChatWASM.WXUDPSocket

// WeChatWASM.WXUpdateManager
struct WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>> WeChatWASM.WXUpdateManager::OnCheckForUpdateActionList
	Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* ___OnCheckForUpdateActionList_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>> WeChatWASM.WXUpdateManager::OnUpdateFailedActionList
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* ___OnUpdateFailedActionList_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>> WeChatWASM.WXUpdateManager::OnUpdateReadyActionList
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* ___OnUpdateReadyActionList_3;
};

// WeChatWASM.WXUpdateManager

// WeChatWASM.WXUploadTask
struct WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>> WeChatWASM.WXUploadTask::OnHeadersReceivedActionList
	Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* ___OnHeadersReceivedActionList_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>> WeChatWASM.WXUploadTask::OnProgressUpdateActionList
	Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* ___OnProgressUpdateActionList_2;
};

// WeChatWASM.WXUploadTask

// WeChatWASM.WXUserInfoButton
struct WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUserInfoButton> WeChatWASM.WXUserInfoButton::Dict
	Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A* ___Dict_2;
};

// WeChatWASM.WXUserInfoButton

// WeChatWASM.WXVideo
struct WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields
{
	// System.Boolean WeChatWASM.WXVideo::Hb
	bool ___Hb_0;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXVideo> WeChatWASM.WXVideo::_Dict
	Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E* ____Dict_19;
};

// WeChatWASM.WXVideo

// WeChatWASM.WXVideoDecoder
struct WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>> WeChatWASM.WXVideoDecoder::OnActionList
	Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* ___OnActionList_1;
};

// WeChatWASM.WXVideoDecoder

// WeChatWASM.WXVideoProgress

// WeChatWASM.WXVideoProgress

// WeChatWASM.WXVideoTimeUpdate

// WeChatWASM.WXVideoTimeUpdate

// WeChatWASM.WXSDKManagerHandler/f
struct f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347_StaticFields
{
	// WeChatWASM.WXSDKManagerHandler/f WeChatWASM.WXSDKManagerHandler/f::Hq
	f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347* ___Hq_0;
	// System.Action`1<WeChatWASM.OnAddToFavoritesListenerResult> WeChatWASM.WXSDKManagerHandler/f::HR
	Action_1_tFACB83D1B69D3C7799F895FFA2CF6AC3ABB68AA7* ___HR_1;
	// System.Action`1<WeChatWASM.OnCopyUrlListenerResult> WeChatWASM.WXSDKManagerHandler/f::Hr
	Action_1_tD085D06D4D15848D0E0A50B744389569CEABB567* ___Hr_2;
	// System.Action`1<WeChatWASM.OnHandoffListenerResult> WeChatWASM.WXSDKManagerHandler/f::HS
	Action_1_t568C79DE7FA71ADFBEA3492F62C9AE1A2425F1D0* ___HS_3;
	// System.Action`1<WeChatWASM.OnShareTimelineListenerResult> WeChatWASM.WXSDKManagerHandler/f::Hs
	Action_1_t5C550D57FAADE0F9095D4F9E5B5F8B5238BD5FFA* ___Hs_4;
	// System.Action`1<WeChatWASM.OnGameLiveStateChangeCallbackResponse> WeChatWASM.WXSDKManagerHandler/f::HT
	Action_1_t341C6DF1F77D0B03A3629529DB9BFA2FE6C15E2A* ___HT_5;
	// System.Action`1<WeChatWASM.WXShareAppMessageParam> WeChatWASM.WXSDKManagerHandler/f::Ht
	Action_1_t047EB11852CB25578DE954F221BEBC07FBC73215* ___Ht_6;
};

// WeChatWASM.WXSDKManagerHandler/f

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// WeChatWASM.WXSDKManagerHandler/G

// WeChatWASM.WXSDKManagerHandler/G

// System.Delegate

// System.Delegate

// WeChatWASM.FrameDataOptions

// WeChatWASM.FrameDataOptions

// WeChatWASM.TCPSocketConnectOption

// WeChatWASM.TCPSocketConnectOption

// WeChatWASM.UDPSocketBindParam

// WeChatWASM.UDPSocketBindParam

// WeChatWASM.UDPSocketSendOption

// WeChatWASM.UDPSocketSendOption

// WeChatWASM.UDPSocketSendParam

// WeChatWASM.UDPSocketSendParam

// WeChatWASM.UploadFileOption

// WeChatWASM.UploadFileOption

// WeChatWASM.VideoDecoderStartOption

// WeChatWASM.VideoDecoderStartOption

// WeChatWASM.WXUserInfoResponse

// WeChatWASM.WXUserInfoResponse

// WeChatWASM.WXVideoCallback

// WeChatWASM.WXVideoCallback

// System.Action`1<WeChatWASM.GeneralCallbackResult>

// System.Action`1<WeChatWASM.GeneralCallbackResult>

// System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>

// System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>

// System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>

// System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>

// System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>

// System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>

// System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>

// System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>

// System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>

// System.Action`1<WeChatWASM.WXUserInfoResponse>

// System.Action`1<WeChatWASM.WXUserInfoResponse>

// System.Action`1<WeChatWASM.WXVideoProgress>

// System.Action`1<WeChatWASM.WXVideoProgress>

// System.Action`1<WeChatWASM.WXVideoTimeUpdate>

// System.Action`1<WeChatWASM.WXVideoTimeUpdate>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// WeChatWASM.WXSDKManagerHandler/OnBLECharacteristicValueChangeCallback

// WeChatWASM.WXSDKManagerHandler/OnBLECharacteristicValueChangeCallback

// WeChatWASM.WXSDKManagerHandler/OnGyroscopeChangeCallback

// WeChatWASM.WXSDKManagerHandler/OnGyroscopeChangeCallback

// WeChatWASM.WXSDKManagerHandler/OnTouchCancelCallback

// WeChatWASM.WXSDKManagerHandler/OnTouchCancelCallback

// WeChatWASM.WXSDKManagerHandler/OnTouchEndCallback

// WeChatWASM.WXSDKManagerHandler/OnTouchEndCallback

// WeChatWASM.WXSDKManagerHandler/OnTouchMoveCallback

// WeChatWASM.WXSDKManagerHandler/OnTouchMoveCallback

// WeChatWASM.WXSDKManagerHandler/OnTouchStartCallback

// WeChatWASM.WXSDKManagerHandler/OnTouchStartCallback

// WeChatWASM.WXSDKManagerHandler/StartGyroscopeCallback

// WeChatWASM.WXSDKManagerHandler/StartGyroscopeCallback

// WeChatWASM.WXSDKManagerHandler/StopGyroscopeCallback

// WeChatWASM.WXSDKManagerHandler/StopGyroscopeCallback

// WeChatWASM.WXSDKManagerHandler/TCPSocketOnMessageCallback

// WeChatWASM.WXSDKManagerHandler/TCPSocketOnMessageCallback

// WeChatWASM.WXSDKManagerHandler/UDPSocketOnMessageCallback

// WeChatWASM.WXSDKManagerHandler/UDPSocketOnMessageCallback
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// T LitJson.JsonMapper::ToObject<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_ToObject_TisIl2CppFullySharedGenericAny_m63EC0711A340085DD65C2F6D27635BBE5D13058F_gshared (String_t* ___0_json, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;

// System.Void WeChatWASM.WXSDKManagerHandler/f::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void f__ctor_m5A26BD9A6A108CC567AE4EA82F985B3EA863A17C (f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void WeChatWASM.OnAddToFavoritesListenerResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAddToFavoritesListenerResult__ctor_m36CAE86E7ACE0C1FAA99BE65D594347769074549 (OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4* __this, const RuntimeMethod* method) ;
// System.String LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::b(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_b_m6F2304C6EEA074E952440E49F6F808EDA60C8D46 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.OnCopyUrlListenerResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCopyUrlListenerResult__ctor_m2C76C0D6B2548CEDCDF3A70318282E6DCDC04B33 (OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6* __this, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::C(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_C_m55951192F0BE90A812239A3D4275D83609A2B90F (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.OnHandoffListenerResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnHandoffListenerResult__ctor_mC541EEFBBA49AA9E01573E501983BF0F0E8E5CF5 (OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704* __this, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::c(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_c_mB3AADC68401F236A71D9C55E85A0AFCD2707184C (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.OnShareTimelineListenerResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnShareTimelineListenerResult__ctor_m46A20AFAE151261879B58BCCC0FF92638A35D820 (OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753* __this, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::D(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_D_m94A72FFFB712C05E51AA33064EBD630B68434DCD (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.OnGameLiveStateChangeCallbackResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGameLiveStateChangeCallbackResponse__ctor_m6566D436C34309D523610AA125CD79EAD2A212DB (OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084* __this, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_d_mA11F3D969B8155C33256D93268ADF20DD8613F36 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXShareAppMessageParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXShareAppMessageParam__ctor_mA6A26616D794C4D4F8D776249B8A3DB9C9785BDF (WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5* __this, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::f(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_f_mC2D19F75992F90546A884C94D61C230B3CEFD87B (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXTCPSocket::A(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_A_mE0461D15A8C4FD7FFA12A5AF715718C0B0EB67AD (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXTCPSocket::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_A_mF84D280B8D88D0EA1AF6D5F45280D1035A001978 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXTCPSocket::a(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_a_mEECE15DCCF3871D753E20C89EF72853E74FF9B22 (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>::get_Item(TKey)
inline Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805 (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* __this, String_t* ___0_key, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXTCPSocket::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_a_mC4BFD508689A68A2E98F607133BAC919221C9275 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXTCPSocket::B(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_B_mBABE3652471BEBA5A5D6A55FB69A4361E849CEE9 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXTCPSocket::b(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_b_m8DF9EB36C4DB019784BE409A6DBFF896CA9582EE (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXTCPSocket::C(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_C_m5532D12EDF98DFEE187A8295B41A9A22917D0DE9 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m41F0BBECEA372B722B6F6513BCCA53951FA69785 (Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>::get_Item(TKey)
inline Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* Dictionary_2_get_Item_mF06FA07D85C06E283159DDF66527CDEB6AA2A39A (Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mEFF20DFD543442FBDB65BDBC3AC35320F59A050B (Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* __this, String_t* ___0_key, Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXTCPSocket::c(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_c_m6D6669BEB861069692E92E4B415940B2902FD1EF (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>::.ctor()
inline void Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058 (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.GeneralCallbackResult>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514 (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* __this, String_t* ___0_key, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXTCPSocket::D(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_D_m03393FD3815C83BA439985D11B5EBC030EC4039E (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXTCPSocket::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_d_m65D207BE0D0FCB715A9C9EF0B2B955D7C6FB6625 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXTCPSocket::E(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_E_m25F9F5C6878124F9B866B84562FC36AC6D5F4EFB (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXTCPSocket::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_e_mE55ABB8E09EF8D5D2538463846A6639E5C7A3077 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Boolean WeChatWASM.WXSDKManagerHandler::InitSDKPrompt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WXSDKManagerHandler_InitSDKPrompt_mEEF060366B843947B73910DD57462AD56806C325 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>::.ctor()
inline void Dictionary_2__ctor_mCB6188789BA9B123219BF9EBE6963012B63015A2 (Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA902F719881A6B357915D5CBC47A2D561E6431C4 (Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* __this, String_t* ___0_key, Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXTCPSocket::A(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_A_m75DA95EE762BE905CF4BED508F87C83BA30AA7E3 (String_t* ___0_p, bool ___1_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXTCPSocket::B(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_B_mB2844856765D0234A015E1D20EBE949CA0590B7F (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXTCPSocket::A(System.String,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_A_m342EE6927C0160B2875954711ED3430783953AE6 (String_t* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_p, int32_t ___2_p, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_mC724BCD3FAE8D0AADB7FB080A2CC42B83714869B (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::A(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_mA085757DA197127C72AD08C7D3A77C7B51E30E5D (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_a_m927FEADC35FCD8A5D99676C55224397A7D71C6A0 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::B(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_B_mD134BD7F400CAF53904B1872503890EEB89FCF3A (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::b(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_b_mA2559BB152450235D08A51889F0E0403A31F7CE7 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mA5F78BF5B052507D70C24550C1358CD64B35A6ED (Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>::get_Item(TKey)
inline Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* Dictionary_2_get_Item_mA47E1799926B999476DC12DA9DFAED7A0B4442A5 (Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m3B4D783E700645173F67AEAE620DCDFBB0AB17CF (Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* __this, String_t* ___0_key, Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXUDPSocket::C(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_C_mB468C2AFCCD55E5E2E4DD3AD9578E739681A016E (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::c(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_c_mE88796AAD436D40CFD265FCC7C90E0D0C48B5C7D (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::D(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_D_mDF8B21E665BD4C6178CBA72E420EEBFBD11FF16A (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_d_mD2CF9902DEC3E50537B3B2618439A0A983A3074A (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>::.ctor()
inline void Dictionary_2__ctor_m03E62C4BCDCCE34440F2C7B98E80A0C8258D5E66 (Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF834A6B3C5FC5EE8FA49D0F5E125F51ABAD3C290 (Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* __this, String_t* ___0_key, Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXUDPSocket::A(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_mEC3EA79F70F90CE6A103A82143671B9E9F4FF684 (String_t* ___0_p, bool ___1_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.UDPSocketSendParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSocketSendParam__ctor_m38498E52734771A64EEF6008B1BE6D7EBD0EA12F (UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* __this, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::A(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_m4195D26DF67B896657ACAEC55D2681509667C683 (String_t* ___0_p, String_t* ___1_p, String_t* ___2_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::A(System.String,System.Byte[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_m439518209B8CC22B97D647603EEAC52E3866E12C (String_t* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_p, int32_t ___2_p, String_t* ___3_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::A(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_m7D18230DB13C91EE5406C7254E35B4909D6BA0A1 (String_t* ___0_p, double ___1_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::a(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_a_mD5FA18B2E366E4D154B4BDE7801CB0234AC73DF9 (String_t* ___0_p, String_t* ___1_p, String_t* ___2_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUDPSocket::a(System.String,System.Byte[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_a_mE6F9F83B28CA0F10FD9937C2BBDCE39F82E0DD17 (String_t* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_p, int32_t ___2_p, String_t* ___3_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.UDPSocketBindParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSocketBindParam__ctor_mC562DBF0BA76A9171A65CAE8B58D3F9E01572162 (UDPSocketBindParam_t16B4485DE814711603E631D3264BFD32D47BCEE8* __this, const RuntimeMethod* method) ;
// System.Int32 WeChatWASM.WXUDPSocket::a(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WXUDPSocket_a_mA3CCB2E126C920ACF7E3E04B373FFE5B1ADD1585 (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::WX_ClassOneWayNoFunction_v(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_WX_ClassOneWayNoFunction_v_m89FBBA04F4F7A4A7CE7C9FA52790AEFDF59FF54C (String_t* ___0_className, String_t* ___1_functionName, String_t* ___2_id, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>::.ctor()
inline void Dictionary_2__ctor_m7A327307DD8BD9ABA6BACCA449BBBD5EB9A62A01 (Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m0EB5AE22E4E425748236796EED68F44C9AE382E7 (Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>::get_Item(TKey)
inline Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288* Dictionary_2_get_Item_m84BF385838CCA63FE826B826F99204E34F686026 (Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mC2CFE4BB6F3F2046977DE8D991332FBA73EBFB72 (Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* __this, String_t* ___0_key, Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFD0BDBF0FBD93A5B6D3A93BED19E0AF801BA9C0A (Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* __this, String_t* ___0_key, Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXSDKManagerHandler::WX_ClassOnEventFunction(System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_WX_ClassOnEventFunction_mA32AE673FE5654617D44CF0C20EC7D47C2E2F261 (String_t* ___0_className, String_t* ___1_functionName, String_t* ___2_returnType, String_t* ___3_id, String_t* ___4_eventName, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUploadTask::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_A_m83AD339A6BCC2F90BA9639692050509E810A35F1 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>::.ctor()
inline void Dictionary_2__ctor_m69627E54B7132978A925141A8609AAAA211D7A58 (Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mDCAD333899C2905C10EEFFE8FBFE530AFCAB3108 (Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>::get_Item(TKey)
inline Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* Dictionary_2_get_Item_mFD5FAC598867327C1FADE53E536B2F78ABF6B328 (Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7C68E77C1B2DB7F5643E0B5EDD42B9DFC0E8C14B (Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* __this, String_t* ___0_key, Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXUploadTask::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_a_m4455322F2533304EB2CEDF81DE1F98D4F956A42F (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>::.ctor()
inline void Dictionary_2__ctor_m7F604022A4B2B1B3B3F6A0D7537B7614B8D3F0CC (Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m6E93EDC819BF353AA23344BE87B5BE9CA5BF9ECD (Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>::get_Item(TKey)
inline Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* Dictionary_2_get_Item_mAB8F9ADD37A3826C8E7735E255482A0D50A6C121 (Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m75D66426ACA098771F669518384B02A22D6CCA03 (Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* __this, String_t* ___0_key, Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXUploadTask::B(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_B_m43490388BC195F908C384201B1EF1343BABDFF70 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m6922469CABDB27D50E869F1C5A1DAEF6B59DC429 (Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* __this, String_t* ___0_key, Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXUploadTask::b(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_b_mD41BDCD652E8DD69C891B7B6B43B4B926330EAB0 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m9ABBCEA1FF46C4C41BD2E82A15DE72CE698549FF (Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* __this, String_t* ___0_key, Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXUploadTask::C(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_C_mDD73F701259E973CF4D16A9A9A743A067D4B1402 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Action`1<WeChatWASM.WXUserInfoResponse>::Invoke(T)
inline void Action_1_Invoke_m9BE24E2E48DDAB59D75977EB50F0E3E99A081C1A_inline (Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E* __this, WXUserInfoResponse_t55833477F8130AFBD41E5C2926F6C584945A669F* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Void WeChatWASM.WXUserInfoButton::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_A_mF87F824642FE8DE346D36C37E7EED61955C3295F (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUserInfoButton>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m444C48C6876AD19B024967BFC9039A0F19ACD510 (Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUserInfoButton>::Remove(TKey)
inline bool Dictionary_2_Remove_mBCB7D1686DC1DA026B45D494330A165A3E6B675E (Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void WeChatWASM.WXUserInfoButton::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_a_m00432EE2C76BF7CB780D47998149F5E9E3BDBC1E (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUserInfoButton::B(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_B_m04AAEFC96EC690AF9761EF8BFC9B7DB9476EB6FD (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUserInfoButton::b(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_b_m18200B0BC2CA6A78E49C3198D3D8DB74F78DB2A2 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXUserInfoButton::C(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_C_m09EEDBB2CD73AAC9431C9CC23B5F2806A55F5F6A (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUserInfoButton>::.ctor()
inline void Dictionary_2__ctor_m34EC61033AF223C17A96A436ED4655F252515CB6 (Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXVideo>::Add(TKey,TValue)
inline void Dictionary_2_Add_m3D4168603391DBC0E8F9F019E06C9D20AE76FE46 (Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E* __this, String_t* ___0_key, WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::OnPlay(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OnPlay_m4B6D265CA005DD27476E9B91448E5845C16B237C (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::OnEnded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OnEnded_m3D6327083E6A503B87A494971F1BD4983ED396D1 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::OnPause(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OnPause_m0A7D67369472FEDFB31CDD1FE386535A7A6E9679 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.UInt32 A.B::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t B_A_m444BF8DAE44BC291DDC813B09D3188748FB896B7 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideoTimeUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideoTimeUpdate__ctor_m3A45CA6A70CDD82D4F3FD643E957CAF8A6343B27 (WXVideoTimeUpdate_tA62D4525E528FA9B0082D350F5F816C2F0C296EA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<WeChatWASM.WXVideoTimeUpdate>::Invoke(T)
inline void Action_1_Invoke_m1BEAE099C0A2265FE3AA442F560B576B33D59794_inline (Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* __this, WXVideoTimeUpdate_tA62D4525E528FA9B0082D350F5F816C2F0C296EA* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Void WeChatWASM.WXVideoProgress::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideoProgress__ctor_m51EE87D28A9F16D66FCE39D6FA3EAAB1161B0BA5 (WXVideoProgress_t6B101DAB37AD015E930CFCC77B30D36C2C0BF69D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<WeChatWASM.WXVideoProgress>::Invoke(T)
inline void Action_1_Invoke_m67319B6F45E51BE1E6179A594317C8E066467FD4_inline (Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* __this, WXVideoProgress_t6B101DAB37AD015E930CFCC77B30D36C2C0BF69D* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::A(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_A_m4168276950B112793EEECF498097D5DB3952BA0B (String_t* ___0_p, String_t* ___1_p, String_t* ___2_p, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_A_mA954DD718B8E161694AF6F9DB1E08742EA7E2133 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideoCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideoCallback__ctor_mDE62A33227486135212BC97B774EE48C89641F5B (WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* __this, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::_HandleCallBack(WeChatWASM.WXVideoCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo__HandleCallBack_m708ECF4999EEC43E13505C184B38FF1CCE46D87B (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* ___0_res, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::A(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_A_m1F2B4D0610B4EC5A34C8309199033B0869B44565 (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::a(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_a_m6C185DBE230427D9BE592576A6EEFCF89EC0D1A1 (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_a_m0F806EE3268E15F98A45F252A5EB097E9D96BF42 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXVideo>::Remove(TKey)
inline bool Dictionary_2_Remove_m4F1C6E2C77A0EB190D3862BC491F54D175F27003 (Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void WeChatWASM.WXVideo::B(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_B_m8C4A1D6D5DCC11A067725CC3AB6944FD9E018456 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::b(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_b_m389B900E05223B7316BFEC71740B98F63F0711C0 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::A(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_A_mF9C2646AA8F124E8318AF4541FDCF7DCF6383B08 (String_t* ___0_p, int32_t ___1_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::a(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_a_m2B96236796C4AA903DA09E855EA8F4B6FAF3ACEF (String_t* ___0_p, int32_t ___1_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXVideo::C(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_C_mF08D2E77543319EC13D77A6C8678FC779D00D214 (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXVideo>::.ctor()
inline void Dictionary_2__ctor_m83018A79BFFC223A8FD324F9316ABC5241B79996 (Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.String WeChatWASM.WXSDKManagerHandler::WX_ClassOneWayNoFunction_t(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WXSDKManagerHandler_WX_ClassOneWayNoFunction_t_m0A8849BE2BA105D91EAD92C0C9427884FAD4B6F6 (String_t* ___0_className, String_t* ___1_functionName, String_t* ___2_returnType, String_t* ___3_id, const RuntimeMethod* method) ;
// T LitJson.JsonMapper::ToObject<WeChatWASM.FrameDataOptions>(System.String)
inline FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5* JsonMapper_ToObject_TisFrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5_mCDB54EF60F9623C73A7CD2931BEFC005D0032799 (String_t* ___0_json, const RuntimeMethod* method)
{
	FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5* il2cppRetVal;
	((  void (*) (String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))JsonMapper_ToObject_TisIl2CppFullySharedGenericAny_m63EC0711A340085DD65C2F6D27635BBE5D13058F_gshared)(___0_json, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String WeChatWASM.WXSDKManagerHandler::WXSetArrayBuffer(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WXSDKManagerHandler_WXSetArrayBuffer_mDAEA932726FFD397D3993F0F71E3CAC05F28B533 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_callbackId, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::WX_ClassOneWayNoFunction_vn(System.String,System.String,System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_WX_ClassOneWayNoFunction_vn_mACD8BED50887E6ED3565BC0097520F3F663975F9 (String_t* ___0_className, String_t* ___1_functionName, String_t* ___2_id, double ___3_param1, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::WX_ClassOneWayNoFunction_vt(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_WX_ClassOneWayNoFunction_vt_mD3FCC693FA89A4D4B7429FD7D7E573DA94142B88 (String_t* ___0_className, String_t* ___1_functionName, String_t* ___2_id, String_t* ___3_param1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189 (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, String_t* ___0_key, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Void WeChatWASM.WXSDKManagerHandler::WX_ClassOffEventFunction(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_WX_ClassOffEventFunction_mFB8A22A3F122F424401BF5AB16FA31D2F814967F (String_t* ___0_className, String_t* ___1_functionName, String_t* ___2_id, String_t* ___3_eventType, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2 (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::get_Item(TKey)
inline Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.String>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mCA46B88F063E9105EDE4ADCA61BD5620782617C7 (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* __this, String_t* ___0_key, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketBindWifi(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketClose(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketConnect(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketOffBindWifi(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketOffClose(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketOffConnect(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketOffError(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketOffMessage(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketOnBindWifi(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketOnClose(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketOnConnect(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketOnError(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketOnMessage(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketWriteString(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_TCPSocketWriteBuffer(char*, uint8_t*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketClose(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketConnect(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketOffClose(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketOffError(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketOffListening(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketOffMessage(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketOnClose(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketOnError(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketOnListening(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketOnMessage(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketSendString(char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketSendBuffer(char*, uint8_t*, int32_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketSetTTL(char*, double);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketWriteString(char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WX_UDPSocketWriteBuffer(char*, uint8_t*, int32_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WX_UDPSocketBind(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXUploadTaskAbort(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXUploadTaskOffHeadersReceived(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXUploadTaskOffProgressUpdate(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXUploadTaskOnHeadersReceived(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXUploadTaskOnProgressUpdate(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXUserInfoButtonDestroy(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXUserInfoButtonHide(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXUserInfoButtonOffTap(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXUserInfoButtonOnTap(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXUserInfoButtonShow(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXVideoPlay(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXVideoAddListener(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXVideoDestroy(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXVideoExitFullScreen(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXVideoPause(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXVideoRequestFullScreen(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL WXVideoSeek(char*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL WXVideoStop(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXVideoRemoveListener(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WXVideoSetProperty(char*, char*, char*);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UDPSocketOnMessageCallback_Invoke_m083B1C282EFE37D2B453FD840402C5EDE3F5CE89_Multicast(UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217* currentDelegate = reinterpret_cast<UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UDPSocketOnMessageCallback_Invoke_m083B1C282EFE37D2B453FD840402C5EDE3F5CE89_OpenInst(UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr, method);
}
void UDPSocketOnMessageCallback_Invoke_m083B1C282EFE37D2B453FD840402C5EDE3F5CE89_OpenStatic(UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr, method);
}
void UDPSocketOnMessageCallback_Invoke_m083B1C282EFE37D2B453FD840402C5EDE3F5CE89_OpenStaticInvoker(UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker5< String_t*, intptr_t, int32_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr);
}
void UDPSocketOnMessageCallback_Invoke_m083B1C282EFE37D2B453FD840402C5EDE3F5CE89_ClosedStaticInvoker(UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, String_t*, intptr_t, int32_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217 (UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, intptr_t, int32_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_instanceID' to native representation
	char* ____0_instanceID_marshaled = NULL;
	____0_instanceID_marshaled = il2cpp_codegen_marshal_string(___0_instanceID);

	// Native function invocation
	il2cppPInvokeFunc(____0_instanceID_marshaled, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr);

	// Marshaling cleanup of parameter '___0_instanceID' native representation
	il2cpp_codegen_marshal_free(____0_instanceID_marshaled);
	____0_instanceID_marshaled = NULL;

}
// System.Void WeChatWASM.WXSDKManagerHandler/UDPSocketOnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSocketOnMessageCallback__ctor_mAC17FC6385B037C4C3254B4579A813857D089FB1 (UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UDPSocketOnMessageCallback_Invoke_m083B1C282EFE37D2B453FD840402C5EDE3F5CE89_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UDPSocketOnMessageCallback_Invoke_m083B1C282EFE37D2B453FD840402C5EDE3F5CE89_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UDPSocketOnMessageCallback_Invoke_m083B1C282EFE37D2B453FD840402C5EDE3F5CE89_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&UDPSocketOnMessageCallback_Invoke_m083B1C282EFE37D2B453FD840402C5EDE3F5CE89_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&UDPSocketOnMessageCallback_Invoke_m083B1C282EFE37D2B453FD840402C5EDE3F5CE89_Multicast;
}
// System.Void WeChatWASM.WXSDKManagerHandler/UDPSocketOnMessageCallback::Invoke(System.String,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSocketOnMessageCallback_Invoke_m083B1C282EFE37D2B453FD840402C5EDE3F5CE89 (UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WeChatWASM.WXSDKManagerHandler/UDPSocketOnMessageCallback::BeginInvoke(System.String,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UDPSocketOnMessageCallback_BeginInvoke_mEE8694FE636F22BE54304BB38299C430D043FB02 (UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___0_instanceID;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_messagePtr);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_messageSize);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___3_localInfoPtr);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___4_remoteInfoPtr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.Void WeChatWASM.WXSDKManagerHandler/UDPSocketOnMessageCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDPSocketOnMessageCallback_EndInvoke_m1C931E744A576EF5A7863E31965603EA4F66C2E4 (UDPSocketOnMessageCallback_t065455082842BE45B4383CC82E5B8E0374678217* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TCPSocketOnMessageCallback_Invoke_m2DBA4E0386F8EEAA69B21B1A5570423BE22D2723_Multicast(TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE* currentDelegate = reinterpret_cast<TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TCPSocketOnMessageCallback_Invoke_m2DBA4E0386F8EEAA69B21B1A5570423BE22D2723_OpenInst(TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr, method);
}
void TCPSocketOnMessageCallback_Invoke_m2DBA4E0386F8EEAA69B21B1A5570423BE22D2723_OpenStatic(TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr, method);
}
void TCPSocketOnMessageCallback_Invoke_m2DBA4E0386F8EEAA69B21B1A5570423BE22D2723_OpenStaticInvoker(TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker5< String_t*, intptr_t, int32_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr);
}
void TCPSocketOnMessageCallback_Invoke_m2DBA4E0386F8EEAA69B21B1A5570423BE22D2723_ClosedStaticInvoker(TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, String_t*, intptr_t, int32_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE (TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, intptr_t, int32_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_instanceID' to native representation
	char* ____0_instanceID_marshaled = NULL;
	____0_instanceID_marshaled = il2cpp_codegen_marshal_string(___0_instanceID);

	// Native function invocation
	il2cppPInvokeFunc(____0_instanceID_marshaled, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr);

	// Marshaling cleanup of parameter '___0_instanceID' native representation
	il2cpp_codegen_marshal_free(____0_instanceID_marshaled);
	____0_instanceID_marshaled = NULL;

}
// System.Void WeChatWASM.WXSDKManagerHandler/TCPSocketOnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPSocketOnMessageCallback__ctor_m296CA40DD1654148806C4EA5C09295BE5144648C (TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TCPSocketOnMessageCallback_Invoke_m2DBA4E0386F8EEAA69B21B1A5570423BE22D2723_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TCPSocketOnMessageCallback_Invoke_m2DBA4E0386F8EEAA69B21B1A5570423BE22D2723_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TCPSocketOnMessageCallback_Invoke_m2DBA4E0386F8EEAA69B21B1A5570423BE22D2723_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&TCPSocketOnMessageCallback_Invoke_m2DBA4E0386F8EEAA69B21B1A5570423BE22D2723_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TCPSocketOnMessageCallback_Invoke_m2DBA4E0386F8EEAA69B21B1A5570423BE22D2723_Multicast;
}
// System.Void WeChatWASM.WXSDKManagerHandler/TCPSocketOnMessageCallback::Invoke(System.String,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPSocketOnMessageCallback_Invoke_m2DBA4E0386F8EEAA69B21B1A5570423BE22D2723 (TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, intptr_t, int32_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instanceID, ___1_messagePtr, ___2_messageSize, ___3_localInfoPtr, ___4_remoteInfoPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WeChatWASM.WXSDKManagerHandler/TCPSocketOnMessageCallback::BeginInvoke(System.String,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TCPSocketOnMessageCallback_BeginInvoke_m6E0DD66BE874733CDD6B22194317742C54B373D2 (TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE* __this, String_t* ___0_instanceID, intptr_t ___1_messagePtr, int32_t ___2_messageSize, intptr_t ___3_localInfoPtr, intptr_t ___4_remoteInfoPtr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___0_instanceID;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_messagePtr);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_messageSize);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___3_localInfoPtr);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___4_remoteInfoPtr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.Void WeChatWASM.WXSDKManagerHandler/TCPSocketOnMessageCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCPSocketOnMessageCallback_EndInvoke_mEB91D271CDA04D3E5651332A2510FFB89A06055D (TCPSocketOnMessageCallback_t4C47EF2A2D9D47910E3CB4C941C2AD21426928AE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnTouchCancelCallback_Invoke_m9E99C258E94EEBDC960D5159712F4B52D28226C9_Multicast(OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734* currentDelegate = reinterpret_cast<OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTouchCancelCallback_Invoke_m9E99C258E94EEBDC960D5159712F4B52D28226C9_OpenInst(OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_resPtr, ___1_numTouches, ___2_numChangedTouches, method);
}
void OnTouchCancelCallback_Invoke_m9E99C258E94EEBDC960D5159712F4B52D28226C9_OpenStatic(OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_resPtr, ___1_numTouches, ___2_numChangedTouches, method);
}
void OnTouchCancelCallback_Invoke_m9E99C258E94EEBDC960D5159712F4B52D28226C9_OpenStaticInvoker(OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches);
}
void OnTouchCancelCallback_Invoke_m9E99C258E94EEBDC960D5159712F4B52D28226C9_ClosedStaticInvoker(OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734 (OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_resPtr, ___1_numTouches, ___2_numChangedTouches);

}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchCancelCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchCancelCallback__ctor_m09C9B8FFFDD8BA91F32F4322626086D934804AC5 (OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTouchCancelCallback_Invoke_m9E99C258E94EEBDC960D5159712F4B52D28226C9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTouchCancelCallback_Invoke_m9E99C258E94EEBDC960D5159712F4B52D28226C9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTouchCancelCallback_Invoke_m9E99C258E94EEBDC960D5159712F4B52D28226C9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnTouchCancelCallback_Invoke_m9E99C258E94EEBDC960D5159712F4B52D28226C9_Multicast;
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchCancelCallback::Invoke(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchCancelCallback_Invoke_m9E99C258E94EEBDC960D5159712F4B52D28226C9 (OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WeChatWASM.WXSDKManagerHandler/OnTouchCancelCallback::BeginInvoke(System.IntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTouchCancelCallback_BeginInvoke_m3128E728C1985679BA777A901BE7334DFB4084FE (OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_resPtr);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_numTouches);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_numChangedTouches);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchCancelCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchCancelCallback_EndInvoke_m6D967C76F30C04EF4BC083E29771877C252A32BD (OnTouchCancelCallback_tAC8E1D4F266C7D29505C08505133B12907BF6734* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnTouchEndCallback_Invoke_m8A7A77554A43723DE99FCE4298C68BFE7F867518_Multicast(OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823* currentDelegate = reinterpret_cast<OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTouchEndCallback_Invoke_m8A7A77554A43723DE99FCE4298C68BFE7F867518_OpenInst(OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_resPtr, ___1_numTouches, ___2_numChangedTouches, method);
}
void OnTouchEndCallback_Invoke_m8A7A77554A43723DE99FCE4298C68BFE7F867518_OpenStatic(OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_resPtr, ___1_numTouches, ___2_numChangedTouches, method);
}
void OnTouchEndCallback_Invoke_m8A7A77554A43723DE99FCE4298C68BFE7F867518_OpenStaticInvoker(OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches);
}
void OnTouchEndCallback_Invoke_m8A7A77554A43723DE99FCE4298C68BFE7F867518_ClosedStaticInvoker(OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823 (OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_resPtr, ___1_numTouches, ___2_numChangedTouches);

}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchEndCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchEndCallback__ctor_m0328FB0BFFE719F74C33C0AF11F10762FBC4C78A (OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTouchEndCallback_Invoke_m8A7A77554A43723DE99FCE4298C68BFE7F867518_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTouchEndCallback_Invoke_m8A7A77554A43723DE99FCE4298C68BFE7F867518_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTouchEndCallback_Invoke_m8A7A77554A43723DE99FCE4298C68BFE7F867518_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnTouchEndCallback_Invoke_m8A7A77554A43723DE99FCE4298C68BFE7F867518_Multicast;
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchEndCallback::Invoke(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchEndCallback_Invoke_m8A7A77554A43723DE99FCE4298C68BFE7F867518 (OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WeChatWASM.WXSDKManagerHandler/OnTouchEndCallback::BeginInvoke(System.IntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTouchEndCallback_BeginInvoke_mB3BE4BED56414DEE344B0A1A20AF6E35D4576463 (OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_resPtr);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_numTouches);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_numChangedTouches);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchEndCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchEndCallback_EndInvoke_m7CA8398A95DCBDC7A6951DCE1C725F8213206FC5 (OnTouchEndCallback_t1E345E5C15076892412AFBDA07A6141FA8FD6823* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnTouchMoveCallback_Invoke_m5A978B8BBB0225870D74EF576BEEE90650F12641_Multicast(OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311* currentDelegate = reinterpret_cast<OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTouchMoveCallback_Invoke_m5A978B8BBB0225870D74EF576BEEE90650F12641_OpenInst(OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_resPtr, ___1_numTouches, ___2_numChangedTouches, method);
}
void OnTouchMoveCallback_Invoke_m5A978B8BBB0225870D74EF576BEEE90650F12641_OpenStatic(OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_resPtr, ___1_numTouches, ___2_numChangedTouches, method);
}
void OnTouchMoveCallback_Invoke_m5A978B8BBB0225870D74EF576BEEE90650F12641_OpenStaticInvoker(OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches);
}
void OnTouchMoveCallback_Invoke_m5A978B8BBB0225870D74EF576BEEE90650F12641_ClosedStaticInvoker(OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311 (OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_resPtr, ___1_numTouches, ___2_numChangedTouches);

}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchMoveCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchMoveCallback__ctor_m4C0640607E599667473EB6962D76F52D6D708743 (OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTouchMoveCallback_Invoke_m5A978B8BBB0225870D74EF576BEEE90650F12641_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTouchMoveCallback_Invoke_m5A978B8BBB0225870D74EF576BEEE90650F12641_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTouchMoveCallback_Invoke_m5A978B8BBB0225870D74EF576BEEE90650F12641_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnTouchMoveCallback_Invoke_m5A978B8BBB0225870D74EF576BEEE90650F12641_Multicast;
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchMoveCallback::Invoke(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchMoveCallback_Invoke_m5A978B8BBB0225870D74EF576BEEE90650F12641 (OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WeChatWASM.WXSDKManagerHandler/OnTouchMoveCallback::BeginInvoke(System.IntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTouchMoveCallback_BeginInvoke_m417B1C2D2F45B09B75ABE4293822629D458B44E2 (OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_resPtr);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_numTouches);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_numChangedTouches);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchMoveCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchMoveCallback_EndInvoke_m3B2622DB8C9F5E566636BD1F4E2C2082BE1CCBF9 (OnTouchMoveCallback_t9DB9717B88C002764E7E333D69F2B9562FC57311* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnTouchStartCallback_Invoke_mD0DE01FAA1CBC10AE302B086F0F845B6BC7685CF_Multicast(OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6* currentDelegate = reinterpret_cast<OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTouchStartCallback_Invoke_mD0DE01FAA1CBC10AE302B086F0F845B6BC7685CF_OpenInst(OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_resPtr, ___1_numTouches, ___2_numChangedTouches, method);
}
void OnTouchStartCallback_Invoke_mD0DE01FAA1CBC10AE302B086F0F845B6BC7685CF_OpenStatic(OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_resPtr, ___1_numTouches, ___2_numChangedTouches, method);
}
void OnTouchStartCallback_Invoke_mD0DE01FAA1CBC10AE302B086F0F845B6BC7685CF_OpenStaticInvoker(OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches);
}
void OnTouchStartCallback_Invoke_mD0DE01FAA1CBC10AE302B086F0F845B6BC7685CF_ClosedStaticInvoker(OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6 (OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_resPtr, ___1_numTouches, ___2_numChangedTouches);

}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchStartCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchStartCallback__ctor_mE1464A81549BF43C433E4041CE14F8D36E608C09 (OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTouchStartCallback_Invoke_mD0DE01FAA1CBC10AE302B086F0F845B6BC7685CF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTouchStartCallback_Invoke_mD0DE01FAA1CBC10AE302B086F0F845B6BC7685CF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTouchStartCallback_Invoke_mD0DE01FAA1CBC10AE302B086F0F845B6BC7685CF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnTouchStartCallback_Invoke_mD0DE01FAA1CBC10AE302B086F0F845B6BC7685CF_Multicast;
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchStartCallback::Invoke(System.IntPtr,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchStartCallback_Invoke_mD0DE01FAA1CBC10AE302B086F0F845B6BC7685CF (OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_resPtr, ___1_numTouches, ___2_numChangedTouches, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WeChatWASM.WXSDKManagerHandler/OnTouchStartCallback::BeginInvoke(System.IntPtr,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTouchStartCallback_BeginInvoke_m264626FDAC9F8C63C394867A80F1691152821A57 (OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6* __this, intptr_t ___0_resPtr, int32_t ___1_numTouches, int32_t ___2_numChangedTouches, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_resPtr);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_numTouches);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_numChangedTouches);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnTouchStartCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTouchStartCallback_EndInvoke_m85A27298CA3FC5AD49BC94EDD5CC0346CB854F29 (OnTouchStartCallback_tB00F65F12248D5E5F13FD553BBDB1C7283078BA6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnBLECharacteristicValueChangeCallback_Invoke_m3D051FFD760EBB16A48AB893FDCCE7A9C46EAC72_Multicast(OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A* __this, String_t* ___0_deviceId, String_t* ___1_serviceId, String_t* ___2_characteristicId, intptr_t ___3_valuePtr, int32_t ___4_valueLength, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A* currentDelegate = reinterpret_cast<OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, String_t*, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_deviceId, ___1_serviceId, ___2_characteristicId, ___3_valuePtr, ___4_valueLength, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnBLECharacteristicValueChangeCallback_Invoke_m3D051FFD760EBB16A48AB893FDCCE7A9C46EAC72_OpenInst(OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A* __this, String_t* ___0_deviceId, String_t* ___1_serviceId, String_t* ___2_characteristicId, intptr_t ___3_valuePtr, int32_t ___4_valueLength, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceId, ___1_serviceId, ___2_characteristicId, ___3_valuePtr, ___4_valueLength, method);
}
void OnBLECharacteristicValueChangeCallback_Invoke_m3D051FFD760EBB16A48AB893FDCCE7A9C46EAC72_OpenStatic(OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A* __this, String_t* ___0_deviceId, String_t* ___1_serviceId, String_t* ___2_characteristicId, intptr_t ___3_valuePtr, int32_t ___4_valueLength, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_deviceId, ___1_serviceId, ___2_characteristicId, ___3_valuePtr, ___4_valueLength, method);
}
void OnBLECharacteristicValueChangeCallback_Invoke_m3D051FFD760EBB16A48AB893FDCCE7A9C46EAC72_OpenStaticInvoker(OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A* __this, String_t* ___0_deviceId, String_t* ___1_serviceId, String_t* ___2_characteristicId, intptr_t ___3_valuePtr, int32_t ___4_valueLength, const RuntimeMethod* method)
{
	InvokerActionInvoker5< String_t*, String_t*, String_t*, intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_deviceId, ___1_serviceId, ___2_characteristicId, ___3_valuePtr, ___4_valueLength);
}
void OnBLECharacteristicValueChangeCallback_Invoke_m3D051FFD760EBB16A48AB893FDCCE7A9C46EAC72_ClosedStaticInvoker(OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A* __this, String_t* ___0_deviceId, String_t* ___1_serviceId, String_t* ___2_characteristicId, intptr_t ___3_valuePtr, int32_t ___4_valueLength, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, String_t*, String_t*, String_t*, intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_deviceId, ___1_serviceId, ___2_characteristicId, ___3_valuePtr, ___4_valueLength);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A (OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A* __this, String_t* ___0_deviceId, String_t* ___1_serviceId, String_t* ___2_characteristicId, intptr_t ___3_valuePtr, int32_t ___4_valueLength, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, char*, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_deviceId' to native representation
	char* ____0_deviceId_marshaled = NULL;
	____0_deviceId_marshaled = il2cpp_codegen_marshal_string(___0_deviceId);

	// Marshaling of parameter '___1_serviceId' to native representation
	char* ____1_serviceId_marshaled = NULL;
	____1_serviceId_marshaled = il2cpp_codegen_marshal_string(___1_serviceId);

	// Marshaling of parameter '___2_characteristicId' to native representation
	char* ____2_characteristicId_marshaled = NULL;
	____2_characteristicId_marshaled = il2cpp_codegen_marshal_string(___2_characteristicId);

	// Native function invocation
	il2cppPInvokeFunc(____0_deviceId_marshaled, ____1_serviceId_marshaled, ____2_characteristicId_marshaled, ___3_valuePtr, ___4_valueLength);

	// Marshaling cleanup of parameter '___0_deviceId' native representation
	il2cpp_codegen_marshal_free(____0_deviceId_marshaled);
	____0_deviceId_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_serviceId' native representation
	il2cpp_codegen_marshal_free(____1_serviceId_marshaled);
	____1_serviceId_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_characteristicId' native representation
	il2cpp_codegen_marshal_free(____2_characteristicId_marshaled);
	____2_characteristicId_marshaled = NULL;

}
// System.Void WeChatWASM.WXSDKManagerHandler/OnBLECharacteristicValueChangeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBLECharacteristicValueChangeCallback__ctor_mCF4E9F38041E55535AD3345E56CFDA543027D599 (OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnBLECharacteristicValueChangeCallback_Invoke_m3D051FFD760EBB16A48AB893FDCCE7A9C46EAC72_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnBLECharacteristicValueChangeCallback_Invoke_m3D051FFD760EBB16A48AB893FDCCE7A9C46EAC72_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnBLECharacteristicValueChangeCallback_Invoke_m3D051FFD760EBB16A48AB893FDCCE7A9C46EAC72_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&OnBLECharacteristicValueChangeCallback_Invoke_m3D051FFD760EBB16A48AB893FDCCE7A9C46EAC72_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnBLECharacteristicValueChangeCallback_Invoke_m3D051FFD760EBB16A48AB893FDCCE7A9C46EAC72_Multicast;
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnBLECharacteristicValueChangeCallback::Invoke(System.String,System.String,System.String,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBLECharacteristicValueChangeCallback_Invoke_m3D051FFD760EBB16A48AB893FDCCE7A9C46EAC72 (OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A* __this, String_t* ___0_deviceId, String_t* ___1_serviceId, String_t* ___2_characteristicId, intptr_t ___3_valuePtr, int32_t ___4_valueLength, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, String_t*, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_deviceId, ___1_serviceId, ___2_characteristicId, ___3_valuePtr, ___4_valueLength, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WeChatWASM.WXSDKManagerHandler/OnBLECharacteristicValueChangeCallback::BeginInvoke(System.String,System.String,System.String,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnBLECharacteristicValueChangeCallback_BeginInvoke_m9EF1171A242C61359132E0CC89DDC1916671AD4B (OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A* __this, String_t* ___0_deviceId, String_t* ___1_serviceId, String_t* ___2_characteristicId, intptr_t ___3_valuePtr, int32_t ___4_valueLength, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___5_callback, RuntimeObject* ___6_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___0_deviceId;
	__d_args[1] = ___1_serviceId;
	__d_args[2] = ___2_characteristicId;
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___3_valuePtr);
	__d_args[4] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___4_valueLength);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___5_callback, (RuntimeObject*)___6_object);
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnBLECharacteristicValueChangeCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnBLECharacteristicValueChangeCallback_EndInvoke_mE8181C2EA7CF22431C6DDA98D7E54A8A489CA4D8 (OnBLECharacteristicValueChangeCallback_t2B589AF30DBC34FF98B71B039F915241E8B0B87A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void StartGyroscopeCallback_Invoke_m9C75E922D38796035436F10D2518FB40CAC5B006_Multicast(StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59* currentDelegate = reinterpret_cast<StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_callbackId, ___1_type, ___2_errMsg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StartGyroscopeCallback_Invoke_m9C75E922D38796035436F10D2518FB40CAC5B006_OpenInst(StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_type, ___2_errMsg, method);
}
void StartGyroscopeCallback_Invoke_m9C75E922D38796035436F10D2518FB40CAC5B006_OpenStatic(StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_type, ___2_errMsg, method);
}
void StartGyroscopeCallback_Invoke_m9C75E922D38796035436F10D2518FB40CAC5B006_OpenStaticInvoker(StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_callbackId, ___1_type, ___2_errMsg);
}
void StartGyroscopeCallback_Invoke_m9C75E922D38796035436F10D2518FB40CAC5B006_ClosedStaticInvoker(StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_callbackId, ___1_type, ___2_errMsg);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59 (StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_callbackId' to native representation
	char* ____0_callbackId_marshaled = NULL;
	____0_callbackId_marshaled = il2cpp_codegen_marshal_string(___0_callbackId);

	// Marshaling of parameter '___2_errMsg' to native representation
	char* ____2_errMsg_marshaled = NULL;
	____2_errMsg_marshaled = il2cpp_codegen_marshal_string(___2_errMsg);

	// Native function invocation
	il2cppPInvokeFunc(____0_callbackId_marshaled, ___1_type, ____2_errMsg_marshaled);

	// Marshaling cleanup of parameter '___0_callbackId' native representation
	il2cpp_codegen_marshal_free(____0_callbackId_marshaled);
	____0_callbackId_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_errMsg' native representation
	il2cpp_codegen_marshal_free(____2_errMsg_marshaled);
	____2_errMsg_marshaled = NULL;

}
// System.Void WeChatWASM.WXSDKManagerHandler/StartGyroscopeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGyroscopeCallback__ctor_m8E6D38D0E70F79E1526C2E55C29498080921BA57 (StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartGyroscopeCallback_Invoke_m9C75E922D38796035436F10D2518FB40CAC5B006_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StartGyroscopeCallback_Invoke_m9C75E922D38796035436F10D2518FB40CAC5B006_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartGyroscopeCallback_Invoke_m9C75E922D38796035436F10D2518FB40CAC5B006_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&StartGyroscopeCallback_Invoke_m9C75E922D38796035436F10D2518FB40CAC5B006_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&StartGyroscopeCallback_Invoke_m9C75E922D38796035436F10D2518FB40CAC5B006_Multicast;
}
// System.Void WeChatWASM.WXSDKManagerHandler/StartGyroscopeCallback::Invoke(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGyroscopeCallback_Invoke_m9C75E922D38796035436F10D2518FB40CAC5B006 (StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_callbackId, ___1_type, ___2_errMsg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WeChatWASM.WXSDKManagerHandler/StartGyroscopeCallback::BeginInvoke(System.String,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartGyroscopeCallback_BeginInvoke_m3CFC2147E86969E560317A1743473C4A067F5CFD (StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_callbackId;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_type);
	__d_args[2] = ___2_errMsg;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void WeChatWASM.WXSDKManagerHandler/StartGyroscopeCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGyroscopeCallback_EndInvoke_m9429B185548A8405B53D2E1CE5BB199C7C7B75BE (StartGyroscopeCallback_tDCA8DA854A9C18EA8AEB91C26440EAECFFD43E59* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void StopGyroscopeCallback_Invoke_mCC7828E9C98719B7C3658AEB5262A7368DF9B634_Multicast(StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2* currentDelegate = reinterpret_cast<StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_callbackId, ___1_type, ___2_errMsg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StopGyroscopeCallback_Invoke_mCC7828E9C98719B7C3658AEB5262A7368DF9B634_OpenInst(StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_type, ___2_errMsg, method);
}
void StopGyroscopeCallback_Invoke_mCC7828E9C98719B7C3658AEB5262A7368DF9B634_OpenStatic(StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_callbackId, ___1_type, ___2_errMsg, method);
}
void StopGyroscopeCallback_Invoke_mCC7828E9C98719B7C3658AEB5262A7368DF9B634_OpenStaticInvoker(StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	InvokerActionInvoker3< String_t*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_callbackId, ___1_type, ___2_errMsg);
}
void StopGyroscopeCallback_Invoke_mCC7828E9C98719B7C3658AEB5262A7368DF9B634_ClosedStaticInvoker(StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, String_t*, int32_t, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_callbackId, ___1_type, ___2_errMsg);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2 (StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_callbackId' to native representation
	char* ____0_callbackId_marshaled = NULL;
	____0_callbackId_marshaled = il2cpp_codegen_marshal_string(___0_callbackId);

	// Marshaling of parameter '___2_errMsg' to native representation
	char* ____2_errMsg_marshaled = NULL;
	____2_errMsg_marshaled = il2cpp_codegen_marshal_string(___2_errMsg);

	// Native function invocation
	il2cppPInvokeFunc(____0_callbackId_marshaled, ___1_type, ____2_errMsg_marshaled);

	// Marshaling cleanup of parameter '___0_callbackId' native representation
	il2cpp_codegen_marshal_free(____0_callbackId_marshaled);
	____0_callbackId_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_errMsg' native representation
	il2cpp_codegen_marshal_free(____2_errMsg_marshaled);
	____2_errMsg_marshaled = NULL;

}
// System.Void WeChatWASM.WXSDKManagerHandler/StopGyroscopeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopGyroscopeCallback__ctor_mD2559B7D53F30843A9F7BD60D5CE1847ECA37495 (StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StopGyroscopeCallback_Invoke_mCC7828E9C98719B7C3658AEB5262A7368DF9B634_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StopGyroscopeCallback_Invoke_mCC7828E9C98719B7C3658AEB5262A7368DF9B634_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StopGyroscopeCallback_Invoke_mCC7828E9C98719B7C3658AEB5262A7368DF9B634_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&StopGyroscopeCallback_Invoke_mCC7828E9C98719B7C3658AEB5262A7368DF9B634_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&StopGyroscopeCallback_Invoke_mCC7828E9C98719B7C3658AEB5262A7368DF9B634_Multicast;
}
// System.Void WeChatWASM.WXSDKManagerHandler/StopGyroscopeCallback::Invoke(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopGyroscopeCallback_Invoke_mCC7828E9C98719B7C3658AEB5262A7368DF9B634 (StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_callbackId, ___1_type, ___2_errMsg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WeChatWASM.WXSDKManagerHandler/StopGyroscopeCallback::BeginInvoke(System.String,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StopGyroscopeCallback_BeginInvoke_m6A3C080486E6682B3F5C665CBA399CE3634E670F (StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2* __this, String_t* ___0_callbackId, int32_t ___1_type, String_t* ___2_errMsg, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_callbackId;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_type);
	__d_args[2] = ___2_errMsg;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void WeChatWASM.WXSDKManagerHandler/StopGyroscopeCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopGyroscopeCallback_EndInvoke_m04D4DBF16D8EA7E4783BE06C36084D975686DFBD (StopGyroscopeCallback_t8C2575C893248AE4563440051A87B53D3A5D4EC2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnGyroscopeChangeCallback_Invoke_m81514679CEFC374D24F4438BE417A2B2EAC4AF4E_Multicast(OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA* __this, intptr_t ___0_xPtr, intptr_t ___1_yPtr, intptr_t ___2_zPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA* currentDelegate = reinterpret_cast<OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_xPtr, ___1_yPtr, ___2_zPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnGyroscopeChangeCallback_Invoke_m81514679CEFC374D24F4438BE417A2B2EAC4AF4E_OpenInst(OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA* __this, intptr_t ___0_xPtr, intptr_t ___1_yPtr, intptr_t ___2_zPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_xPtr, ___1_yPtr, ___2_zPtr, method);
}
void OnGyroscopeChangeCallback_Invoke_m81514679CEFC374D24F4438BE417A2B2EAC4AF4E_OpenStatic(OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA* __this, intptr_t ___0_xPtr, intptr_t ___1_yPtr, intptr_t ___2_zPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_xPtr, ___1_yPtr, ___2_zPtr, method);
}
void OnGyroscopeChangeCallback_Invoke_m81514679CEFC374D24F4438BE417A2B2EAC4AF4E_OpenStaticInvoker(OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA* __this, intptr_t ___0_xPtr, intptr_t ___1_yPtr, intptr_t ___2_zPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_xPtr, ___1_yPtr, ___2_zPtr);
}
void OnGyroscopeChangeCallback_Invoke_m81514679CEFC374D24F4438BE417A2B2EAC4AF4E_ClosedStaticInvoker(OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA* __this, intptr_t ___0_xPtr, intptr_t ___1_yPtr, intptr_t ___2_zPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_xPtr, ___1_yPtr, ___2_zPtr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA (OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA* __this, intptr_t ___0_xPtr, intptr_t ___1_yPtr, intptr_t ___2_zPtr, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_xPtr, ___1_yPtr, ___2_zPtr);

}
// System.Void WeChatWASM.WXSDKManagerHandler/OnGyroscopeChangeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGyroscopeChangeCallback__ctor_m7158C748DFA67B2CB0298AA88B63D9C79CE64DA2 (OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGyroscopeChangeCallback_Invoke_m81514679CEFC374D24F4438BE417A2B2EAC4AF4E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnGyroscopeChangeCallback_Invoke_m81514679CEFC374D24F4438BE417A2B2EAC4AF4E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGyroscopeChangeCallback_Invoke_m81514679CEFC374D24F4438BE417A2B2EAC4AF4E_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnGyroscopeChangeCallback_Invoke_m81514679CEFC374D24F4438BE417A2B2EAC4AF4E_Multicast;
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnGyroscopeChangeCallback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGyroscopeChangeCallback_Invoke_m81514679CEFC374D24F4438BE417A2B2EAC4AF4E (OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA* __this, intptr_t ___0_xPtr, intptr_t ___1_yPtr, intptr_t ___2_zPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_xPtr, ___1_yPtr, ___2_zPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult WeChatWASM.WXSDKManagerHandler/OnGyroscopeChangeCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnGyroscopeChangeCallback_BeginInvoke_mFFE55955D567AB78CF09F1181FFBA3B11E57E6C4 (OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA* __this, intptr_t ___0_xPtr, intptr_t ___1_yPtr, intptr_t ___2_zPtr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_xPtr);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_yPtr);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_zPtr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void WeChatWASM.WXSDKManagerHandler/OnGyroscopeChangeCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGyroscopeChangeCallback_EndInvoke_m2CC2839389325BAC9E0F3B95B144570C04507746 (OnGyroscopeChangeCallback_t6CBD6B9D7BE19F11C8E3BE0E9C4C6F75C28529FA* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.WXSDKManagerHandler/f::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void f__cctor_mCA5274B2513FA2C67712A6C391F4CBC040380FB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347* L_0 = (f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347*)il2cpp_codegen_object_new(f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347_il2cpp_TypeInfo_var);
		f__ctor_m5A26BD9A6A108CC567AE4EA82F985B3EA863A17C(L_0, NULL);
		((f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347_StaticFields*)il2cpp_codegen_static_fields_for(f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347_il2cpp_TypeInfo_var))->___Hq_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347_StaticFields*)il2cpp_codegen_static_fields_for(f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347_il2cpp_TypeInfo_var))->___Hq_0), (void*)L_0);
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler/f::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void f__ctor_m5A26BD9A6A108CC567AE4EA82F985B3EA863A17C (f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler/f::A(WeChatWASM.OnAddToFavoritesListenerResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void f_A_mA2FA811C039FB59DC589F9CDC473972E53D2CCA9 (f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347* __this, OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4* L_0 = ___0_p;
		V_0 = (bool)((((RuntimeObject*)(OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4* L_2 = (OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4*)il2cpp_codegen_object_new(OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4_il2cpp_TypeInfo_var);
		OnAddToFavoritesListenerResult__ctor_m36CAE86E7ACE0C1FAA99BE65D594347769074549(L_2, NULL);
		___0_p = L_2;
	}

IL_0012:
	{
		OnAddToFavoritesListenerResult_tE67154971A31FD7E1ECBA0C65CF3BC04B8F032A4* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_b_m6F2304C6EEA074E952440E49F6F808EDA60C8D46(L_4, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler/f::A(WeChatWASM.OnCopyUrlListenerResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void f_A_m6C6A254769E17396FCE33F2764854229BAC78B0F (f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347* __this, OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6* L_0 = ___0_p;
		V_0 = (bool)((((RuntimeObject*)(OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6* L_2 = (OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6*)il2cpp_codegen_object_new(OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6_il2cpp_TypeInfo_var);
		OnCopyUrlListenerResult__ctor_m2C76C0D6B2548CEDCDF3A70318282E6DCDC04B33(L_2, NULL);
		___0_p = L_2;
	}

IL_0012:
	{
		OnCopyUrlListenerResult_t8EB39BBD186F76A64A6DF7B7C5A4B7F8B97786B6* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_C_m55951192F0BE90A812239A3D4275D83609A2B90F(L_4, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler/f::A(WeChatWASM.OnHandoffListenerResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void f_A_mBBF0DCD8C62A1D9F26739EF4A061EE36487714F9 (f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347* __this, OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704* L_0 = ___0_p;
		V_0 = (bool)((((RuntimeObject*)(OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704* L_2 = (OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704*)il2cpp_codegen_object_new(OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704_il2cpp_TypeInfo_var);
		OnHandoffListenerResult__ctor_mC541EEFBBA49AA9E01573E501983BF0F0E8E5CF5(L_2, NULL);
		___0_p = L_2;
	}

IL_0012:
	{
		OnHandoffListenerResult_tF768DD71AB29DD8A87493E9B734F93B8E6D36704* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_c_mB3AADC68401F236A71D9C55E85A0AFCD2707184C(L_4, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler/f::A(WeChatWASM.OnShareTimelineListenerResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void f_A_mF58B7157DFC5F9D6671CD4CD2CB459058B684956 (f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347* __this, OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753* L_0 = ___0_p;
		V_0 = (bool)((((RuntimeObject*)(OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753* L_2 = (OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753*)il2cpp_codegen_object_new(OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753_il2cpp_TypeInfo_var);
		OnShareTimelineListenerResult__ctor_m46A20AFAE151261879B58BCCC0FF92638A35D820(L_2, NULL);
		___0_p = L_2;
	}

IL_0012:
	{
		OnShareTimelineListenerResult_tFD7C8E1BD8DBAC5358144CB3C6381080542C6753* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_D_m94A72FFFB712C05E51AA33064EBD630B68434DCD(L_4, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler/f::A(WeChatWASM.OnGameLiveStateChangeCallbackResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void f_A_mD7060377EA189B86FF94CD8540AD9047FE4249B1 (f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347* __this, OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084* L_0 = ___0_p;
		V_0 = (bool)((((RuntimeObject*)(OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084* L_2 = (OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084*)il2cpp_codegen_object_new(OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084_il2cpp_TypeInfo_var);
		OnGameLiveStateChangeCallbackResponse__ctor_m6566D436C34309D523610AA125CD79EAD2A212DB(L_2, NULL);
		___0_p = L_2;
	}

IL_0012:
	{
		OnGameLiveStateChangeCallbackResponse_tD4B21084A46737947E44C834284FDD17EE492084* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_d_mA11F3D969B8155C33256D93268ADF20DD8613F36(L_4, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler/f::A(WeChatWASM.WXShareAppMessageParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void f_A_m9A9952AA4A778C8C2AE9622432C049B1D33A43F2 (f_t95B4B44814FC03279F0A51AE2A122EB88D6E3347* __this, WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5* L_0 = ___0_p;
		V_0 = (bool)((((RuntimeObject*)(WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5* L_2 = (WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5*)il2cpp_codegen_object_new(WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5_il2cpp_TypeInfo_var);
		WXShareAppMessageParam__ctor_mA6A26616D794C4D4F8D776249B8A3DB9C9785BDF(L_2, NULL);
		___0_p = L_2;
	}

IL_0012:
	{
		WXShareAppMessageParam_t5E7BA0B3F3B6FEA5B091D37EB3650226F9F216F5* L_3 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_f_mC2D19F75992F90546A884C94D61C230B3CEFD87B(L_4, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.WXTCPSocket::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket__ctor_m2BF33671ACC6C5B26D35324F709E3E9648D1A409 (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, String_t* ___0_instanceID, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_instanceID;
		__this->___gy_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gy_0), (void*)L_0);
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::A(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_A_mE0461D15A8C4FD7FFA12A5AF715718C0B0EB67AD (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	char* ____1_p_marshaled = NULL;
	____1_p_marshaled = il2cpp_codegen_marshal_string(___1_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketBindWifi)(____0_p_marshaled, ____1_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_p' native representation
	il2cpp_codegen_marshal_free(____1_p_marshaled);
	____1_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::BindWifi(WeChatWASM.TCPSocketBindWifiOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_BindWifi_m8B727F0437A1E8E8E11D02888E0588BED570EDEE (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, TCPSocketBindWifiOption_tC91FCB7A5D38D2B3671CA08805A5117101D9C3E5* ___0_option, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___gy_0;
		TCPSocketBindWifiOption_tC91FCB7A5D38D2B3671CA08805A5117101D9C3E5* L_1 = ___0_option;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_1, NULL);
		WXTCPSocket_A_mE0461D15A8C4FD7FFA12A5AF715718C0B0EB67AD(L_0, L_2, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_A_mF84D280B8D88D0EA1AF6D5F45280D1035A001978 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketClose)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_Close_mC28CABD3761B2C560021C2DFE6D2E51BC3472E62 (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___gy_0;
		WXTCPSocket_A_mF84D280B8D88D0EA1AF6D5F45280D1035A001978(L_0, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::a(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_a_mEECE15DCCF3871D753E20C89EF72853E74FF9B22 (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	char* ____1_p_marshaled = NULL;
	____1_p_marshaled = il2cpp_codegen_marshal_string(___1_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketConnect)(____0_p_marshaled, ____1_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_p' native representation
	il2cpp_codegen_marshal_free(____1_p_marshaled);
	____1_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::Connect(WeChatWASM.TCPSocketConnectOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_Connect_mAC770C67EFD60C5BDE28A1C78C8492412DCB28FE (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, TCPSocketConnectOption_t3B8F028C07129833BFE34DF0999A7A5C09EFFB58* ___0_option, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___gy_0;
		TCPSocketConnectOption_t3B8F028C07129833BFE34DF0999A7A5C09EFFB58* L_1 = ___0_option;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_1, NULL);
		WXTCPSocket_a_mEECE15DCCF3871D753E20C89EF72853E74FF9B22(L_0, L_2, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_a_mC4BFD508689A68A2E98F607133BAC919221C9275 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketOffBindWifi)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::OffBindWifi(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_OffBindWifi_m811635B5A3B6687A41A2EFC1E99ACA227AF751FA (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnBindWifiActionList_1;
		String_t* L_1 = __this->___gy_0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_0, L_1, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_4 = ___0_listener;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_6 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnBindWifiActionList_1;
		V_2 = L_6;
		String_t* L_7 = __this->___gy_0;
		V_3 = L_7;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_8 = V_2;
		String_t* L_9 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_10 = V_2;
		String_t* L_11 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_12;
		L_12 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_10, L_11, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13 = ___0_listener;
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_8, L_9, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_14, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_15 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnBindWifiActionList_1;
		String_t* L_16 = __this->___gy_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_17;
		L_17 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_15, L_16, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		V_4 = (bool)((((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = __this->___gy_0;
		WXTCPSocket_a_mC4BFD508689A68A2E98F607133BAC919221C9275(L_19, NULL);
	}

IL_006d:
	{
		goto IL_0090;
	}

IL_0070:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_20 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnBindWifiActionList_1;
		String_t* L_21 = __this->___gy_0;
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_20, L_21, (Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)NULL, Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		String_t* L_22 = __this->___gy_0;
		WXTCPSocket_a_mC4BFD508689A68A2E98F607133BAC919221C9275(L_22, NULL);
	}

IL_0090:
	{
	}

IL_0091:
	{
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::B(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_B_mBABE3652471BEBA5A5D6A55FB69A4361E849CEE9 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketOffClose)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::OffClose(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_OffClose_m49ACA41E2E8A713F6B964DC1F774642C480A7EB8 (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnCloseActionList_2;
		String_t* L_1 = __this->___gy_0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_0, L_1, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_4 = ___0_listener;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_6 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnCloseActionList_2;
		V_2 = L_6;
		String_t* L_7 = __this->___gy_0;
		V_3 = L_7;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_8 = V_2;
		String_t* L_9 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_10 = V_2;
		String_t* L_11 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_12;
		L_12 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_10, L_11, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13 = ___0_listener;
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_8, L_9, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_14, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_15 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnCloseActionList_2;
		String_t* L_16 = __this->___gy_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_17;
		L_17 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_15, L_16, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		V_4 = (bool)((((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = __this->___gy_0;
		WXTCPSocket_B_mBABE3652471BEBA5A5D6A55FB69A4361E849CEE9(L_19, NULL);
	}

IL_006d:
	{
		goto IL_0090;
	}

IL_0070:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_20 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnCloseActionList_2;
		String_t* L_21 = __this->___gy_0;
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_20, L_21, (Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)NULL, Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		String_t* L_22 = __this->___gy_0;
		WXTCPSocket_B_mBABE3652471BEBA5A5D6A55FB69A4361E849CEE9(L_22, NULL);
	}

IL_0090:
	{
	}

IL_0091:
	{
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::b(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_b_m8DF9EB36C4DB019784BE409A6DBFF896CA9582EE (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketOffConnect)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::OffConnect(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_OffConnect_mBA7C68C621413938B1BAF4C0B5ECF7679E989E6E (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnConnectActionList_3;
		String_t* L_1 = __this->___gy_0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_0, L_1, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_4 = ___0_listener;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_6 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnConnectActionList_3;
		V_2 = L_6;
		String_t* L_7 = __this->___gy_0;
		V_3 = L_7;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_8 = V_2;
		String_t* L_9 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_10 = V_2;
		String_t* L_11 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_12;
		L_12 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_10, L_11, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13 = ___0_listener;
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_8, L_9, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_14, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_15 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnConnectActionList_3;
		String_t* L_16 = __this->___gy_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_17;
		L_17 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_15, L_16, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		V_4 = (bool)((((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = __this->___gy_0;
		WXTCPSocket_b_m8DF9EB36C4DB019784BE409A6DBFF896CA9582EE(L_19, NULL);
	}

IL_006d:
	{
		goto IL_0090;
	}

IL_0070:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_20 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnConnectActionList_3;
		String_t* L_21 = __this->___gy_0;
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_20, L_21, (Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)NULL, Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		String_t* L_22 = __this->___gy_0;
		WXTCPSocket_b_m8DF9EB36C4DB019784BE409A6DBFF896CA9582EE(L_22, NULL);
	}

IL_0090:
	{
	}

IL_0091:
	{
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::C(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_C_m5532D12EDF98DFEE187A8295B41A9A22917D0DE9 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketOffError)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::OffError(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_OffError_m552303EAE32CA5F4466A99BE4B2642CB4E2598B6 (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnErrorActionList_4;
		String_t* L_1 = __this->___gy_0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_0, L_1, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_4 = ___0_listener;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_6 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnErrorActionList_4;
		V_2 = L_6;
		String_t* L_7 = __this->___gy_0;
		V_3 = L_7;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_8 = V_2;
		String_t* L_9 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_10 = V_2;
		String_t* L_11 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_12;
		L_12 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_10, L_11, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13 = ___0_listener;
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_8, L_9, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_14, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_15 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnErrorActionList_4;
		String_t* L_16 = __this->___gy_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_17;
		L_17 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_15, L_16, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		V_4 = (bool)((((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = __this->___gy_0;
		WXTCPSocket_C_m5532D12EDF98DFEE187A8295B41A9A22917D0DE9(L_19, NULL);
	}

IL_006d:
	{
		goto IL_0090;
	}

IL_0070:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_20 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnErrorActionList_4;
		String_t* L_21 = __this->___gy_0;
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_20, L_21, (Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)NULL, Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		String_t* L_22 = __this->___gy_0;
		WXTCPSocket_C_m5532D12EDF98DFEE187A8295B41A9A22917D0DE9(L_22, NULL);
	}

IL_0090:
	{
	}

IL_0091:
	{
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::c(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_c_m6D6669BEB861069692E92E4B415940B2902FD1EF (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketOffMessage)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::OffMessage(System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_OffMessage_mB3EA620FD8A7F754275BBB3FD53DDBB7F9438D92 (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m41F0BBECEA372B722B6F6513BCCA53951FA69785_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF06FA07D85C06E283159DDF66527CDEB6AA2A39A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mEFF20DFD543442FBDB65BDBC3AC35320F59A050B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_0 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnMessageActionList_5;
		String_t* L_1 = __this->___gy_0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m41F0BBECEA372B722B6F6513BCCA53951FA69785(L_0, L_1, Dictionary_2_ContainsKey_m41F0BBECEA372B722B6F6513BCCA53951FA69785_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* L_4 = ___0_listener;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_6 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnMessageActionList_5;
		V_2 = L_6;
		String_t* L_7 = __this->___gy_0;
		V_3 = L_7;
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_8 = V_2;
		String_t* L_9 = V_3;
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_10 = V_2;
		String_t* L_11 = V_3;
		Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* L_12;
		L_12 = Dictionary_2_get_Item_mF06FA07D85C06E283159DDF66527CDEB6AA2A39A(L_10, L_11, Dictionary_2_get_Item_mF06FA07D85C06E283159DDF66527CDEB6AA2A39A_RuntimeMethod_var);
		Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* L_13 = ___0_listener;
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		Dictionary_2_set_Item_mEFF20DFD543442FBDB65BDBC3AC35320F59A050B(L_8, L_9, ((Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F*)Castclass((RuntimeObject*)L_14, Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_mEFF20DFD543442FBDB65BDBC3AC35320F59A050B_RuntimeMethod_var);
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_15 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnMessageActionList_5;
		String_t* L_16 = __this->___gy_0;
		Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* L_17;
		L_17 = Dictionary_2_get_Item_mF06FA07D85C06E283159DDF66527CDEB6AA2A39A(L_15, L_16, Dictionary_2_get_Item_mF06FA07D85C06E283159DDF66527CDEB6AA2A39A_RuntimeMethod_var);
		V_4 = (bool)((((RuntimeObject*)(Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = __this->___gy_0;
		WXTCPSocket_c_m6D6669BEB861069692E92E4B415940B2902FD1EF(L_19, NULL);
	}

IL_006d:
	{
		goto IL_0090;
	}

IL_0070:
	{
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_20 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnMessageActionList_5;
		String_t* L_21 = __this->___gy_0;
		Dictionary_2_set_Item_mEFF20DFD543442FBDB65BDBC3AC35320F59A050B(L_20, L_21, (Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F*)NULL, Dictionary_2_set_Item_mEFF20DFD543442FBDB65BDBC3AC35320F59A050B_RuntimeMethod_var);
		String_t* L_22 = __this->___gy_0;
		WXTCPSocket_c_m6D6669BEB861069692E92E4B415940B2902FD1EF(L_22, NULL);
	}

IL_0090:
	{
	}

IL_0091:
	{
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::D(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_D_m03393FD3815C83BA439985D11B5EBC030EC4039E (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketOnBindWifi)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::OnBindWifi(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_OnBindWifi_m2017B56074532094A0B93C17548534B1860C2C9E (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnBindWifiActionList_1;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_2 = (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)il2cpp_codegen_object_new(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058(L_2, Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnBindWifiActionList_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnBindWifiActionList_1), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_3 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnBindWifiActionList_1;
		String_t* L_4 = __this->___gy_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_3, L_4, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_7 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnBindWifiActionList_1;
		V_2 = L_7;
		String_t* L_8 = __this->___gy_0;
		V_3 = L_8;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13;
		L_13 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_11, L_12, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_14 = ___0_listener;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_9, L_10, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_15, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		goto IL_0078;
	}

IL_0058:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_16 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnBindWifiActionList_1;
		String_t* L_17 = __this->___gy_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_18 = ___0_listener;
		Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514(L_16, L_17, L_18, Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		String_t* L_19 = __this->___gy_0;
		WXTCPSocket_D_m03393FD3815C83BA439985D11B5EBC030EC4039E(L_19, NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_d_m65D207BE0D0FCB715A9C9EF0B2B955D7C6FB6625 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketOnClose)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::OnClose(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_OnClose_m81CA8B707BD7BF024ACB39FFCF2E633C3D533C08 (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnCloseActionList_2;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_2 = (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)il2cpp_codegen_object_new(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058(L_2, Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnCloseActionList_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnCloseActionList_2), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_3 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnCloseActionList_2;
		String_t* L_4 = __this->___gy_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_3, L_4, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_7 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnCloseActionList_2;
		V_2 = L_7;
		String_t* L_8 = __this->___gy_0;
		V_3 = L_8;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13;
		L_13 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_11, L_12, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_14 = ___0_listener;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_9, L_10, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_15, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		goto IL_0078;
	}

IL_0058:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_16 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnCloseActionList_2;
		String_t* L_17 = __this->___gy_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_18 = ___0_listener;
		Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514(L_16, L_17, L_18, Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		String_t* L_19 = __this->___gy_0;
		WXTCPSocket_d_m65D207BE0D0FCB715A9C9EF0B2B955D7C6FB6625(L_19, NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::E(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_E_m25F9F5C6878124F9B866B84562FC36AC6D5F4EFB (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketOnConnect)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::OnConnect(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_OnConnect_m7DFA6447162CF38CD25519E8AF415670F3E0BEBC (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnConnectActionList_3;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_2 = (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)il2cpp_codegen_object_new(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058(L_2, Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnConnectActionList_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnConnectActionList_3), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_3 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnConnectActionList_3;
		String_t* L_4 = __this->___gy_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_3, L_4, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_7 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnConnectActionList_3;
		V_2 = L_7;
		String_t* L_8 = __this->___gy_0;
		V_3 = L_8;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13;
		L_13 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_11, L_12, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_14 = ___0_listener;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_9, L_10, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_15, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		goto IL_0078;
	}

IL_0058:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_16 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnConnectActionList_3;
		String_t* L_17 = __this->___gy_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_18 = ___0_listener;
		Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514(L_16, L_17, L_18, Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		String_t* L_19 = __this->___gy_0;
		WXTCPSocket_E_m25F9F5C6878124F9B866B84562FC36AC6D5F4EFB(L_19, NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_e_mE55ABB8E09EF8D5D2538463846A6639E5C7A3077 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketOnError)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::OnError(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_OnError_mEADC21D6ADB52DEED1397B3131909986B052FD6D (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnErrorActionList_4;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_2 = (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)il2cpp_codegen_object_new(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058(L_2, Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnErrorActionList_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnErrorActionList_4), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_3 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnErrorActionList_4;
		String_t* L_4 = __this->___gy_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_3, L_4, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_7 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnErrorActionList_4;
		V_2 = L_7;
		String_t* L_8 = __this->___gy_0;
		V_3 = L_8;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13;
		L_13 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_11, L_12, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_14 = ___0_listener;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_9, L_10, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_15, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		goto IL_0078;
	}

IL_0058:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_16 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnErrorActionList_4;
		String_t* L_17 = __this->___gy_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_18 = ___0_listener;
		Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514(L_16, L_17, L_18, Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		String_t* L_19 = __this->___gy_0;
		WXTCPSocket_e_mE55ABB8E09EF8D5D2538463846A6639E5C7A3077(L_19, NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::A(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_A_m75DA95EE762BE905CF4BED508F87C83BA30AA7E3 (String_t* ___0_p, bool ___1_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketOnMessage)(____0_p_marshaled, static_cast<int32_t>(___1_p));

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::OnMessage(System.Action`1<WeChatWASM.TCPSocketOnMessageListenerResult>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_OnMessage_mB5B5C5F4E4D8D56A3C42B31FF72FE06F184FDE14 (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* ___0_listener, bool ___1_needInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA902F719881A6B357915D5CBC47A2D561E6431C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m41F0BBECEA372B722B6F6513BCCA53951FA69785_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCB6188789BA9B123219BF9EBE6963012B63015A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF06FA07D85C06E283159DDF66527CDEB6AA2A39A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mEFF20DFD543442FBDB65BDBC3AC35320F59A050B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = WXSDKManagerHandler_InitSDKPrompt_mEEF060366B843947B73910DD57462AD56806C325(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_008a;
	}

IL_000f:
	{
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_2 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnMessageActionList_5;
		V_1 = (bool)((((RuntimeObject*)(Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_4 = (Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F*)il2cpp_codegen_object_new(Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCB6188789BA9B123219BF9EBE6963012B63015A2(L_4, Dictionary_2__ctor_mCB6188789BA9B123219BF9EBE6963012B63015A2_RuntimeMethod_var);
		((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnMessageActionList_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnMessageActionList_5), (void*)L_4);
	}

IL_0027:
	{
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_5 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnMessageActionList_5;
		String_t* L_6 = __this->___gy_0;
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m41F0BBECEA372B722B6F6513BCCA53951FA69785(L_5, L_6, Dictionary_2_ContainsKey_m41F0BBECEA372B722B6F6513BCCA53951FA69785_RuntimeMethod_var);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_9 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnMessageActionList_5;
		V_3 = L_9;
		String_t* L_10 = __this->___gy_0;
		V_4 = L_10;
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_11 = V_3;
		String_t* L_12 = V_4;
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_13 = V_3;
		String_t* L_14 = V_4;
		Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* L_15;
		L_15 = Dictionary_2_get_Item_mF06FA07D85C06E283159DDF66527CDEB6AA2A39A(L_13, L_14, Dictionary_2_get_Item_mF06FA07D85C06E283159DDF66527CDEB6AA2A39A_RuntimeMethod_var);
		Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* L_16 = ___0_listener;
		Delegate_t* L_17;
		L_17 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_15, L_16, NULL);
		Dictionary_2_set_Item_mEFF20DFD543442FBDB65BDBC3AC35320F59A050B(L_11, L_12, ((Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F*)Castclass((RuntimeObject*)L_17, Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_mEFF20DFD543442FBDB65BDBC3AC35320F59A050B_RuntimeMethod_var);
		goto IL_008a;
	}

IL_0069:
	{
		Dictionary_2_t3F65AD95D97DEAEE5A85450D76B5AABCC55E1C6F* L_18 = ((WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_StaticFields*)il2cpp_codegen_static_fields_for(WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9_il2cpp_TypeInfo_var))->___OnMessageActionList_5;
		String_t* L_19 = __this->___gy_0;
		Action_1_t59936C347D12A9E1A345E7E499E5044AD9DDBA9F* L_20 = ___0_listener;
		Dictionary_2_Add_mA902F719881A6B357915D5CBC47A2D561E6431C4(L_18, L_19, L_20, Dictionary_2_Add_mA902F719881A6B357915D5CBC47A2D561E6431C4_RuntimeMethod_var);
		String_t* L_21 = __this->___gy_0;
		bool L_22 = ___1_needInfo;
		WXTCPSocket_A_m75DA95EE762BE905CF4BED508F87C83BA30AA7E3(L_21, L_22, NULL);
	}

IL_008a:
	{
		return;
	}
}
// System.Void WeChatWASM.WXTCPSocket::B(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_B_mB2844856765D0234A015E1D20EBE949CA0590B7F (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	char* ____1_p_marshaled = NULL;
	____1_p_marshaled = il2cpp_codegen_marshal_string(___1_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketWriteString)(____0_p_marshaled, ____1_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_p' native representation
	il2cpp_codegen_marshal_free(____1_p_marshaled);
	____1_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::A(System.String,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_A_m342EE6927C0160B2875954711ED3430783953AE6 (String_t* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_p, int32_t ___2_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, uint8_t*, int32_t);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	uint8_t* ____1_p_marshaled = NULL;
	if (___1_p != NULL)
	{
		____1_p_marshaled = reinterpret_cast<uint8_t*>((___1_p)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_TCPSocketWriteBuffer)(____0_p_marshaled, ____1_p_marshaled, ___2_p);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXTCPSocket::Write(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXTCPSocket_Write_m75E5FD89C5742B7ADEBA089E84321BD138F93B16 (WXTCPSocket_t9F00645DA68B6CC388D1009A6CF08405E4A69CD9* __this, RuntimeObject* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03C18C558CF457131D145134BB121B4C678C5B07);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___0_data;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = __this->___gy_0;
		String_t* L_4 = V_0;
		WXTCPSocket_B_mB2844856765D0234A015E1D20EBE949CA0590B7F(L_3, L_4, NULL);
		goto IL_0051;
	}

IL_0021:
	{
		RuntimeObject* L_5 = ___0_data;
		V_2 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_8 = __this->___gy_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		WXTCPSocket_A_m342EE6927C0160B2875954711ED3430783953AE6(L_8, L_9, ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		goto IL_0051;
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral03C18C558CF457131D145134BB121B4C678C5B07, NULL);
	}

IL_0051:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.WXUDPSocket::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket__ctor_mAF8ED9683E0D58ACD0D9188044BD100A9A82CDC0 (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, String_t* ___0_instanceID, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_instanceID;
		__this->___gZ_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gZ_0), (void*)L_0);
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_mC724BCD3FAE8D0AADB7FB080A2CC42B83714869B (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketClose)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_Close_m1CF657AE0F826160DE51E2328903143A4CF959FE (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___gZ_0;
		WXUDPSocket_A_mC724BCD3FAE8D0AADB7FB080A2CC42B83714869B(L_0, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::A(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_mA085757DA197127C72AD08C7D3A77C7B51E30E5D (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	char* ____1_p_marshaled = NULL;
	____1_p_marshaled = il2cpp_codegen_marshal_string(___1_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketConnect)(____0_p_marshaled, ____1_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_p' native representation
	il2cpp_codegen_marshal_free(____1_p_marshaled);
	____1_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::Connect(WeChatWASM.UDPSocketConnectOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_Connect_mDA23E9CE497D021A7D248D76FFDDF846500BB580 (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, UDPSocketConnectOption_t00C3ADCBF42495B5FEB5120517985DFD7E0B672E* ___0_option, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___gZ_0;
		UDPSocketConnectOption_t00C3ADCBF42495B5FEB5120517985DFD7E0B672E* L_1 = ___0_option;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_1, NULL);
		WXUDPSocket_A_mA085757DA197127C72AD08C7D3A77C7B51E30E5D(L_0, L_2, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_a_m927FEADC35FCD8A5D99676C55224397A7D71C6A0 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketOffClose)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::OffClose(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_OffClose_mBC656003CC154E6BBE8E53D3A299A12A1309310A (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnCloseActionList_1;
		String_t* L_1 = __this->___gZ_0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_0, L_1, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_4 = ___0_listener;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_6 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnCloseActionList_1;
		V_2 = L_6;
		String_t* L_7 = __this->___gZ_0;
		V_3 = L_7;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_8 = V_2;
		String_t* L_9 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_10 = V_2;
		String_t* L_11 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_12;
		L_12 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_10, L_11, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13 = ___0_listener;
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_8, L_9, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_14, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_15 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnCloseActionList_1;
		String_t* L_16 = __this->___gZ_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_17;
		L_17 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_15, L_16, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		V_4 = (bool)((((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = __this->___gZ_0;
		WXUDPSocket_a_m927FEADC35FCD8A5D99676C55224397A7D71C6A0(L_19, NULL);
	}

IL_006d:
	{
		goto IL_0090;
	}

IL_0070:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_20 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnCloseActionList_1;
		String_t* L_21 = __this->___gZ_0;
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_20, L_21, (Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)NULL, Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		String_t* L_22 = __this->___gZ_0;
		WXUDPSocket_a_m927FEADC35FCD8A5D99676C55224397A7D71C6A0(L_22, NULL);
	}

IL_0090:
	{
	}

IL_0091:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::B(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_B_mD134BD7F400CAF53904B1872503890EEB89FCF3A (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketOffError)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::OffError(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_OffError_mAF1269EC400DE45C5EDBD5AC5EFDE2BEC40B16FE (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnErrorActionList_2;
		String_t* L_1 = __this->___gZ_0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_0, L_1, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_4 = ___0_listener;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_6 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnErrorActionList_2;
		V_2 = L_6;
		String_t* L_7 = __this->___gZ_0;
		V_3 = L_7;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_8 = V_2;
		String_t* L_9 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_10 = V_2;
		String_t* L_11 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_12;
		L_12 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_10, L_11, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13 = ___0_listener;
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_8, L_9, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_14, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_15 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnErrorActionList_2;
		String_t* L_16 = __this->___gZ_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_17;
		L_17 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_15, L_16, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		V_4 = (bool)((((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = __this->___gZ_0;
		WXUDPSocket_B_mD134BD7F400CAF53904B1872503890EEB89FCF3A(L_19, NULL);
	}

IL_006d:
	{
		goto IL_0090;
	}

IL_0070:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_20 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnErrorActionList_2;
		String_t* L_21 = __this->___gZ_0;
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_20, L_21, (Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)NULL, Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		String_t* L_22 = __this->___gZ_0;
		WXUDPSocket_B_mD134BD7F400CAF53904B1872503890EEB89FCF3A(L_22, NULL);
	}

IL_0090:
	{
	}

IL_0091:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::b(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_b_mA2559BB152450235D08A51889F0E0403A31F7CE7 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketOffListening)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::OffListening(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_OffListening_m7E02C8BF9CCE44689B97B41C2E7B48382AB8BA36 (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnListeningActionList_3;
		String_t* L_1 = __this->___gZ_0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_0, L_1, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_4 = ___0_listener;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_6 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnListeningActionList_3;
		V_2 = L_6;
		String_t* L_7 = __this->___gZ_0;
		V_3 = L_7;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_8 = V_2;
		String_t* L_9 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_10 = V_2;
		String_t* L_11 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_12;
		L_12 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_10, L_11, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13 = ___0_listener;
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_8, L_9, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_14, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_15 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnListeningActionList_3;
		String_t* L_16 = __this->___gZ_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_17;
		L_17 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_15, L_16, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		V_4 = (bool)((((RuntimeObject*)(Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = __this->___gZ_0;
		WXUDPSocket_b_mA2559BB152450235D08A51889F0E0403A31F7CE7(L_19, NULL);
	}

IL_006d:
	{
		goto IL_0090;
	}

IL_0070:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_20 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnListeningActionList_3;
		String_t* L_21 = __this->___gZ_0;
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_20, L_21, (Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)NULL, Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		String_t* L_22 = __this->___gZ_0;
		WXUDPSocket_b_mA2559BB152450235D08A51889F0E0403A31F7CE7(L_22, NULL);
	}

IL_0090:
	{
	}

IL_0091:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::C(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_C_mB468C2AFCCD55E5E2E4DD3AD9578E739681A016E (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketOffMessage)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::OffMessage(System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_OffMessage_mF13E01DB47900F8A1962F94D9A448CB0D79FDE41 (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA5F78BF5B052507D70C24550C1358CD64B35A6ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA47E1799926B999476DC12DA9DFAED7A0B4442A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m3B4D783E700645173F67AEAE620DCDFBB0AB17CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_0 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnMessageActionList_4;
		String_t* L_1 = __this->___gZ_0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mA5F78BF5B052507D70C24550C1358CD64B35A6ED(L_0, L_1, Dictionary_2_ContainsKey_mA5F78BF5B052507D70C24550C1358CD64B35A6ED_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0091;
		}
	}
	{
		Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* L_4 = ___0_listener;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_6 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnMessageActionList_4;
		V_2 = L_6;
		String_t* L_7 = __this->___gZ_0;
		V_3 = L_7;
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_8 = V_2;
		String_t* L_9 = V_3;
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_10 = V_2;
		String_t* L_11 = V_3;
		Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* L_12;
		L_12 = Dictionary_2_get_Item_mA47E1799926B999476DC12DA9DFAED7A0B4442A5(L_10, L_11, Dictionary_2_get_Item_mA47E1799926B999476DC12DA9DFAED7A0B4442A5_RuntimeMethod_var);
		Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* L_13 = ___0_listener;
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		Dictionary_2_set_Item_m3B4D783E700645173F67AEAE620DCDFBB0AB17CF(L_8, L_9, ((Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2*)Castclass((RuntimeObject*)L_14, Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m3B4D783E700645173F67AEAE620DCDFBB0AB17CF_RuntimeMethod_var);
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_15 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnMessageActionList_4;
		String_t* L_16 = __this->___gZ_0;
		Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* L_17;
		L_17 = Dictionary_2_get_Item_mA47E1799926B999476DC12DA9DFAED7A0B4442A5(L_15, L_16, Dictionary_2_get_Item_mA47E1799926B999476DC12DA9DFAED7A0B4442A5_RuntimeMethod_var);
		V_4 = (bool)((((RuntimeObject*)(Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2*)L_17) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_19 = __this->___gZ_0;
		WXUDPSocket_C_mB468C2AFCCD55E5E2E4DD3AD9578E739681A016E(L_19, NULL);
	}

IL_006d:
	{
		goto IL_0090;
	}

IL_0070:
	{
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_20 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnMessageActionList_4;
		String_t* L_21 = __this->___gZ_0;
		Dictionary_2_set_Item_m3B4D783E700645173F67AEAE620DCDFBB0AB17CF(L_20, L_21, (Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2*)NULL, Dictionary_2_set_Item_m3B4D783E700645173F67AEAE620DCDFBB0AB17CF_RuntimeMethod_var);
		String_t* L_22 = __this->___gZ_0;
		WXUDPSocket_C_mB468C2AFCCD55E5E2E4DD3AD9578E739681A016E(L_22, NULL);
	}

IL_0090:
	{
	}

IL_0091:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::c(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_c_mE88796AAD436D40CFD265FCC7C90E0D0C48B5C7D (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketOnClose)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::OnClose(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_OnClose_mE1C952E7142FAE9D5ACB7CB5334F907246FB25E6 (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnCloseActionList_1;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_2 = (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)il2cpp_codegen_object_new(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058(L_2, Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnCloseActionList_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnCloseActionList_1), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_3 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnCloseActionList_1;
		String_t* L_4 = __this->___gZ_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_3, L_4, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_7 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnCloseActionList_1;
		V_2 = L_7;
		String_t* L_8 = __this->___gZ_0;
		V_3 = L_8;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13;
		L_13 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_11, L_12, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_14 = ___0_listener;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_9, L_10, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_15, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		goto IL_0078;
	}

IL_0058:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_16 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnCloseActionList_1;
		String_t* L_17 = __this->___gZ_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_18 = ___0_listener;
		Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514(L_16, L_17, L_18, Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		String_t* L_19 = __this->___gZ_0;
		WXUDPSocket_c_mE88796AAD436D40CFD265FCC7C90E0D0C48B5C7D(L_19, NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::D(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_D_mDF8B21E665BD4C6178CBA72E420EEBFBD11FF16A (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketOnError)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::OnError(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_OnError_m3D283D404D0CCF6358A7F827420071D1CDEA986C (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnErrorActionList_2;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_2 = (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)il2cpp_codegen_object_new(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058(L_2, Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnErrorActionList_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnErrorActionList_2), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_3 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnErrorActionList_2;
		String_t* L_4 = __this->___gZ_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_3, L_4, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_7 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnErrorActionList_2;
		V_2 = L_7;
		String_t* L_8 = __this->___gZ_0;
		V_3 = L_8;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13;
		L_13 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_11, L_12, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_14 = ___0_listener;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_9, L_10, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_15, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		goto IL_0078;
	}

IL_0058:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_16 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnErrorActionList_2;
		String_t* L_17 = __this->___gZ_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_18 = ___0_listener;
		Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514(L_16, L_17, L_18, Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		String_t* L_19 = __this->___gZ_0;
		WXUDPSocket_D_mDF8B21E665BD4C6178CBA72E420EEBFBD11FF16A(L_19, NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_d_mD2CF9902DEC3E50537B3B2618439A0A983A3074A (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketOnListening)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::OnListening(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_OnListening_mA4C6392A3E9C19D958B6856EA5330BDD475BE5DA (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnListeningActionList_3;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_2 = (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)il2cpp_codegen_object_new(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058(L_2, Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnListeningActionList_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnListeningActionList_3), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_3 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnListeningActionList_3;
		String_t* L_4 = __this->___gZ_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_3, L_4, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_7 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnListeningActionList_3;
		V_2 = L_7;
		String_t* L_8 = __this->___gZ_0;
		V_3 = L_8;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13;
		L_13 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_11, L_12, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_14 = ___0_listener;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_9, L_10, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_15, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		goto IL_0078;
	}

IL_0058:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_16 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnListeningActionList_3;
		String_t* L_17 = __this->___gZ_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_18 = ___0_listener;
		Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514(L_16, L_17, L_18, Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		String_t* L_19 = __this->___gZ_0;
		WXUDPSocket_d_mD2CF9902DEC3E50537B3B2618439A0A983A3074A(L_19, NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::A(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_mEC3EA79F70F90CE6A103A82143671B9E9F4FF684 (String_t* ___0_p, bool ___1_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketOnMessage)(____0_p_marshaled, static_cast<int32_t>(___1_p));

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::OnMessage(System.Action`1<WeChatWASM.UDPSocketOnMessageListenerResult>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_OnMessage_m7B24F3026A2714CB91F771939BD2A0205BAB84B5 (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* ___0_listener, bool ___1_needInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF834A6B3C5FC5EE8FA49D0F5E125F51ABAD3C290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mA5F78BF5B052507D70C24550C1358CD64B35A6ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m03E62C4BCDCCE34440F2C7B98E80A0C8258D5E66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA47E1799926B999476DC12DA9DFAED7A0B4442A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m3B4D783E700645173F67AEAE620DCDFBB0AB17CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = WXSDKManagerHandler_InitSDKPrompt_mEEF060366B843947B73910DD57462AD56806C325(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		goto IL_008a;
	}

IL_000f:
	{
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_2 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnMessageActionList_4;
		V_1 = (bool)((((RuntimeObject*)(Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_4 = (Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF*)il2cpp_codegen_object_new(Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m03E62C4BCDCCE34440F2C7B98E80A0C8258D5E66(L_4, Dictionary_2__ctor_m03E62C4BCDCCE34440F2C7B98E80A0C8258D5E66_RuntimeMethod_var);
		((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnMessageActionList_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnMessageActionList_4), (void*)L_4);
	}

IL_0027:
	{
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_5 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnMessageActionList_4;
		String_t* L_6 = __this->___gZ_0;
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_mA5F78BF5B052507D70C24550C1358CD64B35A6ED(L_5, L_6, Dictionary_2_ContainsKey_mA5F78BF5B052507D70C24550C1358CD64B35A6ED_RuntimeMethod_var);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_9 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnMessageActionList_4;
		V_3 = L_9;
		String_t* L_10 = __this->___gZ_0;
		V_4 = L_10;
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_11 = V_3;
		String_t* L_12 = V_4;
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_13 = V_3;
		String_t* L_14 = V_4;
		Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* L_15;
		L_15 = Dictionary_2_get_Item_mA47E1799926B999476DC12DA9DFAED7A0B4442A5(L_13, L_14, Dictionary_2_get_Item_mA47E1799926B999476DC12DA9DFAED7A0B4442A5_RuntimeMethod_var);
		Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* L_16 = ___0_listener;
		Delegate_t* L_17;
		L_17 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_15, L_16, NULL);
		Dictionary_2_set_Item_m3B4D783E700645173F67AEAE620DCDFBB0AB17CF(L_11, L_12, ((Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2*)Castclass((RuntimeObject*)L_17, Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m3B4D783E700645173F67AEAE620DCDFBB0AB17CF_RuntimeMethod_var);
		goto IL_008a;
	}

IL_0069:
	{
		Dictionary_2_t307C472BB32A7B2447CD03FAC3197D444532A6FF* L_18 = ((WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_StaticFields*)il2cpp_codegen_static_fields_for(WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F_il2cpp_TypeInfo_var))->___OnMessageActionList_4;
		String_t* L_19 = __this->___gZ_0;
		Action_1_t0243E918F8633EC05111A6D64635A35BABD4A5D2* L_20 = ___0_listener;
		Dictionary_2_Add_mF834A6B3C5FC5EE8FA49D0F5E125F51ABAD3C290(L_18, L_19, L_20, Dictionary_2_Add_mF834A6B3C5FC5EE8FA49D0F5E125F51ABAD3C290_RuntimeMethod_var);
		String_t* L_21 = __this->___gZ_0;
		bool L_22 = ___1_needInfo;
		WXUDPSocket_A_mEC3EA79F70F90CE6A103A82143671B9E9F4FF684(L_21, L_22, NULL);
	}

IL_008a:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::A(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_m4195D26DF67B896657ACAEC55D2681509667C683 (String_t* ___0_p, String_t* ___1_p, String_t* ___2_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	char* ____1_p_marshaled = NULL;
	____1_p_marshaled = il2cpp_codegen_marshal_string(___1_p);

	// Marshaling of parameter '___2_p' to native representation
	char* ____2_p_marshaled = NULL;
	____2_p_marshaled = il2cpp_codegen_marshal_string(___2_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketSendString)(____0_p_marshaled, ____1_p_marshaled, ____2_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_p' native representation
	il2cpp_codegen_marshal_free(____1_p_marshaled);
	____1_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_p' native representation
	il2cpp_codegen_marshal_free(____2_p_marshaled);
	____2_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::A(System.String,System.Byte[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_m439518209B8CC22B97D647603EEAC52E3866E12C (String_t* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_p, int32_t ___2_p, String_t* ___3_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, uint8_t*, int32_t, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	uint8_t* ____1_p_marshaled = NULL;
	if (___1_p != NULL)
	{
		____1_p_marshaled = reinterpret_cast<uint8_t*>((___1_p)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___3_p' to native representation
	char* ____3_p_marshaled = NULL;
	____3_p_marshaled = il2cpp_codegen_marshal_string(___3_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketSendBuffer)(____0_p_marshaled, ____1_p_marshaled, ___2_p, ____3_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___3_p' native representation
	il2cpp_codegen_marshal_free(____3_p_marshaled);
	____3_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::Send(WeChatWASM.UDPSocketSendOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_Send_m208A8D0EABEDA529B0FBC06DAE4D0C4C0247A743 (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* ___0_option, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC2C1E33BD53389A0851A59E94138ABF887C58FE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_0 = ___0_option;
		RuntimeObject* L_1 = L_0->___message_1;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_4 = __this->___gZ_0;
		String_t* L_5 = V_0;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_6 = (UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573*)il2cpp_codegen_object_new(UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573_il2cpp_TypeInfo_var);
		UDPSocketSendParam__ctor_m38498E52734771A64EEF6008B1BE6D7EBD0EA12F(L_6, NULL);
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_7 = L_6;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_8 = ___0_option;
		String_t* L_9 = L_8->___address_0;
		L_7->___address_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___address_0), (void*)L_9);
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_10 = L_7;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_11 = ___0_option;
		int32_t L_12 = L_11->___port_2;
		L_10->___port_1 = L_12;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_13 = L_10;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_14 = ___0_option;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_15 = L_14->___length_3;
		L_13->___length_2 = L_15;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_16 = L_13;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_17 = ___0_option;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_18 = L_17->___offset_4;
		L_16->___offset_3 = L_18;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_19 = L_16;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_20 = ___0_option;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_21 = L_20->___setBroadcast_5;
		L_19->___setBroadcast_4 = L_21;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_22;
		L_22 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_19, NULL);
		WXUDPSocket_A_m4195D26DF67B896657ACAEC55D2681509667C683(L_4, L_5, L_22, NULL);
		goto IL_00e7;
	}

IL_006c:
	{
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_23 = ___0_option;
		RuntimeObject* L_24 = L_23->___message_1;
		V_2 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_24, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_25) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_27 = __this->___gZ_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_30 = (UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573*)il2cpp_codegen_object_new(UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573_il2cpp_TypeInfo_var);
		UDPSocketSendParam__ctor_m38498E52734771A64EEF6008B1BE6D7EBD0EA12F(L_30, NULL);
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_31 = L_30;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_32 = ___0_option;
		String_t* L_33 = L_32->___address_0;
		L_31->___address_0 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___address_0), (void*)L_33);
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_34 = L_31;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_35 = ___0_option;
		int32_t L_36 = L_35->___port_2;
		L_34->___port_1 = L_36;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_37 = L_34;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_38 = ___0_option;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_39 = L_38->___length_3;
		L_37->___length_2 = L_39;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_40 = L_37;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_41 = ___0_option;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_42 = L_41->___offset_4;
		L_40->___offset_3 = L_42;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_43 = L_40;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_44 = ___0_option;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_45 = L_44->___setBroadcast_5;
		L_43->___setBroadcast_4 = L_45;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_46;
		L_46 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_43, NULL);
		WXUDPSocket_A_m439518209B8CC22B97D647603EEAC52E3866E12C(L_27, L_28, ((int32_t)(((RuntimeArray*)L_29)->max_length)), L_46, NULL);
		goto IL_00e7;
	}

IL_00da:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralFC2C1E33BD53389A0851A59E94138ABF887C58FE, NULL);
	}

IL_00e7:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::A(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_A_m7D18230DB13C91EE5406C7254E35B4909D6BA0A1 (String_t* ___0_p, double ___1_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, double);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketSetTTL)(____0_p_marshaled, ___1_p);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::SetTTL(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_SetTTL_mA5B30AB39F8571EED6B7531383B5C6D146BEF18C (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, double ___0_ttl, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___gZ_0;
		double L_1 = ___0_ttl;
		WXUDPSocket_A_m7D18230DB13C91EE5406C7254E35B4909D6BA0A1(L_0, L_1, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXUDPSocket::a(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_a_mD5FA18B2E366E4D154B4BDE7801CB0234AC73DF9 (String_t* ___0_p, String_t* ___1_p, String_t* ___2_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	char* ____1_p_marshaled = NULL;
	____1_p_marshaled = il2cpp_codegen_marshal_string(___1_p);

	// Marshaling of parameter '___2_p' to native representation
	char* ____2_p_marshaled = NULL;
	____2_p_marshaled = il2cpp_codegen_marshal_string(___2_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketWriteString)(____0_p_marshaled, ____1_p_marshaled, ____2_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_p' native representation
	il2cpp_codegen_marshal_free(____1_p_marshaled);
	____1_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_p' native representation
	il2cpp_codegen_marshal_free(____2_p_marshaled);
	____2_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::a(System.String,System.Byte[],System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_a_mE6F9F83B28CA0F10FD9937C2BBDCE39F82E0DD17 (String_t* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_p, int32_t ___2_p, String_t* ___3_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, uint8_t*, int32_t, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	uint8_t* ____1_p_marshaled = NULL;
	if (___1_p != NULL)
	{
		____1_p_marshaled = reinterpret_cast<uint8_t*>((___1_p)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___3_p' to native representation
	char* ____3_p_marshaled = NULL;
	____3_p_marshaled = il2cpp_codegen_marshal_string(___3_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WX_UDPSocketWriteBuffer)(____0_p_marshaled, ____1_p_marshaled, ___2_p, ____3_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___3_p' native representation
	il2cpp_codegen_marshal_free(____3_p_marshaled);
	____3_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUDPSocket::Write(WeChatWASM.UDPSocketSendOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUDPSocket_Write_m981ADFDBA2C21A6A13BB7C391208B4203339B4AA (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* ___0_option, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03C18C558CF457131D145134BB121B4C678C5B07);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_0 = ___0_option;
		RuntimeObject* L_1 = L_0->___message_1;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		String_t* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_4 = __this->___gZ_0;
		String_t* L_5 = V_0;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_6 = (UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573*)il2cpp_codegen_object_new(UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573_il2cpp_TypeInfo_var);
		UDPSocketSendParam__ctor_m38498E52734771A64EEF6008B1BE6D7EBD0EA12F(L_6, NULL);
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_7 = L_6;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_8 = ___0_option;
		String_t* L_9 = L_8->___address_0;
		L_7->___address_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___address_0), (void*)L_9);
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_10 = L_7;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_11 = ___0_option;
		int32_t L_12 = L_11->___port_2;
		L_10->___port_1 = L_12;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_13 = L_10;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_14 = ___0_option;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_15 = L_14->___length_3;
		L_13->___length_2 = L_15;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_16 = L_13;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_17 = ___0_option;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_18 = L_17->___offset_4;
		L_16->___offset_3 = L_18;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_19 = L_16;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_20 = ___0_option;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_21 = L_20->___setBroadcast_5;
		L_19->___setBroadcast_4 = L_21;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_22;
		L_22 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_19, NULL);
		WXUDPSocket_a_mD5FA18B2E366E4D154B4BDE7801CB0234AC73DF9(L_4, L_5, L_22, NULL);
		goto IL_00e7;
	}

IL_006c:
	{
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_23 = ___0_option;
		RuntimeObject* L_24 = L_23->___message_1;
		V_2 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_24, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_25) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_27 = __this->___gZ_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_30 = (UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573*)il2cpp_codegen_object_new(UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573_il2cpp_TypeInfo_var);
		UDPSocketSendParam__ctor_m38498E52734771A64EEF6008B1BE6D7EBD0EA12F(L_30, NULL);
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_31 = L_30;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_32 = ___0_option;
		String_t* L_33 = L_32->___address_0;
		L_31->___address_0 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___address_0), (void*)L_33);
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_34 = L_31;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_35 = ___0_option;
		int32_t L_36 = L_35->___port_2;
		L_34->___port_1 = L_36;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_37 = L_34;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_38 = ___0_option;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_39 = L_38->___length_3;
		L_37->___length_2 = L_39;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_40 = L_37;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_41 = ___0_option;
		Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 L_42 = L_41->___offset_4;
		L_40->___offset_3 = L_42;
		UDPSocketSendParam_tF419412A297D05BFA7641469FAE52F5E7E4CD573* L_43 = L_40;
		UDPSocketSendOption_tCC4F07BC55FC818CFC6866993F5342B39A3F3D38* L_44 = ___0_option;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_45 = L_44->___setBroadcast_5;
		L_43->___setBroadcast_4 = L_45;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_46;
		L_46 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_43, NULL);
		WXUDPSocket_a_mE6F9F83B28CA0F10FD9937C2BBDCE39F82E0DD17(L_27, L_28, ((int32_t)(((RuntimeArray*)L_29)->max_length)), L_46, NULL);
		goto IL_00e7;
	}

IL_00da:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral03C18C558CF457131D145134BB121B4C678C5B07, NULL);
	}

IL_00e7:
	{
		return;
	}
}
// System.Int32 WeChatWASM.WXUDPSocket::a(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WXUDPSocket_a_mA3CCB2E126C920ACF7E3E04B373FFE5B1ADD1585 (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	char* ____1_p_marshaled = NULL;
	____1_p_marshaled = il2cpp_codegen_marshal_string(___1_p);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WX_UDPSocketBind)(____0_p_marshaled, ____1_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_p' native representation
	il2cpp_codegen_marshal_free(____1_p_marshaled);
	____1_p_marshaled = NULL;

	return returnValue;
}
// System.Int32 WeChatWASM.WXUDPSocket::Bind(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WXUDPSocket_Bind_mDF015061CA86C8837B00365A177BF3E6D9355A4C (WXUDPSocket_tD8B16C346A1B0E388E8D38FACC148CB037282F6F* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UDPSocketBindParam_t16B4485DE814711603E631D3264BFD32D47BCEE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = __this->___gZ_0;
		UDPSocketBindParam_t16B4485DE814711603E631D3264BFD32D47BCEE8* L_1 = (UDPSocketBindParam_t16B4485DE814711603E631D3264BFD32D47BCEE8*)il2cpp_codegen_object_new(UDPSocketBindParam_t16B4485DE814711603E631D3264BFD32D47BCEE8_il2cpp_TypeInfo_var);
		UDPSocketBindParam__ctor_mC562DBF0BA76A9171A65CAE8B58D3F9E01572162(L_1, NULL);
		UDPSocketBindParam_t16B4485DE814711603E631D3264BFD32D47BCEE8* L_2 = L_1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = ___0_port;
		L_2->___port_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_2, NULL);
		int32_t L_5;
		L_5 = WXUDPSocket_a_mA3CCB2E126C920ACF7E3E04B373FFE5B1ADD1585(L_0, L_4, NULL);
		V_0 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.WXUpdateManager::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUpdateManager__ctor_mE4279282B4A07D5ADA2E5702E14A155D97D9A27B (WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		__this->___gz_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gz_0), (void*)L_0);
		return;
	}
}
// System.Void WeChatWASM.WXUpdateManager::ApplyUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUpdateManager_ApplyUpdate_m1FE7AD2134B0A38B2ACE556D3862DCF6FD12A5CB (WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral205DE8E4F1ED52D3B7D39F5659F1B19CCBE3EE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EA55AEB63A32FC37139631289BE3F0FD33E7F0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___gz_0;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_WX_ClassOneWayNoFunction_v_m89FBBA04F4F7A4A7CE7C9FA52790AEFDF59FF54C(_stringLiteral205DE8E4F1ED52D3B7D39F5659F1B19CCBE3EE3E, _stringLiteral4EA55AEB63A32FC37139631289BE3F0FD33E7F0F, L_0, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXUpdateManager::OnCheckForUpdate(System.Action`1<WeChatWASM.OnCheckForUpdateListenerResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUpdateManager_OnCheckForUpdate_m3980609043D82C4E40BCDC7FF05D9F2563BD400B (WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5* __this, Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFD0BDBF0FBD93A5B6D3A93BED19E0AF801BA9C0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m0EB5AE22E4E425748236796EED68F44C9AE382E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7A327307DD8BD9ABA6BACCA449BBBD5EB9A62A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m84BF385838CCA63FE826B826F99204E34F686026_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC2CFE4BB6F3F2046977DE8D991332FBA73EBFB72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral175E248CCEB05743C6D87BCE20916CC55A49D0EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral205DE8E4F1ED52D3B7D39F5659F1B19CCBE3EE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC20BC62F1B89EA3936498FBBCAEA84A009E3E8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* L_0 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnCheckForUpdateActionList_1;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* L_2 = (Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F*)il2cpp_codegen_object_new(Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7A327307DD8BD9ABA6BACCA449BBBD5EB9A62A01(L_2, Dictionary_2__ctor_m7A327307DD8BD9ABA6BACCA449BBBD5EB9A62A01_RuntimeMethod_var);
		((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnCheckForUpdateActionList_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnCheckForUpdateActionList_1), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* L_3 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnCheckForUpdateActionList_1;
		String_t* L_4 = __this->___gz_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m0EB5AE22E4E425748236796EED68F44C9AE382E7(L_3, L_4, Dictionary_2_ContainsKey_m0EB5AE22E4E425748236796EED68F44C9AE382E7_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* L_7 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnCheckForUpdateActionList_1;
		V_2 = L_7;
		String_t* L_8 = __this->___gz_0;
		V_3 = L_8;
		Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288* L_13;
		L_13 = Dictionary_2_get_Item_m84BF385838CCA63FE826B826F99204E34F686026(L_11, L_12, Dictionary_2_get_Item_m84BF385838CCA63FE826B826F99204E34F686026_RuntimeMethod_var);
		Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288* L_14 = ___0_listener;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_mC2CFE4BB6F3F2046977DE8D991332FBA73EBFB72(L_9, L_10, ((Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288*)Castclass((RuntimeObject*)L_15, Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_mC2CFE4BB6F3F2046977DE8D991332FBA73EBFB72_RuntimeMethod_var);
		goto IL_008c;
	}

IL_0058:
	{
		Dictionary_2_t26F583D344D52740B81B092ADC8E5CF63CBD863F* L_16 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnCheckForUpdateActionList_1;
		String_t* L_17 = __this->___gz_0;
		Action_1_t489DBC2A4F0E260F28C14330A592E9AA8C3D6288* L_18 = ___0_listener;
		Dictionary_2_Add_mFD0BDBF0FBD93A5B6D3A93BED19E0AF801BA9C0A(L_16, L_17, L_18, Dictionary_2_Add_mFD0BDBF0FBD93A5B6D3A93BED19E0AF801BA9C0A_RuntimeMethod_var);
		String_t* L_19 = __this->___gz_0;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_WX_ClassOnEventFunction_mA32AE673FE5654617D44CF0C20EC7D47C2E2F261(_stringLiteral205DE8E4F1ED52D3B7D39F5659F1B19CCBE3EE3E, _stringLiteralAC20BC62F1B89EA3936498FBBCAEA84A009E3E8F, _stringLiteral175E248CCEB05743C6D87BCE20916CC55A49D0EC, L_19, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_008c:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUpdateManager::OnUpdateFailed(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUpdateManager_OnUpdateFailed_m622EF73958D0F130245FD32A856E33F298B5156D (WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral205DE8E4F1ED52D3B7D39F5659F1B19CCBE3EE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A743A69B4CBFB7918724BF11011673E3D366C14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41E624AD04B11E241FA648D87AEC081EBEC7C39C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateFailedActionList_2;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_2 = (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)il2cpp_codegen_object_new(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058(L_2, Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateFailedActionList_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateFailedActionList_2), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_3 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateFailedActionList_2;
		String_t* L_4 = __this->___gz_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_3, L_4, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_7 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateFailedActionList_2;
		V_2 = L_7;
		String_t* L_8 = __this->___gz_0;
		V_3 = L_8;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13;
		L_13 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_11, L_12, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_14 = ___0_listener;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_9, L_10, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_15, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		goto IL_008c;
	}

IL_0058:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_16 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateFailedActionList_2;
		String_t* L_17 = __this->___gz_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_18 = ___0_listener;
		Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514(L_16, L_17, L_18, Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		String_t* L_19 = __this->___gz_0;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_WX_ClassOnEventFunction_mA32AE673FE5654617D44CF0C20EC7D47C2E2F261(_stringLiteral205DE8E4F1ED52D3B7D39F5659F1B19CCBE3EE3E, _stringLiteral2A743A69B4CBFB7918724BF11011673E3D366C14, _stringLiteral41E624AD04B11E241FA648D87AEC081EBEC7C39C, L_19, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_008c:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUpdateManager::OnUpdateReady(System.Action`1<WeChatWASM.GeneralCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUpdateManager_OnUpdateReady_m9BD7A5614BD4EC426817802DF06504EB3AC38DD0 (WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5* __this, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral205DE8E4F1ED52D3B7D39F5659F1B19CCBE3EE3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41E624AD04B11E241FA648D87AEC081EBEC7C39C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9387EC662A2AD8BACAECCC449E4303553792ADEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_0 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateReadyActionList_3;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_2 = (Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73*)il2cpp_codegen_object_new(Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058(L_2, Dictionary_2__ctor_m32E01C66DEA5BDC9B843F3DD2A53AD78909A6058_RuntimeMethod_var);
		((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateReadyActionList_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateReadyActionList_3), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_3 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateReadyActionList_3;
		String_t* L_4 = __this->___gz_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D(L_3, L_4, Dictionary_2_ContainsKey_mC77633B2E2B06E63687CEE4695FA2284BA7FCB1D_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_7 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateReadyActionList_3;
		V_2 = L_7;
		String_t* L_8 = __this->___gz_0;
		V_3 = L_8;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_13;
		L_13 = Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805(L_11, L_12, Dictionary_2_get_Item_m7379B4159226FD90C6FE5244D2C0D3D3E4111805_RuntimeMethod_var);
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_14 = ___0_listener;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA(L_9, L_10, ((Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43*)Castclass((RuntimeObject*)L_15, Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m199E13501C81F0C6F18DA7EAA66DF49E4AF2C0EA_RuntimeMethod_var);
		goto IL_008c;
	}

IL_0058:
	{
		Dictionary_2_tA47D193E18B4166276FF65DD0C491B38F1117E73* L_16 = ((WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_StaticFields*)il2cpp_codegen_static_fields_for(WXUpdateManager_t098B6DA44688A0B9B349676EFF096C847BA498D5_il2cpp_TypeInfo_var))->___OnUpdateReadyActionList_3;
		String_t* L_17 = __this->___gz_0;
		Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* L_18 = ___0_listener;
		Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514(L_16, L_17, L_18, Dictionary_2_Add_mFDB0E0B48A312491F90D99E85E7E005C13263514_RuntimeMethod_var);
		String_t* L_19 = __this->___gz_0;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_WX_ClassOnEventFunction_mA32AE673FE5654617D44CF0C20EC7D47C2E2F261(_stringLiteral205DE8E4F1ED52D3B7D39F5659F1B19CCBE3EE3E, _stringLiteral9387EC662A2AD8BACAECCC449E4303553792ADEA, _stringLiteral41E624AD04B11E241FA648D87AEC081EBEC7C39C, L_19, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_008c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.WXUploadTask::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask__ctor_mD77B5197B5DF3570BA7799708799801D8CA06BBC (WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		__this->___HA_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HA_0), (void*)L_0);
		return;
	}
}
// System.Void WeChatWASM.WXUploadTask::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_A_m83AD339A6BCC2F90BA9639692050509E810A35F1 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXUploadTaskAbort)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUploadTask::Abort(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_Abort_mF6DE262872E39DB49197F4C0B6216AC292E3388F (WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___HA_0;
		WXUploadTask_A_m83AD339A6BCC2F90BA9639692050509E810A35F1(L_0, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXUploadTask::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_a_m4455322F2533304EB2CEDF81DE1F98D4F956A42F (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXUploadTaskOffHeadersReceived)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUploadTask::OffHeadersReceived(System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_OffHeadersReceived_m57DA255F9D0246F84B8720B8C1D33E65976FC1E8 (WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5* __this, Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mDCAD333899C2905C10EEFFE8FBFE530AFCAB3108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m69627E54B7132978A925141A8609AAAA211D7A58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFD5FAC598867327C1FADE53E536B2F78ABF6B328_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7C68E77C1B2DB7F5643E0B5EDD42B9DFC0E8C14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_0 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_2 = (Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4*)il2cpp_codegen_object_new(Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m69627E54B7132978A925141A8609AAAA211D7A58(L_2, Dictionary_2__ctor_m69627E54B7132978A925141A8609AAAA211D7A58_RuntimeMethod_var);
		((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_3 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1;
		String_t* L_4 = __this->___HA_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mDCAD333899C2905C10EEFFE8FBFE530AFCAB3108(L_3, L_4, Dictionary_2_ContainsKey_mDCAD333899C2905C10EEFFE8FBFE530AFCAB3108_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_7 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1;
		V_2 = L_7;
		String_t* L_8 = __this->___HA_0;
		V_3 = L_8;
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* L_13;
		L_13 = Dictionary_2_get_Item_mFD5FAC598867327C1FADE53E536B2F78ABF6B328(L_11, L_12, Dictionary_2_get_Item_mFD5FAC598867327C1FADE53E536B2F78ABF6B328_RuntimeMethod_var);
		Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* L_14 = ___0_callback;
		Delegate_t* L_15;
		L_15 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_13, L_14, NULL);
		Dictionary_2_set_Item_m7C68E77C1B2DB7F5643E0B5EDD42B9DFC0E8C14B(L_9, L_10, ((Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F*)Castclass((RuntimeObject*)L_15, Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m7C68E77C1B2DB7F5643E0B5EDD42B9DFC0E8C14B_RuntimeMethod_var);
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_16 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1;
		String_t* L_17 = __this->___HA_0;
		Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* L_18;
		L_18 = Dictionary_2_get_Item_mFD5FAC598867327C1FADE53E536B2F78ABF6B328(L_16, L_17, Dictionary_2_get_Item_mFD5FAC598867327C1FADE53E536B2F78ABF6B328_RuntimeMethod_var);
		V_4 = (bool)((((RuntimeObject*)(Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_20 = __this->___HA_0;
		WXUploadTask_a_m4455322F2533304EB2CEDF81DE1F98D4F956A42F(L_20, NULL);
	}

IL_007c:
	{
	}

IL_007d:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUploadTask::B(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_B_m43490388BC195F908C384201B1EF1343BABDFF70 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXUploadTaskOffProgressUpdate)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUploadTask::OffProgressUpdate(System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_OffProgressUpdate_m0CDD8103C4FF975F9C9BD49DD4AFC666878BDC40 (WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5* __this, Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m6E93EDC819BF353AA23344BE87B5BE9CA5BF9ECD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7F604022A4B2B1B3B3F6A0D7537B7614B8D3F0CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAB8F9ADD37A3826C8E7735E255482A0D50A6C121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m75D66426ACA098771F669518384B02A22D6CCA03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	{
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_0 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_2 = (Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE*)il2cpp_codegen_object_new(Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7F604022A4B2B1B3B3F6A0D7537B7614B8D3F0CC(L_2, Dictionary_2__ctor_m7F604022A4B2B1B3B3F6A0D7537B7614B8D3F0CC_RuntimeMethod_var);
		((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_3 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2;
		String_t* L_4 = __this->___HA_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m6E93EDC819BF353AA23344BE87B5BE9CA5BF9ECD(L_3, L_4, Dictionary_2_ContainsKey_m6E93EDC819BF353AA23344BE87B5BE9CA5BF9ECD_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_7 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2;
		V_2 = L_7;
		String_t* L_8 = __this->___HA_0;
		V_3 = L_8;
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* L_13;
		L_13 = Dictionary_2_get_Item_mAB8F9ADD37A3826C8E7735E255482A0D50A6C121(L_11, L_12, Dictionary_2_get_Item_mAB8F9ADD37A3826C8E7735E255482A0D50A6C121_RuntimeMethod_var);
		Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* L_14 = ___0_callback;
		Delegate_t* L_15;
		L_15 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_13, L_14, NULL);
		Dictionary_2_set_Item_m75D66426ACA098771F669518384B02A22D6CCA03(L_9, L_10, ((Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E*)Castclass((RuntimeObject*)L_15, Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m75D66426ACA098771F669518384B02A22D6CCA03_RuntimeMethod_var);
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_16 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2;
		String_t* L_17 = __this->___HA_0;
		Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* L_18;
		L_18 = Dictionary_2_get_Item_mAB8F9ADD37A3826C8E7735E255482A0D50A6C121(L_16, L_17, Dictionary_2_get_Item_mAB8F9ADD37A3826C8E7735E255482A0D50A6C121_RuntimeMethod_var);
		V_4 = (bool)((((RuntimeObject*)(Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_20 = __this->___HA_0;
		WXUploadTask_B_m43490388BC195F908C384201B1EF1343BABDFF70(L_20, NULL);
	}

IL_007c:
	{
	}

IL_007d:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUploadTask::b(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_b_mD41BDCD652E8DD69C891B7B6B43B4B926330EAB0 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXUploadTaskOnHeadersReceived)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUploadTask::OnHeadersReceived(System.Action`1<WeChatWASM.OnHeadersReceivedCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_OnHeadersReceived_mFAA7A965DBB1B65B623F7330E9B06AB540E89A9E (WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5* __this, Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6922469CABDB27D50E869F1C5A1DAEF6B59DC429_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mDCAD333899C2905C10EEFFE8FBFE530AFCAB3108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m69627E54B7132978A925141A8609AAAA211D7A58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mFD5FAC598867327C1FADE53E536B2F78ABF6B328_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7C68E77C1B2DB7F5643E0B5EDD42B9DFC0E8C14B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_0 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_2 = (Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4*)il2cpp_codegen_object_new(Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m69627E54B7132978A925141A8609AAAA211D7A58(L_2, Dictionary_2__ctor_m69627E54B7132978A925141A8609AAAA211D7A58_RuntimeMethod_var);
		((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_3 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1;
		String_t* L_4 = __this->___HA_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mDCAD333899C2905C10EEFFE8FBFE530AFCAB3108(L_3, L_4, Dictionary_2_ContainsKey_mDCAD333899C2905C10EEFFE8FBFE530AFCAB3108_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_7 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1;
		V_2 = L_7;
		String_t* L_8 = __this->___HA_0;
		V_3 = L_8;
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* L_13;
		L_13 = Dictionary_2_get_Item_mFD5FAC598867327C1FADE53E536B2F78ABF6B328(L_11, L_12, Dictionary_2_get_Item_mFD5FAC598867327C1FADE53E536B2F78ABF6B328_RuntimeMethod_var);
		Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* L_14 = ___0_callback;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_m7C68E77C1B2DB7F5643E0B5EDD42B9DFC0E8C14B(L_9, L_10, ((Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F*)Castclass((RuntimeObject*)L_15, Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m7C68E77C1B2DB7F5643E0B5EDD42B9DFC0E8C14B_RuntimeMethod_var);
		goto IL_0078;
	}

IL_0058:
	{
		Dictionary_2_tE91A3A58DBB42BA598BD613B332DE01DC8BAD3B4* L_16 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnHeadersReceivedActionList_1;
		String_t* L_17 = __this->___HA_0;
		Action_1_tE5A6D65BF08880BFA4FF796870015F86BFC41C4F* L_18 = ___0_callback;
		Dictionary_2_Add_m6922469CABDB27D50E869F1C5A1DAEF6B59DC429(L_16, L_17, L_18, Dictionary_2_Add_m6922469CABDB27D50E869F1C5A1DAEF6B59DC429_RuntimeMethod_var);
		String_t* L_19 = __this->___HA_0;
		WXUploadTask_b_mD41BDCD652E8DD69C891B7B6B43B4B926330EAB0(L_19, NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUploadTask::C(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_C_mDD73F701259E973CF4D16A9A9A743A067D4B1402 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXUploadTaskOnProgressUpdate)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUploadTask::OnProgressUpdate(System.Action`1<WeChatWASM.UploadTaskOnProgressUpdateCallbackResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUploadTask_OnProgressUpdate_m6C18B12F03668AE1AB1FDB2D4F9646E07F26C6A7 (WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5* __this, Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9ABBCEA1FF46C4C41BD2E82A15DE72CE698549FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m6E93EDC819BF353AA23344BE87B5BE9CA5BF9ECD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m7F604022A4B2B1B3B3F6A0D7537B7614B8D3F0CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAB8F9ADD37A3826C8E7735E255482A0D50A6C121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m75D66426ACA098771F669518384B02A22D6CCA03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_0 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_2 = (Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE*)il2cpp_codegen_object_new(Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7F604022A4B2B1B3B3F6A0D7537B7614B8D3F0CC(L_2, Dictionary_2__ctor_m7F604022A4B2B1B3B3F6A0D7537B7614B8D3F0CC_RuntimeMethod_var);
		((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_3 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2;
		String_t* L_4 = __this->___HA_0;
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m6E93EDC819BF353AA23344BE87B5BE9CA5BF9ECD(L_3, L_4, Dictionary_2_ContainsKey_m6E93EDC819BF353AA23344BE87B5BE9CA5BF9ECD_RuntimeMethod_var);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_7 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2;
		V_2 = L_7;
		String_t* L_8 = __this->___HA_0;
		V_3 = L_8;
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_9 = V_2;
		String_t* L_10 = V_3;
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_11 = V_2;
		String_t* L_12 = V_3;
		Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* L_13;
		L_13 = Dictionary_2_get_Item_mAB8F9ADD37A3826C8E7735E255482A0D50A6C121(L_11, L_12, Dictionary_2_get_Item_mAB8F9ADD37A3826C8E7735E255482A0D50A6C121_RuntimeMethod_var);
		Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* L_14 = ___0_callback;
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_13, L_14, NULL);
		Dictionary_2_set_Item_m75D66426ACA098771F669518384B02A22D6CCA03(L_9, L_10, ((Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E*)Castclass((RuntimeObject*)L_15, Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m75D66426ACA098771F669518384B02A22D6CCA03_RuntimeMethod_var);
		goto IL_0078;
	}

IL_0058:
	{
		Dictionary_2_tBF1C7969686451A7D17FC2C946AD33C4F472F3FE* L_16 = ((WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_StaticFields*)il2cpp_codegen_static_fields_for(WXUploadTask_t666CFC129A390B5065C5B308C3D0221BEB4B7CA5_il2cpp_TypeInfo_var))->___OnProgressUpdateActionList_2;
		String_t* L_17 = __this->___HA_0;
		Action_1_tD5FF84C9FA20650C026C5BBE2ADCEACAD727193E* L_18 = ___0_callback;
		Dictionary_2_Add_m9ABBCEA1FF46C4C41BD2E82A15DE72CE698549FF(L_16, L_17, L_18, Dictionary_2_Add_m9ABBCEA1FF46C4C41BD2E82A15DE72CE698549FF_RuntimeMethod_var);
		String_t* L_19 = __this->___HA_0;
		WXUploadTask_C_mDD73F701259E973CF4D16A9A9A743A067D4B1402(L_19, NULL);
	}

IL_0078:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.UploadFileOption::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadFileOption__ctor_mB37E1C22289F1578EC908F929FECD05063EA7F69 (UploadFileOption_tBC8740BD13F675FCD3A5FAC81667F7516B51CA45* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.UploadFileSuccessCallbackResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadFileSuccessCallbackResult__ctor_m2E228B8F3CA6A54FB3D8FC55EDD4D9E7D0870428 (UploadFileSuccessCallbackResult_t8C8F2FA3D3BD2388E024B212B1B48116286068D4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.OnHeadersReceivedCallbackResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnHeadersReceivedCallbackResult__ctor_m65D27B2CFE2F1BEE3AC0CB3C51AF1B9D57E5A782 (OnHeadersReceivedCallbackResult_tE33C1DD76C625799D787364F0DFA4A9E4A407B3E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.UploadTaskOnProgressUpdateCallbackResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadTaskOnProgressUpdateCallbackResult__ctor_mFAD1384075D15AEB879AEFA102B885BA5300E90A (UploadTaskOnProgressUpdateCallbackResult_tE5CF9A44C8B21161D5538B1F67C26AF3E3A79CE3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.WXUserInfoButton::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_A_mF87F824642FE8DE346D36C37E7EED61955C3295F (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXUserInfoButtonDestroy)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUserInfoButton::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_a_m00432EE2C76BF7CB780D47998149F5E9E3BDBC1E (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXUserInfoButtonHide)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUserInfoButton::B(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_B_m04AAEFC96EC690AF9761EF8BFC9B7DB9476EB6FD (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXUserInfoButtonOffTap)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUserInfoButton::b(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_b_m18200B0BC2CA6A78E49C3198D3D8DB74F78DB2A2 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXUserInfoButtonOnTap)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUserInfoButton::C(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_C_m09EEDBB2CD73AAC9431C9CC23B5F2806A55F5F6A (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXUserInfoButtonShow)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXUserInfoButton::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton__ctor_m014080AD98A37E26623D5F5ECA960DAAED61B277 (WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		__this->___Ha_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Ha_0), (void*)L_0);
		return;
	}
}
// System.Void WeChatWASM.WXUserInfoButton::InvokeCallback(WeChatWASM.WXUserInfoResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_InvokeCallback_mDCF9738081240CC2B3E7EA470C82C02FBA051014 (WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF* __this, WXUserInfoResponse_t55833477F8130AFBD41E5C2926F6C584945A669F* ___0_res, const RuntimeMethod* method) 
{
	Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E* G_B2_0 = NULL;
	Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E* G_B1_0 = NULL;
	{
		Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E* L_0 = __this->___HB_1;
		Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		WXUserInfoResponse_t55833477F8130AFBD41E5C2926F6C584945A669F* L_2 = ___0_res;
		Action_1_Invoke_m9BE24E2E48DDAB59D75977EB50F0E3E99A081C1A_inline(G_B2_0, L_2, NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUserInfoButton::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_Destroy_m580CBBE01F66772AF857D3897F492FCB84791877 (WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m444C48C6876AD19B024967BFC9039A0F19ACD510_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mBCB7D1686DC1DA026B45D494330A165A3E6B675E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = __this->___Ha_0;
		il2cpp_codegen_runtime_class_init_inline(WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		WXUserInfoButton_A_mF87F824642FE8DE346D36C37E7EED61955C3295F(L_0, NULL);
		Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A* L_1 = ((WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_StaticFields*)il2cpp_codegen_static_fields_for(WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var))->___Dict_2;
		String_t* L_2 = __this->___Ha_0;
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m444C48C6876AD19B024967BFC9039A0F19ACD510(L_1, L_2, Dictionary_2_ContainsKey_m444C48C6876AD19B024967BFC9039A0F19ACD510_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A* L_5 = ((WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_StaticFields*)il2cpp_codegen_static_fields_for(WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var))->___Dict_2;
		String_t* L_6 = __this->___Ha_0;
		bool L_7;
		L_7 = Dictionary_2_Remove_mBCB7D1686DC1DA026B45D494330A165A3E6B675E(L_5, L_6, Dictionary_2_Remove_mBCB7D1686DC1DA026B45D494330A165A3E6B675E_RuntimeMethod_var);
	}

IL_0034:
	{
		return;
	}
}
// System.Void WeChatWASM.WXUserInfoButton::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_Hide_m3E7B0827CA298C17DE91106F131B1C2843DB0869 (WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___Ha_0;
		il2cpp_codegen_runtime_class_init_inline(WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		WXUserInfoButton_a_m00432EE2C76BF7CB780D47998149F5E9E3BDBC1E(L_0, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXUserInfoButton::OffTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_OffTap_m4A9C65F16CA3FA2310E99BDE2628BE6C90E8B281 (WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___Ha_0;
		il2cpp_codegen_runtime_class_init_inline(WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		WXUserInfoButton_B_m04AAEFC96EC690AF9761EF8BFC9B7DB9476EB6FD(L_0, NULL);
		__this->___HB_1 = (Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HB_1), (void*)(Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E*)NULL);
		return;
	}
}
// System.Void WeChatWASM.WXUserInfoButton::OnTap(System.Action`1<WeChatWASM.WXUserInfoResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_OnTap_mFE1DDE836D65F1DB187906360EE5618BA30BDC1A (WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF* __this, Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t68A42DB0B8B05D50A47B323A3CDC365EBCC0008E* L_0 = ___0_action;
		__this->___HB_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HB_1), (void*)L_0);
		String_t* L_1 = __this->___Ha_0;
		il2cpp_codegen_runtime_class_init_inline(WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		WXUserInfoButton_b_m18200B0BC2CA6A78E49C3198D3D8DB74F78DB2A2(L_1, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXUserInfoButton::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton_Show_m686FE89211F7ED31D1DC6C9E9FD8B4841DB595AA (WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___Ha_0;
		il2cpp_codegen_runtime_class_init_inline(WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		WXUserInfoButton_C_m09EEDBB2CD73AAC9431C9CC23B5F2806A55F5F6A(L_0, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXUserInfoButton::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXUserInfoButton__cctor_m199B57EA2CA6AA73CFE38A7033470492CF775F76 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m34EC61033AF223C17A96A436ED4655F252515CB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A* L_0 = (Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A*)il2cpp_codegen_object_new(Dictionary_2_tE789AC648C472E8C888953A993324ED717C8383A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m34EC61033AF223C17A96A436ED4655F252515CB6(L_0, Dictionary_2__ctor_m34EC61033AF223C17A96A436ED4655F252515CB6_RuntimeMethod_var);
		((WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_StaticFields*)il2cpp_codegen_static_fields_for(WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var))->___Dict_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_StaticFields*)il2cpp_codegen_static_fields_for(WXUserInfoButton_t4AB115EA08F8E432AB89093B628D4FEB65DAC2CF_il2cpp_TypeInfo_var))->___Dict_2), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.WXVideo::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_A_mA954DD718B8E161694AF6F9DB1E08742EA7E2133 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXVideoPlay)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXVideo::A(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_A_m1F2B4D0610B4EC5A34C8309199033B0869B44565 (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	char* ____1_p_marshaled = NULL;
	____1_p_marshaled = il2cpp_codegen_marshal_string(___1_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXVideoAddListener)(____0_p_marshaled, ____1_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_p' native representation
	il2cpp_codegen_marshal_free(____1_p_marshaled);
	____1_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXVideo::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_a_m0F806EE3268E15F98A45F252A5EB097E9D96BF42 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXVideoDestroy)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXVideo::B(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_B_m8C4A1D6D5DCC11A067725CC3AB6944FD9E018456 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXVideoExitFullScreen)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXVideo::b(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_b_m389B900E05223B7316BFEC71740B98F63F0711C0 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXVideoPause)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXVideo::A(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_A_mF9C2646AA8F124E8318AF4541FDCF7DCF6383B08 (String_t* ___0_p, int32_t ___1_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXVideoRequestFullScreen)(____0_p_marshaled, ___1_p);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXVideo::a(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_a_m2B96236796C4AA903DA09E855EA8F4B6FAF3ACEF (String_t* ___0_p, int32_t ___1_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXVideoSeek)(____0_p_marshaled, ___1_p);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXVideo::C(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_C_mF08D2E77543319EC13D77A6C8678FC779D00D214 (String_t* ___0_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXVideoStop)(____0_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXVideo::a(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_a_m6C185DBE230427D9BE592576A6EEFCF89EC0D1A1 (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	char* ____1_p_marshaled = NULL;
	____1_p_marshaled = il2cpp_codegen_marshal_string(___1_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXVideoRemoveListener)(____0_p_marshaled, ____1_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_p' native representation
	il2cpp_codegen_marshal_free(____1_p_marshaled);
	____1_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXVideo::A(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_A_m4168276950B112793EEECF498097D5DB3952BA0B (String_t* ___0_p, String_t* ___1_p, String_t* ___2_p, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter '___0_p' to native representation
	char* ____0_p_marshaled = NULL;
	____0_p_marshaled = il2cpp_codegen_marshal_string(___0_p);

	// Marshaling of parameter '___1_p' to native representation
	char* ____1_p_marshaled = NULL;
	____1_p_marshaled = il2cpp_codegen_marshal_string(___1_p);

	// Marshaling of parameter '___2_p' to native representation
	char* ____2_p_marshaled = NULL;
	____2_p_marshaled = il2cpp_codegen_marshal_string(___2_p);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WXVideoSetProperty)(____0_p_marshaled, ____1_p_marshaled, ____2_p_marshaled);

	// Marshaling cleanup of parameter '___0_p' native representation
	il2cpp_codegen_marshal_free(____0_p_marshaled);
	____0_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_p' native representation
	il2cpp_codegen_marshal_free(____1_p_marshaled);
	____1_p_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_p' native representation
	il2cpp_codegen_marshal_free(____2_p_marshaled);
	____2_p_marshaled = NULL;

}
// System.Void WeChatWASM.WXVideo::.ctor(System.String,WeChatWASM.WXCreateVideoParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo__ctor_mEE4411332EA65C404A06649A57EECC7F1F0D2E98 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, String_t* ___0_id, WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* ___1_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m3D4168603391DBC0E8F9F019E06C9D20AE76FE46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_A_m31030BCD3571A728528E14EDB1B03564FEA6E95E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_B_m09616AC965B265CB4D8E7354C50DB94CBCED7828_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_a_mC5F7B0C7111ADD5DA2AA57169EE0874FF7AA0CE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* G_B2_0 = NULL;
	WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* G_B3_1 = NULL;
	{
		__this->___HC_1 = (bool)0;
		__this->___Hc_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hc_2), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		__this->___HD_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HD_3), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		__this->___Hd_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hd_4), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		__this->___HE_5 = (Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HE_5), (void*)(Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)NULL);
		__this->___He_6 = (Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___He_6), (void*)(Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007*)NULL);
		__this->___HF_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HF_7), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		__this->___Hf_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hf_8), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		__this->___HG_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HG_9), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		__this->___Hg_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hg_10), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		__this->___instanceId_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___instanceId_18), (void*)L_0);
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_1 = ___1_param;
		__this->___HH_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HH_11), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E* L_2 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->____Dict_19;
		String_t* L_3 = ___0_id;
		Dictionary_2_Add_m3D4168603391DBC0E8F9F019E06C9D20AE76FE46(L_2, L_3, __this, Dictionary_2_Add_m3D4168603391DBC0E8F9F019E06C9D20AE76FE46_RuntimeMethod_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, __this, (intptr_t)((void*)WXVideo_A_m31030BCD3571A728528E14EDB1B03564FEA6E95E_RuntimeMethod_var), NULL);
		WXVideo_OnPlay_m4B6D265CA005DD27476E9B91448E5845C16B237C(__this, L_4, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)WXVideo_a_mC5F7B0C7111ADD5DA2AA57169EE0874FF7AA0CE0_RuntimeMethod_var), NULL);
		WXVideo_OnEnded_m3D6327083E6A503B87A494971F1BD4983ED396D1(__this, L_5, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, __this, (intptr_t)((void*)WXVideo_B_m09616AC965B265CB4D8E7354C50DB94CBCED7828_RuntimeMethod_var), NULL);
		WXVideo_OnPause_m0A7D67369472FEDFB31CDD1FE386535A7A6E9679(__this, L_6, NULL);
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_7 = ___1_param;
		String_t* L_8 = L_7->___src_4;
		__this->___Hh_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hh_12), (void*)L_8);
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_9 = ___1_param;
		String_t* L_10 = L_9->___poster_5;
		G_B1_0 = __this;
		if (L_10)
		{
			G_B2_0 = __this;
			goto IL_00be;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		goto IL_00c4;
	}

IL_00be:
	{
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_11 = ___1_param;
		String_t* L_12 = L_11->___poster_5;
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
	}

IL_00c4:
	{
		G_B3_1->___HI_13 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___HI_13), (void*)G_B3_0);
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_13 = ___1_param;
		int32_t L_14 = L_13->___x_0;
		__this->___Hi_14 = ((double)L_14);
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_15 = ___1_param;
		int32_t L_16 = L_15->___y_1;
		__this->___HJ_15 = ((double)L_16);
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_17 = ___1_param;
		int32_t L_18 = L_17->___width_2;
		__this->___Hj_16 = ((double)L_18);
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_19 = ___1_param;
		int32_t L_20 = L_19->___height_3;
		__this->___HK_17 = ((double)L_20);
		return;
	}
}
// System.Void WeChatWASM.WXVideo::_HandleCallBack(WeChatWASM.WXVideoCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo__HandleCallBack_m708ECF4999EEC43E13505C184B38FF1CCE46D87B (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* ___0_res, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideoProgress_t6B101DAB37AD015E930CFCC77B30D36C2C0BF69D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideoTimeUpdate_tA62D4525E528FA9B0082D350F5F816C2F0C296EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B579C708C0DBDD5A98B2CAA0B6936FB6B974B5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70FC9A72177735B2BA8C44B713453E72A9AA40DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76BF676321AA7F5594644D8EA78EC6C94915979A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C1F89F7A8AA971167E226D545A9F4A38EA561EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96476BEC900CD13BC4B8CD24C1C320EF8094EAAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD7E1BD1133CB54CB1C7DC65CE70CE9FB0C7C9B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC386789464914AFAB69C70A3E07C88FB68EDB4DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE03A81F764801D59F9819AE7451E497C9A38A5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA85CE3D3C5BC3E77208A4969E56C063FAED867E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B41_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B40_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B45_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B44_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B49_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B48_0 = NULL;
	Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* G_B53_0 = NULL;
	Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* G_B52_0 = NULL;
	Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* G_B57_0 = NULL;
	Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* G_B56_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B61_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B60_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B65_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B64_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B69_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B68_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B73_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B72_0 = NULL;
	{
		WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* L_0 = ___0_res;
		String_t* L_1 = ((WXBaseResponse_tA0E6AF36BFAA135423A425AA0BB7DF012C0C955E*)L_0)->___errMsg_1;
		V_1 = L_1;
		String_t* L_2 = V_1;
		V_0 = L_2;
		String_t* L_3 = V_0;
		uint32_t L_4;
		L_4 = B_A_m444BF8DAE44BC291DDC813B09D3188748FB896B7(L_3, NULL);
		V_2 = L_4;
		uint32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)-1735438808)))))
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((!(((uint32_t)L_6) <= ((uint32_t)((int32_t)1065788627)))))
		{
			goto IL_003e;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)498946735))))
		{
			goto IL_011f;
		}
	}
	{
		goto IL_002e;
	}

IL_002e:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)1065788627))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_0258;
	}

IL_003e:
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)1239265142))))
		{
			goto IL_010a;
		}
	}
	{
		goto IL_004b;
	}

IL_004b:
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1735438808))))
		{
			goto IL_00e0;
		}
	}
	{
		goto IL_0258;
	}

IL_005b:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-1451958014)))))
		{
			goto IL_007d;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1622750608))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0070;
	}

IL_0070:
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-1451958014))))
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_0258;
	}

IL_007d:
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-1006609063))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_008a;
	}

IL_008a:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-311759246))))
		{
			goto IL_00a1;
		}
	}
	{
		goto IL_0094;
	}

IL_0094:
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-137828164))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0258;
	}

IL_00a1:
	{
		String_t* L_17 = V_0;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral8C1F89F7A8AA971167E226D545A9F4A38EA561EB, NULL);
		if (L_18)
		{
			goto IL_015e;
		}
	}
	{
		goto IL_0258;
	}

IL_00b6:
	{
		String_t* L_19 = V_0;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralC386789464914AFAB69C70A3E07C88FB68EDB4DB, NULL);
		if (L_20)
		{
			goto IL_0175;
		}
	}
	{
		goto IL_0258;
	}

IL_00cb:
	{
		String_t* L_21 = V_0;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral76BF676321AA7F5594644D8EA78EC6C94915979A, NULL);
		if (L_22)
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0258;
	}

IL_00e0:
	{
		String_t* L_23 = V_0;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral70FC9A72177735B2BA8C44B713453E72A9AA40DE, NULL);
		if (L_24)
		{
			goto IL_01a3;
		}
	}
	{
		goto IL_0258;
	}

IL_00f5:
	{
		String_t* L_25 = V_0;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral96476BEC900CD13BC4B8CD24C1C320EF8094EAAA, NULL);
		if (L_26)
		{
			goto IL_01d7;
		}
	}
	{
		goto IL_0258;
	}

IL_010a:
	{
		String_t* L_27 = V_0;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteralAD7E1BD1133CB54CB1C7DC65CE70CE9FB0C7C9B0, NULL);
		if (L_28)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_0258;
	}

IL_011f:
	{
		String_t* L_29 = V_0;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteralFA85CE3D3C5BC3E77208A4969E56C063FAED867E, NULL);
		if (L_30)
		{
			goto IL_021c;
		}
	}
	{
		goto IL_0258;
	}

IL_0134:
	{
		String_t* L_31 = V_0;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteralDE03A81F764801D59F9819AE7451E497C9A38A5C, NULL);
		if (L_32)
		{
			goto IL_0230;
		}
	}
	{
		goto IL_0258;
	}

IL_0149:
	{
		String_t* L_33 = V_0;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral5B579C708C0DBDD5A98B2CAA0B6936FB6B974B5B, NULL);
		if (L_34)
		{
			goto IL_0244;
		}
	}
	{
		goto IL_0258;
	}

IL_015e:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_35 = __this->___Hc_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_36 = L_35;
		G_B40_0 = L_36;
		if (L_36)
		{
			G_B41_0 = L_36;
			goto IL_016a;
		}
	}
	{
		goto IL_0170;
	}

IL_016a:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B41_0, NULL);
	}

IL_0170:
	{
		goto IL_0258;
	}

IL_0175:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_37 = __this->___HD_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_38 = L_37;
		G_B44_0 = L_38;
		if (L_38)
		{
			G_B45_0 = L_38;
			goto IL_0181;
		}
	}
	{
		goto IL_0187;
	}

IL_0181:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B45_0, NULL);
	}

IL_0187:
	{
		goto IL_0258;
	}

IL_018c:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_39 = __this->___Hd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_40 = L_39;
		G_B48_0 = L_40;
		if (L_40)
		{
			G_B49_0 = L_40;
			goto IL_0198;
		}
	}
	{
		goto IL_019e;
	}

IL_0198:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B49_0, NULL);
	}

IL_019e:
	{
		goto IL_0258;
	}

IL_01a3:
	{
		Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* L_41 = __this->___HE_5;
		Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* L_42 = L_41;
		G_B52_0 = L_42;
		if (L_42)
		{
			G_B53_0 = L_42;
			goto IL_01af;
		}
	}
	{
		goto IL_01d2;
	}

IL_01af:
	{
		WXVideoTimeUpdate_tA62D4525E528FA9B0082D350F5F816C2F0C296EA* L_43 = (WXVideoTimeUpdate_tA62D4525E528FA9B0082D350F5F816C2F0C296EA*)il2cpp_codegen_object_new(WXVideoTimeUpdate_tA62D4525E528FA9B0082D350F5F816C2F0C296EA_il2cpp_TypeInfo_var);
		WXVideoTimeUpdate__ctor_m3A45CA6A70CDD82D4F3FD643E957CAF8A6343B27(L_43, NULL);
		WXVideoTimeUpdate_tA62D4525E528FA9B0082D350F5F816C2F0C296EA* L_44 = L_43;
		WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* L_45 = ___0_res;
		float L_46 = L_45->___position_3;
		L_44->___position_0 = L_46;
		WXVideoTimeUpdate_tA62D4525E528FA9B0082D350F5F816C2F0C296EA* L_47 = L_44;
		WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* L_48 = ___0_res;
		float L_49 = L_48->___duration_4;
		L_47->___duration_1 = L_49;
		Action_1_Invoke_m1BEAE099C0A2265FE3AA442F560B576B33D59794_inline(G_B53_0, L_47, NULL);
	}

IL_01d2:
	{
		goto IL_0258;
	}

IL_01d7:
	{
		Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* L_50 = __this->___He_6;
		Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* L_51 = L_50;
		G_B56_0 = L_51;
		if (L_51)
		{
			G_B57_0 = L_51;
			goto IL_01e3;
		}
	}
	{
		goto IL_0206;
	}

IL_01e3:
	{
		WXVideoProgress_t6B101DAB37AD015E930CFCC77B30D36C2C0BF69D* L_52 = (WXVideoProgress_t6B101DAB37AD015E930CFCC77B30D36C2C0BF69D*)il2cpp_codegen_object_new(WXVideoProgress_t6B101DAB37AD015E930CFCC77B30D36C2C0BF69D_il2cpp_TypeInfo_var);
		WXVideoProgress__ctor_m51EE87D28A9F16D66FCE39D6FA3EAAB1161B0BA5(L_52, NULL);
		WXVideoProgress_t6B101DAB37AD015E930CFCC77B30D36C2C0BF69D* L_53 = L_52;
		WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* L_54 = ___0_res;
		int32_t L_55 = L_54->___buffered_5;
		L_53->___buffered_1 = L_55;
		WXVideoProgress_t6B101DAB37AD015E930CFCC77B30D36C2C0BF69D* L_56 = L_53;
		WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* L_57 = ___0_res;
		float L_58 = L_57->___duration_4;
		L_56->___duration_0 = L_58;
		Action_1_Invoke_m67319B6F45E51BE1E6179A594317C8E066467FD4_inline(G_B57_0, L_56, NULL);
	}

IL_0206:
	{
		goto IL_0258;
	}

IL_0208:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_59 = __this->___HF_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_60 = L_59;
		G_B60_0 = L_60;
		if (L_60)
		{
			G_B61_0 = L_60;
			goto IL_0214;
		}
	}
	{
		goto IL_021a;
	}

IL_0214:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B61_0, NULL);
	}

IL_021a:
	{
		goto IL_0258;
	}

IL_021c:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_61 = __this->___Hf_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_62 = L_61;
		G_B64_0 = L_62;
		if (L_62)
		{
			G_B65_0 = L_62;
			goto IL_0228;
		}
	}
	{
		goto IL_022e;
	}

IL_0228:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B65_0, NULL);
	}

IL_022e:
	{
		goto IL_0258;
	}

IL_0230:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_63 = __this->___HG_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_64 = L_63;
		G_B68_0 = L_64;
		if (L_64)
		{
			G_B69_0 = L_64;
			goto IL_023c;
		}
	}
	{
		goto IL_0242;
	}

IL_023c:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B69_0, NULL);
	}

IL_0242:
	{
		goto IL_0258;
	}

IL_0244:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_65 = __this->___Hg_10;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_66 = L_65;
		G_B72_0 = L_66;
		if (L_66)
		{
			G_B73_0 = L_66;
			goto IL_0250;
		}
	}
	{
		goto IL_0256;
	}

IL_0250:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B73_0, NULL);
	}

IL_0256:
	{
		goto IL_0258;
	}

IL_0258:
	{
		return;
	}
}
// System.String WeChatWASM.WXVideo::get_src()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WXVideo_get_src_m6708B85CE0CDCF0E8613087377CFFF2479C97C08 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___Hh_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void WeChatWASM.WXVideo::set_src(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_set_src_mBF7C29AAD0A1EDD9AF9617069E90D23797FD3D14 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1E3744356EAC23657287E3F9EDA22262C5228C4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		String_t* L_0 = __this->___Hh_12;
		String_t* L_1 = ___0_value;
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_4 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_6 = __this->___instanceId_18;
		String_t* L_7 = ___0_value;
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m4168276950B112793EEECF498097D5DB3952BA0B(L_6, _stringLiteralF1E3744356EAC23657287E3F9EDA22262C5228C4, L_8, NULL);
	}

IL_0034:
	{
		String_t* L_9 = ___0_value;
		__this->___Hh_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hh_12), (void*)L_9);
	}

IL_003c:
	{
		return;
	}
}
// System.String WeChatWASM.WXVideo::get_poster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WXVideo_get_poster_mAC1E2145C5F0B64946C202DE97B78ECF32F9E8E2 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___HI_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void WeChatWASM.WXVideo::set_poster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_set_poster_mF408A5FA4E98C64EBE57DDD10B98D2DAFF8DF249 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral004C2A0BB12589B1DD689AE6E3B5BEEA5596B2A7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		String_t* L_0 = __this->___HI_13;
		String_t* L_1 = ___0_value;
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_4 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_6 = __this->___instanceId_18;
		String_t* L_7 = ___0_value;
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m4168276950B112793EEECF498097D5DB3952BA0B(L_6, _stringLiteral004C2A0BB12589B1DD689AE6E3B5BEEA5596B2A7, L_8, NULL);
	}

IL_0034:
	{
		String_t* L_9 = ___0_value;
		__this->___HI_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HI_13), (void*)L_9);
	}

IL_003c:
	{
		return;
	}
}
// System.Double WeChatWASM.WXVideo::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double WXVideo_get_x_m7E136C8DC99C5158AF5541C82D09A4ABC94CB134 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0 = __this->___Hi_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void WeChatWASM.WXVideo::set_x(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_set_x_m6976BB23ED8FDA99413735F64BDB9CA21D5976FC (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		double L_0 = __this->___Hi_14;
		double L_1 = ___0_value;
		V_0 = (bool)((((int32_t)((((double)L_0) == ((double)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_3 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_5 = __this->___instanceId_18;
		String_t* L_6;
		L_6 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&___0_value), NULL);
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m4168276950B112793EEECF498097D5DB3952BA0B(L_5, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_6, NULL);
	}

IL_0035:
	{
		double L_7 = ___0_value;
		__this->___Hi_14 = L_7;
	}

IL_003d:
	{
		return;
	}
}
// System.Double WeChatWASM.WXVideo::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double WXVideo_get_y_m4AEEE6BF5B1D9645F9C94A5A9655CAD8AB85FC84 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0 = __this->___HJ_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void WeChatWASM.WXVideo::set_y(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_set_y_mB17975C09B3515AC3ED57044073D4AB564E73F8B (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		double L_0 = __this->___HJ_15;
		double L_1 = ___0_value;
		V_0 = (bool)((((int32_t)((((double)L_0) == ((double)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_3 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_5 = __this->___instanceId_18;
		String_t* L_6;
		L_6 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&___0_value), NULL);
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m4168276950B112793EEECF498097D5DB3952BA0B(L_5, _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, L_6, NULL);
	}

IL_0035:
	{
		double L_7 = ___0_value;
		__this->___HJ_15 = L_7;
	}

IL_003d:
	{
		return;
	}
}
// System.Double WeChatWASM.WXVideo::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double WXVideo_get_width_mA3636F15277249EDC237CDE4D5D351EB4CEBCFA9 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0 = __this->___Hj_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void WeChatWASM.WXVideo::set_width(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_set_width_m1479C1DF020E8104D0094FB34EF2216B23DDB995 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		double L_0 = __this->___Hj_16;
		double L_1 = ___0_value;
		V_0 = (bool)((((int32_t)((((double)L_0) == ((double)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_3 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_5 = __this->___instanceId_18;
		String_t* L_6;
		L_6 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&___0_value), NULL);
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m4168276950B112793EEECF498097D5DB3952BA0B(L_5, _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, L_6, NULL);
	}

IL_0035:
	{
		double L_7 = ___0_value;
		__this->___Hj_16 = L_7;
	}

IL_003d:
	{
		return;
	}
}
// System.Double WeChatWASM.WXVideo::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double WXVideo_get_height_m5B56D1D51D7FBECA29B92AD3B5FFDE2E1AAD8A5A (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0 = __this->___HK_17;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Void WeChatWASM.WXVideo::set_height(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_set_height_m525C0940749FBEB14C48E78BC4E23D3911C5B4C8 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		double L_0 = __this->___HK_17;
		double L_1 = ___0_value;
		V_0 = (bool)((((int32_t)((((double)L_0) == ((double)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_3 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_5 = __this->___instanceId_18;
		String_t* L_6;
		L_6 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&___0_value), NULL);
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m4168276950B112793EEECF498097D5DB3952BA0B(L_5, _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, L_6, NULL);
	}

IL_0035:
	{
		double L_7 = ___0_value;
		__this->___HK_17 = L_7;
	}

IL_003d:
	{
		return;
	}
}
// System.Boolean WeChatWASM.WXVideo::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WXVideo_get_isPlaying_m12A2BD6BF127399833D025A73B936402BF8DFC8D (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___HC_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void WeChatWASM.WXVideo::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_Play_mCD7C7FB8D9DD26AE5DD76361857F44E4F29C1311 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C1F89F7A8AA971167E226D545A9F4A38EA561EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA67DE3052A4352D0732DAE6F7E6F2FC233B0F2DE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_0 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_mA954DD718B8E161694AF6F9DB1E08742EA7E2133(L_2, NULL);
		goto IL_004b;
	}

IL_0019:
	{
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_3 = __this->___HH_11;
		String_t* L_4 = L_3->___src_4;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralA67DE3052A4352D0732DAE6F7E6F2FC233B0F2DE, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* L_6 = (WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E*)il2cpp_codegen_object_new(WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E_il2cpp_TypeInfo_var);
		WXVideoCallback__ctor_mDE62A33227486135212BC97B774EE48C89641F5B(L_6, NULL);
		WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* L_7 = L_6;
		((WXBaseResponse_tA0E6AF36BFAA135423A425AA0BB7DF012C0C955E*)L_7)->___errMsg_1 = _stringLiteral8C1F89F7A8AA971167E226D545A9F4A38EA561EB;
		Il2CppCodeGenWriteBarrier((void**)(&((WXBaseResponse_tA0E6AF36BFAA135423A425AA0BB7DF012C0C955E*)L_7)->___errMsg_1), (void*)_stringLiteral8C1F89F7A8AA971167E226D545A9F4A38EA561EB);
		WXVideo__HandleCallBack_m708ECF4999EEC43E13505C184B38FF1CCE46D87B(__this, L_7, NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OnPlay(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OnPlay_m4B6D265CA005DD27476E9B91448E5845C16B237C (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C1F89F7A8AA971167E226D545A9F4A38EA561EB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Hc_2;
		V_0 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_2 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_4 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m1F2B4D0610B4EC5A34C8309199033B0869B44565(L_4, _stringLiteral8C1F89F7A8AA971167E226D545A9F4A38EA561EB, NULL);
	}

IL_002b:
	{
	}

IL_002c:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___Hc_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_action;
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		__this->___Hc_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hc_2), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OffPlay(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OffPlay_m37E36A6EC024DE507BCFE72CC985BBEE670D5DDF (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9A1A568BCEBAB59FDA3EFED96062B04F39F071A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_action;
		V_0 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->___Hc_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hc_2), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		goto IL_002d;
	}

IL_0014:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___Hc_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_action;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		__this->___Hc_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hc_2), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
	}

IL_002d:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___Hc_2;
		V_1 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_7 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_9 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_a_m6C185DBE230427D9BE592576A6EEFCF89EC0D1A1(L_9, _stringLiteralE9A1A568BCEBAB59FDA3EFED96062B04F39F071A, NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OnEnded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OnEnded_m3D6327083E6A503B87A494971F1BD4983ED396D1 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76BF676321AA7F5594644D8EA78EC6C94915979A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Hd_4;
		V_0 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_2 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_4 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m1F2B4D0610B4EC5A34C8309199033B0869B44565(L_4, _stringLiteral76BF676321AA7F5594644D8EA78EC6C94915979A, NULL);
	}

IL_002b:
	{
	}

IL_002c:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___Hd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_action;
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		__this->___Hd_4 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hd_4), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OffEnded(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OffEnded_m19D53D340FED07AD74156186744B53C68DAD1AB0 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B5B8401D2C97A071FA67165E3E8389490441592);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_action;
		V_0 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->___Hd_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hd_4), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		goto IL_002d;
	}

IL_0014:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___Hd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_action;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		__this->___Hd_4 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hd_4), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
	}

IL_002d:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___Hd_4;
		V_1 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_7 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_9 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_a_m6C185DBE230427D9BE592576A6EEFCF89EC0D1A1(L_9, _stringLiteral6B5B8401D2C97A071FA67165E3E8389490441592, NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OnError(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OnError_m5A6BD8FEF518A8EB8031D21CF71BB98EEA618B0A (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD7E1BD1133CB54CB1C7DC65CE70CE9FB0C7C9B0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___HF_7;
		V_0 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_2 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_4 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m1F2B4D0610B4EC5A34C8309199033B0869B44565(L_4, _stringLiteralAD7E1BD1133CB54CB1C7DC65CE70CE9FB0C7C9B0, NULL);
	}

IL_002b:
	{
	}

IL_002c:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___HF_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_action;
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		__this->___HF_7 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HF_7), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OffError(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OffError_mC34991C23942155D6DC00467C2BCC07C89279820 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E0901DEA8B8A6639634C3D802AC5DFB8E99787D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_action;
		V_0 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->___HF_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HF_7), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		goto IL_002d;
	}

IL_0014:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___HF_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_action;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		__this->___HF_7 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HF_7), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
	}

IL_002d:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___HF_7;
		V_1 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_7 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_9 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_a_m6C185DBE230427D9BE592576A6EEFCF89EC0D1A1(L_9, _stringLiteral9E0901DEA8B8A6639634C3D802AC5DFB8E99787D, NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OnPause(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OnPause_m0A7D67369472FEDFB31CDD1FE386535A7A6E9679 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC386789464914AFAB69C70A3E07C88FB68EDB4DB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___HD_3;
		V_0 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_2 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_4 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m1F2B4D0610B4EC5A34C8309199033B0869B44565(L_4, _stringLiteralC386789464914AFAB69C70A3E07C88FB68EDB4DB, NULL);
	}

IL_002b:
	{
	}

IL_002c:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___HD_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_action;
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		__this->___HD_3 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HD_3), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OffPause(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OffPause_mA9C00F9B3C957AB0BB21A0988C89D2AAD55666BF (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE84A2EF4FDE3EA91B3FC57E8D2FA86F09111FABD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_action;
		V_0 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->___HD_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HD_3), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		goto IL_002d;
	}

IL_0014:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___HD_3;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_action;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		__this->___HD_3 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HD_3), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
	}

IL_002d:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___HD_3;
		V_1 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_7 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_9 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_a_m6C185DBE230427D9BE592576A6EEFCF89EC0D1A1(L_9, _stringLiteralE84A2EF4FDE3EA91B3FC57E8D2FA86F09111FABD, NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OnWaiting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OnWaiting_m4CBD63CA147855D288FA09628F74243ADA1C400F (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA85CE3D3C5BC3E77208A4969E56C063FAED867E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Hf_8;
		V_0 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_2 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_4 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m1F2B4D0610B4EC5A34C8309199033B0869B44565(L_4, _stringLiteralFA85CE3D3C5BC3E77208A4969E56C063FAED867E, NULL);
	}

IL_002b:
	{
	}

IL_002c:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___Hf_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_action;
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		__this->___Hf_8 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hf_8), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OffWaiting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OffWaiting_m415B34EFEFAB45F06952494D894F13A2168C5654 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7B5F864199250592088892A9A178C1427EE0735);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_action;
		V_0 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->___Hf_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hf_8), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		goto IL_002d;
	}

IL_0014:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = __this->___Hf_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_action;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		__this->___Hf_8 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hf_8), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
	}

IL_002d:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___Hf_8;
		V_1 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_7 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_9 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_a_m6C185DBE230427D9BE592576A6EEFCF89EC0D1A1(L_9, _stringLiteralB7B5F864199250592088892A9A178C1427EE0735, NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_Destroy_m2DE57580636DE80E3A81F49441D6C942816C8486 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4F1C6E2C77A0EB190D3862BC491F54D175F27003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BA9B655CAE0C5D3811088970E332CE66C5D74E1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_0 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_a_m0F806EE3268E15F98A45F252A5EB097E9D96BF42(L_2, NULL);
		goto IL_0037;
	}

IL_001a:
	{
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_3 = __this->___HH_11;
		String_t* L_4 = L_3->___src_4;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral3BA9B655CAE0C5D3811088970E332CE66C5D74E1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
	}

IL_0037:
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E* L_6 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->____Dict_19;
		String_t* L_7 = __this->___instanceId_18;
		bool L_8;
		L_8 = Dictionary_2_Remove_m4F1C6E2C77A0EB190D3862BC491F54D175F27003(L_6, L_7, Dictionary_2_Remove_m4F1C6E2C77A0EB190D3862BC491F54D175F27003_RuntimeMethod_var);
		return;
	}
}
// System.Void WeChatWASM.WXVideo::ExitFullScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_ExitFullScreen_m26AE831DDF84468E3D4D057CEB7F8AF4B5DE1997 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral223859FFE6A8F64589BA5405D5DC14FC573C3C8F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_0 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_B_m8C4A1D6D5DCC11A067725CC3AB6944FD9E018456(L_2, NULL);
		goto IL_0037;
	}

IL_001a:
	{
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_3 = __this->___HH_11;
		String_t* L_4 = L_3->___src_4;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral223859FFE6A8F64589BA5405D5DC14FC573C3C8F, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_Pause_m0560DCAC8E6FF8A0515FEC78111F204A20A5A04A (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC386789464914AFAB69C70A3E07C88FB68EDB4DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6397801378989F81E35A20D03375FDF9C4706CA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_0 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_b_m389B900E05223B7316BFEC71740B98F63F0711C0(L_2, NULL);
		goto IL_004b;
	}

IL_0019:
	{
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_3 = __this->___HH_11;
		String_t* L_4 = L_3->___src_4;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteralE6397801378989F81E35A20D03375FDF9C4706CA, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* L_6 = (WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E*)il2cpp_codegen_object_new(WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E_il2cpp_TypeInfo_var);
		WXVideoCallback__ctor_mDE62A33227486135212BC97B774EE48C89641F5B(L_6, NULL);
		WXVideoCallback_t808A78B47244B06417F437A27818947CD67DDE9E* L_7 = L_6;
		((WXBaseResponse_tA0E6AF36BFAA135423A425AA0BB7DF012C0C955E*)L_7)->___errMsg_1 = _stringLiteralC386789464914AFAB69C70A3E07C88FB68EDB4DB;
		Il2CppCodeGenWriteBarrier((void**)(&((WXBaseResponse_tA0E6AF36BFAA135423A425AA0BB7DF012C0C955E*)L_7)->___errMsg_1), (void*)_stringLiteralC386789464914AFAB69C70A3E07C88FB68EDB4DB);
		WXVideo__HandleCallBack_m708ECF4999EEC43E13505C184B38FF1CCE46D87B(__this, L_7, NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::RequestFullScreen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_RequestFullScreen_m47836A8932C848DB71BE15BB068019495E327A39 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, int32_t ___0_direction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97D446D465B993343D90B955F615249017E0E034);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_0 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = __this->___instanceId_18;
		int32_t L_3 = ___0_direction;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_mF9C2646AA8F124E8318AF4541FDCF7DCF6383B08(L_2, L_3, NULL);
		goto IL_0038;
	}

IL_001b:
	{
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_4 = __this->___HH_11;
		String_t* L_5 = L_4->___src_4;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, _stringLiteral97D446D465B993343D90B955F615249017E0E034, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::Seek(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_Seek_m8A18917362FD6EA5D5A5E9F698E7ABC039B79BA7 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, int32_t ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___instanceId_18;
		int32_t L_1 = ___0_time;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_a_m2B96236796C4AA903DA09E855EA8F4B6FAF3ACEF(L_0, L_1, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXVideo::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_Stop_m3C09D13BA13DE742B0B39F8AE2A39F21217D8C82 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95D05BE86B72BFBCBBA559FE3A7C9F18044A576F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_0 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_C_mF08D2E77543319EC13D77A6C8678FC779D00D214(L_2, NULL);
		goto IL_0034;
	}

IL_0019:
	{
		WXCreateVideoParam_tDCDBE1651C259E179AF5F9CF295AB6E0137EF9AA* L_3 = __this->___HH_11;
		String_t* L_4 = L_3->___src_4;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral95D05BE86B72BFBCBBA559FE3A7C9F18044A576F, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OnTimeUpdate(System.Action`1<WeChatWASM.WXVideoTimeUpdate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OnTimeUpdate_m47ADCB1A1CDB8E88B15347B1ABE6453B7B5A2FBB (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70FC9A72177735B2BA8C44B713453E72A9AA40DE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* L_0 = __this->___HE_5;
		V_0 = (bool)((((RuntimeObject*)(Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_2 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_4 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m1F2B4D0610B4EC5A34C8309199033B0869B44565(L_4, _stringLiteral70FC9A72177735B2BA8C44B713453E72A9AA40DE, NULL);
	}

IL_002b:
	{
	}

IL_002c:
	{
		Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* L_5 = __this->___HE_5;
		Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* L_6 = ___0_action;
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		__this->___HE_5 = ((Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)Castclass((RuntimeObject*)L_7, Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HE_5), (void*)((Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)Castclass((RuntimeObject*)L_7, Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OffTimeUpdate(System.Action`1<WeChatWASM.WXVideoTimeUpdate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OffTimeUpdate_m0C362F4D87A0EC2A2DE49DE50B97DBB8001446CC (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E361FA2D2C11E971A37AC44DB1445C3121CABE2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* L_0 = ___0_action;
		V_0 = (bool)((((RuntimeObject*)(Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->___HE_5 = (Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HE_5), (void*)(Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)NULL);
		goto IL_002d;
	}

IL_0014:
	{
		Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* L_2 = __this->___HE_5;
		Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* L_3 = ___0_action;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		__this->___HE_5 = ((Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)Castclass((RuntimeObject*)L_4, Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HE_5), (void*)((Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)Castclass((RuntimeObject*)L_4, Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469_il2cpp_TypeInfo_var)));
	}

IL_002d:
	{
		Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* L_5 = __this->___HE_5;
		V_1 = (bool)((((RuntimeObject*)(Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_7 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_9 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_a_m6C185DBE230427D9BE592576A6EEFCF89EC0D1A1(L_9, _stringLiteral2E361FA2D2C11E971A37AC44DB1445C3121CABE2, NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OnProgress(System.Action`1<WeChatWASM.WXVideoProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OnProgress_mA442AAFCA40CD392B366B02496E89833F20E63D8 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96476BEC900CD13BC4B8CD24C1C320EF8094EAAA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469* L_0 = __this->___HE_5;
		V_0 = (bool)((((RuntimeObject*)(Action_1_tD8F5E5527A86E9161125EC4C2EDC860772662469*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_2 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_4 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_A_m1F2B4D0610B4EC5A34C8309199033B0869B44565(L_4, _stringLiteral96476BEC900CD13BC4B8CD24C1C320EF8094EAAA, NULL);
	}

IL_002b:
	{
	}

IL_002c:
	{
		Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* L_5 = __this->___He_6;
		Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* L_6 = ___0_action;
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		__this->___He_6 = ((Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007*)Castclass((RuntimeObject*)L_7, Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___He_6), (void*)((Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007*)Castclass((RuntimeObject*)L_7, Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void WeChatWASM.WXVideo::OffProgress(System.Action`1<WeChatWASM.WXVideoProgress>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_OffProgress_m0D96DE5CCB8F42FA6FD3C59574E7095D4EE72145 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral254793765998428FB3B3D993D256A2C1D469F960);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* L_0 = ___0_action;
		V_0 = (bool)((((RuntimeObject*)(Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->___He_6 = (Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___He_6), (void*)(Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007*)NULL);
		goto IL_002d;
	}

IL_0014:
	{
		Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* L_2 = __this->___He_6;
		Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* L_3 = ___0_action;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		__this->___He_6 = ((Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007*)Castclass((RuntimeObject*)L_4, Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___He_6), (void*)((Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007*)Castclass((RuntimeObject*)L_4, Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007_il2cpp_TypeInfo_var)));
	}

IL_002d:
	{
		Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007* L_5 = __this->___He_6;
		V_1 = (bool)((((RuntimeObject*)(Action_1_tACF65915F1427FF81AF8EBA2921A0CF87509F007*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		bool L_7 = ((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_9 = __this->___instanceId_18;
		il2cpp_codegen_runtime_class_init_inline(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		WXVideo_a_m6C185DBE230427D9BE592576A6EEFCF89EC0D1A1(L_9, _stringLiteral254793765998428FB3B3D993D256A2C1D469F960, NULL);
	}

IL_0057:
	{
	}

IL_0058:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo__cctor_mC89C0359C234BEC20938850CC0C77C7F10E51914 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m83018A79BFFC223A8FD324F9316ABC5241B79996_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->___Hb_0 = (bool)1;
		Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E* L_0 = (Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E*)il2cpp_codegen_object_new(Dictionary_2_tE37733EE3C8C94E72450316D5BD605BB957D139E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m83018A79BFFC223A8FD324F9316ABC5241B79996(L_0, Dictionary_2__ctor_m83018A79BFFC223A8FD324F9316ABC5241B79996_RuntimeMethod_var);
		((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->____Dict_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_StaticFields*)il2cpp_codegen_static_fields_for(WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39_il2cpp_TypeInfo_var))->____Dict_19), (void*)L_0);
		return;
	}
}
// System.Void WeChatWASM.WXVideo::A()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_A_m31030BCD3571A728528E14EDB1B03564FEA6E95E (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	{
		__this->___HC_1 = (bool)1;
		return;
	}
}
// System.Void WeChatWASM.WXVideo::a()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_a_mC5F7B0C7111ADD5DA2AA57169EE0874FF7AA0CE0 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	{
		__this->___HC_1 = (bool)0;
		return;
	}
}
// System.Void WeChatWASM.WXVideo::B()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideo_B_m09616AC965B265CB4D8E7354C50DB94CBCED7828 (WXVideo_t893616812ECBA18D3E4495B2D2398F149BD18E39* __this, const RuntimeMethod* method) 
{
	{
		__this->___HC_1 = (bool)0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeChatWASM.WXVideoDecoder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideoDecoder__ctor_m9B3EA162CB13055C52CC62AD568416D9C05D756B (WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		__this->___Hk_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Hk_0), (void*)L_0);
		return;
	}
}
// WeChatWASM.FrameDataOptions WeChatWASM.WXVideoDecoder::GetFrameData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5* WXVideoDecoder_GetFrameData_m4D31A329AF7156F772E41D0DBC91FE3C49DB5F66 (WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisFrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5_mCDB54EF60F9623C73A7CD2931BEFC005D0032799_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F45AE1F6DDDD4F0B29149B9126317C62C36E5A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE192CF13EEECEA2E62FE769E4FE52917CF511D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18);
		s_Il2CppMethodInitialized = true;
	}
	FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5* V_2 = NULL;
	{
		String_t* L_0 = __this->___Hk_0;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = WXSDKManagerHandler_WX_ClassOneWayNoFunction_t_m0A8849BE2BA105D91EAD92C0C9427884FAD4B6F6(_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18, _stringLiteralAE192CF13EEECEA2E62FE769E4FE52917CF511D5, _stringLiteral6F45AE1F6DDDD4F0B29149B9126317C62C36E5A5, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5* L_2;
		L_2 = JsonMapper_ToObject_TisFrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5_mCDB54EF60F9623C73A7CD2931BEFC005D0032799(L_1, JsonMapper_ToObject_TisFrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5_mCDB54EF60F9623C73A7CD2931BEFC005D0032799_RuntimeMethod_var);
		V_0 = L_2;
		FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5* L_3 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_4 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&L_3->___arrayBufferLength_1);
		int32_t L_5;
		L_5 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA(L_4, Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_1 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		String_t* L_8 = __this->___Hk_0;
		String_t* L_9;
		L_9 = WXSDKManagerHandler_WXSetArrayBuffer_mDAEA932726FFD397D3993F0F71E3CAC05F28B533(L_7, L_8, NULL);
		FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		L_10->___data_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___data_0), (void*)L_11);
		FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5* L_12 = V_0;
		V_2 = L_12;
		goto IL_004a;
	}

IL_004a:
	{
		FrameDataOptions_t66ED48EBAED3F8B42B6966BA4C7A5F6CD210CBB5* L_13 = V_2;
		return L_13;
	}
}
// System.Void WeChatWASM.WXVideoDecoder::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideoDecoder_Remove_mE27FB0457AB06C1CD733E5E7A29232DE3ECE8EEB (WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1051ECAD376DFA7401D0FAA334972924BD291944);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___Hk_0;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_WX_ClassOneWayNoFunction_v_m89FBBA04F4F7A4A7CE7C9FA52790AEFDF59FF54C(_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18, _stringLiteral1051ECAD376DFA7401D0FAA334972924BD291944, L_0, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXVideoDecoder::Seek(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideoDecoder_Seek_mEF6233784B3A783267630182D11591B645DCBE82 (WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5* __this, double ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7CA6B7A7F82DA89BFD1F6A227BE9102B12D67B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___Hk_0;
		double L_1 = ___0_position;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_WX_ClassOneWayNoFunction_vn_mACD8BED50887E6ED3565BC0097520F3F663975F9(_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18, _stringLiteralB7CA6B7A7F82DA89BFD1F6A227BE9102B12D67B3, L_0, L_1, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXVideoDecoder::Start(WeChatWASM.VideoDecoderStartOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideoDecoder_Start_m693C475622713400C4A39ADE19CF7B0CDED6BA43 (WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5* __this, VideoDecoderStartOption_tC19674BC1FCCBCA5BD4CE3C6203D6952424C460C* ___0_option, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___Hk_0;
		VideoDecoderStartOption_tC19674BC1FCCBCA5BD4CE3C6203D6952424C460C* L_1 = ___0_option;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_WX_ClassOneWayNoFunction_vt_mD3FCC693FA89A4D4B7429FD7D7E573DA94142B88(_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18, _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, L_0, L_2, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXVideoDecoder::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideoDecoder_Stop_m941A5CFCD440F160C21750077CAE0E279F08F28B (WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral800C762D9EF92B399EC87C776239043ACEEC0717);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___Hk_0;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_WX_ClassOneWayNoFunction_v_m89FBBA04F4F7A4A7CE7C9FA52790AEFDF59FF54C(_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18, _stringLiteral800C762D9EF92B399EC87C776239043ACEEC0717, L_0, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXVideoDecoder::Off(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideoDecoder_Off_m18D01C3C71270757C56EFF8FC9F60F86F1C7FFC3 (WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5* __this, String_t* ___0_eventName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_0 = ((WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_StaticFields*)il2cpp_codegen_static_fields_for(WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_il2cpp_TypeInfo_var))->___OnActionList_1;
		String_t* L_1 = __this->___Hk_0;
		String_t* L_2 = ___0_eventName;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, L_2, NULL);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E(L_0, L_3, Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E_RuntimeMethod_var);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_6 = ((WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_StaticFields*)il2cpp_codegen_static_fields_for(WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_il2cpp_TypeInfo_var))->___OnActionList_1;
		String_t* L_7 = __this->___Hk_0;
		String_t* L_8 = ___0_eventName;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, L_8, NULL);
		Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189(L_6, L_9, (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL, Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		String_t* L_10 = __this->___Hk_0;
		String_t* L_11 = ___0_eventName;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_WX_ClassOffEventFunction_mFB8A22A3F122F424401BF5AB16FA31D2F814967F(_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18, _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5, L_10, L_11, NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void WeChatWASM.WXVideoDecoder::On(System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXVideoDecoder_On_mF04B5B803CAAECE7E5F2DDF0E0E667A6D7678B77 (WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5* __this, String_t* ___0_eventName, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mCA46B88F063E9105EDE4ADCA61BD5620782617C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_0 = ((WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_StaticFields*)il2cpp_codegen_static_fields_for(WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_il2cpp_TypeInfo_var))->___OnActionList_1;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_2 = (Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D*)il2cpp_codegen_object_new(Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2(L_2, Dictionary_2__ctor_m1DBE8BD6A92ED74AFCC4FB67F1D075C92A6CC1A2_RuntimeMethod_var);
		((WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_StaticFields*)il2cpp_codegen_static_fields_for(WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_il2cpp_TypeInfo_var))->___OnActionList_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_StaticFields*)il2cpp_codegen_static_fields_for(WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_il2cpp_TypeInfo_var))->___OnActionList_1), (void*)L_2);
	}

IL_0019:
	{
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_3 = ((WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_StaticFields*)il2cpp_codegen_static_fields_for(WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_il2cpp_TypeInfo_var))->___OnActionList_1;
		String_t* L_4 = __this->___Hk_0;
		String_t* L_5 = ___0_eventName;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, L_5, NULL);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E(L_3, L_6, Dictionary_2_ContainsKey_mD435FAAC8BD5406C6DBEC96534F6FFF8793EB06E_RuntimeMethod_var);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0064;
		}
	}
	{
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_9 = ((WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_StaticFields*)il2cpp_codegen_static_fields_for(WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_il2cpp_TypeInfo_var))->___OnActionList_1;
		V_2 = L_9;
		String_t* L_10 = __this->___Hk_0;
		String_t* L_11 = ___0_eventName;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, L_11, NULL);
		V_3 = L_12;
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_13 = V_2;
		String_t* L_14 = V_3;
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_15 = V_2;
		String_t* L_16 = V_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_17;
		L_17 = Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D(L_15, L_16, Dictionary_2_get_Item_mAC12398F029B0CC08037CAC73D4E875F4E9ADD6D_RuntimeMethod_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_18 = ___1_callback;
		Delegate_t* L_19;
		L_19 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_17, L_18, NULL);
		Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189(L_13, L_14, ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_19, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var)), Dictionary_2_set_Item_m712233828B73716AD094E3EDD334AE3F214A6189_RuntimeMethod_var);
		goto IL_009a;
	}

IL_0064:
	{
		Dictionary_2_t599EFBA58C4F1673138C703D60976BB1FAACE83D* L_20 = ((WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_StaticFields*)il2cpp_codegen_static_fields_for(WXVideoDecoder_t876B0AE77C0649A528A4A9C3C022865E65A512B5_il2cpp_TypeInfo_var))->___OnActionList_1;
		String_t* L_21 = __this->___Hk_0;
		String_t* L_22 = ___0_eventName;
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_21, L_22, NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_24 = ___1_callback;
		Dictionary_2_Add_mCA46B88F063E9105EDE4ADCA61BD5620782617C7(L_20, L_23, L_24, Dictionary_2_Add_mCA46B88F063E9105EDE4ADCA61BD5620782617C7_RuntimeMethod_var);
		String_t* L_25 = __this->___Hk_0;
		String_t* L_26 = ___0_eventName;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_WX_ClassOnEventFunction_mA32AE673FE5654617D44CF0C20EC7D47C2E2F261(_stringLiteralDA6482DDD76DAF3051432A9E890106BAAFE1EE18, _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73, _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE, L_25, L_26, NULL);
	}

IL_009a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 A.B::A(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t B_A_m444BF8DAE44BC291DDC813B09D3188748FB896B7 (String_t* ___0_p, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_p;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_p;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_p;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_000d;
	}

IL_002c:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
