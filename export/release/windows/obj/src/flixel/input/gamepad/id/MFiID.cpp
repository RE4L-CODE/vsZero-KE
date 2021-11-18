// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_MFiID
#include <flixel/input/gamepad/id/MFiID.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4baac3ac28c90643_26_boot,"flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",26,0x95a04aa1)
HX_LOCAL_STACK_FRAME(_hx_pos_4baac3ac28c90643_32_boot,"flixel.input.gamepad.id.MFiID","boot",0xd4d05565,"flixel.input.gamepad.id.MFiID.boot","flixel/input/gamepad/id/MFiID.hx",32,0x95a04aa1)
namespace flixel{
namespace input{
namespace gamepad{
namespace id{

void MFiID_obj::__construct() { }

Dynamic MFiID_obj::__CreateEmpty() { return new MFiID_obj; }

void *MFiID_obj::_hx_vtable = 0;

Dynamic MFiID_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MFiID_obj > _hx_result = new MFiID_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MFiID_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4fcc453d;
}

 ::flixel::input::gamepad::FlxGamepadAnalogStick MFiID_obj::LEFT_ANALOG_STICK;

 ::flixel::input::gamepad::FlxGamepadAnalogStick MFiID_obj::RIGHT_ANALOG_STICK;


MFiID_obj::MFiID_obj()
{
}

bool MFiID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

bool MFiID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *MFiID_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MFiID_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadAnalogStick */ ,(void *) &MFiID_obj::LEFT_ANALOG_STICK,HX_("LEFT_ANALOG_STICK",19,49,58,a5)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepadAnalogStick */ ,(void *) &MFiID_obj::RIGHT_ANALOG_STICK,HX_("RIGHT_ANALOG_STICK",44,e8,d6,b8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MFiID_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MFiID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_MARK_MEMBER_NAME(MFiID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MFiID_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MFiID_obj::LEFT_ANALOG_STICK,"LEFT_ANALOG_STICK");
	HX_VISIT_MEMBER_NAME(MFiID_obj::RIGHT_ANALOG_STICK,"RIGHT_ANALOG_STICK");
};

#endif

::hx::Class MFiID_obj::__mClass;

static ::String MFiID_obj_sStaticFields[] = {
	HX_("LEFT_ANALOG_STICK",19,49,58,a5),
	HX_("RIGHT_ANALOG_STICK",44,e8,d6,b8),
	::String(null())
};

void MFiID_obj::__register()
{
	MFiID_obj _hx_dummy;
	MFiID_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.id.MFiID",1b,1c,17,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MFiID_obj::__GetStatic;
	__mClass->mSetStaticField = &MFiID_obj::__SetStatic;
	__mClass->mMarkFunc = MFiID_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MFiID_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MFiID_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MFiID_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MFiID_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MFiID_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MFiID_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_4baac3ac28c90643_26_boot)
HXDLIN(  26)		LEFT_ANALOG_STICK =  ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__alloc( HX_CTX ,0,1, ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("right",dc,0b,64,e9),24)
            			->setFixed(1,HX_("up",5b,66,00,00),21)
            			->setFixed(2,HX_("down",62,f8,6d,42),22)
            			->setFixed(3,HX_("left",07,08,b0,47),23)));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_4baac3ac28c90643_32_boot)
HXDLIN(  32)		RIGHT_ANALOG_STICK =  ::flixel::input::gamepad::FlxGamepadAnalogStick_obj::__alloc( HX_CTX ,2,3, ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("right",dc,0b,64,e9),28)
            			->setFixed(1,HX_("up",5b,66,00,00),25)
            			->setFixed(2,HX_("down",62,f8,6d,42),26)
            			->setFixed(3,HX_("left",07,08,b0,47),27)));
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id
