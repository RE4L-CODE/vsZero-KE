// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_PS4ID
#include <flixel/input/gamepad/id/PS4ID.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ad6715070e6121e4_89_boot,"flixel.input.gamepad.id.PS4ID","boot",0xf48071a4,"flixel.input.gamepad.id.PS4ID.boot","flixel/input/gamepad/id/PS4ID.hx",89,0x2ce48920)
HX_LOCAL_STACK_FRAME(_hx_pos_ad6715070e6121e4_95_boot,"flixel.input.gamepad.id.PS4ID","boot",0xf48071a4,"flixel.input.gamepad.id.PS4ID.boot","flixel/input/gamepad/id/PS4ID.hx",95,0x2ce48920)
namespace flixel{
namespace input{
namespace gamepad{
namespace id{

void PS4ID_obj::__construct() { }

Dynamic PS4ID_obj::__CreateEmpty() { return new PS4ID_obj; }

void *PS4ID_obj::_hx_vtable = 0;

Dynamic PS4ID_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PS4ID_obj > _hx_result = new PS4ID_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PS4ID_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x126f915e;
}

 ::flixel::input::gamepad::FlxGamepadAnalogStick PS4ID_obj::LEFT_ANALOG_STICK;

 ::flixel::input::gamepad::FlxGamepadAnalogStick PS4ID_obj::RIGHT_ANALOG_STICK;


PS4ID_obj::PS4ID_obj()
{
}

bool PS4ID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { outValue = ( LEFT_ANALOG_STICK ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { outValue = ( RIGHT_ANALOG_STICK ); return true; }
	}
	return false;
}

bool PS4ID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"LEFT_ANALOG_STICK") ) { LEFT_ANALOG_STICK=ioValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"RIGHT_ANALOG_STICK") ) { RIGHT_ANALOG_STICK=ioValue.Cast<  ::flixel::input::gamepad::FlxGamepadAnalogStick >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PS4ID_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo PS4ID_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadAnalogStick */ ,(void *) &PS4ID_obj::LEFT_ANALOG_STICK,HX_("LEFT_ANALOG_STICK",19,49,58,a5)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadAnalogStick */ ,(void *) &PS4ID_obj::RIGHT_ANALOG_STICK,HX_("RIGHT_ANALOG_STICK",44,e8,d6,b8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void PS4ID_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PS4ID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(PS4ID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PS4ID_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PS4ID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(PS4ID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
};

#endif

::hx::Class PS4ID_obj::__mClass;

static ::String PS4ID_obj_sStaticFields[] = {
	HX_("LEFT_ANALOG_STICK",19,49,58,a5),
	HX_("RIGHT_ANALOG_STICK",44,e8,d6,b8),
	::String(null())
};

void PS4ID_obj::__register()
{
	PS4ID_obj _hx_dummy;
	PS4ID_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.id.PS4ID",3c,68,ba,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PS4ID_obj::__GetStatic;
	__mClass->mSetStaticField = &PS4ID_obj::__SetStatic;
	__mClass->mMarkFunc = PS4ID_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PS4ID_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PS4ID_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PS4ID_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PS4ID_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PS4ID_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PS4ID_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_ad6715070e6121e4_89_boot)
HXDLIN(  89)		LEFT_ANALOG_STICK =  ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__alloc( HX_CTX ,0,1, ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("right",dc,0b,64,e9),25)
            			->setFixed(1,HX_("up",5b,66,00,00),22)
            			->setFixed(2,HX_("down",62,f8,6d,42),23)
            			->setFixed(3,HX_("left",07,08,b0,47),24)));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_ad6715070e6121e4_95_boot)
HXDLIN(  95)		RIGHT_ANALOG_STICK =  ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__alloc( HX_CTX ,2,3, ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("right",dc,0b,64,e9),29)
            			->setFixed(1,HX_("up",5b,66,00,00),26)
            			->setFixed(2,HX_("down",62,f8,6d,42),27)
            			->setFixed(3,HX_("left",07,08,b0,47),28)));
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id