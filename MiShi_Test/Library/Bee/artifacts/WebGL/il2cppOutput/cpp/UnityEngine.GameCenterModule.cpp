﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>
struct List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
struct List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>
struct List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>
struct List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>
struct List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// UnityEngine.SocialPlatforms.Impl.Achievement[]
struct AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3;
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.SocialPlatforms.Impl.Leaderboard[]
struct LeaderboardU5BU5D_tA96C54C7D9DD4377FCDDAD4AC15F58EB87E3EE85;
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_tB5F481CB68CBDE785E796E6FE0457D9EA7A5C986;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_t3B0831EC194F0E304AA0073BDAA7B3E90BE13B3F;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t95B1CFEB3094570AFF240C7CDD61A3A5D0169E86;
// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_tF23DFE5CF90A1020C168F5751F7C4F2B628E22E3;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71;
// UnityEngine.SocialPlatforms.Local
struct Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeScope_t20CB388177E885D6B11816946D623907E276F08E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0633FA406EE5C6D2A4B432BAB214619E83A4F1AB;
IL2CPP_EXTERN_C String_t* _stringLiteral06D1853925553B0D92560AE14E0F86CCEE4F2D3B;
IL2CPP_EXTERN_C String_t* _stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C;
IL2CPP_EXTERN_C String_t* _stringLiteral16DE50D6845DC0456CBC705A7B5B0F242B23FEB9;
IL2CPP_EXTERN_C String_t* _stringLiteral1BEFEC8D67AF809C076B612127CC6858F0B152C8;
IL2CPP_EXTERN_C String_t* _stringLiteral204CD4730E030AABFD4D550FFB6155F0D800828C;
IL2CPP_EXTERN_C String_t* _stringLiteral31448ABA874EE7898AF05923EA9E0D6A0CBC4671;
IL2CPP_EXTERN_C String_t* _stringLiteral3339BA9485889E0187AB3945A9D9C3D5F5AC0C57;
IL2CPP_EXTERN_C String_t* _stringLiteral38E4875FEECC8D20B9929E17560AF12047729813;
IL2CPP_EXTERN_C String_t* _stringLiteral390C3E1C7386289EA5001778CA4160D5C3615D77;
IL2CPP_EXTERN_C String_t* _stringLiteral3B091DB990AD09DED1DEF949D7F34A618200E5F6;
IL2CPP_EXTERN_C String_t* _stringLiteral410946CD131353B68F194902EF06C27382525682;
IL2CPP_EXTERN_C String_t* _stringLiteral41FC3BE48B2E746D9491A847749EA372C2D15BBC;
IL2CPP_EXTERN_C String_t* _stringLiteral465927D92AAC92EA5FC0B1FDBE0E81350BF1D1EB;
IL2CPP_EXTERN_C String_t* _stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A;
IL2CPP_EXTERN_C String_t* _stringLiteral532A338814198DC7EBD7894852D984813B359DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral5B615C8D64F050A4B841840469BBCCA764121BFC;
IL2CPP_EXTERN_C String_t* _stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E;
IL2CPP_EXTERN_C String_t* _stringLiteral5FE7915692E0675AD0BF063D16336FF430832152;
IL2CPP_EXTERN_C String_t* _stringLiteral639283D378153782A27162297CA83FA8F8644102;
IL2CPP_EXTERN_C String_t* _stringLiteral63B825085580CF7F50B31C8CDA66E3F2A35C0676;
IL2CPP_EXTERN_C String_t* _stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA;
IL2CPP_EXTERN_C String_t* _stringLiteral6BCAC612B5B27E65B03977EAA66B35CF4A1AB1D9;
IL2CPP_EXTERN_C String_t* _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E;
IL2CPP_EXTERN_C String_t* _stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5;
IL2CPP_EXTERN_C String_t* _stringLiteral7FA05C474609AA83BB3A8CEAFA8D720662984966;
IL2CPP_EXTERN_C String_t* _stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722;
IL2CPP_EXTERN_C String_t* _stringLiteral8822860D5F218FAF5EB925FEC7B29064A2F8BB92;
IL2CPP_EXTERN_C String_t* _stringLiteral90E5ECA0010544717F5352E5F834AE19A36552AC;
IL2CPP_EXTERN_C String_t* _stringLiteral9155E95C91DE2ED2E900EFC273F997363F62D825;
IL2CPP_EXTERN_C String_t* _stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B;
IL2CPP_EXTERN_C String_t* _stringLiteral955A32D3A24F5A74C2D48E037A73187BBC60D851;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral965AF7D2CB13D59B5B3F07DE6F57D3C13C7B6320;
IL2CPP_EXTERN_C String_t* _stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929;
IL2CPP_EXTERN_C String_t* _stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A;
IL2CPP_EXTERN_C String_t* _stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E78AEA14EF8B653B5187A1CA3F2C331FE75671;
IL2CPP_EXTERN_C String_t* _stringLiteralB372F72260A9D69BCC86449B770895C1791FE035;
IL2CPP_EXTERN_C String_t* _stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A1FC17A7FB94D5BE434519D83ED05A6C5D55B5;
IL2CPP_EXTERN_C String_t* _stringLiteralC0F990D386765ACEC5261B12061B46713C2947C9;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24;
IL2CPP_EXTERN_C String_t* _stringLiteralD3E46DE4766DA7A12FC004BB27A0BDB1C12B78A9;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC225E7A04CEBC447A973E9BD05F69075D9B18BD;
IL2CPP_EXTERN_C String_t* _stringLiteralDFEE7C5599A1F9893EC0C7232CD714EAED23B5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralEE7A7FAEF47E15F80147D1762A898C2A543E9457;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFABA1134F66E53549701470F4075C6577B953CCA;
IL2CPP_EXTERN_C String_t* _stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278;
IL2CPP_EXTERN_C String_t* _stringLiteralFEF21D5E5A6E97C1ED420EF67F643132BC501272;
IL2CPP_EXTERN_C String_t* _stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3CE0C98650C97A387C0230CA6A1948E64CF21663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m490686BC047B1AC93CE9E3578C23F565158A0BA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3B3FCF6D37A0383B2CE982B7F2B45A96C5CF1FDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDAEB3F275DBF0BC3DBE2000BF96C4B78CEBA5F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m13649A5037AD48DA1BC057B08E4298871F615C1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9FC92E4A72F2ECB4C47FB9C4FC4A0BE9127ABC62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m54B64E1B1966912B9D7E812183A2235AB4DE201F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72B8FAA10F6050B17C064283221A919013B07134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9B223EE033DF80923355A3A50C6E8499761E5B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9DF1015C982467B8539D73E6A2A3B5F8365757B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC81768866251D38086621E5183E2126FD885C961_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m37CAAC69AD44E3877342547F60136218DDDD6BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFF71F8F67EB8310BCD1AAEB4C669083B84A08494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m1067D6176E83BB88E5AA68D792D6393E518DE4C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m99D90ECBB2E360724D1FFE6B69A6C3999442D181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mC5231C447B770B44441453AE098A315C30956F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF4EBE9F60C788093214C2587541DECDA13641788_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m00D08220BB0FBFE450F57049A4EEFA0898BDF022_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m23072805C6943D45A688FD6F11097CA8AFC14084_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m42603AF3F773C24EEBCCAF48DB31A596CCFBFFB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m59416295F911DEAE5FD7681CF4CD1FF1221370BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD202E1C9A0F8E1BAF2C0B5968B5BD8C3047AB903_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612;
struct AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5;
struct IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3;
struct IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1;
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
struct ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t48670A4A557D138A8C338D0B799AEE0AB575434C 
{
};

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>
struct List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
struct List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>
struct List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LeaderboardU5BU5D_tA96C54C7D9DD4377FCDDAD4AC15F58EB87E3EE85* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>
struct List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>
struct List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9  : public RuntimeObject
{
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Title
	String_t* ___m_Title_0;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Image
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Image_1;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_AchievedDescription
	String_t* ___m_AchievedDescription_2;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_3;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Hidden
	bool ___m_Hidden_4;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Points
	int32_t ___m_Points_5;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
};

// UnityEngine.SocialPlatforms.ActivePlatform
struct ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624  : public RuntimeObject
{
};

// UnityEngine.SocialPlatforms.Local
struct Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile> UnityEngine.SocialPlatforms.Local::m_Friends
	List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* ___m_Friends_1;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile> UnityEngine.SocialPlatforms.Local::m_Users
	List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* ___m_Users_2;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription> UnityEngine.SocialPlatforms.Local::m_AchievementDescriptions
	List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* ___m_AchievementDescriptions_3;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement> UnityEngine.SocialPlatforms.Local::m_Achievements
	List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A* ___m_Achievements_4;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard> UnityEngine.SocialPlatforms.Local::m_Leaderboards
	List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9* ___m_Leaderboards_5;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Local::m_DefaultTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_DefaultTexture_6;
};

// UnityEngine.Social
struct Social_t81FE9092DC7E743150343FDD4F5F68103311491B  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Achievement>
struct Enumerator_t4D84D59CEDFD06F975B6DB6EE89CF06A736E0C92 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
struct Enumerator_tE79F4FF7BC35B8F2D2048E7B65A0C79D8F631261 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// UnityEngine.SocialPlatforms.Range
struct Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 
{
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;
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

// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B  : public RuntimeObject
{
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Completed
	bool ___m_Completed_0;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Hidden
	bool ___m_Hidden_1;
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::m_LastReportedDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_LastReportedDate_2;
	// System.String UnityEngine.SocialPlatforms.Impl.Achievement::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_3;
	// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::<percentCompleted>k__BackingField
	double ___U3CpercentCompletedU3Ek__BackingField_4;
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

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53  : public RuntimeObject
{
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_Date_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue_1;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID_2;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField_4;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField_5;
};

// UnityEngine.SocialPlatforms.TimeScope
struct TimeScope_t20CB388177E885D6B11816946D623907E276F08E 
{
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;
};

// UnityEngine.SocialPlatforms.UserScope
struct UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0 
{
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;
};

// UnityEngine.SocialPlatforms.UserState
struct UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C 
{
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___2;
};

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71  : public RuntimeObject
{
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Loading
	bool ___m_Loading_0;
	// UnityEngine.SocialPlatforms.IScore UnityEngine.SocialPlatforms.Impl.Leaderboard::m_LocalUserScore
	RuntimeObject* ___m_LocalUserScore_1;
	// System.UInt32 UnityEngine.SocialPlatforms.Impl.Leaderboard::m_MaxRange
	uint32_t ___m_MaxRange_2;
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* ___m_Scores_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Title
	String_t* ___m_Title_4;
	// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_UserIDs
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_UserIDs_5;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_7;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 ___U3CrangeU3Ek__BackingField_8;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_9;
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29  : public RuntimeObject
{
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_legacyID
	String_t* ___m_legacyID_2;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_3;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_4;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Image_5;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_gameID
	String_t* ___m_gameID_6;
};

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49  : public MulticastDelegate_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD  : public UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29
{
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___m_Friends_7;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_8;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_9;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>
struct List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
struct List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>
struct List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LeaderboardU5BU5D_tA96C54C7D9DD4377FCDDAD4AC15F58EB87E3EE85* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>
struct List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>
struct List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.SocialPlatforms.Impl.AchievementDescription

// UnityEngine.SocialPlatforms.Impl.AchievementDescription

// UnityEngine.SocialPlatforms.ActivePlatform
struct ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624_StaticFields
{
	// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::_active
	RuntimeObject* ____active_0;
};

// UnityEngine.SocialPlatforms.ActivePlatform

// UnityEngine.SocialPlatforms.Local
struct Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_StaticFields
{
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.Local::m_LocalUser
	LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* ___m_LocalUser_0;
};

// UnityEngine.SocialPlatforms.Local

// UnityEngine.Social

// UnityEngine.Social

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Achievement>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Achievement>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.AchievementDescription>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.AchievementDescription>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// UnityEngine.SocialPlatforms.Range

// UnityEngine.SocialPlatforms.Range

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// UnityEngine.SocialPlatforms.Impl.Achievement

// UnityEngine.SocialPlatforms.Impl.Achievement

// UnityEngine.SocialPlatforms.Impl.Score

// UnityEngine.SocialPlatforms.Impl.Score

// UnityEngine.SocialPlatforms.TimeScope

// UnityEngine.SocialPlatforms.TimeScope

// UnityEngine.SocialPlatforms.UserScope

// UnityEngine.SocialPlatforms.UserScope

// UnityEngine.SocialPlatforms.UserState

// UnityEngine.SocialPlatforms.UserState

// UnityEngine.SocialPlatforms.Impl.Leaderboard

// UnityEngine.SocialPlatforms.Impl.Leaderboard

// UnityEngine.SocialPlatforms.Impl.UserProfile

// UnityEngine.SocialPlatforms.Impl.UserProfile

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>

// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>

// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>

// System.Action`1<System.Boolean>

// System.Action`1<System.Boolean>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.SocialPlatforms.Impl.LocalUser

// UnityEngine.SocialPlatforms.Impl.LocalUser

// UnityEngine.Texture2D

// UnityEngine.Texture2D
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43  : public RuntimeArray
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
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A  : public RuntimeArray
{
	ALIGN_FIELD (8) UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* m_Items[1];

	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1  : public RuntimeArray
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
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5  : public RuntimeArray
{
	ALIGN_FIELD (8) AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* m_Items[1];

	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3  : public RuntimeArray
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
// UnityEngine.SocialPlatforms.Impl.Achievement[]
struct AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612  : public RuntimeArray
{
	ALIGN_FIELD (8) Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* m_Items[1];

	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042  : public RuntimeArray
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
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2  : public RuntimeArray
{
	ALIGN_FIELD (8) Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* m_Items[1];

	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;

// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_get_Instance_mC9DF8265897D79151D3F86D48A73691B6E3AFA06 (const RuntimeMethod* method) ;
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_Active_m54586B347AE1248C646891B24054E71C8DE5DC88 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_m6D2AE6DFC61CEC39842944D970E2B2B5547CBE97 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Local::CreateDummyTexture(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Local_CreateDummyTexture_mA06DF8168D758DBA60FA35526AC22A0E8B06B641 (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Local::PopulateStaticData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_PopulateStaticData_m5A6AD4C9E925F57FEC184828EC650EB5E34E3923 (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_m1A7992E986F32450A1A97409AF772DC3A0F47E44 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_m84D3621386D7E917F7D4AD7D2C00DE8CA8AD278C (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserID_m32F417A48D4FDC4ED180EA2AD92F875996DA3353 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserName_m107512A03197354BAF98514ED92D647F4FC778DA (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetImage_mEBC25331E4B4E201DB02A0442C473829E07D6221 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_image, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)&___0_obj, method);
}
// System.Boolean UnityEngine.SocialPlatforms.Local::VerifyUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Local_VerifyUser_m8AAA9F80FAFDA28FF4026A1532ABD34A4CDD88A1 (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::ToArray()
inline UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* List_1_ToArray_mC5231C447B770B44441453AE098A315C30956F1B (List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)il2cppRetVal;
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetFriends_m369BCB8021FB5A359B11D2ACB2F1CCD3DFBF0F6B (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___0_friends, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>::GetEnumerator()
inline Enumerator_t4D84D59CEDFD06F975B6DB6EE89CF06A736E0C92 List_1_GetEnumerator_m37CAAC69AD44E3877342547F60136218DDDD6BD1 (List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A* __this, const RuntimeMethod* method)
{
	Enumerator_t4D84D59CEDFD06F975B6DB6EE89CF06A736E0C92 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Achievement>::Dispose()
inline void Enumerator_Dispose_m3CE0C98650C97A387C0230CA6A1948E64CF21663 (Enumerator_t4D84D59CEDFD06F975B6DB6EE89CF06A736E0C92* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Achievement>::get_Current()
inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* Enumerator_get_Current_m13649A5037AD48DA1BC057B08E4298871F615C1B_inline (Enumerator_t4D84D59CEDFD06F975B6DB6EE89CF06A736E0C92* __this, const RuntimeMethod* method)
{
	Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::SetCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_SetCompleted_mE342B402331E79D656CBC5E7FE881F69641D1E88 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::SetHidden(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_SetHidden_m9D0CA6D3F8539818DB88E3174AB57D4746B9CDCE (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::SetLastReportedDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_SetLastReportedDate_m0235AF958908983C7B025090C5A4061D27F7B3F3 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_date, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.Achievement>::MoveNext()
inline bool Enumerator_MoveNext_m3B3FCF6D37A0383B2CE982B7F2B45A96C5CF1FDB (Enumerator_t4D84D59CEDFD06F975B6DB6EE89CF06A736E0C92* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::GetEnumerator()
inline Enumerator_tE79F4FF7BC35B8F2D2048E7B65A0C79D8F631261 List_1_GetEnumerator_mFF71F8F67EB8310BCD1AAEB4C669083B84A08494 (List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* __this, const RuntimeMethod* method)
{
	Enumerator_tE79F4FF7BC35B8F2D2048E7B65A0C79D8F631261 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::Dispose()
inline void Enumerator_Dispose_m490686BC047B1AC93CE9E3578C23F565158A0BA2 (Enumerator_tE79F4FF7BC35B8F2D2048E7B65A0C79D8F631261* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::get_Current()
inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* Enumerator_get_Current_m9FC92E4A72F2ECB4C47FB9C4FC4A0BE9127ABC62_inline (Enumerator_tE79F4FF7BC35B8F2D2048E7B65A0C79D8F631261* __this, const RuntimeMethod* method)
{
	AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_mE4B26ACD8E4220F645864036B7F9AD2E7D746B85 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_id, double ___1_percentCompleted, bool ___2_completed, bool ___3_hidden, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_lastReportedDate, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>::Add(T)
inline void List_1_Add_m9B223EE033DF80923355A3A50C6E8499761E5B12_inline (List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A* __this, Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::MoveNext()
inline bool Enumerator_MoveNext_mDAEB3F275DBF0BC3DBE2000BF96C4B78CEBA5F3E (Enumerator_tE79F4FF7BC35B8F2D2048E7B65A0C79D8F631261* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::ToArray()
inline AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* List_1_ToArray_m99D90ECBB2E360724D1FFE6B69A6C3999442D181 (List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)il2cppRetVal;
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(T)
inline void Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67_inline (Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* __this, IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>::ToArray()
inline AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* List_1_ToArray_mF4EBE9F60C788093214C2587541DECDA13641788 (List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612*)il2cppRetVal;
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(T)
inline void Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65_inline (Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* __this, IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.Local::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Local_get_localUser_m21888B1B23DBA198D651B239D51DBCA525474F9E (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m68F283D40689EDF4D5854FB6570323AFC04E2303 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_name, String_t* ___1_id, bool ___2_friend, int32_t ___3_state, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___4_image, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::Add(T)
inline void List_1_Add_mC81768866251D38086621E5183E2126FD885C961_inline (List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* __this, UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription__ctor_mB5F9A234974FEC3BB146511929791A1D8846E2EF (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, String_t* ___0_id, String_t* ___1_title, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_image, String_t* ___3_achievedDescription, String_t* ___4_unachievedDescription, bool ___5_hidden, int32_t ___6_points, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::Add(T)
inline void List_1_Add_m9DF1015C982467B8539D73E6A2A3B5F8365757B6_inline (List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* __this, AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_mFB0608CFF4A090982904F495B84A91DC0FAC5B73 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_mF9ECC4ECBF137AF4C5AD6A2338AB8786D86EADF2 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, String_t* ___0_title, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::.ctor()
inline void List_1__ctor_mD202E1C9A0F8E1BAF2C0B5968B5BD8C3047AB903 (List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.DateTime System.DateTime::AddDays(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_leaderboardID, int64_t ___1_value, String_t* ___2_userID, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_date, String_t* ___4_formattedValue, int32_t ___5_rank, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::Add(T)
inline void List_1_Add_m72B8FAA10F6050B17C064283221A919013B07134_inline (List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3* __this, Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::ToArray()
inline ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* List_1_ToArray_m1067D6176E83BB88E5AA68D792D6393E518DE4C5 (List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)il2cppRetVal;
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m0ACEEFFAD67AE7F7DC644DD034F5F2C431265943 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* ___0_scores, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>::Add(T)
inline void List_1_Add_m54B64E1B1966912B9D7E812183A2235AB4DE201F_inline (List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9* __this, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::.ctor()
inline void List_1__ctor_m59416295F911DEAE5FD7681CF4CD1FF1221370BE (List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::.ctor()
inline void List_1__ctor_m00D08220BB0FBFE450F57049A4EEFA0898BDF022 (List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>::.ctor()
inline void List_1__ctor_m42603AF3F773C24EEBCCAF48DB31A596CCFBFFB3 (List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>::.ctor()
inline void List_1__ctor_m23072805C6943D45A688FD6F11097CA8AFC14084 (List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_SelectSocialPlatform_mEA0704F85B0FD046DE2E4069B1EC413BD835BCA7 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Local::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local__ctor_m223523E0079C7C184D1B804092E5C0A61B0E110E (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B (Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6* __this, int32_t ___0_fromValue, int32_t ___1_valueCount, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m12A26F8BDE41F4B55A645BB1D4038E81A877E680 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m3649D0E00F816E2712CA936DDBC55ADBC336BBF1 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_name, String_t* ___1_teamId, String_t* ___2_gameId, bool ___3_friend, int32_t ___4_state, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___5_image, const RuntimeMethod* method) ;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m16A4060A0C7E4480F68D6915E6FAB15EAE973336 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_mDAAF12B06B939DDAAB6F10E8CB40B21C48A94F30 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m353D113C22BFA80F0E9A1DBEC40E4EF4984AC4EC (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_mF5F8CF4E71CD46ADBCC58E5A3AFA715B3E5F9D4A (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_completed_m5A625BD69E129E468D83A98CF4CAA4AA28E0B2BF (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_hidden_m343030FB2BE6636313A09DEDCB02BE0ADB5E3A8E (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) ;
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Achievement_get_lastReportedDate_mEACB3BADB0996AF967B26378FA48BC964E68F091 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_m196C3AEC0457C25D95B16309E12AB246D054CB67 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_m4EB337E95791A795A79F2C75F909E64747B682B5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_mE98806AB14F770F2A9CBA7E1024052FA259D43E5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_m222DBD457CA6F5629758C211668917507B316DB3 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_mA35899496122E49F7333BB5F5B5B6AE0E68F017E (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mCA767E4E990F5CB9657921695D4983D721BEA751 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_leaderboardID, int64_t ___1_value, const RuntimeMethod* method) ;
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) ;
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154 (uint32_t* __this, const RuntimeMethod* method) ;
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) ;
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_Active_m54586B347AE1248C646891B24054E71C8DE5DC88 (const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ActivePlatform_get_Instance_mC9DF8265897D79151D3F86D48A73691B6E3AFA06(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Social_get_localUser_m7ED6D68F8CBFB7930562BE54601520AEED1D0CE4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = Social_get_Active_m54586B347AE1248C646891B24054E71C8DE5DC88(NULL);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.ISocialPlatform::get_localUser() */, ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Social::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ReportProgress_m3BA1C646169495DA260682E4C0ED8217C406A85E (String_t* ___0_achievementID, double ___1_progress, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___2_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Social_get_Active_m54586B347AE1248C646891B24054E71C8DE5DC88(NULL);
		String_t* L_1 = ___0_achievementID;
		double L_2 = ___1_progress;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___2_callback;
		InterfaceActionInvoker3< String_t*, double, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(1 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>) */, ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.Social::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_LoadAchievementDescriptions_mC7A3A47337F2048C10FC3D2B6F98ECB45F296EED (Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Social_get_Active_m54586B347AE1248C646891B24054E71C8DE5DC88(NULL);
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* L_1 = ___0_callback;
		InterfaceActionInvoker1< Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* >::Invoke(2 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>) */, ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Social::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_LoadAchievements_m35B0E6E5F4F06710F6EF09C78B157E89E2729672 (Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Social_get_Active_m54586B347AE1248C646891B24054E71C8DE5DC88(NULL);
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* L_1 = ___0_callback;
		InterfaceActionInvoker1< Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* >::Invoke(3 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>) */, ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Social::ShowAchievementsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ShowAchievementsUI_mEDAD5CD6256BAF4494D24A44243F00C918735B0A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Social_get_Active_m54586B347AE1248C646891B24054E71C8DE5DC88(NULL);
		InterfaceActionInvoker0::Invoke(4 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ShowAchievementsUI() */, ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void UnityEngine.Social::ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Social_ShowLeaderboardUI_m3C925568256ECA8A80A014F535453857DF8A1A8A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Social_get_Active_m54586B347AE1248C646891B24054E71C8DE5DC88(NULL);
		InterfaceActionInvoker0::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ShowLeaderboardUI() */, ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var, L_0);
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
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.Local::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Local_get_localUser_m21888B1B23DBA198D651B239D51DBCA525474F9E (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_0 = ((Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_StaticFields*)il2cpp_codegen_static_fields_for(Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_il2cpp_TypeInfo_var))->___m_LocalUser_0;
		V_0 = (bool)((((RuntimeObject*)(LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_2 = (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD*)il2cpp_codegen_object_new(LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var);
		LocalUser__ctor_m6D2AE6DFC61CEC39842944D970E2B2B5547CBE97(L_2, NULL);
		((Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_StaticFields*)il2cpp_codegen_static_fields_for(Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_il2cpp_TypeInfo_var))->___m_LocalUser_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_StaticFields*)il2cpp_codegen_static_fields_for(Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_il2cpp_TypeInfo_var))->___m_LocalUser_0), (void*)L_2);
	}

IL_0017:
	{
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_3 = ((Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_StaticFields*)il2cpp_codegen_static_fields_for(Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_il2cpp_TypeInfo_var))->___m_LocalUser_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m9AA1C369A6AF1612CB03D823870621BE7A1C0155 (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, RuntimeObject* ___0_user, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465927D92AAC92EA5FC0B1FDBE0E81350BF1D1EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722);
		s_Il2CppMethodInitialized = true;
	}
	LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = ___0_user;
		V_0 = ((LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD*)CastclassClass((RuntimeObject*)L_0, LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = Local_CreateDummyTexture_mA06DF8168D758DBA60FA35526AC22A0E8B06B641(__this, ((int32_t)32), ((int32_t)32), NULL);
		__this->___m_DefaultTexture_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DefaultTexture_6), (void*)L_1);
		Local_PopulateStaticData_m5A6AD4C9E925F57FEC184828EC650EB5E34E3923(__this, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_2 = V_0;
		LocalUser_SetAuthenticated_m1A7992E986F32450A1A97409AF772DC3A0F47E44(L_2, (bool)1, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_3 = V_0;
		LocalUser_SetUnderage_m84D3621386D7E917F7D4AD7D2C00DE8CA8AD278C(L_3, (bool)0, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_4 = V_0;
		UserProfile_SetUserID_m32F417A48D4FDC4ED180EA2AD92F875996DA3353(L_4, _stringLiteral8739AB73E27D444291AAFE563DFBA8832AD5D722, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_5 = V_0;
		UserProfile_SetUserName_m107512A03197354BAF98514ED92D647F4FC778DA(L_5, _stringLiteral465927D92AAC92EA5FC0B1FDBE0E81350BF1D1EB, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* L_6 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_DefaultTexture_6;
		UserProfile_SetImage_mEBC25331E4B4E201DB02A0442C473829E07D6221(L_6, L_7, NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = ___1_callback;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = ___1_callback;
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_10, (bool)1, NULL);
	}

IL_0064:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m36055F65FF0477924DFBEFF9264FB29AA042C30A (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, RuntimeObject* ___0_user, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mC5231C447B770B44441453AE098A315C30956F1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_1 = NULL;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = Local_VerifyUser_m8AAA9F80FAFDA28FF4026A1532ABD34A4CDD88A1(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0039;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_user;
		List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* L_3 = __this->___m_Friends_1;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_4;
		L_4 = List_1_ToArray_mC5231C447B770B44441453AE098A315C30956F1B(L_3, List_1_ToArray_mC5231C447B770B44441453AE098A315C30956F1B_RuntimeMethod_var);
		V_1 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)L_4;
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_5 = V_1;
		LocalUser_SetFriends_m369BCB8021FB5A359B11D2ACB2F1CCD3DFBF0F6B(((LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD*)CastclassClass((RuntimeObject*)L_2, LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var)), L_5, NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = ___1_callback;
		V_2 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = ___1_callback;
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_8, (bool)1, NULL);
	}

IL_0039:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_ReportProgress_mC145E69B11D5093F1F6A3FC62F1EBEC901994310 (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, String_t* ___0_id, double ___1_progress, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___2_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3CE0C98650C97A387C0230CA6A1948E64CF21663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m490686BC047B1AC93CE9E3578C23F565158A0BA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3B3FCF6D37A0383B2CE982B7F2B45A96C5CF1FDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDAEB3F275DBF0BC3DBE2000BF96C4B78CEBA5F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13649A5037AD48DA1BC057B08E4298871F615C1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9FC92E4A72F2ECB4C47FB9C4FC4A0BE9127ABC62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9B223EE033DF80923355A3A50C6E8499761E5B12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m37CAAC69AD44E3877342547F60136218DDDD6BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFF71F8F67EB8310BCD1AAEB4C669083B84A08494_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFEE7C5599A1F9893EC0C7232CD714EAED23B5DF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t4D84D59CEDFD06F975B6DB6EE89CF06A736E0C92 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Enumerator_tE79F4FF7BC35B8F2D2048E7B65A0C79D8F631261 V_6;
	memset((&V_6), 0, sizeof(V_6));
	AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B7_0 = 0;
	{
		bool L_0;
		L_0 = Local_VerifyUser_m8AAA9F80FAFDA28FF4026A1532ABD34A4CDD88A1(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0165;
	}

IL_0013:
	{
		List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A* L_2 = __this->___m_Achievements_4;
		Enumerator_t4D84D59CEDFD06F975B6DB6EE89CF06A736E0C92 L_3;
		L_3 = List_1_GetEnumerator_m37CAAC69AD44E3877342547F60136218DDDD6BD1(L_2, List_1_GetEnumerator_m37CAAC69AD44E3877342547F60136218DDDD6BD1_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ac:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3CE0C98650C97A387C0230CA6A1948E64CF21663((&V_1), Enumerator_Dispose_m3CE0C98650C97A387C0230CA6A1948E64CF21663_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009e_1;
			}

IL_0022_1:
			{
				Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_4;
				L_4 = Enumerator_get_Current_m13649A5037AD48DA1BC057B08E4298871F615C1B_inline((&V_1), Enumerator_get_Current_m13649A5037AD48DA1BC057B08E4298871F615C1B_RuntimeMethod_var);
				V_2 = L_4;
				Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_5 = V_2;
				String_t* L_6;
				L_6 = Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6_inline(L_5, NULL);
				String_t* L_7 = ___0_id;
				bool L_8;
				L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
				if (!L_8)
				{
					goto IL_0047_1;
				}
			}
			{
				Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_9 = V_2;
				double L_10;
				L_10 = Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860_inline(L_9, NULL);
				double L_11 = ___1_progress;
				G_B7_0 = ((((int32_t)((!(((double)L_10) <= ((double)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				goto IL_0048_1;
			}

IL_0047_1:
			{
				G_B7_0 = 0;
			}

IL_0048_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_009d_1;
				}
			}
			{
				double L_13 = ___1_progress;
				V_4 = (bool)((((int32_t)((!(((double)L_13) >= ((double)(100.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_14 = V_4;
				if (!L_14)
				{
					goto IL_006a_1;
				}
			}
			{
				Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_15 = V_2;
				Achievement_SetCompleted_mE342B402331E79D656CBC5E7FE881F69641D1E88(L_15, (bool)1, NULL);
			}

IL_006a_1:
			{
				Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_16 = V_2;
				Achievement_SetHidden_m9D0CA6D3F8539818DB88E3174AB57D4746B9CDCE(L_16, (bool)0, NULL);
				Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_17 = V_2;
				il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_18;
				L_18 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
				Achievement_SetLastReportedDate_m0235AF958908983C7B025090C5A4061D27F7B3F3(L_17, L_18, NULL);
				Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_19 = V_2;
				double L_20 = ___1_progress;
				Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline(L_19, L_20, NULL);
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_21 = ___2_callback;
				V_5 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_22 = V_5;
				if (!L_22)
				{
					goto IL_0098_1;
				}
			}
			{
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_23 = ___2_callback;
				Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_23, (bool)1, NULL);
			}

IL_0098_1:
			{
				goto IL_0165;
			}

IL_009d_1:
			{
			}

IL_009e_1:
			{
				bool L_24;
				L_24 = Enumerator_MoveNext_m3B3FCF6D37A0383B2CE982B7F2B45A96C5CF1FDB((&V_1), Enumerator_MoveNext_m3B3FCF6D37A0383B2CE982B7F2B45A96C5CF1FDB_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_00bb;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bb:
	{
		List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* L_25 = __this->___m_AchievementDescriptions_3;
		Enumerator_tE79F4FF7BC35B8F2D2048E7B65A0C79D8F631261 L_26;
		L_26 = List_1_GetEnumerator_mFF71F8F67EB8310BCD1AAEB4C669083B84A08494(L_25, List_1_GetEnumerator_mFF71F8F67EB8310BCD1AAEB4C669083B84A08494_RuntimeMethod_var);
		V_6 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0139:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m490686BC047B1AC93CE9E3578C23F565158A0BA2((&V_6), Enumerator_Dispose_m490686BC047B1AC93CE9E3578C23F565158A0BA2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_012e_1;
			}

IL_00cb_1:
			{
				AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* L_27;
				L_27 = Enumerator_get_Current_m9FC92E4A72F2ECB4C47FB9C4FC4A0BE9127ABC62_inline((&V_6), Enumerator_get_Current_m9FC92E4A72F2ECB4C47FB9C4FC4A0BE9127ABC62_RuntimeMethod_var);
				V_7 = L_27;
				AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* L_28 = V_7;
				String_t* L_29;
				L_29 = AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7_inline(L_28, NULL);
				String_t* L_30 = ___0_id;
				bool L_31;
				L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, L_30, NULL);
				V_8 = L_31;
				bool L_32 = V_8;
				if (!L_32)
				{
					goto IL_012d_1;
				}
			}
			{
				double L_33 = ___1_progress;
				V_9 = (bool)((((int32_t)((!(((double)L_33) >= ((double)(100.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				String_t* L_34 = ___0_id;
				double L_35 = ___1_progress;
				bool L_36 = V_9;
				il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
				DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_37;
				L_37 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
				Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_38 = (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B*)il2cpp_codegen_object_new(Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var);
				Achievement__ctor_mE4B26ACD8E4220F645864036B7F9AD2E7D746B85(L_38, L_34, L_35, L_36, (bool)0, L_37, NULL);
				V_10 = L_38;
				List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A* L_39 = __this->___m_Achievements_4;
				Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* L_40 = V_10;
				List_1_Add_m9B223EE033DF80923355A3A50C6E8499761E5B12_inline(L_39, L_40, List_1_Add_m9B223EE033DF80923355A3A50C6E8499761E5B12_RuntimeMethod_var);
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_41 = ___2_callback;
				V_11 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_41) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_42 = V_11;
				if (!L_42)
				{
					goto IL_012b_1;
				}
			}
			{
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_43 = ___2_callback;
				Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_43, (bool)1, NULL);
			}

IL_012b_1:
			{
				goto IL_0165;
			}

IL_012d_1:
			{
			}

IL_012e_1:
			{
				bool L_44;
				L_44 = Enumerator_MoveNext_mDAEB3F275DBF0BC3DBE2000BF96C4B78CEBA5F3E((&V_6), Enumerator_MoveNext_mDAEB3F275DBF0BC3DBE2000BF96C4B78CEBA5F3E_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_00cb_1;
				}
			}
			{
				goto IL_0148;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0148:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralDFEE7C5599A1F9893EC0C7232CD714EAED23B5DF, NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_45 = ___2_callback;
		V_12 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_46 = V_12;
		if (!L_46)
		{
			goto IL_0165;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_47 = ___2_callback;
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_47, (bool)0, NULL);
	}

IL_0165:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_LoadAchievementDescriptions_m04A58F7097A477763E769B7AA3FDFBAFAEF6FCAB (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m99D90ECBB2E360724D1FFE6B69A6C3999442D181_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* V_2 = NULL;
	{
		bool L_0;
		L_0 = Local_VerifyUser_m8AAA9F80FAFDA28FF4026A1532ABD34A4CDD88A1(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002c;
	}

IL_0010:
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* L_2 = ___0_callback;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49* L_4 = ___0_callback;
		List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* L_5 = __this->___m_AchievementDescriptions_3;
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_6;
		L_6 = List_1_ToArray_m99D90ECBB2E360724D1FFE6B69A6C3999442D181(L_5, List_1_ToArray_m99D90ECBB2E360724D1FFE6B69A6C3999442D181_RuntimeMethod_var);
		V_2 = (IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1*)L_6;
		IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* L_7 = V_2;
		Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67_inline(L_4, L_7, NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_LoadAchievements_mF22697CB111F6C8EEE50EF9930A3DAF9CD7B171B (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF4EBE9F60C788093214C2587541DECDA13641788_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* V_2 = NULL;
	{
		bool L_0;
		L_0 = Local_VerifyUser_m8AAA9F80FAFDA28FF4026A1532ABD34A4CDD88A1(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_002c;
	}

IL_0010:
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* L_2 = ___0_callback;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5* L_4 = ___0_callback;
		List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A* L_5 = __this->___m_Achievements_4;
		AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* L_6;
		L_6 = List_1_ToArray_mF4EBE9F60C788093214C2587541DECDA13641788(L_5, List_1_ToArray_mF4EBE9F60C788093214C2587541DECDA13641788_RuntimeMethod_var);
		V_2 = (IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3*)L_6;
		IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* L_7 = V_2;
		Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65_inline(L_4, L_7, NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::ShowAchievementsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_ShowAchievementsUI_m34D24AA3B617E576DB627EA37902094CEAE11B5B (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90E5ECA0010544717F5352E5F834AE19A36552AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral90E5ECA0010544717F5352E5F834AE19A36552AC, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_ShowLeaderboardUI_m5A0220A033FFFFF9281D58D7067ACB1616A200B6 (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63B825085580CF7F50B31C8CDA66E3F2A35C0676);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral63B825085580CF7F50B31C8CDA66E3F2A35C0676, NULL);
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Local::VerifyUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Local_VerifyUser_m8AAA9F80FAFDA28FF4026A1532ABD34A4CDD88A1 (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0;
		L_0 = Local_get_localUser_m21888B1B23DBA198D651B239D51DBCA525474F9E(__this, NULL);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA, NULL);
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_0023:
	{
		V_1 = (bool)1;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::PopulateStaticData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local_PopulateStaticData_m5A6AD4C9E925F57FEC184828EC650EB5E34E3923 (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m54B64E1B1966912B9D7E812183A2235AB4DE201F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72B8FAA10F6050B17C064283221A919013B07134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9DF1015C982467B8539D73E6A2A3B5F8365757B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC81768866251D38086621E5183E2126FD885C961_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m1067D6176E83BB88E5AA68D792D6393E518DE4C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD202E1C9A0F8E1BAF2C0B5968B5BD8C3047AB903_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0633FA406EE5C6D2A4B432BAB214619E83A4F1AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D1853925553B0D92560AE14E0F86CCEE4F2D3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DE50D6845DC0456CBC705A7B5B0F242B23FEB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BEFEC8D67AF809C076B612127CC6858F0B152C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral204CD4730E030AABFD4D550FFB6155F0D800828C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31448ABA874EE7898AF05923EA9E0D6A0CBC4671);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3339BA9485889E0187AB3945A9D9C3D5F5AC0C57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38E4875FEECC8D20B9929E17560AF12047729813);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral390C3E1C7386289EA5001778CA4160D5C3615D77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B091DB990AD09DED1DEF949D7F34A618200E5F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41FC3BE48B2E746D9491A847749EA372C2D15BBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral532A338814198DC7EBD7894852D984813B359DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B615C8D64F050A4B841840469BBCCA764121BFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral639283D378153782A27162297CA83FA8F8644102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BCAC612B5B27E65B03977EAA66B35CF4A1AB1D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FA05C474609AA83BB3A8CEAFA8D720662984966);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8822860D5F218FAF5EB925FEC7B29064A2F8BB92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9155E95C91DE2ED2E900EFC273F997363F62D825);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral955A32D3A24F5A74C2D48E037A73187BBC60D851);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral965AF7D2CB13D59B5B3F07DE6F57D3C13C7B6320);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E78AEA14EF8B653B5187A1CA3F2C331FE75671);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB372F72260A9D69BCC86449B770895C1791FE035);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0A1FC17A7FB94D5BE434519D83ED05A6C5D55B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0F990D386765ACEC5261B12061B46713C2947C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3E46DE4766DA7A12FC004BB27A0BDB1C12B78A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC225E7A04CEBC447A973E9BD05F69075D9B18BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE7A7FAEF47E15F80147D1762A898C2A543E9457);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEF21D5E5A6E97C1ED420EF67F643132BC501272);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* V_0 = NULL;
	List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3* V_1 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_3 = NULL;
	{
		List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* L_0 = __this->___m_Friends_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = __this->___m_DefaultTexture_6;
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* L_2 = (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29*)il2cpp_codegen_object_new(UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var);
		UserProfile__ctor_m68F283D40689EDF4D5854FB6570323AFC04E2303(L_2, _stringLiteral6BCAC612B5B27E65B03977EAA66B35CF4A1AB1D9, _stringLiteralFEF21D5E5A6E97C1ED420EF67F643132BC501272, (bool)1, 0, L_1, NULL);
		List_1_Add_mC81768866251D38086621E5183E2126FD885C961_inline(L_0, L_2, List_1_Add_mC81768866251D38086621E5183E2126FD885C961_RuntimeMethod_var);
		List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* L_3 = __this->___m_Friends_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___m_DefaultTexture_6;
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* L_5 = (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29*)il2cpp_codegen_object_new(UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var);
		UserProfile__ctor_m68F283D40689EDF4D5854FB6570323AFC04E2303(L_5, _stringLiteralB372F72260A9D69BCC86449B770895C1791FE035, _stringLiteralC0A1FC17A7FB94D5BE434519D83ED05A6C5D55B5, (bool)1, 0, L_4, NULL);
		List_1_Add_mC81768866251D38086621E5183E2126FD885C961_inline(L_3, L_5, List_1_Add_mC81768866251D38086621E5183E2126FD885C961_RuntimeMethod_var);
		List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* L_6 = __this->___m_Friends_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_DefaultTexture_6;
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* L_8 = (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29*)il2cpp_codegen_object_new(UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var);
		UserProfile__ctor_m68F283D40689EDF4D5854FB6570323AFC04E2303(L_8, _stringLiteralB1E78AEA14EF8B653B5187A1CA3F2C331FE75671, _stringLiteral3339BA9485889E0187AB3945A9D9C3D5F5AC0C57, (bool)1, 0, L_7, NULL);
		List_1_Add_mC81768866251D38086621E5183E2126FD885C961_inline(L_6, L_8, List_1_Add_mC81768866251D38086621E5183E2126FD885C961_RuntimeMethod_var);
		List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* L_9 = __this->___m_Users_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_DefaultTexture_6;
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* L_11 = (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29*)il2cpp_codegen_object_new(UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var);
		UserProfile__ctor_m68F283D40689EDF4D5854FB6570323AFC04E2303(L_11, _stringLiteral1BEFEC8D67AF809C076B612127CC6858F0B152C8, _stringLiteral31448ABA874EE7898AF05923EA9E0D6A0CBC4671, (bool)0, 3, L_10, NULL);
		List_1_Add_mC81768866251D38086621E5183E2126FD885C961_inline(L_9, L_11, List_1_Add_mC81768866251D38086621E5183E2126FD885C961_RuntimeMethod_var);
		List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* L_12 = __this->___m_Users_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = __this->___m_DefaultTexture_6;
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* L_14 = (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29*)il2cpp_codegen_object_new(UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var);
		UserProfile__ctor_m68F283D40689EDF4D5854FB6570323AFC04E2303(L_14, _stringLiteral5B615C8D64F050A4B841840469BBCCA764121BFC, _stringLiteralEE7A7FAEF47E15F80147D1762A898C2A543E9457, (bool)0, 3, L_13, NULL);
		List_1_Add_mC81768866251D38086621E5183E2126FD885C961_inline(L_12, L_14, List_1_Add_mC81768866251D38086621E5183E2126FD885C961_RuntimeMethod_var);
		List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* L_15 = __this->___m_AchievementDescriptions_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = __this->___m_DefaultTexture_6;
		AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* L_17 = (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9*)il2cpp_codegen_object_new(AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_mB5F9A234974FEC3BB146511929791A1D8846E2EF(L_17, _stringLiteral38E4875FEECC8D20B9929E17560AF12047729813, _stringLiteral3B091DB990AD09DED1DEF949D7F34A618200E5F6, L_16, _stringLiteral955A32D3A24F5A74C2D48E037A73187BBC60D851, _stringLiteralC0F990D386765ACEC5261B12061B46713C2947C9, (bool)0, ((int32_t)10), NULL);
		List_1_Add_m9DF1015C982467B8539D73E6A2A3B5F8365757B6_inline(L_15, L_17, List_1_Add_m9DF1015C982467B8539D73E6A2A3B5F8365757B6_RuntimeMethod_var);
		List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* L_18 = __this->___m_AchievementDescriptions_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = __this->___m_DefaultTexture_6;
		AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* L_20 = (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9*)il2cpp_codegen_object_new(AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_mB5F9A234974FEC3BB146511929791A1D8846E2EF(L_20, _stringLiteral0633FA406EE5C6D2A4B432BAB214619E83A4F1AB, _stringLiteral06D1853925553B0D92560AE14E0F86CCEE4F2D3B, L_19, _stringLiteral532A338814198DC7EBD7894852D984813B359DF3, _stringLiteralDC225E7A04CEBC447A973E9BD05F69075D9B18BD, (bool)0, ((int32_t)20), NULL);
		List_1_Add_m9DF1015C982467B8539D73E6A2A3B5F8365757B6_inline(L_18, L_20, List_1_Add_m9DF1015C982467B8539D73E6A2A3B5F8365757B6_RuntimeMethod_var);
		List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* L_21 = __this->___m_AchievementDescriptions_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_22 = __this->___m_DefaultTexture_6;
		AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* L_23 = (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9*)il2cpp_codegen_object_new(AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_mB5F9A234974FEC3BB146511929791A1D8846E2EF(L_23, _stringLiteral41FC3BE48B2E746D9491A847749EA372C2D15BBC, _stringLiteral9155E95C91DE2ED2E900EFC273F997363F62D825, L_22, _stringLiteral390C3E1C7386289EA5001778CA4160D5C3615D77, _stringLiteral965AF7D2CB13D59B5B3F07DE6F57D3C13C7B6320, (bool)0, ((int32_t)15), NULL);
		List_1_Add_m9DF1015C982467B8539D73E6A2A3B5F8365757B6_inline(L_21, L_23, List_1_Add_m9DF1015C982467B8539D73E6A2A3B5F8365757B6_RuntimeMethod_var);
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_24 = (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71*)il2cpp_codegen_object_new(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var);
		Leaderboard__ctor_mFB0608CFF4A090982904F495B84A91DC0FAC5B73(L_24, NULL);
		V_0 = L_24;
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_25 = V_0;
		Leaderboard_SetTitle_mF9ECC4ECBF137AF4C5AD6A2338AB8786D86EADF2(L_25, _stringLiteralD3E46DE4766DA7A12FC004BB27A0BDB1C12B78A9, NULL);
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_26 = V_0;
		Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719_inline(L_26, _stringLiteral639283D378153782A27162297CA83FA8F8644102, NULL);
		List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3* L_27 = (List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3*)il2cpp_codegen_object_new(List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3_il2cpp_TypeInfo_var);
		List_1__ctor_mD202E1C9A0F8E1BAF2C0B5968B5BD8C3047AB903(L_27, List_1__ctor_mD202E1C9A0F8E1BAF2C0B5968B5BD8C3047AB903_RuntimeMethod_var);
		V_1 = L_27;
		List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3* L_28 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29;
		L_29 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_2 = L_29;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_30;
		L_30 = DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B((&V_2), (-1.0), NULL);
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* L_31 = (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53*)il2cpp_codegen_object_new(Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31(L_31, _stringLiteral639283D378153782A27162297CA83FA8F8644102, ((int64_t)((int32_t)300)), _stringLiteralFEF21D5E5A6E97C1ED420EF67F643132BC501272, L_30, _stringLiteral8822860D5F218FAF5EB925FEC7B29064A2F8BB92, 1, NULL);
		List_1_Add_m72B8FAA10F6050B17C064283221A919013B07134_inline(L_28, L_31, List_1_Add_m72B8FAA10F6050B17C064283221A919013B07134_RuntimeMethod_var);
		List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3* L_32 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_33;
		L_33 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_2 = L_33;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_34;
		L_34 = DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B((&V_2), (-1.0), NULL);
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* L_35 = (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53*)il2cpp_codegen_object_new(Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31(L_35, _stringLiteral639283D378153782A27162297CA83FA8F8644102, ((int64_t)((int32_t)255)), _stringLiteralC0A1FC17A7FB94D5BE434519D83ED05A6C5D55B5, L_34, _stringLiteral204CD4730E030AABFD4D550FFB6155F0D800828C, 2, NULL);
		List_1_Add_m72B8FAA10F6050B17C064283221A919013B07134_inline(L_32, L_35, List_1_Add_m72B8FAA10F6050B17C064283221A919013B07134_RuntimeMethod_var);
		List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3* L_36 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_37;
		L_37 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_2 = L_37;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_38;
		L_38 = DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B((&V_2), (-1.0), NULL);
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* L_39 = (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53*)il2cpp_codegen_object_new(Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31(L_39, _stringLiteral639283D378153782A27162297CA83FA8F8644102, ((int64_t)((int32_t)55)), _stringLiteral3339BA9485889E0187AB3945A9D9C3D5F5AC0C57, L_38, _stringLiteral16DE50D6845DC0456CBC705A7B5B0F242B23FEB9, 3, NULL);
		List_1_Add_m72B8FAA10F6050B17C064283221A919013B07134_inline(L_36, L_39, List_1_Add_m72B8FAA10F6050B17C064283221A919013B07134_RuntimeMethod_var);
		List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3* L_40 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_41;
		L_41 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_2 = L_41;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_42;
		L_42 = DateTime_AddDays_m9DC06105845A82FEAF697D5E30308ABD49E5721B((&V_2), (-1.0), NULL);
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* L_43 = (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53*)il2cpp_codegen_object_new(Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31(L_43, _stringLiteral639283D378153782A27162297CA83FA8F8644102, ((int64_t)((int32_t)10)), _stringLiteral31448ABA874EE7898AF05923EA9E0D6A0CBC4671, L_42, _stringLiteral7FA05C474609AA83BB3A8CEAFA8D720662984966, 4, NULL);
		List_1_Add_m72B8FAA10F6050B17C064283221A919013B07134_inline(L_40, L_43, List_1_Add_m72B8FAA10F6050B17C064283221A919013B07134_RuntimeMethod_var);
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_44 = V_0;
		List_1_t6198832B6D9E5209B3B5F2D34E66891B057AF8E3* L_45 = V_1;
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_46;
		L_46 = List_1_ToArray_m1067D6176E83BB88E5AA68D792D6393E518DE4C5(L_45, List_1_ToArray_m1067D6176E83BB88E5AA68D792D6393E518DE4C5_RuntimeMethod_var);
		V_3 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_46;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_47 = V_3;
		Leaderboard_SetScores_m0ACEEFFAD67AE7F7DC644DD034F5F2C431265943(L_44, L_47, NULL);
		List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9* L_48 = __this->___m_Leaderboards_5;
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* L_49 = V_0;
		List_1_Add_m54B64E1B1966912B9D7E812183A2235AB4DE201F_inline(L_48, L_49, List_1_Add_m54B64E1B1966912B9D7E812183A2235AB4DE201F_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Local::CreateDummyTexture(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Local_CreateDummyTexture_mA06DF8168D758DBA60FA35526AC22A0E8B06B641 (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_6 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		int32_t L_0 = ___0_width;
		int32_t L_1 = ___1_height;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0044;
	}

IL_000d:
	{
		V_2 = 0;
		goto IL_0035;
	}

IL_0012:
	{
		int32_t L_3 = V_2;
		int32_t L_4 = V_1;
		if ((((int32_t)((int32_t)(L_3&L_4))) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		G_B5_0 = L_5;
		goto IL_0025;
	}

IL_0020:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		G_B5_0 = L_6;
	}

IL_0025:
	{
		V_3 = G_B5_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_3;
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_7, L_8, L_9, L_10, NULL);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0035:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_width;
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0044:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = ___1_height;
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_000d;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = V_0;
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_19, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = V_0;
		V_6 = L_20;
		goto IL_005a;
	}

IL_005a:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = V_6;
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Local__ctor_m223523E0079C7C184D1B804092E5C0A61B0E110E (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m00D08220BB0FBFE450F57049A4EEFA0898BDF022_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m23072805C6943D45A688FD6F11097CA8AFC14084_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42603AF3F773C24EEBCCAF48DB31A596CCFBFFB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m59416295F911DEAE5FD7681CF4CD1FF1221370BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* L_0 = (List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3*)il2cpp_codegen_object_new(List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3_il2cpp_TypeInfo_var);
		List_1__ctor_m59416295F911DEAE5FD7681CF4CD1FF1221370BE(L_0, List_1__ctor_m59416295F911DEAE5FD7681CF4CD1FF1221370BE_RuntimeMethod_var);
		__this->___m_Friends_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Friends_1), (void*)L_0);
		List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3* L_1 = (List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3*)il2cpp_codegen_object_new(List_1_tE6E66411E6B6A22232C67EAAEF4901A3486E55B3_il2cpp_TypeInfo_var);
		List_1__ctor_m59416295F911DEAE5FD7681CF4CD1FF1221370BE(L_1, List_1__ctor_m59416295F911DEAE5FD7681CF4CD1FF1221370BE_RuntimeMethod_var);
		__this->___m_Users_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Users_2), (void*)L_1);
		List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7* L_2 = (List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7*)il2cpp_codegen_object_new(List_1_t3174CD866C458170B5DD174A25DD3D19A5C3B3B7_il2cpp_TypeInfo_var);
		List_1__ctor_m00D08220BB0FBFE450F57049A4EEFA0898BDF022(L_2, List_1__ctor_m00D08220BB0FBFE450F57049A4EEFA0898BDF022_RuntimeMethod_var);
		__this->___m_AchievementDescriptions_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AchievementDescriptions_3), (void*)L_2);
		List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A* L_3 = (List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A*)il2cpp_codegen_object_new(List_1_t5B1BB048CE74B294094EE23B5B5546279A93E60A_il2cpp_TypeInfo_var);
		List_1__ctor_m42603AF3F773C24EEBCCAF48DB31A596CCFBFFB3(L_3, List_1__ctor_m42603AF3F773C24EEBCCAF48DB31A596CCFBFFB3_RuntimeMethod_var);
		__this->___m_Achievements_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Achievements_4), (void*)L_3);
		List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9* L_4 = (List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9*)il2cpp_codegen_object_new(List_1_tA7AA760D42FE7082707AC34B0D3327F25696E8D9_il2cpp_TypeInfo_var);
		List_1__ctor_m23072805C6943D45A688FD6F11097CA8AFC14084(L_4, List_1__ctor_m23072805C6943D45A688FD6F11097CA8AFC14084_RuntimeMethod_var);
		__this->___m_Leaderboards_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Leaderboards_5), (void*)L_4);
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
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_get_Instance_mC9DF8265897D79151D3F86D48A73691B6E3AFA06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ((ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624_il2cpp_TypeInfo_var))->____active_0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = ActivePlatform_SelectSocialPlatform_mEA0704F85B0FD046DE2E4069B1EC413BD835BCA7(NULL);
		((ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624_il2cpp_TypeInfo_var))->____active_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624_il2cpp_TypeInfo_var))->____active_0), (void*)L_2);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ((ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_tA561A1F6671B5E621A6A1BB446EF480126BE2624_il2cpp_TypeInfo_var))->____active_0;
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_SelectSocialPlatform_mEA0704F85B0FD046DE2E4069B1EC413BD835BCA7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE* L_0 = (Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE*)il2cpp_codegen_object_new(Local_t9043C59C2E8F6360DA4263524B306CB5B19A66FE_il2cpp_TypeInfo_var);
		Local__ctor_m223523E0079C7C184D1B804092E5C0A61B0E110E(L_0, NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B (Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6* __this, int32_t ___0_fromValue, int32_t ___1_valueCount, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___1_valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B_AdjustorThunk (RuntimeObject* __this, int32_t ___0_fromValue, int32_t ___1_valueCount, const RuntimeMethod* method)
{
	Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6*>(__this + _offset);
	Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B(_thisAdjusted, ___0_fromValue, ___1_valueCount, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_m6D2AE6DFC61CEC39842944D970E2B2B5547CBE97 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_0 = NULL;
	{
		UserProfile__ctor_m12A26F8BDE41F4B55A645BB1D4038E81A877E680(__this, NULL);
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_0 = (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)SZArrayNew(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)L_0;
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_1 = V_0;
		__this->___m_Friends_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Friends_7), (void*)L_1);
		__this->___m_Authenticated_8 = (bool)0;
		__this->___m_Underage_9 = (bool)0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::Authenticate(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_Authenticate_mAA3CFB619D05411A0821C344FB759F244B005E54 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ActivePlatform_get_Instance_mC9DF8265897D79151D3F86D48A73691B6E3AFA06(NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___0_callback;
		InterfaceActionInvoker2< RuntimeObject*, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(6 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>) */, ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var, L_0, __this, L_1);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::LoadFriends(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_LoadFriends_m5CD7C6AF3E2F5FC34875AF27D3C7BE1ECD86FECA (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = ActivePlatform_get_Instance_mC9DF8265897D79151D3F86D48A73691B6E3AFA06(NULL);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___0_callback;
		InterfaceActionInvoker2< RuntimeObject*, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>) */, ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var, L_0, __this, L_1);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetFriends_m369BCB8021FB5A359B11D2ACB2F1CCD3DFBF0F6B (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___0_friends, const RuntimeMethod* method) 
{
	{
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_0 = ___0_friends;
		__this->___m_Friends_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Friends_7), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_m1A7992E986F32450A1A97409AF772DC3A0F47E44 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_Authenticated_8 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_m84D3621386D7E917F7D4AD7D2C00DE8CA8AD278C (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_Underage_9 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::get_friends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* LocalUser_get_friends_m3646EEAB6EEEB5107CC863E4C949EEB7464044FC (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, const RuntimeMethod* method) 
{
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_0 = NULL;
	{
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_0 = __this->___m_Friends_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalUser_get_authenticated_m3121DA81FF48CFFB4024ADECEE98F8E686497C54 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Authenticated_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m12A26F8BDE41F4B55A645BB1D4038E81A877E680 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_UserName_0 = _stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserName_0), (void*)_stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E);
		__this->___m_ID_1 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ID_1), (void*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->___m_legacyID_2 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_legacyID_2), (void*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->___m_IsFriend_3 = (bool)0;
		__this->___m_State_4 = 3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_0, ((int32_t)32), ((int32_t)32), NULL);
		__this->___m_Image_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_5), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m68F283D40689EDF4D5854FB6570323AFC04E2303 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_name, String_t* ___1_id, bool ___2_friend, int32_t ___3_state, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___4_image, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		String_t* L_1 = ___1_id;
		String_t* L_2 = ___1_id;
		bool L_3 = ___2_friend;
		int32_t L_4 = ___3_state;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___4_image;
		UserProfile__ctor_m3649D0E00F816E2712CA936DDBC55ADBC336BBF1(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m3649D0E00F816E2712CA936DDBC55ADBC336BBF1 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_name, String_t* ___1_teamId, String_t* ___2_gameId, bool ___3_friend, int32_t ___4_state, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___5_image, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_name;
		__this->___m_UserName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserName_0), (void*)L_0);
		String_t* L_1 = ___1_teamId;
		__this->___m_ID_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ID_1), (void*)L_1);
		String_t* L_2 = ___2_gameId;
		__this->___m_gameID_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_gameID_6), (void*)L_2);
		bool L_3 = ___3_friend;
		__this->___m_IsFriend_3 = L_3;
		int32_t L_4 = ___4_state;
		__this->___m_State_4 = L_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___5_image;
		__this->___m_Image_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_5), (void*)L_5);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_ToString_mEB091241EC114F4F42D2CE15F127B83556EBE45D (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = UserProfile_get_id_m16A4060A0C7E4480F68D6915E6FAB15EAE973336(__this, NULL);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		ArrayElementTypeCheck (L_3, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = UserProfile_get_userName_mDAAF12B06B939DDAAB6F10E8CB40B21C48A94F30(__this, NULL);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		ArrayElementTypeCheck (L_6, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		bool L_8;
		L_8 = UserProfile_get_isFriend_m353D113C22BFA80F0E9A1DBEC40E4EF4984AC4EC(__this, NULL);
		V_0 = L_8;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_7;
		ArrayElementTypeCheck (L_10, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		int32_t L_12;
		L_12 = UserProfile_get_state_mF5F8CF4E71CD46ADBCC58E5A3AFA715B3E5F9D4A(__this, NULL);
		V_1 = L_12;
		Il2CppFakeBox<int32_t> L_13(UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_14;
		L_14 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_13), NULL);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		String_t* L_15;
		L_15 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_11, NULL);
		V_2 = L_15;
		goto IL_0061;
	}

IL_0061:
	{
		String_t* L_16 = V_2;
		return L_16;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserName_m107512A03197354BAF98514ED92D647F4FC778DA (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		__this->___m_UserName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserName_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserID_m32F417A48D4FDC4ED180EA2AD92F875996DA3353 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_id;
		__this->___m_ID_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ID_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetImage_mEBC25331E4B4E201DB02A0442C473829E07D6221 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_image, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_image;
		__this->___m_Image_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_5), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_mDAAF12B06B939DDAAB6F10E8CB40B21C48A94F30 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_UserName_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m16A4060A0C7E4480F68D6915E6FAB15EAE973336 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_ID_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m353D113C22BFA80F0E9A1DBEC40E4EF4984AC4EC (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_IsFriend_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_mF5F8CF4E71CD46ADBCC58E5A3AFA715B3E5F9D4A (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_State_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_mE4B26ACD8E4220F645864036B7F9AD2E7D746B85 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_id, double ___1_percentCompleted, bool ___2_completed, bool ___3_hidden, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___4_lastReportedDate, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE_inline(__this, L_0, NULL);
		double L_1 = ___1_percentCompleted;
		Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline(__this, L_1, NULL);
		bool L_2 = ___2_completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___3_hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ___4_lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_ToString_m15B103F95C549FCED0D581FBACD73E47310C9EAC (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6_inline(__this, NULL);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		ArrayElementTypeCheck (L_3, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		double L_5;
		L_5 = Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860_inline(__this, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_0), NULL);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_4;
		ArrayElementTypeCheck (L_7, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		bool L_9;
		L_9 = Achievement_get_completed_m5A625BD69E129E468D83A98CF4CAA4AA28E0B2BF(__this, NULL);
		V_1 = L_9;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		ArrayElementTypeCheck (L_11, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		bool L_13;
		L_13 = Achievement_get_hidden_m343030FB2BE6636313A09DEDCB02BE0ADB5E3A8E(__this, NULL);
		V_1 = L_13;
		String_t* L_14;
		L_14 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		ArrayElementTypeCheck (L_15, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_17;
		L_17 = Achievement_get_lastReportedDate_mEACB3BADB0996AF967B26378FA48BC964E68F091(__this, NULL);
		V_2 = L_17;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A((&V_2), NULL);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		V_3 = L_19;
		goto IL_007d;
	}

IL_007d:
	{
		String_t* L_20 = V_3;
		return L_20;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::SetCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_SetCompleted_mE342B402331E79D656CBC5E7FE881F69641D1E88 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_Completed_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::SetHidden(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_SetHidden_m9D0CA6D3F8539818DB88E3174AB57D4746B9CDCE (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___m_Hidden_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::SetLastReportedDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_SetLastReportedDate_m0235AF958908983C7B025090C5A4061D27F7B3F3 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_date, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___0_date;
		__this->___m_LastReportedDate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CpercentCompletedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_completed_m5A625BD69E129E468D83A98CF4CAA4AA28E0B2BF (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Completed_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_hidden_m343030FB2BE6636313A09DEDCB02BE0ADB5E3A8E (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Hidden_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Achievement_get_lastReportedDate_mEACB3BADB0996AF967B26378FA48BC964E68F091 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = __this->___m_LastReportedDate_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription__ctor_mB5F9A234974FEC3BB146511929791A1D8846E2EF (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, String_t* ___0_id, String_t* ___1_title, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___2_image, String_t* ___3_achievedDescription, String_t* ___4_unachievedDescription, bool ___5_hidden, int32_t ___6_points, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_id;
		AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411_inline(__this, L_0, NULL);
		String_t* L_1 = ___1_title;
		__this->___m_Title_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Title_0), (void*)L_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___2_image;
		__this->___m_Image_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_1), (void*)L_2);
		String_t* L_3 = ___3_achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AchievedDescription_2), (void*)L_3);
		String_t* L_4 = ___4_unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnachievedDescription_3), (void*)L_4);
		bool L_5 = ___5_hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___6_points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_ToString_m25F3CC08322EAB311EDBC23D85F067387706DE02 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7_inline(__this, NULL);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		ArrayElementTypeCheck (L_3, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = AchievementDescription_get_title_m196C3AEC0457C25D95B16309E12AB246D054CB67(__this, NULL);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		ArrayElementTypeCheck (L_6, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8;
		L_8 = AchievementDescription_get_achievedDescription_m4EB337E95791A795A79F2C75F909E64747B682B5(__this, NULL);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		ArrayElementTypeCheck (L_9, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11;
		L_11 = AchievementDescription_get_unachievedDescription_mE98806AB14F770F2A9CBA7E1024052FA259D43E5(__this, NULL);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		ArrayElementTypeCheck (L_12, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		int32_t L_14;
		L_14 = AchievementDescription_get_points_m222DBD457CA6F5629758C211668917507B316DB3(__this, NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		ArrayElementTypeCheck (L_16, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		bool L_18;
		L_18 = AchievementDescription_get_hidden_mA35899496122E49F7333BB5F5B5B6AE0E68F017E(__this, NULL);
		V_1 = L_18;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_19);
		String_t* L_20;
		L_20 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
		V_2 = L_20;
		goto IL_0080;
	}

IL_0080:
	{
		String_t* L_21 = V_2;
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_m196C3AEC0457C25D95B16309E12AB246D054CB67 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Title_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_m4EB337E95791A795A79F2C75F909E64747B682B5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_AchievedDescription_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_mE98806AB14F770F2A9CBA7E1024052FA259D43E5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_UnachievedDescription_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_mA35899496122E49F7333BB5F5B5B6AE0E68F017E (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Hidden_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_m222DBD457CA6F5629758C211668917507B316DB3 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Points_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mCA767E4E990F5CB9657921695D4983D721BEA751 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_leaderboardID, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_leaderboardID;
		int64_t L_1 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31(__this, L_0, L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (-1), NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_leaderboardID, int64_t ___1_value, String_t* ___2_userID, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___3_date, String_t* ___4_formattedValue, int32_t ___5_rank, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_leaderboardID;
		Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB_inline(__this, L_0, NULL);
		int64_t L_1 = ___1_value;
		Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3_inline(__this, L_1, NULL);
		String_t* L_2 = ___2_userID;
		__this->___m_UserID_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserID_2), (void*)L_2);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = ___3_date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___4_formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FormattedValue_1), (void*)L_4);
		int32_t L_5 = ___5_rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_ToString_m497A4E6B7AA8D2B8433137127949781736A16037 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral410946CD131353B68F194902EF06C27382525682);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral410946CD131353B68F194902EF06C27382525682);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral410946CD131353B68F194902EF06C27382525682);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t* L_3 = (int32_t*)(&__this->___m_Rank_3);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		ArrayElementTypeCheck (L_5, _stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int64_t L_7;
		L_7 = Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E_inline(__this, NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_0), NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		ArrayElementTypeCheck (L_9, _stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11;
		L_11 = Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A_inline(__this, NULL);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		ArrayElementTypeCheck (L_12, _stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		String_t* L_14 = __this->___m_UserID_2;
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
		ArrayElementTypeCheck (L_15, _stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_17 = (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(&__this->___m_Date_0);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(L_17, NULL);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		V_1 = L_19;
		goto IL_0078;
	}

IL_0078:
	{
		String_t* L_20 = V_1;
		return L_20;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CleaderboardIDU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CleaderboardIDU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CvalueU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
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
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_mFB0608CFF4A090982904F495B84A91DC0FAC5B73 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E);
		s_Il2CppMethodInitialized = true;
	}
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719_inline(__this, _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E, NULL);
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B((&L_0), 1, ((int32_t)10), /*hidden argument*/NULL);
		Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA_inline(__this, L_0, NULL);
		Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A_inline(__this, 0, NULL);
		Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE_inline(__this, 2, NULL);
		__this->___m_Loading_0 = (bool)0;
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* L_1 = (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53*)il2cpp_codegen_object_new(Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		Score__ctor_mCA767E4E990F5CB9657921695D4983D721BEA751(L_1, _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E, ((int64_t)0), NULL);
		__this->___m_LocalUserScore_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalUserScore_1), (void*)L_1);
		__this->___m_MaxRange_2 = 0;
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_2 = (ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)SZArrayNew(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_2;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_3 = V_0;
		__this->___m_Scores_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Scores_3), (void*)L_3);
		__this->___m_Title_4 = _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Title_4), (void*)_stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_UserIDs_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserIDs_5), (void*)L_4);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leaderboard_ToString_m13D23F36219548442D56D029B561F628305F3500 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeScope_t20CB388177E885D6B11816946D623907E276F08E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FE7915692E0675AD0BF063D16336FF430832152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2);
		s_Il2CppMethodInitialized = true;
	}
	Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3;
		L_3 = Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770_inline(__this, NULL);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		ArrayElementTypeCheck (L_4, _stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = __this->___m_Title_4;
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		ArrayElementTypeCheck (L_7, _stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		bool* L_9 = (bool*)(&__this->___m_Loading_0);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_9, NULL);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		ArrayElementTypeCheck (L_11, _stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_13;
		L_13 = Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline(__this, NULL);
		V_0 = L_13;
		int32_t* L_14 = (int32_t*)(&(&V_0)->___from_0);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_12;
		ArrayElementTypeCheck (L_16, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_18;
		L_18 = Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline(__this, NULL);
		V_0 = L_18;
		int32_t* L_19 = (int32_t*)(&(&V_0)->___count_1);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		ArrayElementTypeCheck (L_21, _stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		uint32_t* L_23 = (uint32_t*)(&__this->___m_MaxRange_2);
		String_t* L_24;
		L_24 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154(L_23, NULL);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_22;
		ArrayElementTypeCheck (L_25, _stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_27 = __this->___m_Scores_3;
		V_1 = ((int32_t)(((RuntimeArray*)L_27)->max_length));
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_26;
		ArrayElementTypeCheck (L_29, _stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		int32_t L_31;
		L_31 = Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1_inline(__this, NULL);
		V_2 = L_31;
		Il2CppFakeBox<int32_t> L_32(UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_33;
		L_33 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_32), NULL);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_30;
		ArrayElementTypeCheck (L_34, _stringLiteral5FE7915692E0675AD0BF063D16336FF430832152);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral5FE7915692E0675AD0BF063D16336FF430832152);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		int32_t L_36;
		L_36 = Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E_inline(__this, NULL);
		V_3 = L_36;
		Il2CppFakeBox<int32_t> L_37(TimeScope_t20CB388177E885D6B11816946D623907E276F08E_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_38;
		L_38 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_37), NULL);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_35;
		ArrayElementTypeCheck (L_39, _stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = __this->___m_UserIDs_5;
		V_1 = ((int32_t)(((RuntimeArray*)L_41)->max_length));
		String_t* L_42;
		L_42 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)L_42);
		String_t* L_43;
		L_43 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_40, NULL);
		V_4 = L_43;
		goto IL_011a;
	}

IL_011a:
	{
		String_t* L_44 = V_4;
		return L_44;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m0ACEEFFAD67AE7F7DC644DD034F5F2C431265943 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* ___0_scores, const RuntimeMethod* method) 
{
	{
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_0 = ___0_scores;
		__this->___m_Scores_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Scores_3), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_mF9ECC4ECBF137AF4C5AD6A2338AB8786D86EADF2 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, String_t* ___0_title, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_title;
		__this->___m_Title_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Title_4), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CuserScopeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_0 = __this->___U3CrangeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 ___0_value, const RuntimeMethod* method) 
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_0 = ___0_value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtimeScopeU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CpercentCompletedU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CleaderboardIDU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CvalueU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CleaderboardIDU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 ___0_value, const RuntimeMethod* method) 
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_0 = ___0_value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 L_0 = __this->___U3CrangeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CuserScopeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CtimeScopeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
