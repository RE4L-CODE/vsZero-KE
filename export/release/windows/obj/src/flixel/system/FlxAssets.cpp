// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_84_drawLogo,"flixel.system.FlxAssets","drawLogo",0xabec0035,"flixel.system.FlxAssets.drawLogo","flixel/system/FlxAssets.hx",84,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_80_boot,"flixel.system.FlxAssets","boot",0x48106fd8,"flixel.system.FlxAssets.boot","flixel/system/FlxAssets.hx",80,0xd3ac1356)
HX_LOCAL_STACK_FRAME(_hx_pos_a4ce3a91bdd58bc5_81_boot,"flixel.system.FlxAssets","boot",0x48106fd8,"flixel.system.FlxAssets.boot","flixel/system/FlxAssets.hx",81,0xd3ac1356)
namespace flixel{
namespace _hx_system{

void FlxAssets_obj::__construct() { }

Dynamic FlxAssets_obj::__CreateEmpty() { return new FlxAssets_obj; }

void *FlxAssets_obj::_hx_vtable = 0;

Dynamic FlxAssets_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAssets_obj > _hx_result = new FlxAssets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAssets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d7f0aca;
}

::String FlxAssets_obj::FONT_DEFAULT;

::String FlxAssets_obj::FONT_DEBUGGER;

void FlxAssets_obj::drawLogo( ::openfl::display::Graphics graph){
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_84_drawLogo)
HXLINE(  86)		graph->beginFill(47394,null());
HXLINE(  87)		graph->moveTo(( (Float)(50) ),( (Float)(13) ));
HXLINE(  88)		graph->lineTo(( (Float)(51) ),( (Float)(13) ));
HXLINE(  89)		graph->lineTo(( (Float)(87) ),( (Float)(50) ));
HXLINE(  90)		graph->lineTo(( (Float)(87) ),( (Float)(51) ));
HXLINE(  91)		graph->lineTo(( (Float)(51) ),( (Float)(87) ));
HXLINE(  92)		graph->lineTo(( (Float)(50) ),( (Float)(87) ));
HXLINE(  93)		graph->lineTo(( (Float)(13) ),( (Float)(51) ));
HXLINE(  94)		graph->lineTo(( (Float)(13) ),( (Float)(50) ));
HXLINE(  95)		graph->lineTo(( (Float)(50) ),( (Float)(13) ));
HXLINE(  96)		graph->endFill();
HXLINE(  99)		graph->beginFill(16761138,null());
HXLINE( 100)		graph->moveTo(( (Float)(0) ),( (Float)(0) ));
HXLINE( 101)		graph->lineTo(( (Float)(25) ),( (Float)(0) ));
HXLINE( 102)		graph->lineTo(( (Float)(50) ),( (Float)(13) ));
HXLINE( 103)		graph->lineTo(( (Float)(13) ),( (Float)(50) ));
HXLINE( 104)		graph->lineTo(( (Float)(0) ),( (Float)(25) ));
HXLINE( 105)		graph->lineTo(( (Float)(0) ),( (Float)(0) ));
HXLINE( 106)		graph->endFill();
HXLINE( 109)		graph->beginFill(16066382,null());
HXLINE( 110)		graph->moveTo(( (Float)(100) ),( (Float)(0) ));
HXLINE( 111)		graph->lineTo(( (Float)(75) ),( (Float)(0) ));
HXLINE( 112)		graph->lineTo(( (Float)(51) ),( (Float)(13) ));
HXLINE( 113)		graph->lineTo(( (Float)(87) ),( (Float)(50) ));
HXLINE( 114)		graph->lineTo(( (Float)(100) ),( (Float)(25) ));
HXLINE( 115)		graph->lineTo(( (Float)(100) ),( (Float)(0) ));
HXLINE( 116)		graph->endFill();
HXLINE( 119)		graph->beginFill(3555839,null());
HXLINE( 120)		graph->moveTo(( (Float)(0) ),( (Float)(100) ));
HXLINE( 121)		graph->lineTo(( (Float)(25) ),( (Float)(100) ));
HXLINE( 122)		graph->lineTo(( (Float)(50) ),( (Float)(87) ));
HXLINE( 123)		graph->lineTo(( (Float)(13) ),( (Float)(51) ));
HXLINE( 124)		graph->lineTo(( (Float)(0) ),( (Float)(75) ));
HXLINE( 125)		graph->lineTo(( (Float)(0) ),( (Float)(100) ));
HXLINE( 126)		graph->endFill();
HXLINE( 129)		graph->beginFill(314875,null());
HXLINE( 130)		graph->moveTo(( (Float)(100) ),( (Float)(100) ));
HXLINE( 131)		graph->lineTo(( (Float)(75) ),( (Float)(100) ));
HXLINE( 132)		graph->lineTo(( (Float)(51) ),( (Float)(87) ));
HXLINE( 133)		graph->lineTo(( (Float)(87) ),( (Float)(51) ));
HXLINE( 134)		graph->lineTo(( (Float)(100) ),( (Float)(75) ));
HXLINE( 135)		graph->lineTo(( (Float)(100) ),( (Float)(100) ));
HXLINE( 136)		graph->endFill();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,drawLogo,(void))


FlxAssets_obj::FlxAssets_obj()
{
}

bool FlxAssets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"drawLogo") ) { outValue = drawLogo_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { outValue = ( FONT_DEFAULT ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { outValue = ( FONT_DEBUGGER ); return true; }
	}
	return false;
}

bool FlxAssets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"FONT_DEFAULT") ) { FONT_DEFAULT=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FONT_DEBUGGER") ) { FONT_DEBUGGER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAssets_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxAssets_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxAssets_obj::FONT_DEFAULT,HX_("FONT_DEFAULT",f1,12,32,e2)},
	{::hx::fsString,(void *) &FlxAssets_obj::FONT_DEBUGGER,HX_("FONT_DEBUGGER",d1,d3,ef,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxAssets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAssets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEFAULT,"FONT_DEFAULT");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::FONT_DEBUGGER,"FONT_DEBUGGER");
};

#endif

::hx::Class FlxAssets_obj::__mClass;

static ::String FlxAssets_obj_sStaticFields[] = {
	HX_("FONT_DEFAULT",f1,12,32,e2),
	HX_("FONT_DEBUGGER",d1,d3,ef,ea),
	HX_("drawLogo",8f,49,21,5c),
	::String(null())
};

void FlxAssets_obj::__register()
{
	FlxAssets_obj _hx_dummy;
	FlxAssets_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.FlxAssets",88,16,13,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAssets_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxAssets_obj::__SetStatic;
	__mClass->mMarkFunc = FlxAssets_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAssets_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxAssets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAssets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAssets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAssets_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxAssets_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_80_boot)
HXDLIN(  80)		FONT_DEFAULT = HX_("Nokia Cellphone FC Small",d6,2f,44,ca);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a4ce3a91bdd58bc5_81_boot)
HXDLIN(  81)		FONT_DEBUGGER = HX_("Monsterrat",2b,92,73,63);
            	}
}

} // end namespace flixel
} // end namespace system
