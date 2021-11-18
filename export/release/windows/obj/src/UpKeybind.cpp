// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Debug
#include <Debug.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_UpKeybind
#include <UpKeybind.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a7572e13865124b8_96_new,"UpKeybind","new",0xe0fbb313,"UpKeybind.new","Options.hx",96,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e13865124b8_104_onType,"UpKeybind","onType",0x89d58aa6,"UpKeybind.onType","Options.hx",104,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e13865124b8_112_press,"UpKeybind","press",0x0cf488f6,"UpKeybind.press","Options.hx",112,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e13865124b8_121_updateDisplay,"UpKeybind","updateDisplay",0xd453efac,"UpKeybind.updateDisplay","Options.hx",121,0x9d9a0240)

void UpKeybind_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_a7572e13865124b8_96_new)
HXLINE(  97)		super::__construct();
HXLINE(  98)		this->description = desc;
HXLINE(  99)		this->acceptType = true;
            	}

Dynamic UpKeybind_obj::__CreateEmpty() { return new UpKeybind_obj; }

void *UpKeybind_obj::_hx_vtable = 0;

Dynamic UpKeybind_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UpKeybind_obj > _hx_result = new UpKeybind_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool UpKeybind_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x50e5a2e1;
	}
}

void UpKeybind_obj::onType(::String text){
            	HX_STACKFRAME(&_hx_pos_a7572e13865124b8_104_onType)
HXDLIN( 104)		if (this->waitingType) {
HXLINE( 106)			::flixel::FlxG_obj::save->data->__SetField(HX_("upBind",b8,51,92,70),text,::hx::paccDynamic);
HXLINE( 107)			this->waitingType = false;
            		}
            	}


bool UpKeybind_obj::press(){
            	HX_STACKFRAME(&_hx_pos_a7572e13865124b8_112_press)
HXLINE( 113)		::Debug_obj::logTrace(HX_("keybind change",34,82,1f,10),::hx::SourceInfo(HX_("source/Options.hx",34,ca,fe,29),113,HX_("UpKeybind",a1,2d,a2,8d),HX_("press",83,53,88,c8)));
HXLINE( 114)		this->waitingType = !(this->waitingType);
HXLINE( 116)		return true;
            	}


::String UpKeybind_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_a7572e13865124b8_121_updateDisplay)
HXDLIN( 121)		::String _hx_tmp;
HXDLIN( 121)		if (this->waitingType) {
HXDLIN( 121)			_hx_tmp = ((HX_("> ",22,36,00,00) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic)))) + HX_(" <",1c,1c,00,00));
            		}
            		else {
HXDLIN( 121)			_hx_tmp = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("upBind",b8,51,92,70),::hx::paccDynamic)) );
            		}
HXDLIN( 121)		return ((HX_("UP: ",c1,09,6c,38) + _hx_tmp) + HX_("",00,00,00,00));
            	}



::hx::ObjectPtr< UpKeybind_obj > UpKeybind_obj::__new(::String desc) {
	::hx::ObjectPtr< UpKeybind_obj > __this = new UpKeybind_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< UpKeybind_obj > UpKeybind_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	UpKeybind_obj *__this = (UpKeybind_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UpKeybind_obj), true, "UpKeybind"));
	*(void **)__this = UpKeybind_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

UpKeybind_obj::UpKeybind_obj()
{
}

::hx::Val UpKeybind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *UpKeybind_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *UpKeybind_obj_sStaticStorageInfo = 0;
#endif

static ::String UpKeybind_obj_sMemberFields[] = {
	HX_("onType",79,fb,92,ef),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class UpKeybind_obj::__mClass;

void UpKeybind_obj::__register()
{
	UpKeybind_obj _hx_dummy;
	UpKeybind_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("UpKeybind",a1,2d,a2,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UpKeybind_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UpKeybind_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UpKeybind_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UpKeybind_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

