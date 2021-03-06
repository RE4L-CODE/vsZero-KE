// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Debug
#include <Debug.h>
#endif
#ifndef INCLUDED_DownKeybind
#include <DownKeybind.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_412e401b418e0907_128_new,"DownKeybind","new",0x9d0b186c,"DownKeybind.new","Options.hx",128,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_412e401b418e0907_136_onType,"DownKeybind","onType",0x7e8742ed,"DownKeybind.onType","Options.hx",136,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_412e401b418e0907_144_press,"DownKeybind","press",0x77aab68f,"DownKeybind.press","Options.hx",144,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_412e401b418e0907_153_updateDisplay,"DownKeybind","updateDisplay",0x66c6de45,"DownKeybind.updateDisplay","Options.hx",153,0x9d9a0240)

void DownKeybind_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_412e401b418e0907_128_new)
HXLINE( 129)		super::__construct();
HXLINE( 130)		this->description = desc;
HXLINE( 131)		this->acceptType = true;
            	}

Dynamic DownKeybind_obj::__CreateEmpty() { return new DownKeybind_obj; }

void *DownKeybind_obj::_hx_vtable = 0;

Dynamic DownKeybind_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DownKeybind_obj > _hx_result = new DownKeybind_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DownKeybind_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x6da6f7ba;
	}
}

void DownKeybind_obj::onType(::String text){
            	HX_STACKFRAME(&_hx_pos_412e401b418e0907_136_onType)
HXDLIN( 136)		if (this->waitingType) {
HXLINE( 138)			::flixel::FlxG_obj::save->data->__SetField(HX_("downBind",3f,f3,fe,75),text,::hx::paccDynamic);
HXLINE( 139)			this->waitingType = false;
            		}
            	}


bool DownKeybind_obj::press(){
            	HX_STACKFRAME(&_hx_pos_412e401b418e0907_144_press)
HXLINE( 145)		::Debug_obj::logTrace(HX_("keybind change",34,82,1f,10),::hx::SourceInfo(HX_("source/Options.hx",34,ca,fe,29),145,HX_("DownKeybind",7a,b2,ab,ba),HX_("press",83,53,88,c8)));
HXLINE( 146)		this->waitingType = !(this->waitingType);
HXLINE( 148)		return true;
            	}


::String DownKeybind_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_412e401b418e0907_153_updateDisplay)
HXDLIN( 153)		::String _hx_tmp;
HXDLIN( 153)		if (this->waitingType) {
HXDLIN( 153)			_hx_tmp = ((HX_("> ",22,36,00,00) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic)))) + HX_(" <",1c,1c,00,00));
            		}
            		else {
HXDLIN( 153)			_hx_tmp = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("downBind",3f,f3,fe,75),::hx::paccDynamic)) );
            		}
HXDLIN( 153)		return ((HX_("DOWN: ",88,4f,a9,e6) + _hx_tmp) + HX_("",00,00,00,00));
            	}



::hx::ObjectPtr< DownKeybind_obj > DownKeybind_obj::__new(::String desc) {
	::hx::ObjectPtr< DownKeybind_obj > __this = new DownKeybind_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< DownKeybind_obj > DownKeybind_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	DownKeybind_obj *__this = (DownKeybind_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DownKeybind_obj), true, "DownKeybind"));
	*(void **)__this = DownKeybind_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

DownKeybind_obj::DownKeybind_obj()
{
}

::hx::Val DownKeybind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onType") ) { return ::hx::Val( onType_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DownKeybind_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DownKeybind_obj_sStaticStorageInfo = 0;
#endif

static ::String DownKeybind_obj_sMemberFields[] = {
	HX_("onType",79,fb,92,ef),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class DownKeybind_obj::__mClass;

void DownKeybind_obj::__register()
{
	DownKeybind_obj _hx_dummy;
	DownKeybind_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DownKeybind",7a,b2,ab,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DownKeybind_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DownKeybind_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DownKeybind_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DownKeybind_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

