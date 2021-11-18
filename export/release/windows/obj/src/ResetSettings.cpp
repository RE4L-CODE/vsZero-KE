// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_KadeEngineData
#include <KadeEngineData.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
#endif
#ifndef INCLUDED_ResetSettings
#include <ResetSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a29365f4e6970aaf_1770_new,"ResetSettings","new",0x972c1ba4,"ResetSettings.new","Options.hx",1770,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_a29365f4e6970aaf_1784_press,"ResetSettings","press",0xfe7cf7c7,"ResetSettings.press","Options.hx",1784,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_a29365f4e6970aaf_1838_updateDisplay,"ResetSettings","updateDisplay",0x8011177d,"ResetSettings.updateDisplay","Options.hx",1838,0x9d9a0240)

void ResetSettings_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_a29365f4e6970aaf_1770_new)
HXLINE(1772)		this->confirm = false;
HXLINE(1776)		super::__construct();
HXLINE(1777)		if (::OptionsMenu_obj::isInPause) {
HXLINE(1778)			this->description = HX_("This option cannot be toggled in the pause menu.",b4,21,dd,c9);
            		}
            		else {
HXLINE(1780)			this->description = desc;
            		}
            	}

Dynamic ResetSettings_obj::__CreateEmpty() { return new ResetSettings_obj; }

void *ResetSettings_obj::_hx_vtable = 0;

Dynamic ResetSettings_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResetSettings_obj > _hx_result = new ResetSettings_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ResetSettings_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x7db3ef2a;
	}
}

bool ResetSettings_obj::press(){
            	HX_STACKFRAME(&_hx_pos_a29365f4e6970aaf_1784_press)
HXLINE(1785)		if (::OptionsMenu_obj::isInPause) {
HXLINE(1786)			return false;
            		}
HXLINE(1787)		if (!(this->confirm)) {
HXLINE(1789)			this->confirm = true;
HXLINE(1790)			this->display = this->updateDisplay();
HXLINE(1791)			return true;
            		}
HXLINE(1793)		::flixel::FlxG_obj::save->data->__SetField(HX_("weekUnlocked",37,64,c4,a5),null(),::hx::paccDynamic);
HXLINE(1794)		::flixel::FlxG_obj::save->data->__SetField(HX_("newInput",8a,07,68,e1),null(),::hx::paccDynamic);
HXLINE(1795)		::flixel::FlxG_obj::save->data->__SetField(HX_("downscroll",ef,45,d4,4f),null(),::hx::paccDynamic);
HXLINE(1796)		::flixel::FlxG_obj::save->data->__SetField(HX_("antialiasing",f4,16,b3,48),null(),::hx::paccDynamic);
HXLINE(1797)		::flixel::FlxG_obj::save->data->__SetField(HX_("missSounds",e0,d4,49,2b),null(),::hx::paccDynamic);
HXLINE(1798)		::flixel::FlxG_obj::save->data->__SetField(HX_("dfjk",c3,18,67,42),null(),::hx::paccDynamic);
HXLINE(1799)		::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyDisplay",09,75,5e,26),null(),::hx::paccDynamic);
HXLINE(1800)		::flixel::FlxG_obj::save->data->__SetField(HX_("offset",93,97,3f,60),null(),::hx::paccDynamic);
HXLINE(1801)		::flixel::FlxG_obj::save->data->__SetField(HX_("songPosition",9e,dd,3b,8d),null(),::hx::paccDynamic);
HXLINE(1802)		::flixel::FlxG_obj::save->data->__SetField(HX_("fps",e9,c7,4d,00),null(),::hx::paccDynamic);
HXLINE(1803)		::flixel::FlxG_obj::save->data->__SetField(HX_("changedHit",bf,5d,c0,31),null(),::hx::paccDynamic);
HXLINE(1804)		::flixel::FlxG_obj::save->data->__SetField(HX_("fpsRain",dd,e5,17,c7),null(),::hx::paccDynamic);
HXLINE(1805)		::flixel::FlxG_obj::save->data->__SetField(HX_("fpsCap",a9,7b,7e,91),null(),::hx::paccDynamic);
HXLINE(1806)		::flixel::FlxG_obj::save->data->__SetField(HX_("scrollSpeed",3a,e0,46,cb),null(),::hx::paccDynamic);
HXLINE(1807)		::flixel::FlxG_obj::save->data->__SetField(HX_("npsDisplay",51,08,e2,23),null(),::hx::paccDynamic);
HXLINE(1808)		::flixel::FlxG_obj::save->data->__SetField(HX_("frames",a6,af,85,ac),null(),::hx::paccDynamic);
HXLINE(1809)		::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyMod",09,b2,8a,86),null(),::hx::paccDynamic);
HXLINE(1810)		::flixel::FlxG_obj::save->data->__SetField(HX_("watermark",a4,af,1e,e0),null(),::hx::paccDynamic);
HXLINE(1811)		::flixel::FlxG_obj::save->data->__SetField(HX_("ghost",4f,8f,58,93),null(),::hx::paccDynamic);
HXLINE(1812)		::flixel::FlxG_obj::save->data->__SetField(HX_("distractions",31,13,7d,60),null(),::hx::paccDynamic);
HXLINE(1813)		::flixel::FlxG_obj::save->data->__SetField(HX_("colour",4c,c8,86,c6),null(),::hx::paccDynamic);
HXLINE(1814)		::flixel::FlxG_obj::save->data->__SetField(HX_("stepMania",06,56,8a,73),null(),::hx::paccDynamic);
HXLINE(1815)		::flixel::FlxG_obj::save->data->__SetField(HX_("flashing",32,85,e8,99),null(),::hx::paccDynamic);
HXLINE(1816)		::flixel::FlxG_obj::save->data->__SetField(HX_("resetButton",21,e5,f4,79),null(),::hx::paccDynamic);
HXLINE(1817)		::flixel::FlxG_obj::save->data->__SetField(HX_("botplay",7b,fb,a9,61),null(),::hx::paccDynamic);
HXLINE(1818)		::flixel::FlxG_obj::save->data->__SetField(HX_("cpuStrums",52,86,8a,e0),null(),::hx::paccDynamic);
HXLINE(1819)		::flixel::FlxG_obj::save->data->__SetField(HX_("strumline",bd,4d,fe,03),null(),::hx::paccDynamic);
HXLINE(1820)		::flixel::FlxG_obj::save->data->__SetField(HX_("customStrumLine",ec,d3,8b,07),null(),::hx::paccDynamic);
HXLINE(1821)		::flixel::FlxG_obj::save->data->__SetField(HX_("camzoom",a2,ca,10,f1),null(),::hx::paccDynamic);
HXLINE(1822)		::flixel::FlxG_obj::save->data->__SetField(HX_("scoreScreen",5e,6c,c3,13),null(),::hx::paccDynamic);
HXLINE(1823)		::flixel::FlxG_obj::save->data->__SetField(HX_("inputShow",27,92,7d,13),null(),::hx::paccDynamic);
HXLINE(1824)		::flixel::FlxG_obj::save->data->__SetField(HX_("optimize",dd,8c,18,1d),null(),::hx::paccDynamic);
HXLINE(1825)		::flixel::FlxG_obj::save->data->__SetField(HX_("cacheImages",9a,7c,33,1d),null(),::hx::paccDynamic);
HXLINE(1826)		::flixel::FlxG_obj::save->data->__SetField(HX_("editor",ad,41,dd,3b),null(),::hx::paccDynamic);
HXLINE(1827)		::flixel::FlxG_obj::save->data->__SetField(HX_("laneTransparency",24,32,52,af),0,::hx::paccDynamic);
HXLINE(1829)		::KadeEngineData_obj::initSave();
HXLINE(1830)		this->confirm = false;
HXLINE(1832)		this->display = this->updateDisplay();
HXLINE(1833)		return true;
            	}


::String ResetSettings_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_a29365f4e6970aaf_1838_updateDisplay)
HXDLIN(1838)		if (this->confirm) {
HXDLIN(1838)			return HX_("Confirm Settings Reset",12,52,8b,02);
            		}
            		else {
HXDLIN(1838)			return HX_("Reset Settings",94,71,0f,26);
            		}
HXDLIN(1838)		return null();
            	}



::hx::ObjectPtr< ResetSettings_obj > ResetSettings_obj::__new(::String desc) {
	::hx::ObjectPtr< ResetSettings_obj > __this = new ResetSettings_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< ResetSettings_obj > ResetSettings_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	ResetSettings_obj *__this = (ResetSettings_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResetSettings_obj), true, "ResetSettings"));
	*(void **)__this = ResetSettings_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

ResetSettings_obj::ResetSettings_obj()
{
}

::hx::Val ResetSettings_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"confirm") ) { return ::hx::Val( confirm ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ResetSettings_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"confirm") ) { confirm=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResetSettings_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("confirm",00,9d,39,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ResetSettings_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ResetSettings_obj,confirm),HX_("confirm",00,9d,39,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ResetSettings_obj_sStaticStorageInfo = 0;
#endif

static ::String ResetSettings_obj_sMemberFields[] = {
	HX_("confirm",00,9d,39,10),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class ResetSettings_obj::__mClass;

void ResetSettings_obj::__register()
{
	ResetSettings_obj _hx_dummy;
	ResetSettings_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ResetSettings",b2,b9,cc,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ResetSettings_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ResetSettings_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResetSettings_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResetSettings_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

