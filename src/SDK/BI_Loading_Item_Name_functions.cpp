#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BI_Loading_Item_Name

#include "Basic.hpp"

#include "BI_Loading_Item_Name_classes.hpp"
#include "BI_Loading_Item_Name_parameters.hpp"


namespace SDK
{

// Function BI_Loading_Item_Name.BI_Loading_Item_Name_C.ExecuteUbergraph_BI_Loading_Item_Name
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_Loading_Item_Name_C::ExecuteUbergraph_BI_Loading_Item_Name(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_Loading_Item_Name_C", "ExecuteUbergraph_BI_Loading_Item_Name");

	Params::BI_Loading_Item_Name_C_ExecuteUbergraph_BI_Loading_Item_Name Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BI_Loading_Item_Name.BI_Loading_Item_Name_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_Loading_Item_Name_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BI_Loading_Item_Name_C", "PreConstruct");

	Params::BI_Loading_Item_Name_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

