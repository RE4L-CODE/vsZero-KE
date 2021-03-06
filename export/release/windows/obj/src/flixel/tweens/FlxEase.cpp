// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a9a0b53a43037f15_48_quadOut,"flixel.tweens.FlxEase","quadOut",0x42348005,"flixel.tweens.FlxEase.quadOut","flixel/tweens/FlxEase.hx",48,0x71810bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_a9a0b53a43037f15_53_quadInOut,"flixel.tweens.FlxEase","quadInOut",0x1f34a4e0,"flixel.tweens.FlxEase.quadInOut","flixel/tweens/FlxEase.hx",53,0x71810bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_a9a0b53a43037f15_68_cubeInOut,"flixel.tweens.FlxEase","cubeInOut",0x25f1b9f2,"flixel.tweens.FlxEase.cubeInOut","flixel/tweens/FlxEase.hx",68,0x71810bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_a9a0b53a43037f15_83_quartInOut,"flixel.tweens.FlxEase","quartInOut",0x6cedf3ec,"flixel.tweens.FlxEase.quartInOut","flixel/tweens/FlxEase.hx",83,0x71810bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_a9a0b53a43037f15_205_circOut,"flixel.tweens.FlxEase","circOut",0xf8e652f5,"flixel.tweens.FlxEase.circOut","flixel/tweens/FlxEase.hx",205,0x71810bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_a9a0b53a43037f15_225_expoInOut,"flixel.tweens.FlxEase","expoInOut",0xbd29fc95,"flixel.tweens.FlxEase.expoInOut","flixel/tweens/FlxEase.hx",225,0x71810bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_a9a0b53a43037f15_261_elasticInOut,"flixel.tweens.FlxEase","elasticInOut",0x850880d6,"flixel.tweens.FlxEase.elasticInOut","flixel/tweens/FlxEase.hx",261,0x71810bf2)
HX_LOCAL_STACK_FRAME(_hx_pos_a9a0b53a43037f15_33_boot,"flixel.tweens.FlxEase","boot",0xecae8f74,"flixel.tweens.FlxEase.boot","flixel/tweens/FlxEase.hx",33,0x71810bf2)
namespace flixel{
namespace tweens{

void FlxEase_obj::__construct() { }

Dynamic FlxEase_obj::__CreateEmpty() { return new FlxEase_obj; }

void *FlxEase_obj::_hx_vtable = 0;

Dynamic FlxEase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxEase_obj > _hx_result = new FlxEase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxEase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e146db8;
}

Float FlxEase_obj::ELASTIC_PERIOD;

Float FlxEase_obj::quadOut(Float t){
            	HX_STACKFRAME(&_hx_pos_a9a0b53a43037f15_48_quadOut)
HXDLIN(  48)		return (-(t) * (t - ( (Float)(2) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadOut,return )

Float FlxEase_obj::quadInOut(Float t){
            	HX_STACKFRAME(&_hx_pos_a9a0b53a43037f15_53_quadInOut)
HXDLIN(  53)		if ((t <= ((Float).5))) {
HXDLIN(  53)			return ((t * t) * ( (Float)(2) ));
            		}
            		else {
HXDLIN(  53)			t = (t - ( (Float)(1) ));
HXDLIN(  53)			return (( (Float)(1) ) - ((t * t) * ( (Float)(2) )));
            		}
HXDLIN(  53)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quadInOut,return )

Float FlxEase_obj::cubeInOut(Float t){
            	HX_STACKFRAME(&_hx_pos_a9a0b53a43037f15_68_cubeInOut)
HXDLIN(  68)		if ((t <= ((Float).5))) {
HXDLIN(  68)			return (((t * t) * t) * ( (Float)(4) ));
            		}
            		else {
HXDLIN(  68)			t = (t - ( (Float)(1) ));
HXDLIN(  68)			return (1 + (((t * t) * t) * ( (Float)(4) )));
            		}
HXDLIN(  68)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,cubeInOut,return )

Float FlxEase_obj::quartInOut(Float t){
            	HX_STACKFRAME(&_hx_pos_a9a0b53a43037f15_83_quartInOut)
HXDLIN(  83)		if ((t <= ((Float).5))) {
HXDLIN(  83)			return ((((t * t) * t) * t) * ( (Float)(8) ));
            		}
            		else {
HXDLIN(  83)			t = ((t * ( (Float)(2) )) - ( (Float)(2) ));
HXDLIN(  83)			return (((( (Float)(1) ) - (((t * t) * t) * t)) / ( (Float)(2) )) + ((Float).5));
            		}
HXDLIN(  83)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,quartInOut,return )

Float FlxEase_obj::circOut(Float t){
            	HX_STACKFRAME(&_hx_pos_a9a0b53a43037f15_205_circOut)
HXDLIN( 205)		return ::Math_obj::sqrt((( (Float)(1) ) - ((t - ( (Float)(1) )) * (t - ( (Float)(1) )))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,circOut,return )

Float FlxEase_obj::expoInOut(Float t){
            	HX_STACKFRAME(&_hx_pos_a9a0b53a43037f15_225_expoInOut)
HXDLIN( 225)		if ((t < ((Float).5))) {
HXDLIN( 225)			return (::Math_obj::pow(( (Float)(2) ),(( (Float)(10) ) * ((t * ( (Float)(2) )) - ( (Float)(1) )))) / ( (Float)(2) ));
            		}
            		else {
HXDLIN( 225)			return ((-(::Math_obj::pow(( (Float)(2) ),(( (Float)(-10) ) * ((t * ( (Float)(2) )) - ( (Float)(1) ))))) + 2) / ( (Float)(2) ));
            		}
HXDLIN( 225)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,expoInOut,return )

Float FlxEase_obj::elasticInOut(Float t){
            	HX_STACKFRAME(&_hx_pos_a9a0b53a43037f15_261_elasticInOut)
HXLINE( 262)		if ((t < ((Float)0.5))) {
HXLINE( 264)			t = (t - ((Float)0.5));
HXDLIN( 264)			return (((Float)-0.5) * (::Math_obj::pow(( (Float)(2) ),(( (Float)(10) ) * t)) * ::Math_obj::sin((((t - (::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD / ( (Float)(4) ))) * (( (Float)(2) ) * ::Math_obj::PI)) / ::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD))));
            		}
HXLINE( 266)		t = (t - ((Float)0.5));
HXDLIN( 266)		return (((::Math_obj::pow(( (Float)(2) ),(( (Float)(-10) ) * t)) * ::Math_obj::sin((((t - (::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD / ( (Float)(4) ))) * (( (Float)(2) ) * ::Math_obj::PI)) / ::flixel::tweens::FlxEase_obj::ELASTIC_PERIOD))) * ((Float)0.5)) + 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxEase_obj,elasticInOut,return )


FlxEase_obj::FlxEase_obj()
{
}

bool FlxEase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"quadOut") ) { outValue = quadOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"circOut") ) { outValue = circOut_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quadInOut") ) { outValue = quadInOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cubeInOut") ) { outValue = cubeInOut_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"expoInOut") ) { outValue = expoInOut_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quartInOut") ) { outValue = quartInOut_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elasticInOut") ) { outValue = elasticInOut_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ELASTIC_PERIOD") ) { outValue = ( ELASTIC_PERIOD ); return true; }
	}
	return false;
}

bool FlxEase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"ELASTIC_PERIOD") ) { ELASTIC_PERIOD=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxEase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxEase_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &FlxEase_obj::ELASTIC_PERIOD,HX_("ELASTIC_PERIOD",8b,99,23,3b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxEase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEase_obj::ELASTIC_PERIOD,"ELASTIC_PERIOD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxEase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEase_obj::ELASTIC_PERIOD,"ELASTIC_PERIOD");
};

#endif

::hx::Class FlxEase_obj::__mClass;

static ::String FlxEase_obj_sStaticFields[] = {
	HX_("ELASTIC_PERIOD",8b,99,23,3b),
	HX_("quadOut",07,96,ee,3e),
	HX_("quadInOut",62,bf,21,4f),
	HX_("cubeInOut",74,d4,de,55),
	HX_("quartInOut",2a,0b,78,2c),
	HX_("circOut",f7,68,a0,f5),
	HX_("expoInOut",17,17,17,ed),
	HX_("elasticInOut",94,63,b5,cc),
	::String(null())
};

void FlxEase_obj::__register()
{
	FlxEase_obj _hx_dummy;
	FlxEase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.FlxEase",6c,1c,e1,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxEase_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxEase_obj::__SetStatic;
	__mClass->mMarkFunc = FlxEase_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxEase_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxEase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxEase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxEase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxEase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxEase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a9a0b53a43037f15_33_boot)
HXDLIN(  33)		ELASTIC_PERIOD = ((Float)0.4);
            	}
}

} // end namespace flixel
} // end namespace tweens
