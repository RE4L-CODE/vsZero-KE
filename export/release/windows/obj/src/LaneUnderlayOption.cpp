// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif
#ifndef INCLUDED_LaneUnderlayOption
#include <LaneUnderlayOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionsMenu
#include <OptionsMenu.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2d5d9b833a3139b5_1630_new,"LaneUnderlayOption","new",0x6ddc6d7f,"LaneUnderlayOption.new","Options.hx",1630,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2d5d9b833a3139b5_1641_updateDisplay,"LaneUnderlayOption","updateDisplay",0x30f66918,"LaneUnderlayOption.updateDisplay","Options.hx",1641,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2d5d9b833a3139b5_1645_right,"LaneUnderlayOption","right",0x40256ebb,"LaneUnderlayOption.right","Options.hx",1645,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_2d5d9b833a3139b5_1656_left,"LaneUnderlayOption","left",0xb1b0e608,"LaneUnderlayOption.left","Options.hx",1656,0x9d9a0240)

void LaneUnderlayOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_2d5d9b833a3139b5_1630_new)
HXLINE(1631)		super::__construct();
HXLINE(1632)		if (::OptionsMenu_obj::isInPause) {
HXLINE(1633)			this->description = HX_("This option cannot be toggled in the pause menu.",b4,21,dd,c9);
            		}
            		else {
HXLINE(1635)			this->description = desc;
            		}
HXLINE(1636)		this->acceptValues = true;
            	}

Dynamic LaneUnderlayOption_obj::__CreateEmpty() { return new LaneUnderlayOption_obj; }

void *LaneUnderlayOption_obj::_hx_vtable = 0;

Dynamic LaneUnderlayOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LaneUnderlayOption_obj > _hx_result = new LaneUnderlayOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LaneUnderlayOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x3f6624cd;
	}
}

::String LaneUnderlayOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_2d5d9b833a3139b5_1641_updateDisplay)
HXDLIN(1641)		return ((HX_("Lane Transparceny: < ",64,3a,74,d0) + ::HelperFunctions_obj::truncateFloat(( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic)) ),1)) + HX_(" >",1e,1c,00,00));
            	}


bool LaneUnderlayOption_obj::right(){
            	HX_STACKFRAME(&_hx_pos_2d5d9b833a3139b5_1645_right)
HXLINE(1646)		if (::OptionsMenu_obj::isInPause) {
HXLINE(1647)			return false;
            		}
HXLINE(1648)		 ::Dynamic _hx_tmp = ::flixel::FlxG_obj::save->data;
HXDLIN(1648)		_hx_tmp->__SetField(HX_("laneTransparency",24,32,52,af),(_hx_tmp->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic) + ((Float)0.1)),::hx::paccDynamic);
HXLINE(1650)		if (::hx::IsGreater( ::flixel::FlxG_obj::save->data->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic),1 )) {
HXLINE(1651)			::flixel::FlxG_obj::save->data->__SetField(HX_("laneTransparency",24,32,52,af),1,::hx::paccDynamic);
            		}
HXLINE(1652)		return true;
            	}


bool LaneUnderlayOption_obj::left(){
            	HX_STACKFRAME(&_hx_pos_2d5d9b833a3139b5_1656_left)
HXLINE(1657)		if (::OptionsMenu_obj::isInPause) {
HXLINE(1658)			return false;
            		}
HXLINE(1659)		 ::Dynamic _hx_tmp = ::flixel::FlxG_obj::save->data;
HXDLIN(1659)		_hx_tmp->__SetField(HX_("laneTransparency",24,32,52,af),( ::Dynamic(_hx_tmp->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic)) - ((Float)0.1)),::hx::paccDynamic);
HXLINE(1661)		if (::hx::IsLess( ::flixel::FlxG_obj::save->data->__Field(HX_("laneTransparency",24,32,52,af),::hx::paccDynamic),0 )) {
HXLINE(1662)			::flixel::FlxG_obj::save->data->__SetField(HX_("laneTransparency",24,32,52,af),0,::hx::paccDynamic);
            		}
HXLINE(1664)		return true;
            	}



::hx::ObjectPtr< LaneUnderlayOption_obj > LaneUnderlayOption_obj::__new(::String desc) {
	::hx::ObjectPtr< LaneUnderlayOption_obj > __this = new LaneUnderlayOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< LaneUnderlayOption_obj > LaneUnderlayOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	LaneUnderlayOption_obj *__this = (LaneUnderlayOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LaneUnderlayOption_obj), true, "LaneUnderlayOption"));
	*(void **)__this = LaneUnderlayOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

LaneUnderlayOption_obj::LaneUnderlayOption_obj()
{
}

::hx::Val LaneUnderlayOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LaneUnderlayOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LaneUnderlayOption_obj_sStaticStorageInfo = 0;
#endif

static ::String LaneUnderlayOption_obj_sMemberFields[] = {
	HX_("updateDisplay",39,8f,b8,86),
	HX_("right",dc,0b,64,e9),
	HX_("left",07,08,b0,47),
	::String(null()) };

::hx::Class LaneUnderlayOption_obj::__mClass;

void LaneUnderlayOption_obj::__register()
{
	LaneUnderlayOption_obj _hx_dummy;
	LaneUnderlayOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LaneUnderlayOption",0d,42,a2,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LaneUnderlayOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LaneUnderlayOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LaneUnderlayOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LaneUnderlayOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

