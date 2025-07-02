#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Action`1<WeChatWASM.OnAddToFavoritesListenerResult>>
struct Action_1_t6FB9D7C42E78CC09D8CE40C31D065A20A58B3697;
// System.Action`1<System.Action`1<WeChatWASM.OnCopyUrlListenerResult>>
struct Action_1_t8428F4A0B7323FE72198A88C3E7A7C8D49A6A01B;
// System.Action`1<System.Action`1<WeChatWASM.OnHandoffListenerResult>>
struct Action_1_tF5681432D9389D18C38897D941C82296DB71B0DC;
// System.Action`1<System.Action`1<WeChatWASM.OnShareTimelineListenerResult>>
struct Action_1_tC2A02443BE5474B596A7A3D80E11A4ECA00357E0;
// System.Action`1<System.Action`1<WeChatWASM.WXShareAppMessageParam>>
struct Action_1_t46D08295EECC225F57FC37020E3EB000A87A5151;
// System.Action`1<WeChatWASM.Error>
struct Action_1_tB6461BDAE145475C0FFEE7E2B363AD128E168837;
// System.Action`1<WeChatWASM.GeneralCallbackResult>
struct Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<WeChatWASM.OnAccelerometerChangeListenerResult>
struct Action_1_t3C85759A3E7E35A6819E47EFBFD1D963B7F9FA9C;
// System.Action`1<WeChatWASM.OnBLECharacteristicValueChangeListenerResult>
struct Action_1_t59F2E492F74D9152516AC9C1B60FF5B6C7BBF43E;
// System.Action`1<WeChatWASM.OnBLEConnectionStateChangeListenerResult>
struct Action_1_tDA60EDFB0D0B586337CB9AEC7AAA397DA14CF1F8;
// System.Action`1<WeChatWASM.OnBLEMTUChangeListenerResult>
struct Action_1_t930E8216FEA3040FA6ED87EE1067C5FBA6303BFE;
// System.Action`1<WeChatWASM.OnBLEPeripheralConnectionStateChangedListenerResult>
struct Action_1_tF06A2D9A5ECF30328D87A385C9EE6FAA268C5D76;
// System.Action`1<WeChatWASM.OnBackgroundFetchDataListenerResult>
struct Action_1_t0C3AECB9E6795E88B88FF879A8E5F4C2F00C6885;
// System.Action`1<WeChatWASM.OnBeaconServiceChangeListenerResult>
struct Action_1_t3813F8DED11EEF0E69F9F14A53D96B019CE3B277;
// System.Action`1<WeChatWASM.OnBeaconUpdateListenerResult>
struct Action_1_t2DD31FABC563D87632B8B682ECC44E66ABA5251E;
// System.Action`1<WeChatWASM.OnBluetoothAdapterStateChangeListenerResult>
struct Action_1_t78553B48829AE9E35D5295868580668A1AB37E4E;
// System.Action`1<WeChatWASM.OnBluetoothDeviceFoundListenerResult>
struct Action_1_tE5239580E19EF823F476E673E813A087B8B7F7DD;
// System.Action`1<WeChatWASM.OnCompassChangeListenerResult>
struct Action_1_t97C38A4E476C6B7E01ABA3ABCF6A60B511DB408F;
// System.Action`1<WeChatWASM.OnDeviceMotionChangeListenerResult>
struct Action_1_t87D00519B275C1E65788C5950DD29359AC1CC767;
// System.Action`1<WeChatWASM.OnDeviceOrientationChangeListenerResult>
struct Action_1_t267BA449051D55505F6E41F325F857517562D9C2;
// System.Action`1<WeChatWASM.OnGamepadConnectedListenerResult>
struct Action_1_t5E75D164AAAD32A6E658FA6B7283783E631D004B;
// System.Action`1<WeChatWASM.OnGamepadDisconnectedListenerResult>
struct Action_1_tF66C713ED0C647F8FE6F1EEA71375754F86FDA46;
// System.Action`1<WeChatWASM.OnGyroscopeChangeListenerResult>
struct Action_1_t386FC72A14405C783E7BB9DF1F6698F3CB8AF9EA;
// System.Action`1<WeChatWASM.OnKeyDownListenerResult>
struct Action_1_t71A15C9BB1C59325AB55743E015AA28A6EBF3BB6;
// System.Action`1<WeChatWASM.OnKeyboardHeightChangeListenerResult>
struct Action_1_tD0D9BB706AE8D0B8C40A8299E7EF22E9C4CD0707;
// System.Action`1<WeChatWASM.OnKeyboardInputListenerResult>
struct Action_1_t0CF02DF5080277F09B28FA74D41A24CE8ECED358;
// System.Action`1<WeChatWASM.OnMemoryWarningListenerResult>
struct Action_1_t77FDA3B1D522E036C414073AC9F442CF1513A504;
// System.Action`1<WeChatWASM.OnMouseDownListenerResult>
struct Action_1_tB04A584704B3E8DE8EBAC8322B40D7CCC3A948EE;
// System.Action`1<WeChatWASM.OnMouseMoveListenerResult>
struct Action_1_t7644A3B73B771225B765BF385E53B9961ACF081A;
// System.Action`1<WeChatWASM.OnNetworkStatusChangeListenerResult>
struct Action_1_tAD3340357DC54A00F1A28D24BAB8F1B6AB1F2720;
// System.Action`1<WeChatWASM.OnNetworkWeakChangeListenerResult>
struct Action_1_t748686E7991A3F0D55F47C5900278DF935A7A9F8;
// System.Action`1<WeChatWASM.OnScreenRecordingStateChangedListenerResult>
struct Action_1_tCBB574711A6E6956E8977BF8C877AE171413D4FD;
// System.Action`1<WeChatWASM.OnShareMessageToFriendListenerResult>
struct Action_1_t4A3F6400CADF06259797FD811278F7F99C9D7ED5;
// System.Action`1<WeChatWASM.OnShowListenerResult>
struct Action_1_t0DB9C0E93E8947D462C90A006FB04519C4D1DEA8;
// System.Action`1<WeChatWASM.OnTouchStartListenerResult>
struct Action_1_tF679F66F509A4837A34A8411F6E074E63FF68FA5;
// System.Action`1<WeChatWASM.OnUnhandledRejectionListenerResult>
struct Action_1_t318AC02CBD9551F5CC9B1E2D670FD49ABAE29807;
// System.Action`1<WeChatWASM.OnUserCaptureScreenListenerResult>
struct Action_1_t2B1F8EBBFB9AA91D971444C9A278CA609744A678;
// System.Action`1<WeChatWASM.OnVoIPChatInterruptedListenerResult>
struct Action_1_t49275100666C0CF759F7EA596DD7C20C8B824518;
// System.Action`1<WeChatWASM.OnVoIPChatMembersChangedListenerResult>
struct Action_1_t0931E058BB5EFE0A4F5163565030331D996B8616;
// System.Action`1<WeChatWASM.OnVoIPChatSpeakersChangedListenerResult>
struct Action_1_t6F9088A7C5DEEE41E4646A7B30B502B862FCD83B;
// System.Action`1<WeChatWASM.OnVoIPChatStateChangedListenerResult>
struct Action_1_tDDF3ED3CEA4296BF27D9C41A2CE8EDF5A2DFF8DB;
// System.Action`1<WeChatWASM.OnWheelListenerResult>
struct Action_1_tCF745EB56CB73376C7353941B65B56187394EBDE;
// System.Action`1<WeChatWASM.OnWindowResizeListenerResult>
struct Action_1_tD8A11F4817A8DFD2E4505ECD04D635BBC0EFEF9D;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`2<WeChatWASM.OnGameLiveStateChangeCallbackResult,System.Action`1<WeChatWASM.OnGameLiveStateChangeCallbackResponse>>
struct Action_2_t582B10F7BF4E13AADD1E828E636ADBC06A6897C1;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Action`1<System.Int32>>
struct Dictionary_2_t0125D969D17ECEA1F4D4A1D6280E764B640CF75A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Dictionary_2_tA2A39478BB40B99FA2F1A7B0B87BE75CB5337E53;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.AddCardOption>
struct Dictionary_2_tB1D322E5C128672C8A4A40AC5CCB32F60F63DC11;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.AuthPrivateMessageOption>
struct Dictionary_2_t816DF80AB9D180EE88D5AABE26394FDCC59F7D44;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.AuthorizeOption>
struct Dictionary_2_t9AD6761229EE9268AD86DE2CAB22CDAB26E67EF1;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CheckGameLiveEnabledOption>
struct Dictionary_2_t8A9A8DBE469FB2AAF780C9EC4F9899E459B0791F;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CheckIsAddedToMyMiniProgramOption>
struct Dictionary_2_t1B9A2E2C504559E03C714C7BFFDD0E2C27077C93;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CheckSessionOption>
struct Dictionary_2_t94A816B1C93C976260639030EDD56CD133BD5EE4;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ChooseImageOption>
struct Dictionary_2_tA3D45F651E29C911146A54DC58C7B841343C4FD1;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ChooseMediaOption>
struct Dictionary_2_t7B52F02232A444DC80BF89399EA6469D78EF781C;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ChooseMessageFileOption>
struct Dictionary_2_tDDC1C3B8DD146A3C07D82BC9FB3D6B338402CAFE;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CloseBLEConnectionOption>
struct Dictionary_2_t451EA2C004F6DF90629B3CAE7844F2DC0D7AB398;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CloseBluetoothAdapterOption>
struct Dictionary_2_t277E4BA9A1A41E0AA9756E488AD58F4FBEF2A25A;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CompressImageOption>
struct Dictionary_2_t212817617F1427A8F88ED440C7FF019B3FF190CB;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CreateBLEConnectionOption>
struct Dictionary_2_t2EFD902CAA5E36E4A18FD63F241B901B0EC5AEBC;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CreateBLEPeripheralServerOption>
struct Dictionary_2_t385E5DDA7378A571815CFC2E1E9E349E9411DFD7;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.DownloadFileOption>
struct Dictionary_2_tBA22C5B7FE2957642B1704C763596005C1C21BF2;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ExitMiniProgramOption>
struct Dictionary_2_t79085A93A0EA76697F24095CECB03B7929561A9D;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ExitVoIPChatOption>
struct Dictionary_2_t7FD76D42D6E74504A146DABB0FEED3B62905A0F4;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.FaceDetectOption>
struct Dictionary_2_t117F0E75985D195EF9C6A2654E5CE83335C0E475;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetAvailableAudioSourcesOption>
struct Dictionary_2_t82C3834EA47C310036F09C3E8762A63E08F35E74;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBLEDeviceCharacteristicsOption>
struct Dictionary_2_t0B8D91112F72D88F046766BEA98277001A02DF72;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBLEDeviceRSSIOption>
struct Dictionary_2_tD32DBC5B823A7938233F762BA9A39E4840C05C41;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBLEDeviceServicesOption>
struct Dictionary_2_t7331F4C866B9D01A15D433C62BF2FC1F9DD795F6;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBLEMTUOption>
struct Dictionary_2_t9E3EABDB0FF40F995D25C8CA891853AE7A0E0F1C;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBackgroundFetchDataOption>
struct Dictionary_2_t8ED09DC9BDB9AAFF9E8F18393045959B1C983D63;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBackgroundFetchTokenOption>
struct Dictionary_2_t052633ADADAA06AC599053EE44E5BFB367A2DF38;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBatteryInfoOption>
struct Dictionary_2_t0665FAD930A71055F0248F150605B1554310B0AE;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBeaconsOption>
struct Dictionary_2_tEF3F318DA93270EBFBF9ABECD6CD6641080EE2C6;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBluetoothAdapterStateOption>
struct Dictionary_2_t59CE27F7C0089A2B302520303FF2B69E75627D6E;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBluetoothDevicesOption>
struct Dictionary_2_t9794F4E4351C78BEB903CB06B449A14587DC99EB;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetChannelsLiveInfoOption>
struct Dictionary_2_t51F4F728EFE872666BFF8583FE7A4EDAA2241F48;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetChannelsLiveNoticeInfoOption>
struct Dictionary_2_t19FF502E01BDA5186EE20A2FB44AC3DE530B0145;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetClipboardDataOption>
struct Dictionary_2_tD4C9ACF9131B7E1B3343E756AAB339B7D1500215;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetConnectedBluetoothDevicesOption>
struct Dictionary_2_tB72EDE9412B141AC6379E975D6BF4503BC740E3D;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetDeviceBenchmarkInfoOption>
struct Dictionary_2_t18477AE17719E4B307333C6188022003B7289C01;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetExtConfigOption>
struct Dictionary_2_t3591EAE2BEA31FD94DBC9493217F783853FBE69C;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetFuzzyLocationOption>
struct Dictionary_2_t6D3BA8834417E363C61F3504963BBB146D8EB2BF;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetGameClubDataOption>
struct Dictionary_2_t3DFAB5F1697FC34151FF170B99927BBFA8B23F9A;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetGroupEnterInfoOption>
struct Dictionary_2_tCB0EBB12EF546A27D0860E10C6668D572AD742B5;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetInferenceEnvInfoOption>
struct Dictionary_2_t979AA3F223788773AB4B8C1B89E614D5EF9EF7E6;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetLocalIPAddressOption>
struct Dictionary_2_t26F8317CF94CDCFE7E550C8462F5EAD3082185CD;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetNetworkTypeOption>
struct Dictionary_2_tE39DBEF02F5B15168866B5978C3AB12346EF6D25;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetPhoneNumberOption>
struct Dictionary_2_t6A0A603DAF558083F91049EFB4A10CA64A026381;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetPrivacySettingOption>
struct Dictionary_2_tEDEBD733D3313F64D74DC6BB73875B55B3D81E46;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetScreenBrightnessOption>
struct Dictionary_2_tACF4C6EF0A903E282E1CB52CBC3987C293D26FFE;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetScreenRecordingStateOption>
struct Dictionary_2_tDE4A8090A00D6FF842BE2914DFBD175009F0F0D6;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetSettingOption>
struct Dictionary_2_t5414C2395C1DB7904947B9F849AD59CE6E80D15F;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetShareInfoOption>
struct Dictionary_2_t977368BD40250A3862423E76E5B60F402045E7FE;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetShowSplashAdStatusOption>
struct Dictionary_2_t48C82FF4672D017AE1073289FFA55272D13538AC;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetStorageInfoOption>
struct Dictionary_2_t7FE344370FF6D51ACED60B0893E12392CF369A3B;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetSystemInfoAsyncOption>
struct Dictionary_2_t600D31F35A824D1C7AA048E3A63B5A4C094C28F5;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetSystemInfoOption>
struct Dictionary_2_tD1D8C0B868D578950AB31E1D1F1EF02FBA01C6D4;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetUserCurrentGameliveInfoOption>
struct Dictionary_2_tE0FCBC86265F68E89E9D9611EA9322FADC2DBDFC;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetUserGameLiveDetailsOption>
struct Dictionary_2_t94526FCF1F02A2812A25F09EAB80B00922359FD2;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetUserInfoOption>
struct Dictionary_2_t817F4F0416EAC0D5CDB3E5556D83FDF8E25627B5;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetUserInteractiveStorageOption>
struct Dictionary_2_t5EDB14661F605D3A5C684BC860AC989FBFFFCFF1;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetUserRecentGameLiveInfoOption>
struct Dictionary_2_t103142938D88BEA9417DD00363D082069385D4FE;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetWeRunDataOption>
struct Dictionary_2_tC697C5573897F7BC023F9DD273A3EAC4B31634C9;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.HideKeyboardOption>
struct Dictionary_2_t7E49E3262A54E8169968FD59DF23E064ACA1D0B5;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.HideLoadingOption>
struct Dictionary_2_t69FD29D068334A3EBB4997EFF118C2276BC6D9D9;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.HideShareMenuOption>
struct Dictionary_2_t866CF1E0FCF91BE9D8FB38B0EFA90DD8F60FFA6E;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.HideToastOption>
struct Dictionary_2_tCD2C6DB0DD6E3F5B569AEBF66BB95FAD3A75C40A;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.InitFaceDetectOption>
struct Dictionary_2_t8BBEFD3CA014D094D1C70A58202071CCFE8DA62E;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.IsBluetoothDevicePairedOption>
struct Dictionary_2_t30855973154A04D7094C8B458EAC47D8F225D4CD;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.JoinVoIPChatOption>
struct Dictionary_2_t4101F7B294625F0FCC857E5B03A394D894B4F6AB;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.LoginOption>
struct Dictionary_2_t1BA58B5EBCC7112336846F4871EC4C3D4B9351D5;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.MakeBluetoothPairOption>
struct Dictionary_2_t594433F41C800C40AA65220D33DF64F66AAFA15C;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.NavigateBackMiniProgramOption>
struct Dictionary_2_tD869B026D73F084BE72CEE24F27B5B989056B850;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.NavigateToMiniProgramOption>
struct Dictionary_2_tBAD33D6D888B86BF3F6D83230058D11885EAA500;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.NotifyBLECharacteristicValueChangeOption>
struct Dictionary_2_t1216F38DF44A6B747AB5B42DC592CD5046889306;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenAppAuthorizeSettingOption>
struct Dictionary_2_t98AD19FB7C3A8BA8BA4B720D963E05BBFBFE44C0;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenBluetoothAdapterOption>
struct Dictionary_2_tFAD69A296DEA8E837BAD4977DD257970C00D8043;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenBusinessViewOption>
struct Dictionary_2_t38044DAE1F5736E9501D665B9E924E87416E1252;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenCardOption>
struct Dictionary_2_t37C2F4D797E70115FED145435D738D7161BB92C5;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenChannelsActivityOption>
struct Dictionary_2_tD4C572DFFF0F2C9A11EE28B6926DF732B4471BAF;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenChannelsEventOption>
struct Dictionary_2_t241A7DE400A381C1923FBB72F777AA84ADDCF1CA;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenChannelsLiveCollectionOption>
struct Dictionary_2_t8116D9FB6D163E89DE624972BFEF6CD99224E108;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenChannelsLiveOption>
struct Dictionary_2_tD0D25626BB047DB241ADA4F036CAB1A8785CD5AC;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenChannelsUserProfileOption>
struct Dictionary_2_tD1E59B59ABD7BB1AFEC93BC54E3EA0D735D3EC5B;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenCustomerServiceChatOption>
struct Dictionary_2_t46D25C6595B53F820635F935F3E49396817E86E7;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenCustomerServiceConversationOption>
struct Dictionary_2_tA840B73B99D4AB62ED476189C2C986897A158F7A;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenPageOption>
struct Dictionary_2_tDE00E01AF65A0CA98E48D960B4B37DBD3F5A3F77;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenPrivacyContractOption>
struct Dictionary_2_tED708E805A5F0688F5E95A3D33933F0B3E545557;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenSettingOption>
struct Dictionary_2_tAC13C24C72E3F2C1DC05B6F4830992E69952C64B;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenSystemBluetoothSettingOption>
struct Dictionary_2_tF6C891DD1DE498CBFD605D44F16D02A3A8CC4B3D;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OperateGameRecorderVideoOption>
struct Dictionary_2_t8390765ADB372C529D595688CF6C3B4FB48AA8E5;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.PreviewImageOption>
struct Dictionary_2_t4DDE36791C7C126356D38CBB6B4A04B9D247A74E;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.PreviewMediaOption>
struct Dictionary_2_tDB767939EEE6BAFBCDC132ECE6542FDA04DA04A1;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ReadBLECharacteristicValueOption>
struct Dictionary_2_t7CA4783A06626CF5FD37097346FEE5E41C2E5903;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RemoveStorageOption>
struct Dictionary_2_t50C9E8D25C067C86037FAF1A3E54E1C84DB8C13B;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RemoveUserCloudStorageOption>
struct Dictionary_2_tBC35F4E3341A22652F64BB3B55DEA6EBA7F07F8B;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ReportSceneOption>
struct Dictionary_2_t2F3E4830B6A9E611161D8CB4D6F49426E0AFAEAE;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestMidasFriendPaymentOption>
struct Dictionary_2_tCF3BFEDD22C56292C7AF8CD3AA4ADE0A930CEADE;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestMidasPaymentGameItemOption>
struct Dictionary_2_t3F35B697ACAA5B9E75AEA4BFE6B628E4C97F66B6;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestMidasPaymentOption>
struct Dictionary_2_tE1C00450DE33A8BFE227BEB75BF4BAAFCCAB386A;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestSubscribeLiveActivityOption>
struct Dictionary_2_tB2645455C37527840AD5E397D95CE4E61566EE34;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestSubscribeMessageOption>
struct Dictionary_2_tE39E79438387EEE1C0B0BD0E178986E923662F4E;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestSubscribeSystemMessageOption>
struct Dictionary_2_tC6CB9121B23BCD9D176FD5B8AED2EBB7E3C9A1FE;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequirePrivacyAuthorizeOption>
struct Dictionary_2_t870A1238477219BD275B3451B72A1FEB40280973;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ReserveChannelsLiveOption>
struct Dictionary_2_tC1ED46269D3F086A1EEC1D1003240499D8F5F893;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RestartMiniProgramOption>
struct Dictionary_2_tFBBC22643CD44BE2F7371CF81CEE971F2A9782FC;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SaveFileToDiskOption>
struct Dictionary_2_t8DA8EE98B547C7C5A9DC1282850F6FBC01095399;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SaveImageToPhotosAlbumOption>
struct Dictionary_2_t314E347C6827AC1F395502EC1B5130CA6F9C5984;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ScanCodeOption>
struct Dictionary_2_tB45ADB802F02AE936776F2E1D9181B3188E7ED98;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetBLEMTUOption>
struct Dictionary_2_t4267673D2387CC199DD65F1A312BEAAFB04B3350;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetBackgroundFetchTokenOption>
struct Dictionary_2_tDD802A598969CE7683316059D7AC0DBA6C4C5C2A;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetClipboardDataOption>
struct Dictionary_2_t1BC4866B209C49A7FD72097159DBDDC0805A7858;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetDeviceOrientationOption>
struct Dictionary_2_t570FA683CE3D3E392E19EE3FBADA41A777E3BF80;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetEnableDebugOption>
struct Dictionary_2_t2F773831CEE17EB3E93474E9752B7E0B094A01E5;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetInnerAudioOption>
struct Dictionary_2_t692A6CB2DD5DCCD7D74EB7D6B26938C7A9630C08;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetKeepScreenOnOption>
struct Dictionary_2_tF6EEA056566811341A4F2EC80F51D8E6C549EA68;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetMenuStyleOption>
struct Dictionary_2_t8155794CA375750DB021958818A5A221734A9849;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetScreenBrightnessOption>
struct Dictionary_2_t9CADE8E5FA552AE6F1734B5F5D42FCE0F224A0A5;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetStatusBarStyleOption>
struct Dictionary_2_tCDF778EE76A8CB8542C3B033660AD8684262D33B;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetUserCloudStorageOption>
struct Dictionary_2_tED576A380F4C36B580461F63E0DE2B505997FEE5;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetVisualEffectOnCaptureOption>
struct Dictionary_2_t955EEB9B6D8B273C9FFF348E1B333B51B6797649;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowActionSheetOption>
struct Dictionary_2_t7E1D31836B43C62A0863FCF36A319324F4E4979D;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowKeyboardOption>
struct Dictionary_2_t898390712B9B5FBCBDF01E8FD4A4B2E2ECA4966D;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowLoadingOption>
struct Dictionary_2_t1DBC37060D933C648AA291CF70A8F94A494DB88C;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowModalOption>
struct Dictionary_2_tB793A2291592D45CFFE01721DA36A7E82338BC4B;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowShareImageMenuOption>
struct Dictionary_2_t30E0DB6308456E0EF469571CC6181D170D0B0E04;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowShareMenuOption>
struct Dictionary_2_tF7C9060811253228DB6CDEEF34C428AE6D66AFCC;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowToastOption>
struct Dictionary_2_t16AC42233A1E6E67BA06AA2EA0224145A79DBED1;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartAccelerometerOption>
struct Dictionary_2_t452AE1BDA7567BFDDF225696BB2C07EFBEC83B2F;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartBeaconDiscoveryOption>
struct Dictionary_2_t943BD7B830829657291C3A7E6A40E7FECFF47BE6;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartBluetoothDevicesDiscoveryOption>
struct Dictionary_2_t1CD2D7B0CB51F12C02BAA9F2019F8D67A1EBB9C7;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartCompassOption>
struct Dictionary_2_tC68330B775A8632B79CFC13C48616DC58E6AE4AB;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartDeviceMotionListeningOption>
struct Dictionary_2_tCB140936C350D1689803FD097D6D9376401C62F0;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartGameLiveOption>
struct Dictionary_2_t60E4E9DC16999AF39A4BD0897B4FC29FF3EBC38E;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartGyroscopeOption>
struct Dictionary_2_t5D3F4DA0502F704BC4F4E71AA5CD37718A42F338;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopAccelerometerOption>
struct Dictionary_2_tA28F55593072FFA5866469CB91337107D5822E6C;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopBeaconDiscoveryOption>
struct Dictionary_2_t28DF39FDB86500CCAAC8EB31C823257E71FEB048;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopBluetoothDevicesDiscoveryOption>
struct Dictionary_2_tD54DEB94377B4857DDB1231EE887BF33A6557E30;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopCompassOption>
struct Dictionary_2_t5F15E1E69F481F63996E591FC229851C742E41FB;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopDeviceMotionListeningOption>
struct Dictionary_2_t65CE9981A0A189C3D178B636AD5834BA9BB94E58;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopFaceDetectOption>
struct Dictionary_2_tC0F25EFB96FE21FE0F4AC2CCBF15C7A79F834893;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopGyroscopeOption>
struct Dictionary_2_tB14A3B697C163A756BC0D3FD3AF0D99F1C07DEE8;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.UpdateKeyboardOption>
struct Dictionary_2_t826C46ABEDB4433F0A8BC641368DBB45CE2DF538;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.UpdateShareMenuOption>
struct Dictionary_2_t7DEC1200326FF4C330FE596B7C98AFC7D92B5C5A;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.UpdateVoIPChatMuteConfigOption>
struct Dictionary_2_tD5323E7310EA0E576B59C1F3484C19BB6B915EC8;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.UpdateWeChatAppOption>
struct Dictionary_2_tB2FB78D77EA599D62E6B5386F707F27C1ED129A4;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.UploadFileOption>
struct Dictionary_2_t024B881A8CB41EC57F11C85C97B8B1D73474D452;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.VibrateLongOption>
struct Dictionary_2_t3ADACCE5EF90FE7B784197C82E86B0881BB972C3;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.VibrateShortOption>
struct Dictionary_2_tC88AFC101FDB2DD385519972618A8EBF6832C952;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXCamera>
struct Dictionary_2_t8C49A97E0C20BC11EEBA6963290C37A3AC466275;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXDownloadTask>
struct Dictionary_2_t451E2043706B2EC6BD30BED1E7E2B65CD93D01AE;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXFeedbackButton>
struct Dictionary_2_tAA95BB640E2132AF0511EC37AE9F05FAE6755905;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXLogManager>
struct Dictionary_2_tCFCE87059921185390209596349B48F1ACB6DA68;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXRealtimeLogManager>
struct Dictionary_2_t94FA30A26BA1AA487143773BBCAAC51AB2C93921;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXTCPSocket>
struct Dictionary_2_tDC605648B15123CAACE0201BA0539B3961DFF5DB;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUDPSocket>
struct Dictionary_2_t5D3A9E341678FE2C8B518DDBD6060BF61E146169;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUpdateManager>
struct Dictionary_2_tD5E9994609C5FCDE0DEB4E0B0D65D103566C295F;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXVideoDecoder>
struct Dictionary_2_tD885DF62FBFD87A09BB82D3C89D455C5A95FD538;
// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WriteBLECharacteristicValueOption>
struct Dictionary_2_tA1C35F0EC094FA10F7D0313C6818745A5E82F79B;
// System.Collections.Generic.Dictionary`2<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t0E53A4C96A42ED436853608F2A41D26180F25053;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Runtime.Serialization.DataContract>
struct Dictionary_2_t62A25C510A5A184F1F7C159A99F310F0F68A0719;
// System.Collections.Generic.ICollection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Type>
struct IList_1_t421C938039F8E10BD0A70BD6EBF5552B97B1D3F1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct KeyCollection_tC2BAC80ECB9687E9FD3D1448A133C033AFA721AA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct KeyCollection_t404DBD619DDFFEB7189DE722452ED38D0B97B925;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct ValueCollection_tA1C4407A9696BB0668DBECAE49D63DF17E1AEE14;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueCollection_t1E6646924FB29761CB665003BAACABAA4486908B;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Runtime.Serialization.DataContract>[]
struct Dictionary_2U5BU5D_t4920F6F7E0C16F60B050F71EF65B10E57B3690DF;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>[]
struct EntryU5BU5D_tDBDC31D780D31EB0033DC6E87A94094D3906FC5C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct EntryU5BU5D_tB21348395CEA13AD41732FA6EE2DDF664B06BFB7;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.Runtime.Serialization.Attributes
struct Attributes_t828345299D7AC4A0224FC65BCEF5149DA942D601;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Runtime.Serialization.DataContract
struct DataContract_tC6689A52E5BA843D360C067B3B64BA067391160A;
// System.Runtime.Serialization.DataContractResolver
struct DataContractResolver_t3A2F1C554EC1647FF28FEE050F93C5A5C4A55EDA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Runtime.Serialization.HybridObjectCache
struct HybridObjectCache_t79E5292A308FEB643CA6F18D99D004FD4E7D8EFF;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t5B384C1DCF0750B44E124D640E4F041DB19B7FD1;
// System.Runtime.Serialization.KnownTypeDataContractResolver
struct KnownTypeDataContractResolver_t1E52B90380C53063CF2E3ACAA895A7F382C540BE;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.ObjectToIdCache
struct ObjectToIdCache_t21A6A08039060951159C8A69F298EE6E727366DE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WeChatWASM.WXCloud
struct WXCloud_tED0DD8AB6532857A19F1FE12F8261F9F560856A7;
// WeChatWASM.WXEnv
struct WXEnv_t2186373664201540170A71F40D6CC9ED9728148E;
// WeChatWASM.WXJSCallback
struct WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB;
// WeChatWASM.WXSDKManagerHandler
struct WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725;
// System.Xml.XmlDictionaryWriter
struct XmlDictionaryWriter_t2676054921F3D7295D914AE03981E9A784A6F612;
// System.Xml.XmlDocument
struct XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA;
// System.Runtime.Serialization.XmlObjectSerializer
struct XmlObjectSerializer_t745A7714E2CB281BB6E4687FFB5E8C0E5783B03F;
// System.Runtime.Serialization.XmlObjectSerializerWriteContext
struct XmlObjectSerializerWriteContext_t9E9ED500D54CAB208A5F262DFC3F1F06DC82CBCE;
// System.Runtime.Serialization.XmlReaderDelegator
struct XmlReaderDelegator_t6C8D2E3907274EAEF3152508CE34E89971901E3E;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF;
// System.Runtime.Serialization.XmlSerializableReader
struct XmlSerializableReader_tAEE8581702AD9C9D682124389F009E108EE2E9A6;
// System.Runtime.Serialization.XmlSerializableWriter
struct XmlSerializableWriter_t479C09BE0198CE2DB488448924DDE6D236614A54;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E;
// System.Xml.XmlWriter
struct XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F;
// System.Runtime.Serialization.XmlWriterDelegator
struct XmlWriterDelegator_t1E3DF42F5826EBD3E685CC88E36A2743D71CDF44;
// WeChatWASM.WXSDKManagerHandler/WXProfileStatsScript
struct WXProfileStatsScript_t79CA7E82DE69D38A1E3003191F89C1E126142A06;

IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4;
IL2CPP_EXTERN_C String_t* _stringLiteral94ADECE30C954CD6685EE98984452C698987E415;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806;
IL2CPP_EXTERN_C String_t* _stringLiteralF93483397766B6C1CE4DC98D4C3FF6B38A586C27;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ToObject_TisWXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB_mECB85356AA4B52F09CA13FECCCD1584AE4378FAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlObjectSerializerReadContext_EnsureArraySize_TisIl2CppFullySharedGenericAny_m81478300957FA373BE16404D546A067CE8F6B32D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Dictionary_2_tA2A39478BB40B99FA2F1A7B0B87BE75CB5337E53  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDBDC31D780D31EB0033DC6E87A94094D3906FC5C* ____entries_1;
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
	KeyCollection_tC2BAC80ECB9687E9FD3D1448A133C033AFA721AA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA1C4407A9696BB0668DBECAE49D63DF17E1AEE14* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t0E53A4C96A42ED436853608F2A41D26180F25053  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tB21348395CEA13AD41732FA6EE2DDF664B06BFB7* ____entries_1;
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
	KeyCollection_t404DBD619DDFFEB7189DE722452ED38D0B97B925* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t1E6646924FB29761CB665003BAACABAA4486908B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// WeChatWASM.WXJSCallback
struct WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB  : public RuntimeObject
{
	// System.String WeChatWASM.WXJSCallback::callbackId
	String_t* ___callbackId_0;
	// System.String WeChatWASM.WXJSCallback::type
	String_t* ___type_1;
	// System.String WeChatWASM.WXJSCallback::res
	String_t* ___res_2;
};

// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E  : public RuntimeObject
{
};

// System.Runtime.Serialization.XmlWriterDelegator
struct XmlWriterDelegator_t1E3DF42F5826EBD3E685CC88E36A2743D71CDF44  : public RuntimeObject
{
	// System.Xml.XmlWriter System.Runtime.Serialization.XmlWriterDelegator::writer
	XmlWriter_tCBC8D0C4891828A0A384C68D0414337F20E1A17F* ___writer_0;
	// System.Xml.XmlDictionaryWriter System.Runtime.Serialization.XmlWriterDelegator::dictionaryWriter
	XmlDictionaryWriter_t2676054921F3D7295D914AE03981E9A784A6F612* ___dictionaryWriter_1;
	// System.Int32 System.Runtime.Serialization.XmlWriterDelegator::depth
	int32_t ___depth_2;
	// System.Int32 System.Runtime.Serialization.XmlWriterDelegator::prefixes
	int32_t ___prefixes_3;
};

// A.a
struct a_tC5387008B1D5D714A204B4428329D16ACCB73FF3  : public RuntimeObject
{
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Runtime.Serialization.ObjectReferenceStack
struct ObjectReferenceStack_tBE903BA2B2F8384BB23EC36E3B8038140C493AAB 
{
	// System.Int32 System.Runtime.Serialization.ObjectReferenceStack::count
	int32_t ___count_0;
	// System.Object[] System.Runtime.Serialization.ObjectReferenceStack::objectArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objectArray_1;
	// System.Boolean[] System.Runtime.Serialization.ObjectReferenceStack::isReferenceArray
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isReferenceArray_2;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> System.Runtime.Serialization.ObjectReferenceStack::objectDictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___objectDictionary_3;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.ObjectReferenceStack
struct ObjectReferenceStack_tBE903BA2B2F8384BB23EC36E3B8038140C493AAB_marshaled_pinvoke
{
	int32_t ___count_0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objectArray_1;
	int32_t* ___isReferenceArray_2;
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___objectDictionary_3;
};
// Native definition for COM marshalling of System.Runtime.Serialization.ObjectReferenceStack
struct ObjectReferenceStack_tBE903BA2B2F8384BB23EC36E3B8038140C493AAB_marshaled_com
{
	int32_t ___count_0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___objectArray_1;
	int32_t* ___isReferenceArray_2;
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___objectDictionary_3;
};

// System.Runtime.Serialization.ScopedKnownTypes
struct ScopedKnownTypes_tB1654A10E57238F62D129B28CE4F22124BCC1878 
{
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Runtime.Serialization.DataContract>[] System.Runtime.Serialization.ScopedKnownTypes::dataContractDictionaries
	Dictionary_2U5BU5D_t4920F6F7E0C16F60B050F71EF65B10E57B3690DF* ___dataContractDictionaries_0;
	// System.Int32 System.Runtime.Serialization.ScopedKnownTypes::count
	int32_t ___count_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.ScopedKnownTypes
struct ScopedKnownTypes_tB1654A10E57238F62D129B28CE4F22124BCC1878_marshaled_pinvoke
{
	Dictionary_2_t62A25C510A5A184F1F7C159A99F310F0F68A0719** ___dataContractDictionaries_0;
	int32_t ___count_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.ScopedKnownTypes
struct ScopedKnownTypes_tB1654A10E57238F62D129B28CE4F22124BCC1878_marshaled_com
{
	Dictionary_2_t62A25C510A5A184F1F7C159A99F310F0F68A0719** ___dataContractDictionaries_0;
	int32_t ___count_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;
};

// System.Xml.Schema.XmlTypeCode
struct XmlTypeCode_tCA027FC382F4E2DBDF63CB305D942DDFC072E064 
{
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D  : public XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E
{
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t* ___clrTypeDefault_2;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA  : public XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D
{
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___atomicConverter_32;
};

// System.Runtime.Serialization.XmlObjectSerializerContext
struct XmlObjectSerializerContext_t68ACDD79449CF003A6ADB8829ADDF57EA039890D  : public RuntimeObject
{
	// System.Runtime.Serialization.XmlObjectSerializer System.Runtime.Serialization.XmlObjectSerializerContext::serializer
	XmlObjectSerializer_t745A7714E2CB281BB6E4687FFB5E8C0E5783B03F* ___serializer_0;
	// System.Runtime.Serialization.DataContract System.Runtime.Serialization.XmlObjectSerializerContext::rootTypeDataContract
	DataContract_tC6689A52E5BA843D360C067B3B64BA067391160A* ___rootTypeDataContract_1;
	// System.Runtime.Serialization.ScopedKnownTypes System.Runtime.Serialization.XmlObjectSerializerContext::scopedKnownTypes
	ScopedKnownTypes_tB1654A10E57238F62D129B28CE4F22124BCC1878 ___scopedKnownTypes_2;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Runtime.Serialization.DataContract> System.Runtime.Serialization.XmlObjectSerializerContext::serializerKnownDataContracts
	Dictionary_2_t62A25C510A5A184F1F7C159A99F310F0F68A0719* ___serializerKnownDataContracts_3;
	// System.Boolean System.Runtime.Serialization.XmlObjectSerializerContext::isSerializerKnownDataContractsSetExplicit
	bool ___isSerializerKnownDataContractsSetExplicit_4;
	// System.Collections.Generic.IList`1<System.Type> System.Runtime.Serialization.XmlObjectSerializerContext::serializerKnownTypeList
	RuntimeObject* ___serializerKnownTypeList_5;
	// System.Int32 System.Runtime.Serialization.XmlObjectSerializerContext::itemCount
	int32_t ___itemCount_6;
	// System.Int32 System.Runtime.Serialization.XmlObjectSerializerContext::maxItemsInObjectGraph
	int32_t ___maxItemsInObjectGraph_7;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.XmlObjectSerializerContext::streamingContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___streamingContext_8;
	// System.Boolean System.Runtime.Serialization.XmlObjectSerializerContext::ignoreExtensionDataObject
	bool ___ignoreExtensionDataObject_9;
	// System.Runtime.Serialization.DataContractResolver System.Runtime.Serialization.XmlObjectSerializerContext::dataContractResolver
	DataContractResolver_t3A2F1C554EC1647FF28FEE050F93C5A5C4A55EDA* ___dataContractResolver_10;
	// System.Runtime.Serialization.KnownTypeDataContractResolver System.Runtime.Serialization.XmlObjectSerializerContext::knownTypeResolver
	KnownTypeDataContractResolver_t1E52B90380C53063CF2E3ACAA895A7F382C540BE* ___knownTypeResolver_11;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// System.Runtime.Serialization.XmlObjectSerializerReadContext
struct XmlObjectSerializerReadContext_tA10E43DFFA0889AD640ECB84E93F0C6C1BAE95E7  : public XmlObjectSerializerContext_t68ACDD79449CF003A6ADB8829ADDF57EA039890D
{
	// System.Runtime.Serialization.Attributes System.Runtime.Serialization.XmlObjectSerializerReadContext::attributes
	Attributes_t828345299D7AC4A0224FC65BCEF5149DA942D601* ___attributes_13;
	// System.Runtime.Serialization.HybridObjectCache System.Runtime.Serialization.XmlObjectSerializerReadContext::deserializedObjects
	HybridObjectCache_t79E5292A308FEB643CA6F18D99D004FD4E7D8EFF* ___deserializedObjects_14;
	// System.Runtime.Serialization.XmlSerializableReader System.Runtime.Serialization.XmlObjectSerializerReadContext::xmlSerializableReader
	XmlSerializableReader_tAEE8581702AD9C9D682124389F009E108EE2E9A6* ___xmlSerializableReader_15;
	// System.Xml.XmlDocument System.Runtime.Serialization.XmlObjectSerializerReadContext::xmlDocument
	XmlDocument_t4DE82998E642C5C21A4A620A5278237C70D3E42B* ___xmlDocument_16;
	// System.Runtime.Serialization.Attributes System.Runtime.Serialization.XmlObjectSerializerReadContext::attributesInXmlData
	Attributes_t828345299D7AC4A0224FC65BCEF5149DA942D601* ___attributesInXmlData_17;
	// System.Runtime.Serialization.XmlReaderDelegator System.Runtime.Serialization.XmlObjectSerializerReadContext::extensionDataReader
	XmlReaderDelegator_t6C8D2E3907274EAEF3152508CE34E89971901E3E* ___extensionDataReader_18;
	// System.Object System.Runtime.Serialization.XmlObjectSerializerReadContext::getOnlyCollectionValue
	RuntimeObject* ___getOnlyCollectionValue_19;
	// System.Boolean System.Runtime.Serialization.XmlObjectSerializerReadContext::isGetOnlyCollection
	bool ___isGetOnlyCollection_20;
};

// System.Runtime.Serialization.XmlObjectSerializerWriteContext
struct XmlObjectSerializerWriteContext_t9E9ED500D54CAB208A5F262DFC3F1F06DC82CBCE  : public XmlObjectSerializerContext_t68ACDD79449CF003A6ADB8829ADDF57EA039890D
{
	// System.Runtime.Serialization.ObjectReferenceStack System.Runtime.Serialization.XmlObjectSerializerWriteContext::byValObjectsInScope
	ObjectReferenceStack_tBE903BA2B2F8384BB23EC36E3B8038140C493AAB ___byValObjectsInScope_13;
	// System.Runtime.Serialization.XmlSerializableWriter System.Runtime.Serialization.XmlObjectSerializerWriteContext::xmlSerializableWriter
	XmlSerializableWriter_t479C09BE0198CE2DB488448924DDE6D236614A54* ___xmlSerializableWriter_14;
	// System.Boolean System.Runtime.Serialization.XmlObjectSerializerWriteContext::preserveObjectReferences
	bool ___preserveObjectReferences_15;
	// System.Runtime.Serialization.ObjectToIdCache System.Runtime.Serialization.XmlObjectSerializerWriteContext::serializedObjects
	ObjectToIdCache_t21A6A08039060951159C8A69F298EE6E727366DE* ___serializedObjects_16;
	// System.Boolean System.Runtime.Serialization.XmlObjectSerializerWriteContext::isGetOnlyCollection
	bool ___isGetOnlyCollection_17;
	// System.Boolean System.Runtime.Serialization.XmlObjectSerializerWriteContext::unsafeTypeForwardingEnabled
	bool ___unsafeTypeForwardingEnabled_18;
	// System.Boolean System.Runtime.Serialization.XmlObjectSerializerWriteContext::serializeReadOnlyTypes
	bool ___serializeReadOnlyTypes_19;
};

// WeChatWASM.WXSDKManagerHandler
struct WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.AddCardOption> WeChatWASM.WXSDKManagerHandler::et
	Dictionary_2_tB1D322E5C128672C8A4A40AC5CCB32F60F63DC11* ___et_4;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.AuthPrivateMessageOption> WeChatWASM.WXSDKManagerHandler::eU
	Dictionary_2_t816DF80AB9D180EE88D5AABE26394FDCC59F7D44* ___eU_5;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.AuthorizeOption> WeChatWASM.WXSDKManagerHandler::eu
	Dictionary_2_t9AD6761229EE9268AD86DE2CAB22CDAB26E67EF1* ___eu_6;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CheckIsAddedToMyMiniProgramOption> WeChatWASM.WXSDKManagerHandler::eV
	Dictionary_2_t1B9A2E2C504559E03C714C7BFFDD0E2C27077C93* ___eV_7;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CheckSessionOption> WeChatWASM.WXSDKManagerHandler::ev
	Dictionary_2_t94A816B1C93C976260639030EDD56CD133BD5EE4* ___ev_8;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ChooseImageOption> WeChatWASM.WXSDKManagerHandler::eW
	Dictionary_2_tA3D45F651E29C911146A54DC58C7B841343C4FD1* ___eW_9;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ChooseMediaOption> WeChatWASM.WXSDKManagerHandler::ew
	Dictionary_2_t7B52F02232A444DC80BF89399EA6469D78EF781C* ___ew_10;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ChooseMessageFileOption> WeChatWASM.WXSDKManagerHandler::eX
	Dictionary_2_tDDC1C3B8DD146A3C07D82BC9FB3D6B338402CAFE* ___eX_11;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CloseBLEConnectionOption> WeChatWASM.WXSDKManagerHandler::ex
	Dictionary_2_t451EA2C004F6DF90629B3CAE7844F2DC0D7AB398* ___ex_12;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CloseBluetoothAdapterOption> WeChatWASM.WXSDKManagerHandler::eY
	Dictionary_2_t277E4BA9A1A41E0AA9756E488AD58F4FBEF2A25A* ___eY_13;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CompressImageOption> WeChatWASM.WXSDKManagerHandler::ey
	Dictionary_2_t212817617F1427A8F88ED440C7FF019B3FF190CB* ___ey_14;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CreateBLEConnectionOption> WeChatWASM.WXSDKManagerHandler::eZ
	Dictionary_2_t2EFD902CAA5E36E4A18FD63F241B901B0EC5AEBC* ___eZ_15;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CreateBLEPeripheralServerOption> WeChatWASM.WXSDKManagerHandler::ez
	Dictionary_2_t385E5DDA7378A571815CFC2E1E9E349E9411DFD7* ___ez_16;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ExitMiniProgramOption> WeChatWASM.WXSDKManagerHandler::FA
	Dictionary_2_t79085A93A0EA76697F24095CECB03B7929561A9D* ___FA_17;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ExitVoIPChatOption> WeChatWASM.WXSDKManagerHandler::Fa
	Dictionary_2_t7FD76D42D6E74504A146DABB0FEED3B62905A0F4* ___Fa_18;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.FaceDetectOption> WeChatWASM.WXSDKManagerHandler::FB
	Dictionary_2_t117F0E75985D195EF9C6A2654E5CE83335C0E475* ___FB_19;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetAvailableAudioSourcesOption> WeChatWASM.WXSDKManagerHandler::Fb
	Dictionary_2_t82C3834EA47C310036F09C3E8762A63E08F35E74* ___Fb_20;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBLEDeviceCharacteristicsOption> WeChatWASM.WXSDKManagerHandler::FC
	Dictionary_2_t0B8D91112F72D88F046766BEA98277001A02DF72* ___FC_21;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBLEDeviceRSSIOption> WeChatWASM.WXSDKManagerHandler::Fc
	Dictionary_2_tD32DBC5B823A7938233F762BA9A39E4840C05C41* ___Fc_22;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBLEDeviceServicesOption> WeChatWASM.WXSDKManagerHandler::FD
	Dictionary_2_t7331F4C866B9D01A15D433C62BF2FC1F9DD795F6* ___FD_23;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBLEMTUOption> WeChatWASM.WXSDKManagerHandler::Fd
	Dictionary_2_t9E3EABDB0FF40F995D25C8CA891853AE7A0E0F1C* ___Fd_24;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBackgroundFetchDataOption> WeChatWASM.WXSDKManagerHandler::FE
	Dictionary_2_t8ED09DC9BDB9AAFF9E8F18393045959B1C983D63* ___FE_25;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBackgroundFetchTokenOption> WeChatWASM.WXSDKManagerHandler::Fe
	Dictionary_2_t052633ADADAA06AC599053EE44E5BFB367A2DF38* ___Fe_26;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBatteryInfoOption> WeChatWASM.WXSDKManagerHandler::FF
	Dictionary_2_t0665FAD930A71055F0248F150605B1554310B0AE* ___FF_27;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBeaconsOption> WeChatWASM.WXSDKManagerHandler::Ff
	Dictionary_2_tEF3F318DA93270EBFBF9ABECD6CD6641080EE2C6* ___Ff_28;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBluetoothAdapterStateOption> WeChatWASM.WXSDKManagerHandler::FG
	Dictionary_2_t59CE27F7C0089A2B302520303FF2B69E75627D6E* ___FG_29;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetBluetoothDevicesOption> WeChatWASM.WXSDKManagerHandler::Fg
	Dictionary_2_t9794F4E4351C78BEB903CB06B449A14587DC99EB* ___Fg_30;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetChannelsLiveInfoOption> WeChatWASM.WXSDKManagerHandler::FH
	Dictionary_2_t51F4F728EFE872666BFF8583FE7A4EDAA2241F48* ___FH_31;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetChannelsLiveNoticeInfoOption> WeChatWASM.WXSDKManagerHandler::Fh
	Dictionary_2_t19FF502E01BDA5186EE20A2FB44AC3DE530B0145* ___Fh_32;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetClipboardDataOption> WeChatWASM.WXSDKManagerHandler::FI
	Dictionary_2_tD4C9ACF9131B7E1B3343E756AAB339B7D1500215* ___FI_33;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetConnectedBluetoothDevicesOption> WeChatWASM.WXSDKManagerHandler::Fi
	Dictionary_2_tB72EDE9412B141AC6379E975D6BF4503BC740E3D* ___Fi_34;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetDeviceBenchmarkInfoOption> WeChatWASM.WXSDKManagerHandler::FJ
	Dictionary_2_t18477AE17719E4B307333C6188022003B7289C01* ___FJ_35;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetExtConfigOption> WeChatWASM.WXSDKManagerHandler::Fj
	Dictionary_2_t3591EAE2BEA31FD94DBC9493217F783853FBE69C* ___Fj_36;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetFuzzyLocationOption> WeChatWASM.WXSDKManagerHandler::FK
	Dictionary_2_t6D3BA8834417E363C61F3504963BBB146D8EB2BF* ___FK_37;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetGameClubDataOption> WeChatWASM.WXSDKManagerHandler::Fk
	Dictionary_2_t3DFAB5F1697FC34151FF170B99927BBFA8B23F9A* ___Fk_38;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetGroupEnterInfoOption> WeChatWASM.WXSDKManagerHandler::FL
	Dictionary_2_tCB0EBB12EF546A27D0860E10C6668D572AD742B5* ___FL_39;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetInferenceEnvInfoOption> WeChatWASM.WXSDKManagerHandler::Fl
	Dictionary_2_t979AA3F223788773AB4B8C1B89E614D5EF9EF7E6* ___Fl_40;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetLocalIPAddressOption> WeChatWASM.WXSDKManagerHandler::FM
	Dictionary_2_t26F8317CF94CDCFE7E550C8462F5EAD3082185CD* ___FM_41;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetNetworkTypeOption> WeChatWASM.WXSDKManagerHandler::Fm
	Dictionary_2_tE39DBEF02F5B15168866B5978C3AB12346EF6D25* ___Fm_42;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetPhoneNumberOption> WeChatWASM.WXSDKManagerHandler::FN
	Dictionary_2_t6A0A603DAF558083F91049EFB4A10CA64A026381* ___FN_43;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetPrivacySettingOption> WeChatWASM.WXSDKManagerHandler::Fn
	Dictionary_2_tEDEBD733D3313F64D74DC6BB73875B55B3D81E46* ___Fn_44;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetScreenBrightnessOption> WeChatWASM.WXSDKManagerHandler::FO
	Dictionary_2_tACF4C6EF0A903E282E1CB52CBC3987C293D26FFE* ___FO_45;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetScreenRecordingStateOption> WeChatWASM.WXSDKManagerHandler::Fo
	Dictionary_2_tDE4A8090A00D6FF842BE2914DFBD175009F0F0D6* ___Fo_46;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetSettingOption> WeChatWASM.WXSDKManagerHandler::FP
	Dictionary_2_t5414C2395C1DB7904947B9F849AD59CE6E80D15F* ___FP_47;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetShareInfoOption> WeChatWASM.WXSDKManagerHandler::Fp
	Dictionary_2_t977368BD40250A3862423E76E5B60F402045E7FE* ___Fp_48;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetShowSplashAdStatusOption> WeChatWASM.WXSDKManagerHandler::FQ
	Dictionary_2_t48C82FF4672D017AE1073289FFA55272D13538AC* ___FQ_49;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetStorageInfoOption> WeChatWASM.WXSDKManagerHandler::Fq
	Dictionary_2_t7FE344370FF6D51ACED60B0893E12392CF369A3B* ___Fq_50;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetSystemInfoOption> WeChatWASM.WXSDKManagerHandler::FR
	Dictionary_2_tD1D8C0B868D578950AB31E1D1F1EF02FBA01C6D4* ___FR_51;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetSystemInfoAsyncOption> WeChatWASM.WXSDKManagerHandler::Fr
	Dictionary_2_t600D31F35A824D1C7AA048E3A63B5A4C094C28F5* ___Fr_52;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetUserInfoOption> WeChatWASM.WXSDKManagerHandler::FS
	Dictionary_2_t817F4F0416EAC0D5CDB3E5556D83FDF8E25627B5* ___FS_53;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetUserInteractiveStorageOption> WeChatWASM.WXSDKManagerHandler::Fs
	Dictionary_2_t5EDB14661F605D3A5C684BC860AC989FBFFFCFF1* ___Fs_54;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetWeRunDataOption> WeChatWASM.WXSDKManagerHandler::FT
	Dictionary_2_tC697C5573897F7BC023F9DD273A3EAC4B31634C9* ___FT_55;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.HideKeyboardOption> WeChatWASM.WXSDKManagerHandler::Ft
	Dictionary_2_t7E49E3262A54E8169968FD59DF23E064ACA1D0B5* ___Ft_56;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.HideLoadingOption> WeChatWASM.WXSDKManagerHandler::FU
	Dictionary_2_t69FD29D068334A3EBB4997EFF118C2276BC6D9D9* ___FU_57;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.HideShareMenuOption> WeChatWASM.WXSDKManagerHandler::Fu
	Dictionary_2_t866CF1E0FCF91BE9D8FB38B0EFA90DD8F60FFA6E* ___Fu_58;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.HideToastOption> WeChatWASM.WXSDKManagerHandler::FV
	Dictionary_2_tCD2C6DB0DD6E3F5B569AEBF66BB95FAD3A75C40A* ___FV_59;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.InitFaceDetectOption> WeChatWASM.WXSDKManagerHandler::Fv
	Dictionary_2_t8BBEFD3CA014D094D1C70A58202071CCFE8DA62E* ___Fv_60;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.IsBluetoothDevicePairedOption> WeChatWASM.WXSDKManagerHandler::FW
	Dictionary_2_t30855973154A04D7094C8B458EAC47D8F225D4CD* ___FW_61;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.JoinVoIPChatOption> WeChatWASM.WXSDKManagerHandler::Fw
	Dictionary_2_t4101F7B294625F0FCC857E5B03A394D894B4F6AB* ___Fw_62;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.LoginOption> WeChatWASM.WXSDKManagerHandler::FX
	Dictionary_2_t1BA58B5EBCC7112336846F4871EC4C3D4B9351D5* ___FX_63;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.MakeBluetoothPairOption> WeChatWASM.WXSDKManagerHandler::Fx
	Dictionary_2_t594433F41C800C40AA65220D33DF64F66AAFA15C* ___Fx_64;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.NavigateBackMiniProgramOption> WeChatWASM.WXSDKManagerHandler::FY
	Dictionary_2_tD869B026D73F084BE72CEE24F27B5B989056B850* ___FY_65;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.NavigateToMiniProgramOption> WeChatWASM.WXSDKManagerHandler::Fy
	Dictionary_2_tBAD33D6D888B86BF3F6D83230058D11885EAA500* ___Fy_66;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.NotifyBLECharacteristicValueChangeOption> WeChatWASM.WXSDKManagerHandler::FZ
	Dictionary_2_t1216F38DF44A6B747AB5B42DC592CD5046889306* ___FZ_67;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenAppAuthorizeSettingOption> WeChatWASM.WXSDKManagerHandler::Fz
	Dictionary_2_t98AD19FB7C3A8BA8BA4B720D963E05BBFBFE44C0* ___Fz_68;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenBluetoothAdapterOption> WeChatWASM.WXSDKManagerHandler::fA
	Dictionary_2_tFAD69A296DEA8E837BAD4977DD257970C00D8043* ___fA_69;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenCardOption> WeChatWASM.WXSDKManagerHandler::fa
	Dictionary_2_t37C2F4D797E70115FED145435D738D7161BB92C5* ___fa_70;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenChannelsActivityOption> WeChatWASM.WXSDKManagerHandler::fB
	Dictionary_2_tD4C572DFFF0F2C9A11EE28B6926DF732B4471BAF* ___fB_71;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenChannelsEventOption> WeChatWASM.WXSDKManagerHandler::fb
	Dictionary_2_t241A7DE400A381C1923FBB72F777AA84ADDCF1CA* ___fb_72;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenChannelsLiveOption> WeChatWASM.WXSDKManagerHandler::fC
	Dictionary_2_tD0D25626BB047DB241ADA4F036CAB1A8785CD5AC* ___fC_73;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenChannelsUserProfileOption> WeChatWASM.WXSDKManagerHandler::fc
	Dictionary_2_tD1E59B59ABD7BB1AFEC93BC54E3EA0D735D3EC5B* ___fc_74;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenCustomerServiceChatOption> WeChatWASM.WXSDKManagerHandler::fD
	Dictionary_2_t46D25C6595B53F820635F935F3E49396817E86E7* ___fD_75;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenCustomerServiceConversationOption> WeChatWASM.WXSDKManagerHandler::fd
	Dictionary_2_tA840B73B99D4AB62ED476189C2C986897A158F7A* ___fd_76;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenPrivacyContractOption> WeChatWASM.WXSDKManagerHandler::fE
	Dictionary_2_tED708E805A5F0688F5E95A3D33933F0B3E545557* ___fE_77;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenSettingOption> WeChatWASM.WXSDKManagerHandler::fe
	Dictionary_2_tAC13C24C72E3F2C1DC05B6F4830992E69952C64B* ___fe_78;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenSystemBluetoothSettingOption> WeChatWASM.WXSDKManagerHandler::fF
	Dictionary_2_tF6C891DD1DE498CBFD605D44F16D02A3A8CC4B3D* ___fF_79;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OperateGameRecorderVideoOption> WeChatWASM.WXSDKManagerHandler::ff
	Dictionary_2_t8390765ADB372C529D595688CF6C3B4FB48AA8E5* ___ff_80;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.PreviewImageOption> WeChatWASM.WXSDKManagerHandler::fG
	Dictionary_2_t4DDE36791C7C126356D38CBB6B4A04B9D247A74E* ___fG_81;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.PreviewMediaOption> WeChatWASM.WXSDKManagerHandler::fg
	Dictionary_2_tDB767939EEE6BAFBCDC132ECE6542FDA04DA04A1* ___fg_82;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ReadBLECharacteristicValueOption> WeChatWASM.WXSDKManagerHandler::fH
	Dictionary_2_t7CA4783A06626CF5FD37097346FEE5E41C2E5903* ___fH_83;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RemoveStorageOption> WeChatWASM.WXSDKManagerHandler::fh
	Dictionary_2_t50C9E8D25C067C86037FAF1A3E54E1C84DB8C13B* ___fh_84;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RemoveUserCloudStorageOption> WeChatWASM.WXSDKManagerHandler::fI
	Dictionary_2_tBC35F4E3341A22652F64BB3B55DEA6EBA7F07F8B* ___fI_85;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ReportSceneOption> WeChatWASM.WXSDKManagerHandler::fi
	Dictionary_2_t2F3E4830B6A9E611161D8CB4D6F49426E0AFAEAE* ___fi_86;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestMidasFriendPaymentOption> WeChatWASM.WXSDKManagerHandler::fJ
	Dictionary_2_tCF3BFEDD22C56292C7AF8CD3AA4ADE0A930CEADE* ___fJ_87;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestMidasPaymentOption> WeChatWASM.WXSDKManagerHandler::fj
	Dictionary_2_tE1C00450DE33A8BFE227BEB75BF4BAAFCCAB386A* ___fj_88;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestMidasPaymentGameItemOption> WeChatWASM.WXSDKManagerHandler::fK
	Dictionary_2_t3F35B697ACAA5B9E75AEA4BFE6B628E4C97F66B6* ___fK_89;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestSubscribeMessageOption> WeChatWASM.WXSDKManagerHandler::fk
	Dictionary_2_tE39E79438387EEE1C0B0BD0E178986E923662F4E* ___fk_90;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestSubscribeSystemMessageOption> WeChatWASM.WXSDKManagerHandler::fL
	Dictionary_2_tC6CB9121B23BCD9D176FD5B8AED2EBB7E3C9A1FE* ___fL_91;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequirePrivacyAuthorizeOption> WeChatWASM.WXSDKManagerHandler::fl
	Dictionary_2_t870A1238477219BD275B3451B72A1FEB40280973* ___fl_92;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RestartMiniProgramOption> WeChatWASM.WXSDKManagerHandler::fM
	Dictionary_2_tFBBC22643CD44BE2F7371CF81CEE971F2A9782FC* ___fM_93;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SaveFileToDiskOption> WeChatWASM.WXSDKManagerHandler::fm
	Dictionary_2_t8DA8EE98B547C7C5A9DC1282850F6FBC01095399* ___fm_94;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SaveImageToPhotosAlbumOption> WeChatWASM.WXSDKManagerHandler::fN
	Dictionary_2_t314E347C6827AC1F395502EC1B5130CA6F9C5984* ___fN_95;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ScanCodeOption> WeChatWASM.WXSDKManagerHandler::fn
	Dictionary_2_tB45ADB802F02AE936776F2E1D9181B3188E7ED98* ___fn_96;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetBLEMTUOption> WeChatWASM.WXSDKManagerHandler::fO
	Dictionary_2_t4267673D2387CC199DD65F1A312BEAAFB04B3350* ___fO_97;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetBackgroundFetchTokenOption> WeChatWASM.WXSDKManagerHandler::fo
	Dictionary_2_tDD802A598969CE7683316059D7AC0DBA6C4C5C2A* ___fo_98;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetClipboardDataOption> WeChatWASM.WXSDKManagerHandler::fP
	Dictionary_2_t1BC4866B209C49A7FD72097159DBDDC0805A7858* ___fP_99;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetDeviceOrientationOption> WeChatWASM.WXSDKManagerHandler::fp
	Dictionary_2_t570FA683CE3D3E392E19EE3FBADA41A777E3BF80* ___fp_100;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetEnableDebugOption> WeChatWASM.WXSDKManagerHandler::fQ
	Dictionary_2_t2F773831CEE17EB3E93474E9752B7E0B094A01E5* ___fQ_101;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetInnerAudioOption> WeChatWASM.WXSDKManagerHandler::fq
	Dictionary_2_t692A6CB2DD5DCCD7D74EB7D6B26938C7A9630C08* ___fq_102;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetKeepScreenOnOption> WeChatWASM.WXSDKManagerHandler::fR
	Dictionary_2_tF6EEA056566811341A4F2EC80F51D8E6C549EA68* ___fR_103;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetMenuStyleOption> WeChatWASM.WXSDKManagerHandler::fr
	Dictionary_2_t8155794CA375750DB021958818A5A221734A9849* ___fr_104;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetScreenBrightnessOption> WeChatWASM.WXSDKManagerHandler::fS
	Dictionary_2_t9CADE8E5FA552AE6F1734B5F5D42FCE0F224A0A5* ___fS_105;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetStatusBarStyleOption> WeChatWASM.WXSDKManagerHandler::fs
	Dictionary_2_tCDF778EE76A8CB8542C3B033660AD8684262D33B* ___fs_106;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetUserCloudStorageOption> WeChatWASM.WXSDKManagerHandler::fT
	Dictionary_2_tED576A380F4C36B580461F63E0DE2B505997FEE5* ___fT_107;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.SetVisualEffectOnCaptureOption> WeChatWASM.WXSDKManagerHandler::ft
	Dictionary_2_t955EEB9B6D8B273C9FFF348E1B333B51B6797649* ___ft_108;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowActionSheetOption> WeChatWASM.WXSDKManagerHandler::fU
	Dictionary_2_t7E1D31836B43C62A0863FCF36A319324F4E4979D* ___fU_109;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowKeyboardOption> WeChatWASM.WXSDKManagerHandler::fu
	Dictionary_2_t898390712B9B5FBCBDF01E8FD4A4B2E2ECA4966D* ___fu_110;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowLoadingOption> WeChatWASM.WXSDKManagerHandler::fV
	Dictionary_2_t1DBC37060D933C648AA291CF70A8F94A494DB88C* ___fV_111;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowModalOption> WeChatWASM.WXSDKManagerHandler::fv
	Dictionary_2_tB793A2291592D45CFFE01721DA36A7E82338BC4B* ___fv_112;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowShareImageMenuOption> WeChatWASM.WXSDKManagerHandler::fW
	Dictionary_2_t30E0DB6308456E0EF469571CC6181D170D0B0E04* ___fW_113;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowShareMenuOption> WeChatWASM.WXSDKManagerHandler::fw
	Dictionary_2_tF7C9060811253228DB6CDEEF34C428AE6D66AFCC* ___fw_114;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ShowToastOption> WeChatWASM.WXSDKManagerHandler::fX
	Dictionary_2_t16AC42233A1E6E67BA06AA2EA0224145A79DBED1* ___fX_115;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartAccelerometerOption> WeChatWASM.WXSDKManagerHandler::fx
	Dictionary_2_t452AE1BDA7567BFDDF225696BB2C07EFBEC83B2F* ___fx_116;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartBeaconDiscoveryOption> WeChatWASM.WXSDKManagerHandler::fY
	Dictionary_2_t943BD7B830829657291C3A7E6A40E7FECFF47BE6* ___fY_117;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartBluetoothDevicesDiscoveryOption> WeChatWASM.WXSDKManagerHandler::fy
	Dictionary_2_t1CD2D7B0CB51F12C02BAA9F2019F8D67A1EBB9C7* ___fy_118;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartCompassOption> WeChatWASM.WXSDKManagerHandler::fZ
	Dictionary_2_tC68330B775A8632B79CFC13C48616DC58E6AE4AB* ___fZ_119;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartDeviceMotionListeningOption> WeChatWASM.WXSDKManagerHandler::fz
	Dictionary_2_tCB140936C350D1689803FD097D6D9376401C62F0* ___fz_120;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopAccelerometerOption> WeChatWASM.WXSDKManagerHandler::GA
	Dictionary_2_tA28F55593072FFA5866469CB91337107D5822E6C* ___GA_121;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopBeaconDiscoveryOption> WeChatWASM.WXSDKManagerHandler::Ga
	Dictionary_2_t28DF39FDB86500CCAAC8EB31C823257E71FEB048* ___Ga_122;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopBluetoothDevicesDiscoveryOption> WeChatWASM.WXSDKManagerHandler::GB
	Dictionary_2_tD54DEB94377B4857DDB1231EE887BF33A6557E30* ___GB_123;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopCompassOption> WeChatWASM.WXSDKManagerHandler::Gb
	Dictionary_2_t5F15E1E69F481F63996E591FC229851C742E41FB* ___Gb_124;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopDeviceMotionListeningOption> WeChatWASM.WXSDKManagerHandler::GC
	Dictionary_2_t65CE9981A0A189C3D178B636AD5834BA9BB94E58* ___GC_125;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopFaceDetectOption> WeChatWASM.WXSDKManagerHandler::Gc
	Dictionary_2_tC0F25EFB96FE21FE0F4AC2CCBF15C7A79F834893* ___Gc_126;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.UpdateKeyboardOption> WeChatWASM.WXSDKManagerHandler::GD
	Dictionary_2_t826C46ABEDB4433F0A8BC641368DBB45CE2DF538* ___GD_127;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.UpdateShareMenuOption> WeChatWASM.WXSDKManagerHandler::Gd
	Dictionary_2_t7DEC1200326FF4C330FE596B7C98AFC7D92B5C5A* ___Gd_128;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.UpdateVoIPChatMuteConfigOption> WeChatWASM.WXSDKManagerHandler::GE
	Dictionary_2_tD5323E7310EA0E576B59C1F3484C19BB6B915EC8* ___GE_129;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.UpdateWeChatAppOption> WeChatWASM.WXSDKManagerHandler::Ge
	Dictionary_2_tB2FB78D77EA599D62E6B5386F707F27C1ED129A4* ___Ge_130;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.VibrateLongOption> WeChatWASM.WXSDKManagerHandler::GF
	Dictionary_2_t3ADACCE5EF90FE7B784197C82E86B0881BB972C3* ___GF_131;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.VibrateShortOption> WeChatWASM.WXSDKManagerHandler::Gf
	Dictionary_2_tC88AFC101FDB2DD385519972618A8EBF6832C952* ___Gf_132;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WriteBLECharacteristicValueOption> WeChatWASM.WXSDKManagerHandler::GG
	Dictionary_2_tA1C35F0EC094FA10F7D0313C6818745A5E82F79B* ___GG_133;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartGameLiveOption> WeChatWASM.WXSDKManagerHandler::Gg
	Dictionary_2_t60E4E9DC16999AF39A4BD0897B4FC29FF3EBC38E* ___Gg_134;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.CheckGameLiveEnabledOption> WeChatWASM.WXSDKManagerHandler::GH
	Dictionary_2_t8A9A8DBE469FB2AAF780C9EC4F9899E459B0791F* ___GH_135;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetUserCurrentGameliveInfoOption> WeChatWASM.WXSDKManagerHandler::Gh
	Dictionary_2_tE0FCBC86265F68E89E9D9611EA9322FADC2DBDFC* ___Gh_136;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetUserRecentGameLiveInfoOption> WeChatWASM.WXSDKManagerHandler::GI
	Dictionary_2_t103142938D88BEA9417DD00363D082069385D4FE* ___GI_137;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.GetUserGameLiveDetailsOption> WeChatWASM.WXSDKManagerHandler::Gi
	Dictionary_2_t94526FCF1F02A2812A25F09EAB80B00922359FD2* ___Gi_138;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenChannelsLiveCollectionOption> WeChatWASM.WXSDKManagerHandler::GJ
	Dictionary_2_t8116D9FB6D163E89DE624972BFEF6CD99224E108* ___GJ_139;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenPageOption> WeChatWASM.WXSDKManagerHandler::Gj
	Dictionary_2_tDE00E01AF65A0CA98E48D960B4B37DBD3F5A3F77* ___Gj_140;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.RequestSubscribeLiveActivityOption> WeChatWASM.WXSDKManagerHandler::GK
	Dictionary_2_tB2645455C37527840AD5E397D95CE4E61566EE34* ___GK_141;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.OpenBusinessViewOption> WeChatWASM.WXSDKManagerHandler::Gk
	Dictionary_2_t38044DAE1F5736E9501D665B9E924E87416E1252* ___Gk_142;
	// System.Action`1<WeChatWASM.OnAccelerometerChangeListenerResult> WeChatWASM.WXSDKManagerHandler::GL
	Action_1_t3C85759A3E7E35A6819E47EFBFD1D963B7F9FA9C* ___GL_143;
	// System.Action`1<WeChatWASM.GeneralCallbackResult> WeChatWASM.WXSDKManagerHandler::Gl
	Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___Gl_144;
	// System.Action`1<WeChatWASM.GeneralCallbackResult> WeChatWASM.WXSDKManagerHandler::GM
	Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___GM_145;
	// System.Action`1<WeChatWASM.OnBLEConnectionStateChangeListenerResult> WeChatWASM.WXSDKManagerHandler::Gm
	Action_1_tDA60EDFB0D0B586337CB9AEC7AAA397DA14CF1F8* ___Gm_146;
	// System.Action`1<WeChatWASM.OnBLEMTUChangeListenerResult> WeChatWASM.WXSDKManagerHandler::GN
	Action_1_t930E8216FEA3040FA6ED87EE1067C5FBA6303BFE* ___GN_147;
	// System.Action`1<WeChatWASM.OnBLEPeripheralConnectionStateChangedListenerResult> WeChatWASM.WXSDKManagerHandler::Gn
	Action_1_tF06A2D9A5ECF30328D87A385C9EE6FAA268C5D76* ___Gn_148;
	// System.Action`1<WeChatWASM.OnBackgroundFetchDataListenerResult> WeChatWASM.WXSDKManagerHandler::GO
	Action_1_t0C3AECB9E6795E88B88FF879A8E5F4C2F00C6885* ___GO_149;
	// System.Action`1<WeChatWASM.OnBeaconServiceChangeListenerResult> WeChatWASM.WXSDKManagerHandler::Go
	Action_1_t3813F8DED11EEF0E69F9F14A53D96B019CE3B277* ___Go_150;
	// System.Action`1<WeChatWASM.OnBeaconUpdateListenerResult> WeChatWASM.WXSDKManagerHandler::GP
	Action_1_t2DD31FABC563D87632B8B682ECC44E66ABA5251E* ___GP_151;
	// System.Action`1<WeChatWASM.OnBluetoothAdapterStateChangeListenerResult> WeChatWASM.WXSDKManagerHandler::Gp
	Action_1_t78553B48829AE9E35D5295868580668A1AB37E4E* ___Gp_152;
	// System.Action`1<WeChatWASM.OnBluetoothDeviceFoundListenerResult> WeChatWASM.WXSDKManagerHandler::GQ
	Action_1_tE5239580E19EF823F476E673E813A087B8B7F7DD* ___GQ_153;
	// System.Action`1<WeChatWASM.OnCompassChangeListenerResult> WeChatWASM.WXSDKManagerHandler::Gq
	Action_1_t97C38A4E476C6B7E01ABA3ABCF6A60B511DB408F* ___Gq_154;
	// System.Action`1<WeChatWASM.OnDeviceMotionChangeListenerResult> WeChatWASM.WXSDKManagerHandler::GR
	Action_1_t87D00519B275C1E65788C5950DD29359AC1CC767* ___GR_155;
	// System.Action`1<WeChatWASM.OnDeviceOrientationChangeListenerResult> WeChatWASM.WXSDKManagerHandler::Gr
	Action_1_t267BA449051D55505F6E41F325F857517562D9C2* ___Gr_156;
	// System.Action`1<WeChatWASM.Error> WeChatWASM.WXSDKManagerHandler::GS
	Action_1_tB6461BDAE145475C0FFEE7E2B363AD128E168837* ___GS_157;
	// System.Action`1<WeChatWASM.OnGamepadConnectedListenerResult> WeChatWASM.WXSDKManagerHandler::Gs
	Action_1_t5E75D164AAAD32A6E658FA6B7283783E631D004B* ___Gs_158;
	// System.Action`1<WeChatWASM.OnGamepadDisconnectedListenerResult> WeChatWASM.WXSDKManagerHandler::GT
	Action_1_tF66C713ED0C647F8FE6F1EEA71375754F86FDA46* ___GT_159;
	// System.Action`1<WeChatWASM.GeneralCallbackResult> WeChatWASM.WXSDKManagerHandler::Gt
	Action_1_t946DF9F7C767D9CA66C479AE0C058D13BE5CCA43* ___Gt_160;
	// System.Action`1<System.String> WeChatWASM.WXSDKManagerHandler::GU
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___GU_161;
	// System.Action`1<WeChatWASM.OnKeyDownListenerResult> WeChatWASM.WXSDKManagerHandler::Gu
	Action_1_t71A15C9BB1C59325AB55743E015AA28A6EBF3BB6* ___Gu_162;
	// System.Action`1<WeChatWASM.OnKeyDownListenerResult> WeChatWASM.WXSDKManagerHandler::GV
	Action_1_t71A15C9BB1C59325AB55743E015AA28A6EBF3BB6* ___GV_163;
	// System.Action`1<WeChatWASM.OnKeyboardInputListenerResult> WeChatWASM.WXSDKManagerHandler::Gv
	Action_1_t0CF02DF5080277F09B28FA74D41A24CE8ECED358* ___Gv_164;
	// System.Action`1<WeChatWASM.OnKeyboardInputListenerResult> WeChatWASM.WXSDKManagerHandler::GW
	Action_1_t0CF02DF5080277F09B28FA74D41A24CE8ECED358* ___GW_165;
	// System.Action`1<WeChatWASM.OnKeyboardHeightChangeListenerResult> WeChatWASM.WXSDKManagerHandler::Gw
	Action_1_tD0D9BB706AE8D0B8C40A8299E7EF22E9C4CD0707* ___Gw_166;
	// System.Action`1<WeChatWASM.OnKeyboardInputListenerResult> WeChatWASM.WXSDKManagerHandler::GX
	Action_1_t0CF02DF5080277F09B28FA74D41A24CE8ECED358* ___GX_167;
	// System.Action`1<WeChatWASM.OnMemoryWarningListenerResult> WeChatWASM.WXSDKManagerHandler::Gx
	Action_1_t77FDA3B1D522E036C414073AC9F442CF1513A504* ___Gx_168;
	// System.Action`1<System.String> WeChatWASM.WXSDKManagerHandler::GY
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___GY_169;
	// System.Action`1<WeChatWASM.OnMouseDownListenerResult> WeChatWASM.WXSDKManagerHandler::Gy
	Action_1_tB04A584704B3E8DE8EBAC8322B40D7CCC3A948EE* ___Gy_170;
	// System.Action`1<WeChatWASM.OnMouseMoveListenerResult> WeChatWASM.WXSDKManagerHandler::GZ
	Action_1_t7644A3B73B771225B765BF385E53B9961ACF081A* ___GZ_171;
	// System.Action`1<WeChatWASM.OnMouseDownListenerResult> WeChatWASM.WXSDKManagerHandler::Gz
	Action_1_tB04A584704B3E8DE8EBAC8322B40D7CCC3A948EE* ___Gz_172;
	// System.Action`1<WeChatWASM.OnNetworkStatusChangeListenerResult> WeChatWASM.WXSDKManagerHandler::gA
	Action_1_tAD3340357DC54A00F1A28D24BAB8F1B6AB1F2720* ___gA_173;
	// System.Action`1<WeChatWASM.OnNetworkWeakChangeListenerResult> WeChatWASM.WXSDKManagerHandler::ga
	Action_1_t748686E7991A3F0D55F47C5900278DF935A7A9F8* ___ga_174;
	// System.Action`1<WeChatWASM.OnScreenRecordingStateChangedListenerResult> WeChatWASM.WXSDKManagerHandler::gB
	Action_1_tCBB574711A6E6956E8977BF8C877AE171413D4FD* ___gB_175;
	// System.Action`1<WeChatWASM.OnShareMessageToFriendListenerResult> WeChatWASM.WXSDKManagerHandler::gb
	Action_1_t4A3F6400CADF06259797FD811278F7F99C9D7ED5* ___gb_176;
	// System.Action`1<WeChatWASM.OnShowListenerResult> WeChatWASM.WXSDKManagerHandler::gC
	Action_1_t0DB9C0E93E8947D462C90A006FB04519C4D1DEA8* ___gC_177;
	// System.Action`1<WeChatWASM.OnUnhandledRejectionListenerResult> WeChatWASM.WXSDKManagerHandler::gc
	Action_1_t318AC02CBD9551F5CC9B1E2D670FD49ABAE29807* ___gc_178;
	// System.Action`1<WeChatWASM.OnUserCaptureScreenListenerResult> WeChatWASM.WXSDKManagerHandler::gD
	Action_1_t2B1F8EBBFB9AA91D971444C9A278CA609744A678* ___gD_179;
	// System.Action`1<WeChatWASM.OnVoIPChatInterruptedListenerResult> WeChatWASM.WXSDKManagerHandler::gd
	Action_1_t49275100666C0CF759F7EA596DD7C20C8B824518* ___gd_180;
	// System.Action`1<WeChatWASM.OnVoIPChatMembersChangedListenerResult> WeChatWASM.WXSDKManagerHandler::gE
	Action_1_t0931E058BB5EFE0A4F5163565030331D996B8616* ___gE_181;
	// System.Action`1<WeChatWASM.OnVoIPChatSpeakersChangedListenerResult> WeChatWASM.WXSDKManagerHandler::ge
	Action_1_t6F9088A7C5DEEE41E4646A7B30B502B862FCD83B* ___ge_182;
	// System.Action`1<WeChatWASM.OnVoIPChatStateChangedListenerResult> WeChatWASM.WXSDKManagerHandler::gF
	Action_1_tDDF3ED3CEA4296BF27D9C41A2CE8EDF5A2DFF8DB* ___gF_183;
	// System.Action`1<WeChatWASM.OnWheelListenerResult> WeChatWASM.WXSDKManagerHandler::gf
	Action_1_tCF745EB56CB73376C7353941B65B56187394EBDE* ___gf_184;
	// System.Action`1<WeChatWASM.OnWindowResizeListenerResult> WeChatWASM.WXSDKManagerHandler::gG
	Action_1_tD8A11F4817A8DFD2E4505ECD04D635BBC0EFEF9D* ___gG_185;
	// System.Action`1<System.Action`1<WeChatWASM.OnAddToFavoritesListenerResult>> WeChatWASM.WXSDKManagerHandler::gg
	Action_1_t6FB9D7C42E78CC09D8CE40C31D065A20A58B3697* ___gg_186;
	// System.Action`1<System.Action`1<WeChatWASM.OnCopyUrlListenerResult>> WeChatWASM.WXSDKManagerHandler::gH
	Action_1_t8428F4A0B7323FE72198A88C3E7A7C8D49A6A01B* ___gH_187;
	// System.Action`1<System.Action`1<WeChatWASM.OnHandoffListenerResult>> WeChatWASM.WXSDKManagerHandler::gh
	Action_1_tF5681432D9389D18C38897D941C82296DB71B0DC* ___gh_188;
	// System.Action`1<System.Action`1<WeChatWASM.OnShareTimelineListenerResult>> WeChatWASM.WXSDKManagerHandler::gI
	Action_1_tC2A02443BE5474B596A7A3D80E11A4ECA00357E0* ___gI_189;
	// System.Action`2<WeChatWASM.OnGameLiveStateChangeCallbackResult,System.Action`1<WeChatWASM.OnGameLiveStateChangeCallbackResponse>> WeChatWASM.WXSDKManagerHandler::gi
	Action_2_t582B10F7BF4E13AADD1E828E636ADBC06A6897C1* ___gi_190;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXDownloadTask> WeChatWASM.WXSDKManagerHandler::gJ
	Dictionary_2_t451E2043706B2EC6BD30BED1E7E2B65CD93D01AE* ___gJ_191;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.DownloadFileOption> WeChatWASM.WXSDKManagerHandler::gj
	Dictionary_2_tBA22C5B7FE2957642B1704C763596005C1C21BF2* ___gj_192;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXFeedbackButton> WeChatWASM.WXSDKManagerHandler::gK
	Dictionary_2_tAA95BB640E2132AF0511EC37AE9F05FAE6755905* ___gK_193;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXLogManager> WeChatWASM.WXSDKManagerHandler::gk
	Dictionary_2_tCFCE87059921185390209596349B48F1ACB6DA68* ___gk_194;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXRealtimeLogManager> WeChatWASM.WXSDKManagerHandler::gL
	Dictionary_2_t94FA30A26BA1AA487143773BBCAAC51AB2C93921* ___gL_195;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUpdateManager> WeChatWASM.WXSDKManagerHandler::gl
	Dictionary_2_tD5E9994609C5FCDE0DEB4E0B0D65D103566C295F* ___gl_196;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXVideoDecoder> WeChatWASM.WXSDKManagerHandler::gM
	Dictionary_2_tD885DF62FBFD87A09BB82D3C89D455C5A95FD538* ___gM_197;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXUDPSocket> WeChatWASM.WXSDKManagerHandler::gO
	Dictionary_2_t5D3A9E341678FE2C8B518DDBD6060BF61E146169* ___gO_201;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXTCPSocket> WeChatWASM.WXSDKManagerHandler::go
	Dictionary_2_tDC605648B15123CAACE0201BA0539B3961DFF5DB* ___go_202;
	// System.Action`1<System.Int32> WeChatWASM.WXSDKManagerHandler::gr
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___gr_208;
	// System.Action`1<System.Action`1<WeChatWASM.WXShareAppMessageParam>> WeChatWASM.WXSDKManagerHandler::gS
	Action_1_t46D08295EECC225F57FC37020E3EB000A87A5151* ___gS_209;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.WXCamera> WeChatWASM.WXSDKManagerHandler::gu
	Dictionary_2_t8C49A97E0C20BC11EEBA6963290C37A3AC466275* ___gu_214;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.UploadFileOption> WeChatWASM.WXSDKManagerHandler::gV
	Dictionary_2_t024B881A8CB41EC57F11C85C97B8B1D73474D452* ___gV_215;
	// System.Action`1<System.String> WeChatWASM.WXSDKManagerHandler::gv
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___gv_216;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.ReserveChannelsLiveOption> WeChatWASM.WXSDKManagerHandler::gY
	Dictionary_2_tC1ED46269D3F086A1EEC1D1003240499D8F5F893* ___gY_221;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.Hashtable

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// WeChatWASM.WXBaseResponse

// WeChatWASM.WXBaseResponse

// WeChatWASM.WXJSCallback

// WeChatWASM.WXJSCallback

// System.Xml.Schema.XmlValueConverter

// System.Xml.Schema.XmlValueConverter

// System.Runtime.Serialization.XmlWriterDelegator

// System.Runtime.Serialization.XmlWriterDelegator

// A.a
struct a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_StaticFields
{
	// System.Collections.Hashtable A.a::aE
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___aE_0;
	// System.Int32 A.a::ae
	int32_t ___ae_1;
};

// A.a

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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	// System.String System.Runtime.Serialization.SerializationException::s_nullMessage
	String_t* ___s_nullMessage_18;
};

// System.Runtime.Serialization.SerializationException

// System.Xml.Schema.XmlListConverter

// System.Xml.Schema.XmlListConverter

// System.Runtime.Serialization.XmlObjectSerializerReadContext

// System.Runtime.Serialization.XmlObjectSerializerReadContext

// System.Runtime.Serialization.XmlObjectSerializerWriteContext

// System.Runtime.Serialization.XmlObjectSerializerWriteContext

// WeChatWASM.WXSDKManagerHandler
struct WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_StaticFields
{
	// WeChatWASM.WXSDKManagerHandler WeChatWASM.WXSDKManagerHandler::gm
	WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725* ___gm_198;
	// WeChatWASM.WXEnv WeChatWASM.WXSDKManagerHandler::gN
	WXEnv_t2186373664201540170A71F40D6CC9ED9728148E* ___gN_199;
	// WeChatWASM.WXCloud WeChatWASM.WXSDKManagerHandler::gn
	WXCloud_tED0DD8AB6532857A19F1FE12F8261F9F560856A7* ___gn_200;
	// System.Action`1<WeChatWASM.OnTouchStartListenerResult> WeChatWASM.WXSDKManagerHandler::gP
	Action_1_tF679F66F509A4837A34A8411F6E074E63FF68FA5* ___gP_203;
	// System.Action`1<WeChatWASM.OnTouchStartListenerResult> WeChatWASM.WXSDKManagerHandler::gp
	Action_1_tF679F66F509A4837A34A8411F6E074E63FF68FA5* ___gp_204;
	// System.Action`1<WeChatWASM.OnTouchStartListenerResult> WeChatWASM.WXSDKManagerHandler::gQ
	Action_1_tF679F66F509A4837A34A8411F6E074E63FF68FA5* ___gQ_205;
	// System.Action`1<WeChatWASM.OnTouchStartListenerResult> WeChatWASM.WXSDKManagerHandler::gq
	Action_1_tF679F66F509A4837A34A8411F6E074E63FF68FA5* ___gq_206;
	// System.Boolean WeChatWASM.WXSDKManagerHandler::gR
	bool ___gR_207;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Action`1<System.Int32>> WeChatWASM.WXSDKManagerHandler::gs
	Dictionary_2_t0125D969D17ECEA1F4D4A1D6280E764B640CF75A* ___gs_210;
	// System.Type WeChatWASM.WXSDKManagerHandler::gT
	Type_t* ___gT_211;
	// WeChatWASM.WXSDKManagerHandler/WXProfileStatsScript WeChatWASM.WXSDKManagerHandler::gt
	RuntimeObject* ___gt_212;
	// System.String WeChatWASM.WXSDKManagerHandler::gU
	String_t* ___gU_213;
	// System.Action`1<WeChatWASM.OnBLECharacteristicValueChangeListenerResult> WeChatWASM.WXSDKManagerHandler::gW
	Action_1_t59F2E492F74D9152516AC9C1B60FF5B6C7BBF43E* ___gW_217;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StartGyroscopeOption> WeChatWASM.WXSDKManagerHandler::gw
	Dictionary_2_t5D3F4DA0502F704BC4F4E71AA5CD37718A42F338* ___gw_218;
	// System.Collections.Generic.Dictionary`2<System.String,WeChatWASM.StopGyroscopeOption> WeChatWASM.WXSDKManagerHandler::gX
	Dictionary_2_tB14A3B697C163A756BC0D3FD3AF0D99F1C07DEE8* ___gX_219;
	// System.Action`1<WeChatWASM.OnGyroscopeChangeListenerResult> WeChatWASM.WXSDKManagerHandler::gx
	Action_1_t386FC72A14405C783E7BB9DF1F6698F3CB8AF9EA* ___gx_220;
};

// WeChatWASM.WXSDKManagerHandler
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T LitJson.JsonMapper::ToObject<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_ToObject_TisIl2CppFullySharedGenericAny_m63EC0711A340085DD65C2F6D27635BBE5D13058F_gshared (String_t* ___0_json, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String WeChatWASM.WXSDKManagerHandler::WX_ClassOneWayFunction(System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WXSDKManagerHandler_WX_ClassOneWayFunction_m107158A3D27D005CA4E62D8AD482DF256164B2E6 (String_t* ___0_functionName, String_t* ___1_returnType, String_t* ___2_successType, String_t* ___3_failType, String_t* ___4_completeType, String_t* ___5_conf, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3 (intptr_t ___0_ptr, Type_t* ___1_structureType, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::a(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_a_mAD83337C55A5C9500E975129EC78E927F3E65B7B (String_t* ___0_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::B(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_B_mBD775616DD641BB88E4399A2C1DA84D67ED55E1D (String_t* ___0_p, String_t* ___1_p, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// T LitJson.JsonMapper::ToObject<WeChatWASM.WXJSCallback>(System.String)
inline WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB* JsonMapper_ToObject_TisWXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB_mECB85356AA4B52F09CA13FECCCD1584AE4378FAF (String_t* ___0_json, const RuntimeMethod* method)
{
	WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB* il2cppRetVal;
	((  void (*) (String_t*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))JsonMapper_ToObject_TisIl2CppFullySharedGenericAny_m63EC0711A340085DD65C2F6D27635BBE5D13058F_gshared)(___0_json, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::A(System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_A_m1159CD583F39251301E504FC142A01AA292AD6CC (String_t* ___0_p, String_t* ___1_p, String_t* ___2_p, String_t* ___3_p, String_t* ___4_p, String_t* ___5_p, const RuntimeMethod* method) ;
// System.Void WeChatWASM.WXSDKManagerHandler::A(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_A_mD14561FA741C04CC0474CE09CD1DD9EAE71ED4CF (String_t* ___0_p, String_t* ___1_p, String_t* ___2_p, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.DataContract::GetClrTypeFullName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataContract_GetClrTypeFullName_m1DD7F24A5238F620D71A4B65BE8389637FA3E42D (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.String System.Runtime.Serialization.SR::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_mCB22EBBC246A223CDDA76C1D8F355262069E2DD4 (String_t* ___0_name, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Runtime.Serialization.SerializationException System.Runtime.Serialization.XmlObjectSerializer::CreateSerializationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* XmlObjectSerializer_CreateSerializationException_m14581C5D9FE35E14E819276C06E69548661ED683 (String_t* ___0_errorMessage, const RuntimeMethod* method) ;
// System.Exception System.Runtime.Serialization.DiagnosticUtility/ExceptionUtility::ThrowHelperError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionUtility_ThrowHelperError_mB01429D47ABA81955EC561D8286C63E8C74D5FB6 (Exception_t* ___0_e, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.XmlObjectSerializerWriteContext::IncrementCollectionCount(System.Runtime.Serialization.XmlWriterDelegator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlObjectSerializerWriteContext_IncrementCollectionCount_mAB0DD58798793D0BA76FA2A3EE35172500A89132 (XmlObjectSerializerWriteContext_t9E9ED500D54CAB208A5F262DFC3F1F06DC82CBCE* __this, XmlWriterDelegator_t1E3DF42F5826EBD3E685CC88E36A2743D71CDF44* ___0_xmlWriter, int32_t ___1_size, const RuntimeMethod* method) ;
// System.Int32 A.a::A()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t a_A_mF46C9A509E00EAC66E5755C741667687F0CE54CF (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, int32_t ___6_millisecond, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_d1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___1_d2, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mB8E05FE41BD8996D61DDD3402C93FA7AD654E333 (double ___0_value, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String WeChatWASM.WXSDKManagerHandler::ClassOneWayFunction<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.String,TConfig,System.Collections.Generic.Dictionary`2<System.String,TConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WXSDKManagerHandler_ClassOneWayFunction_TisRuntimeObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0EC0B1F37B8BEFEE8A0D9EAE18466DB7260D999B_gshared (WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725* __this, String_t* ___0_functionName, String_t* ___1_returnType, RuntimeObject* ___2_config, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___3_configList, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* V_4 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* V_5 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_1);
		V_0 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_4);
		V_1 = L_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_7);
		V_2 = L_8;
		RuntimeObject* L_9;
		L_9 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL);
		RuntimeObject* L_10 = L_9;
		RuntimeObject* L_11 = ___2_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_12;
		L_12 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(0 /* System.Action`1<TSuccess> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_success() */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_11);
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(1 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_success(System.Action`1<TSuccess>) */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_10, L_12);
		RuntimeObject* L_13 = L_10;
		RuntimeObject* L_14 = ___2_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_15;
		L_15 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(2 /* System.Action`1<TFail> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_fail() */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_14);
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(3 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_fail(System.Action`1<TFail>) */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_13, L_15);
		RuntimeObject* L_16 = L_13;
		RuntimeObject* L_17 = ___2_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_18;
		L_18 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(4 /* System.Action`1<TComplete> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_complete() */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_17);
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(5 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_complete(System.Action`1<TComplete>) */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_16, L_18);
		V_3 = L_16;
		RuntimeObject* L_19 = ___2_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_20;
		L_20 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(0 /* System.Action`1<TSuccess> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_success() */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_19);
		V_4 = L_20;
		RuntimeObject* L_21 = ___2_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_22;
		L_22 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(2 /* System.Action`1<TFail> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_fail() */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_21);
		V_5 = L_22;
		RuntimeObject* L_23 = ___2_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_24;
		L_24 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(4 /* System.Action`1<TComplete> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_complete() */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_23);
		V_6 = L_24;
		RuntimeObject* L_25 = ___2_config;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(1 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_success(System.Action`1<TSuccess>) */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_25, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)NULL);
		RuntimeObject* L_26 = ___2_config;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(3 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_fail(System.Action`1<TFail>) */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_26, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)NULL);
		RuntimeObject* L_27 = ___2_config;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(5 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_complete(System.Action`1<TComplete>) */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_27, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)NULL);
		RuntimeObject* L_28 = ___2_config;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_28, NULL);
		V_7 = L_29;
		RuntimeObject* L_30 = ___2_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_31 = V_4;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(1 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_success(System.Action`1<TSuccess>) */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_30, L_31);
		RuntimeObject* L_32 = ___2_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_33 = V_5;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(3 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_fail(System.Action`1<TFail>) */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_32, L_33);
		RuntimeObject* L_34 = ___2_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_35 = V_6;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(5 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_complete(System.Action`1<TComplete>) */, il2cpp_rgctx_data(method->rgctx_data, 5), (RuntimeObject*)L_34, L_35);
		String_t* L_36 = ___0_functionName;
		String_t* L_37 = ___1_returnType;
		String_t* L_38 = V_0;
		String_t* L_39 = V_1;
		String_t* L_40 = V_2;
		String_t* L_41 = V_7;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		String_t* L_42;
		L_42 = WXSDKManagerHandler_WX_ClassOneWayFunction_m107158A3D27D005CA4E62D8AD482DF256164B2E6(L_36, L_37, L_38, L_39, L_40, L_41, NULL);
		V_8 = L_42;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_43 = ___3_configList;
		String_t* L_44 = V_8;
		RuntimeObject* L_45 = V_3;
		InvokerActionInvoker2< String_t*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 16)), il2cpp_rgctx_method(method->rgctx_data, 16), L_43, L_44, L_45);
		String_t* L_46 = V_8;
		V_9 = L_46;
		goto IL_0120;
	}

IL_0120:
	{
		String_t* L_47 = V_9;
		return L_47;
	}
}
// System.String WeChatWASM.WXSDKManagerHandler::GetCallbackId<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.Dictionary`2<System.String,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WXSDKManagerHandler_GetCallbackId_TisIl2CppFullySharedGenericAny_mD0289958E48B97E4E5D527506104A337A5560288_gshared (Dictionary_2_t0E53A4C96A42ED436853608F2A41D26180F25053* ___0_dict, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	float V_2 = 0.0f;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		Dictionary_2_t0E53A4C96A42ED436853608F2A41D26180F25053* L_0 = ___0_dict;
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3;
		L_3 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		V_2 = ((float)il2cpp_codegen_add(((float)L_2), L_3));
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		V_1 = L_4;
		goto IL_0032;
	}

IL_001b:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		float L_7;
		L_7 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		V_2 = ((float)il2cpp_codegen_add(((float)L_6), L_7));
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		V_1 = L_8;
	}

IL_0032:
	{
		Dictionary_2_t0E53A4C96A42ED436853608F2A41D26180F25053* L_9 = ___0_dict;
		String_t* L_10 = V_1;
		bool L_11;
		L_11 = InvokerFuncInvoker1< bool, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_9, L_10);
		V_3 = L_11;
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_13 = V_1;
		V_4 = L_13;
		goto IL_0042;
	}

IL_0042:
	{
		String_t* L_14 = V_4;
		return L_14;
	}
}
// T WeChatWASM.WXSDKManagerHandler::GetDataFromPointer<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_GetDataFromPointer_TisIl2CppFullySharedGenericStruct_mABDD057EFB496EEFD54F2634F79B4CA30B41D635_gshared (intptr_t ___0_ptr, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t4C1C98FAC723380F31645DFB58EE0385471F5FA3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t4C1C98FAC723380F31645DFB58EE0385471F5FA3);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t4C1C98FAC723380F31645DFB58EE0385471F5FA3);
	memset(V_0, 0, SizeOf_T_t4C1C98FAC723380F31645DFB58EE0385471F5FA3);
	{
		intptr_t L_0 = ___0_ptr;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Marshal_PtrToStructure_m235E141E21BFB69A01B07DDDF1702BA7D5723AC3(L_0, L_2, NULL);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_3, il2cpp_rgctx_data(method->rgctx_data, 1))))), SizeOf_T_t4C1C98FAC723380F31645DFB58EE0385471F5FA3);
		goto IL_0019;
	}

IL_0019:
	{
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_t4C1C98FAC723380F31645DFB58EE0385471F5FA3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t4C1C98FAC723380F31645DFB58EE0385471F5FA3);
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler::OffEventFunction<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Action`1<T>&,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_OffEventFunction_TisIl2CppFullySharedGenericAny_m33A2606DDA01CB16B4329CCCDE5F8EF0397B98BB_gshared (WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725* __this, String_t* ___0_functionName, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99** ___1_OnEventAction, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___2_deleteAction, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_0 = ___2_deleteAction;
		V_0 = (bool)((((RuntimeObject*)(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99** L_2 = ___1_OnEventAction;
		*((RuntimeObject**)L_2) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)NULL);
		goto IL_0021;
	}

IL_0010:
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99** L_3 = ___1_OnEventAction;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99** L_4 = ___1_OnEventAction;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_5 = *((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99**)L_4);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_6 = ___2_deleteAction;
		Delegate_t* L_7;
		L_7 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3((Delegate_t*)L_5, (Delegate_t*)L_6, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0))));
	}

IL_0021:
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99** L_8 = ___1_OnEventAction;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_9 = *((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99**)L_8);
		V_1 = (bool)((((RuntimeObject*)(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_11 = ___0_functionName;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_a_mAD83337C55A5C9500E975129EC78E927F3E65B7B(L_11, NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler::OnEventFunction<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Action`1<T>&,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_OnEventFunction_TisIl2CppFullySharedGenericAny_m81DC141BCC356D56A2599E78A0F9F0BA0D251C7F_gshared (WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725* __this, String_t* ___0_functionName, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99** ___1_OnEventAction, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___2_newAction, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_1);
		V_0 = L_2;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99** L_3 = ___1_OnEventAction;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = *((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99**)L_3);
		V_1 = (bool)((((RuntimeObject*)(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_6 = ___0_functionName;
		String_t* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_B_mBD775616DD641BB88E4399A2C1DA84D67ED55E1D(L_6, L_7, NULL);
	}

IL_0024:
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99** L_8 = ___1_OnEventAction;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99** L_9 = ___1_OnEventAction;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_10 = *((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99**)L_9);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_11 = ___2_newAction;
		Delegate_t* L_12;
		L_12 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00((Delegate_t*)L_10, (Delegate_t*)L_11, NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)Castclass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)Castclass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2))));
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler::OneWayCallback<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Collections.Generic.Dictionary`2<System.String,TConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_OneWayCallback_TisRuntimeObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m725B2FBA2C3E8620F62ABB588095E083DDD23685_gshared (WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725* __this, String_t* ___0_msg, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_configList, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisWXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB_mECB85356AA4B52F09CA13FECCCD1584AE4378FAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E);
		il2cpp_rgctx_method_init(method);
	}
	// TSuccess
	// sizeof(TSuccess)
	const uint32_t SizeOf_TSuccess_t6D157C7F89E069ED147F372AC1DCAFE03B11700A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 14));
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_TSuccess_t6D157C7F89E069ED147F372AC1DCAFE03B11700A);
	// TFail
	// sizeof(TFail)
	const uint32_t SizeOf_TFail_t8636BE72B4C4D7288A81B1015131840DC634B122 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_43 = alloca(SizeOf_TFail_t8636BE72B4C4D7288A81B1015131840DC634B122);
	// TComplete
	// sizeof(TComplete)
	const uint32_t SizeOf_TComplete_tFD0A2966F9654F014042F1E6631D2C9CD3020AE8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TComplete_tFD0A2966F9654F014042F1E6631D2C9CD3020AE8);
	bool V_0 = false;
	WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* G_B8_0 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* G_B7_0 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* G_B13_0 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* G_B12_0 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* G_B18_0 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* G_B17_0 = NULL;
	int32_t G_B25_0 = 0;
	{
		String_t* L_0 = ___0_msg;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = ___1_configList;
		G_B3_0 = ((!(((RuntimeObject*)(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0158;
		}
	}
	{
		String_t* L_4 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB* L_5;
		L_5 = JsonMapper_ToObject_TisWXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB_mECB85356AA4B52F09CA13FECCCD1584AE4378FAF(L_4, JsonMapper_ToObject_TisWXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB_mECB85356AA4B52F09CA13FECCCD1584AE4378FAF_RuntimeMethod_var);
		V_1 = L_5;
		WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB* L_6 = V_1;
		String_t* L_7 = L_6->___callbackId_0;
		V_2 = L_7;
		WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB* L_8 = V_1;
		String_t* L_9 = L_8->___type_1;
		V_3 = L_9;
		WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB* L_10 = V_1;
		String_t* L_11 = L_10->___res_2;
		V_4 = L_11;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_12 = ___1_configList;
		String_t* L_13 = V_2;
		bool L_14;
		L_14 = InvokerFuncInvoker1< bool, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_12, L_13);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0157;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16 = ___1_configList;
		String_t* L_17 = V_2;
		RuntimeObject* L_18;
		L_18 = InvokerFuncInvoker1< RuntimeObject*, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_16, L_17);
		V_6 = L_18;
		String_t* L_19 = V_3;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E, NULL);
		V_7 = L_20;
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_0094;
		}
	}
	{
		RuntimeObject* L_22 = V_6;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_23;
		L_23 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(4 /* System.Action`1<TComplete> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_complete() */, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)L_22);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_24 = L_23;
		G_B7_0 = L_24;
		if (L_24)
		{
			G_B8_0 = L_24;
			goto IL_0073;
		}
	}
	{
		goto IL_0080;
	}

IL_0073:
	{
		String_t* L_25 = V_4;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_25, (Il2CppFullySharedGenericAny*)L_26);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), G_B8_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 8)) ? L_26: *(void**)L_26));
	}

IL_0080:
	{
		RuntimeObject* L_27 = V_6;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(5 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_complete(System.Action`1<TComplete>) */, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)L_27, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)NULL);
		goto IL_0118;
	}

IL_0094:
	{
		String_t* L_28 = V_3;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral5D08F7C1B259530ED46D90B3F0BD1CA69B5791A4, NULL);
		V_8 = L_29;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeObject* L_31 = V_6;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_32;
		L_32 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(0 /* System.Action`1<TSuccess> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_success() */, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)L_31);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_33 = L_32;
		G_B12_0 = L_33;
		if (L_33)
		{
			G_B13_0 = L_33;
			goto IL_00b9;
		}
	}
	{
		goto IL_00c6;
	}

IL_00b9:
	{
		String_t* L_34 = V_4;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)), il2cpp_rgctx_method(method->rgctx_data, 13), NULL, L_34, (Il2CppFullySharedGenericAny*)L_35);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 15)), il2cpp_rgctx_method(method->rgctx_data, 15), G_B13_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 14)) ? L_35: *(void**)L_35));
	}

IL_00c6:
	{
		goto IL_00fb;
	}

IL_00c9:
	{
		String_t* L_36 = V_3;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralB2C9A1B79388A3548176117524B37FBC20A1A806, NULL);
		V_9 = L_37;
		bool L_38 = V_9;
		if (!L_38)
		{
			goto IL_00fb;
		}
	}
	{
		RuntimeObject* L_39 = V_6;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_40;
		L_40 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(2 /* System.Action`1<TFail> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_fail() */, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)L_39);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_41 = L_40;
		G_B17_0 = L_41;
		if (L_41)
		{
			G_B18_0 = L_41;
			goto IL_00ed;
		}
	}
	{
		goto IL_00fa;
	}

IL_00ed:
	{
		String_t* L_42 = V_4;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 18)), il2cpp_rgctx_method(method->rgctx_data, 18), NULL, L_42, (Il2CppFullySharedGenericAny*)L_43);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 20)), il2cpp_rgctx_method(method->rgctx_data, 20), G_B18_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 19)) ? L_43: *(void**)L_43));
	}

IL_00fa:
	{
	}

IL_00fb:
	{
		RuntimeObject* L_44 = V_6;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(1 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_success(System.Action`1<TSuccess>) */, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)L_44, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)NULL);
		RuntimeObject* L_45 = V_6;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(3 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_fail(System.Action`1<TFail>) */, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)L_45, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)NULL);
	}

IL_0118:
	{
		RuntimeObject* L_46 = V_6;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_47;
		L_47 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(4 /* System.Action`1<TComplete> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_complete() */, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)L_46);
		if (L_47)
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_48 = V_6;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_49;
		L_49 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(0 /* System.Action`1<TSuccess> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_success() */, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)L_48);
		if (L_49)
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_50 = V_6;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_51;
		L_51 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(2 /* System.Action`1<TFail> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_fail() */, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)L_50);
		G_B25_0 = ((((RuntimeObject*)(Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)L_51) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B25_0 = 0;
	}

IL_0146:
	{
		V_10 = (bool)G_B25_0;
		bool L_52 = V_10;
		if (!L_52)
		{
			goto IL_0156;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_53 = ___1_configList;
		String_t* L_54 = V_2;
		bool L_55;
		L_55 = InvokerFuncInvoker1< bool, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 23)), il2cpp_rgctx_method(method->rgctx_data, 23), L_53, L_54);
	}

IL_0156:
	{
	}

IL_0157:
	{
	}

IL_0158:
	{
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler::OneWayFunction<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,TConfig,System.Collections.Generic.Dictionary`2<System.String,TConfig>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_OneWayFunction_TisRuntimeObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m8660E7C9C49C24746C283CF96F7F6589B9B94544_gshared (WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725* __this, String_t* ___0_functionName, RuntimeObject* ___1_config, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___2_configList, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* V_5 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* V_6 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_1);
		V_0 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_4);
		V_1 = L_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_7);
		V_2 = L_8;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_9 = ___2_configList;
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = InvokerFuncInvoker1< String_t*, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_9);
		V_3 = L_10;
		RuntimeObject* L_11;
		L_11 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), NULL);
		RuntimeObject* L_12 = L_11;
		RuntimeObject* L_13 = ___1_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_14;
		L_14 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(0 /* System.Action`1<TSuccess> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_success() */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_13);
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(1 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_success(System.Action`1<TSuccess>) */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_12, L_14);
		RuntimeObject* L_15 = L_12;
		RuntimeObject* L_16 = ___1_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_17;
		L_17 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(2 /* System.Action`1<TFail> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_fail() */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_16);
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(3 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_fail(System.Action`1<TFail>) */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_15, L_17);
		RuntimeObject* L_18 = L_15;
		RuntimeObject* L_19 = ___1_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_20;
		L_20 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(4 /* System.Action`1<TComplete> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_complete() */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_19);
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(5 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_complete(System.Action`1<TComplete>) */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_18, L_20);
		V_4 = L_18;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_21 = ___2_configList;
		String_t* L_22 = V_3;
		RuntimeObject* L_23 = V_4;
		InvokerActionInvoker2< String_t*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 17)), il2cpp_rgctx_method(method->rgctx_data, 17), L_21, L_22, L_23);
		RuntimeObject* L_24 = ___1_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_25;
		L_25 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(0 /* System.Action`1<TSuccess> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_success() */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_24);
		V_5 = L_25;
		RuntimeObject* L_26 = ___1_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_27;
		L_27 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(2 /* System.Action`1<TFail> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_fail() */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_26);
		V_6 = L_27;
		RuntimeObject* L_28 = ___1_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_29;
		L_29 = InterfaceFuncInvoker0Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(4 /* System.Action`1<TComplete> WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_complete() */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_28);
		V_7 = L_29;
		RuntimeObject* L_30 = ___1_config;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(1 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_success(System.Action`1<TSuccess>) */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_30, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)NULL);
		RuntimeObject* L_31 = ___1_config;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(3 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_fail(System.Action`1<TFail>) */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_31, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)NULL);
		RuntimeObject* L_32 = ___1_config;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(5 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_complete(System.Action`1<TComplete>) */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_32, (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)NULL);
		RuntimeObject* L_33 = ___1_config;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_34;
		L_34 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_33, NULL);
		V_8 = L_34;
		RuntimeObject* L_35 = ___1_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_36 = V_5;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(1 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_success(System.Action`1<TSuccess>) */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_35, L_36);
		RuntimeObject* L_37 = ___1_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_38 = V_6;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(3 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_fail(System.Action`1<TFail>) */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_37, L_38);
		RuntimeObject* L_39 = ___1_config;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_40 = V_7;
		InterfaceActionInvoker1Invoker< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(5 /* System.Void WeChatWASM.ICallback`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_complete(System.Action`1<TComplete>) */, il2cpp_rgctx_data(method->rgctx_data, 7), (RuntimeObject*)L_39, L_40);
		String_t* L_41 = ___0_functionName;
		String_t* L_42 = V_0;
		String_t* L_43 = V_1;
		String_t* L_44 = V_2;
		String_t* L_45 = V_8;
		String_t* L_46 = V_3;
		WXSDKManagerHandler_A_m1159CD583F39251301E504FC142A01AA292AD6CC(L_41, L_42, L_43, L_44, L_45, L_46, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler::SetStorageSync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler_SetStorageSync_TisIl2CppFullySharedGenericAny_mC6B8535BBBF6B33BF95A3393118BCF1CA0C94E9B_gshared (WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725* __this, String_t* ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_data, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF93483397766B6C1CE4DC98D4C3FF6B38A586C27);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t7B1853538C0F534DF50673A9E492294AD67C984B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t7B1853538C0F534DF50673A9E492294AD67C984B);
	{
		String_t* L_0 = ___0_key;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_data : &___1_data), SizeOf_T_t7B1853538C0F534DF50673A9E492294AD67C984B);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonMapper_ToJson_m47E09DCA4D412AB6D98769A2A5544C6D65155811(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725_il2cpp_TypeInfo_var);
		WXSDKManagerHandler_A_mD14561FA741C04CC0474CE09CD1DD9EAE71ED4CF(_stringLiteralF93483397766B6C1CE4DC98D4C3FF6B38A586C27, L_0, L_3, NULL);
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler::_ClassOnEventCallback<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Action`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler__ClassOnEventCallback_TisIl2CppFullySharedGenericAny_mC4C01A28BA156DA05A2EEC1101BC5126082F6523_gshared (WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725* __this, String_t* ___0_msg, Dictionary_2_tA2A39478BB40B99FA2F1A7B0B87BE75CB5337E53* ___1_ClassOnEventActionList, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_ToObject_TisWXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB_mECB85356AA4B52F09CA13FECCCD1584AE4378FAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t4C8DCE854147845CC91814BD410B1DCD125534A4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T_t4C8DCE854147845CC91814BD410B1DCD125534A4);
	const Il2CppFullySharedGenericAny L_27 = L_24;
	const Il2CppFullySharedGenericAny L_32 = L_24;
	bool V_0 = false;
	WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_T_t4C8DCE854147845CC91814BD410B1DCD125534A4);
	memset(V_6, 0, SizeOf_T_t4C8DCE854147845CC91814BD410B1DCD125534A4);
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* G_B6_0 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* G_B5_0 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* G_B10_0 = NULL;
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* G_B9_0 = NULL;
	{
		String_t* L_0 = ___0_msg;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0096;
		}
	}
	{
		String_t* L_3 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB* L_4;
		L_4 = JsonMapper_ToObject_TisWXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB_mECB85356AA4B52F09CA13FECCCD1584AE4378FAF(L_3, JsonMapper_ToObject_TisWXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB_mECB85356AA4B52F09CA13FECCCD1584AE4378FAF_RuntimeMethod_var);
		V_1 = L_4;
		WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB* L_5 = V_1;
		String_t* L_6 = L_5->___callbackId_0;
		V_2 = L_6;
		WXJSCallback_tCF595BE790512C04147C7B715ECB2468F4A7DEFB* L_7 = V_1;
		String_t* L_8 = L_7->___res_2;
		V_3 = L_8;
		Dictionary_2_tA2A39478BB40B99FA2F1A7B0B87BE75CB5337E53* L_9 = ___1_ClassOnEventActionList;
		String_t* L_10 = V_2;
		bool L_11;
		L_11 = InvokerFuncInvoker1< bool, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_9, L_10);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0096;
	}

IL_003a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0076;
		}
	}
	{
		Dictionary_2_tA2A39478BB40B99FA2F1A7B0B87BE75CB5337E53* L_19 = ___1_ClassOnEventActionList;
		String_t* L_20 = V_2;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_21;
		L_21 = InvokerFuncInvoker1< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_19, L_20);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_22 = L_21;
		G_B5_0 = L_22;
		if (L_22)
		{
			G_B6_0 = L_22;
			goto IL_0067;
		}
	}
	{
		goto IL_0073;
	}

IL_0067:
	{
		String_t* L_23 = V_3;
		void* L_25 = UnBox_Any((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 5), L_24);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), G_B6_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_25))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_25)))));
	}

IL_0073:
	{
		goto IL_0095;
	}

IL_0076:
	{
		String_t* L_26 = V_3;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_26, (Il2CppFullySharedGenericAny*)L_27);
		il2cpp_codegen_memcpy(V_6, L_27, SizeOf_T_t4C8DCE854147845CC91814BD410B1DCD125534A4);
		Dictionary_2_tA2A39478BB40B99FA2F1A7B0B87BE75CB5337E53* L_28 = ___1_ClassOnEventActionList;
		String_t* L_29 = V_2;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_30;
		L_30 = InvokerFuncInvoker1< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_28, L_29);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_31 = L_30;
		G_B9_0 = L_31;
		if (L_31)
		{
			G_B10_0 = L_31;
			goto IL_008c;
		}
	}
	{
		goto IL_0094;
	}

IL_008c:
	{
		il2cpp_codegen_memcpy(L_32, V_6, SizeOf_T_t4C8DCE854147845CC91814BD410B1DCD125534A4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), G_B10_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_32: *(void**)L_32));
	}

IL_0094:
	{
	}

IL_0095:
	{
	}

IL_0096:
	{
		return;
	}
}
// System.Void WeChatWASM.WXSDKManagerHandler::_OnEventCallback<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.String,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WXSDKManagerHandler__OnEventCallback_TisIl2CppFullySharedGenericAny_m4BD479521154E9DC6B673A83A16B7B3D009AFB92_gshared (WXSDKManagerHandler_t0D5D9346DBFB9CC39B975C251D35AA6D1682B725* __this, String_t* ___0_msg, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___1_OnEventAction, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t1ECC1BDCAD84683678BA09B625244C8DA09A5A9C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_T_t1ECC1BDCAD84683678BA09B625244C8DA09A5A9C);
	const Il2CppFullySharedGenericAny L_15 = L_12;
	const Il2CppFullySharedGenericAny L_18 = L_12;
	bool V_0 = false;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t1ECC1BDCAD84683678BA09B625244C8DA09A5A9C);
	memset(V_2, 0, SizeOf_T_t1ECC1BDCAD84683678BA09B625244C8DA09A5A9C);
	{
		String_t* L_0 = ___0_msg;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_9 = ___1_OnEventAction;
		if (L_9)
		{
			goto IL_0032;
		}
	}
	{
		goto IL_003f;
	}

IL_0032:
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_10 = ___1_OnEventAction;
		String_t* L_11 = ___0_msg;
		void* L_13 = UnBox_Any((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 2), L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13)))));
	}

IL_003f:
	{
		goto IL_0058;
	}

IL_0042:
	{
		String_t* L_14 = ___0_msg;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		InvokerActionInvoker2< String_t*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_14, (Il2CppFullySharedGenericAny*)L_15);
		il2cpp_codegen_memcpy(V_2, L_15, SizeOf_T_t1ECC1BDCAD84683678BA09B625244C8DA09A5A9C);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_16 = ___1_OnEventAction;
		if (L_16)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0057;
	}

IL_004f:
	{
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_17 = ___1_OnEventAction;
		il2cpp_codegen_memcpy(L_18, V_2, SizeOf_T_t1ECC1BDCAD84683678BA09B625244C8DA09A5A9C);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_18: *(void**)L_18));
	}

IL_0057:
	{
	}

IL_0058:
	{
	}

IL_0059:
	{
		return;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* XmlListConverter_ToArray_TisIl2CppFullySharedGenericAny_mE842A5B9F83A5858104C85C66B591AD394929357_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
	const Il2CppFullySharedGenericAny L_37 = L_15;
	RuntimeObject* V_0 = NULL;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		void* L_16 = UnBox_Any(L_14, il2cpp_rgctx_data(method->rgctx_data, 2), L_15);
		il2cpp_codegen_memcpy((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_16))), SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_16))));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0047:
	{
		int32_t L_18 = V_3;
		RuntimeObject* L_19 = V_0;
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_001a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_2;
		return L_21;
	}

IL_0052:
	{
		RuntimeObject* L_22 = ___0_list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_23 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_23);
		V_1 = L_23;
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_25 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_28 = V_4;
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				V_5 = L_29;
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_30 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_31 = __this->___atomicConverter_32;
				RuntimeObject* L_32 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeObject* L_35 = ___1_nsResolver;
				RuntimeObject* L_36;
				L_36 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_31, L_32, L_34, L_35);
				void* L_38 = UnBox_Any(L_36, il2cpp_rgctx_data(method->rgctx_data, 2), L_37);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38)))));
			}

IL_0093_1:
			{
				RuntimeObject* L_39 = V_4;
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_39);
				if (L_40)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_41 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42;
		L_42 = InvokerFuncInvoker0< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_41);
		return L_42;
	}
}
// T[] System.Runtime.Serialization.XmlObjectSerializerReadContext::EnsureArraySize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* XmlObjectSerializerReadContext_EnsureArraySize_TisIl2CppFullySharedGenericAny_m81478300957FA373BE16404D546A067CE8F6B32D_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) > ((int32_t)L_1)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_2 = ___1_index;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0048;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ((int32_t)2147483647LL);
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = DataContract_GetClrTypeFullName_m1DD7F24A5238F620D71A4B65BE8389637FA3E42D(L_9, NULL);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		String_t* L_11;
		L_11 = SR_GetString_mCB22EBBC246A223CDDA76C1D8F355262069E2DD4(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral94ADECE30C954CD6685EE98984452C698987E415)), L_7, NULL);
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_12;
		L_12 = XmlObjectSerializer_CreateSerializationException_m14581C5D9FE35E14E819276C06E69548661ED683(L_11, NULL);
		Exception_t* L_13;
		L_13 = ExceptionUtility_ThrowHelperError_mB01429D47ABA81955EC561D8286C63E8C74D5FB6((Exception_t*)L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlObjectSerializerReadContext_EnsureArraySize_TisIl2CppFullySharedGenericAny_m81478300957FA373BE16404D546A067CE8F6B32D_RuntimeMethod_var)));
	}

IL_0048:
	{
		int32_t L_14 = ___1_index;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)1073741823))))
		{
			goto IL_0057;
		}
	}
	{
		G_B6_0 = ((int32_t)2147483647LL);
		goto IL_005a;
	}

IL_0057:
	{
		int32_t L_15 = ___1_index;
		G_B6_0 = ((int32_t)il2cpp_codegen_multiply(L_15, 2));
	}

IL_005a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)G_B6_0);
		V_0 = L_16;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = ___0_array;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = V_0;
		___0_array = L_20;
	}

IL_006f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_array;
		return L_21;
	}
}
// T[] System.Runtime.Serialization.XmlObjectSerializerReadContext::TrimArraySize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* XmlObjectSerializerReadContext_TrimArraySize_TisIl2CppFullySharedGenericAny_m0035CDB9A4878A10B091E85CB09D4D6B65EDA548_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_size, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___1_size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___1_size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_2);
		V_0 = L_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		int32_t L_6 = ___1_size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		___0_array = L_7;
	}

IL_001a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		return L_8;
	}
}
// T System.Runtime.Serialization.XmlObjectSerializerWriteContext::GetDefaultValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlObjectSerializerWriteContext_GetDefaultValue_TisIl2CppFullySharedGenericAny_m8AC7ACE90F9C2F9019C22F3D45DB8F60B86F2D77_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t8EE1BB7A3A63F1F410301342505E31DFFCF7AFD9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t8EE1BB7A3A63F1F410301342505E31DFFCF7AFD9);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t8EE1BB7A3A63F1F410301342505E31DFFCF7AFD9);
	memset(V_0, 0, SizeOf_T_t8EE1BB7A3A63F1F410301342505E31DFFCF7AFD9);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t8EE1BB7A3A63F1F410301342505E31DFFCF7AFD9);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T_t8EE1BB7A3A63F1F410301342505E31DFFCF7AFD9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t8EE1BB7A3A63F1F410301342505E31DFFCF7AFD9);
		return;
	}
}
// System.Boolean System.Runtime.Serialization.XmlObjectSerializerWriteContext::GetHasValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlObjectSerializerWriteContext_GetHasValue_TisIl2CppFullySharedGenericStruct_m6B9D7E74CD3E955A4FB5CBFBE623C886EA9DC798_gshared (/*System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0;
		L_0 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___0_value);
		return L_0;
	}
}
// T System.Runtime.Serialization.XmlObjectSerializerWriteContext::GetNullableValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlObjectSerializerWriteContext_GetNullableValue_TisIl2CppFullySharedGenericStruct_mF71345F5633F0FFA7360C6D134C2ABEDC25D59AF_gshared (/*System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>*/Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339 ___0_value, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t93DC6A92CD6E4E5F0508AF459F10340EC1958239 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t93DC6A92CD6E4E5F0508AF459F10340EC1958239);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)___0_value, (Il2CppFullySharedGenericStruct*)L_0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t93DC6A92CD6E4E5F0508AF459F10340EC1958239);
		return;
	}
}
// System.Void System.Runtime.Serialization.XmlObjectSerializerWriteContext::IncrementCollectionCountGeneric<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Runtime.Serialization.XmlWriterDelegator,System.Collections.Generic.ICollection`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlObjectSerializerWriteContext_IncrementCollectionCountGeneric_TisIl2CppFullySharedGenericAny_mC161F1AFC9902CEC0EE36559136CD264BC61DD1B_gshared (XmlObjectSerializerWriteContext_t9E9ED500D54CAB208A5F262DFC3F1F06DC82CBCE* __this, XmlWriterDelegator_t1E3DF42F5826EBD3E685CC88E36A2743D71CDF44* ___0_xmlWriter, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		XmlWriterDelegator_t1E3DF42F5826EBD3E685CC88E36A2743D71CDF44* L_0 = ___0_xmlWriter;
		RuntimeObject* L_1 = ___1_collection;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0Invoker< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		XmlObjectSerializerWriteContext_IncrementCollectionCount_mAB0DD58798793D0BA76FA2A3EE35172500A89132(__this, L_0, L_2, NULL);
		return;
	}
}
// System.String A.a::A<System.Object>(System.Action`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* a_A_TisRuntimeObject_mD2ADE2B1585C6DD0DF639489876B65AC69FF688A_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_p, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t V_2 = 0;
	String_t* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_p;
		V_4 = (bool)((((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_5 = L_2;
		goto IL_006e;
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = a_A_mF46C9A509E00EAC66E5755C741667687F0CE54CF(NULL);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		memset((&L_5), 0, sizeof(L_5));
		DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201((&L_5), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_6;
		L_6 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_4, L_5, NULL);
		V_1 = L_6;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_8;
		L_8 = Convert_ToInt64_mB8E05FE41BD8996D61DDD3402C93FA7AD654E333(L_7, NULL);
		V_2 = L_8;
		String_t* L_9;
		L_9 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_2), NULL);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_9, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_10, NULL);
		V_3 = L_11;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_12 = ((a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_StaticFields*)il2cpp_codegen_static_fields_for(a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_il2cpp_TypeInfo_var))->___aE_0;
		String_t* L_13 = V_3;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ___0_p;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_12, (RuntimeObject*)L_13, (RuntimeObject*)L_14);
		String_t* L_15 = V_3;
		V_5 = L_15;
		goto IL_006e;
	}

IL_006e:
	{
		String_t* L_16 = V_5;
		return L_16;
	}
}
// System.Void A.a::A<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void a_A_TisRuntimeObject_m2F08583A039A0E65BAC278711CD8E3A6D618B3D3_gshared (String_t* ___0_p, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_4 = NULL;
	{
		String_t* L_0 = ___0_p;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_2 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(JsonMapper_t1D8418D75E295325E817EEBABCF549B289BDD24A_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker1< RuntimeObject*, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_2);
		V_1 = L_3;
		RuntimeObject* L_4 = V_1;
		String_t* L_5 = ((WXBaseResponse_tA0E6AF36BFAA135423A425AA0BB7DF012C0C955E*)L_4)->___callbackId_0;
		V_2 = L_5;
		il2cpp_codegen_runtime_class_init_inline(a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_il2cpp_TypeInfo_var);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_6 = ((a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_StaticFields*)il2cpp_codegen_static_fields_for(a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_il2cpp_TypeInfo_var))->___aE_0;
		String_t* L_7 = V_2;
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_6, (RuntimeObject*)L_7);
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_il2cpp_TypeInfo_var);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_10 = ((a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_StaticFields*)il2cpp_codegen_static_fields_for(a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_il2cpp_TypeInfo_var))->___aE_0;
		String_t* L_11 = V_2;
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_10, (RuntimeObject*)L_11);
		V_4 = ((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)Castclass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 2)));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_13 = V_4;
		RuntimeObject* L_14 = V_1;
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_13, L_14);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_15 = ((a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_StaticFields*)il2cpp_codegen_static_fields_for(a_tC5387008B1D5D714A204B4428329D16ACCB73FF3_il2cpp_TypeInfo_var))->___aE_0;
		String_t* L_16 = V_2;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(39 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_15, (RuntimeObject*)L_16);
	}

IL_0058:
	{
	}

IL_0059:
	{
		return;
	}
}
