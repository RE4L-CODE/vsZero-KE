// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_BotPlay
#include <BotPlay.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fc55aba1ba34c432_1437_new,"BotPlay","new",0x2cacc9ed,"BotPlay.new","Options.hx",1437,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_fc55aba1ba34c432_1443_left,"BotPlay","left",0xe93169da,"BotPlay.left","Options.hx",1443,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_fc55aba1ba34c432_1451_right,"BotPlay","right",0x991842a9,"BotPlay.right","Options.hx",1451,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_fc55aba1ba34c432_1457_updateDisplay,"BotPlay","updateDisplay",0xe1e3db06,"BotPlay.updateDisplay","Options.hx",1457,0x9d9a0240)

void BotPlay_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_fc55aba1ba34c432_1437_new)
HXLINE(1438)		super::__construct();
HXLINE(1439)		this->description = desc;
            	}

Dynamic BotPlay_obj::__CreateEmpty() { return new BotPlay_obj; }

void *BotPlay_obj::_hx_vtable = 0;

Dynamic BotPlay_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BotPlay_obj > _hx_result = new BotPlay_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BotPlay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x14219af3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x14219af3;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool BotPlay_obj::left(){
            	HX_STACKFRAME(&_hx_pos_fc55aba1ba34c432_1443_left)
HXLINE(1444)		::flixel::FlxG_obj::save->data->__SetField(HX_("botplay",7b,fb,a9,61),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE(1446)		this->display = this->updateDisplay();
HXLINE(1447)		return true;
            	}


bool BotPlay_obj::right(){
            	HX_STACKFRAME(&_hx_pos_fc55aba1ba34c432_1451_right)
HXLINE(1452)		this->left();
HXLINE(1453)		return true;
            	}


::String BotPlay_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_fc55aba1ba34c432_1457_updateDisplay)
HXDLIN(1457)		::String _hx_tmp;
HXDLIN(1457)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("botplay",7b,fb,a9,61),::hx::paccDynamic)) )) {
HXDLIN(1457)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
            		else {
HXDLIN(1457)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
HXDLIN(1457)		return ((HX_("BotPlay: < ",85,05,60,34) + _hx_tmp) + HX_(" >",1e,1c,00,00));
            	}



::hx::ObjectPtr< BotPlay_obj > BotPlay_obj::__new(::String desc) {
	::hx::ObjectPtr< BotPlay_obj > __this = new BotPlay_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< BotPlay_obj > BotPlay_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	BotPlay_obj *__this = (BotPlay_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BotPlay_obj), true, "BotPlay"));
	*(void **)__this = BotPlay_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

BotPlay_obj::BotPlay_obj()
{
}

::hx::Val BotPlay_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *BotPlay_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BotPlay_obj_sStaticStorageInfo = 0;
#endif

static ::String BotPlay_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class BotPlay_obj::__mClass;

void BotPlay_obj::__register()
{
	BotPlay_obj _hx_dummy;
	BotPlay_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("BotPlay",7b,4f,d4,19);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BotPlay_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BotPlay_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BotPlay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BotPlay_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

