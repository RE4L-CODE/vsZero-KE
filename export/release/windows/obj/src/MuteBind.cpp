// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Debug
#include <Debug.h>
#endif
#ifndef INCLUDED_MuteBind
#include <MuteBind.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3babee1a5a232ea7_288_new,"MuteBind","new",0x82963148,"MuteBind.new","Options.hx",288,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_3babee1a5a232ea7_296_onType,"MuteBind","onType",0xd0661b91,"MuteBind.onType","Options.hx",296,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_3babee1a5a232ea7_304_press,"MuteBind","press",0x28d2be6b,"MuteBind.press","Options.hx",304,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_3babee1a5a232ea7_313_updateDisplay,"MuteBind","updateDisplay",0x61442221,"MuteBind.updateDisplay","Options.hx",313,0x9d9a0240)

void MuteBind_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_3babee1a5a232ea7_288_new)
HXLINE( 289)		super::__construct();
HXLINE( 290)		this->description = desc;
HXLINE( 291)		this->acceptType = true;
            	}

Dynamic MuteBind_obj::__CreateEmpty() { return new MuteBind_obj; }

void *MuteBind_obj::_hx_vtable = 0;

Dynamic MuteBind_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MuteBind_obj > _hx_result = new MuteBind_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MuteBind_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x45db2016;
	}
}

void MuteBind_obj::onType(::String text){
            	HX_STACKFRAME(&_hx_pos_3babee1a5a232ea7_296_onType)
HXDLIN( 296)		if (this->waitingType) {
HXLINE( 298)			::flixel::FlxG_obj::save->data->__SetField(HX_("muteBind",36,71,98,10),text,::hx::paccDynamic);
HXLINE( 299)			this->waitingType = false;
            		}
            	}


bool MuteBind_obj::press(){
            	HX_STACKFRAME(&_hx_pos_3babee1a5a232ea7_304_press)
HXLINE( 305)		::Debug_obj::logTrace(HX_("keybind change",34,82,1f,10),::hx::SourceInfo(HX_("source/Options.hx",34,ca,fe,29),305,HX_("MuteBind",56,2d,4a,ea),HX_("press",83,53,88,c8)));
HXLINE( 306)		this->waitingType = !(this->waitingType);
HXLINE( 308)		return true;
            	}


::String MuteBind_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_3babee1a5a232ea7_313_updateDisplay)
HXDLIN( 313)		::String _hx_tmp;
HXDLIN( 313)		if (this->waitingType) {
HXDLIN( 313)			_hx_tmp = ((HX_("> ",22,36,00,00) + ::Std_obj::string( ::Dynamic(::flixel::FlxG_obj::save->data->__Field(HX_("muteBind",36,71,98,10),::hx::paccDynamic)))) + HX_(" <",1c,1c,00,00));
            		}
            		else {
HXDLIN( 313)			_hx_tmp = ( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("muteBind",36,71,98,10),::hx::paccDynamic)) );
            		}
HXDLIN( 313)		return ((HX_("VOLUME MUTE: ",45,63,a7,d5) + _hx_tmp) + HX_("",00,00,00,00));
            	}



::hx::ObjectPtr< MuteBind_obj > MuteBind_obj::__new(::String desc) {
	::hx::ObjectPtr< MuteBind_obj > __this = new MuteBind_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< MuteBind_obj > MuteBind_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	MuteBind_obj *__this = (MuteBind_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MuteBind_obj), true, "MuteBind"));
	*(void **)__this = MuteBind_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

MuteBind_obj::MuteBind_obj()
{
}

::hx::Val MuteBind_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *MuteBind_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MuteBind_obj_sStaticStorageInfo = 0;
#endif

static ::String MuteBind_obj_sMemberFields[] = {
	HX_("onType",79,fb,92,ef),
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class MuteBind_obj::__mClass;

void MuteBind_obj::__register()
{
	MuteBind_obj _hx_dummy;
	MuteBind_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MuteBind",56,2d,4a,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MuteBind_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MuteBind_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MuteBind_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MuteBind_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

