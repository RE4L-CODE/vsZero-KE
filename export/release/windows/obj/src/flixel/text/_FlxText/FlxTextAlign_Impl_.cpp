// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1171_fromOpenFL,"flixel.text._FlxText.FlxTextAlign_Impl_","fromOpenFL",0xc584ea03,"flixel.text._FlxText.FlxTextAlign_Impl_.fromOpenFL","flixel/text/FlxText.hx",1171,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_b1c62838e0cb70a0_1183_toOpenFL,"flixel.text._FlxText.FlxTextAlign_Impl_","toOpenFL",0xa34e3094,"flixel.text._FlxText.FlxTextAlign_Impl_.toOpenFL","flixel/text/FlxText.hx",1183,0xdf165a6e)
namespace flixel{
namespace text{
namespace _FlxText{

void FlxTextAlign_Impl__obj::__construct() { }

Dynamic FlxTextAlign_Impl__obj::__CreateEmpty() { return new FlxTextAlign_Impl__obj; }

void *FlxTextAlign_Impl__obj::_hx_vtable = 0;

Dynamic FlxTextAlign_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTextAlign_Impl__obj > _hx_result = new FlxTextAlign_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTextAlign_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20f90a13;
}

::String FlxTextAlign_Impl__obj::fromOpenFL( ::Dynamic align){
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1171_fromOpenFL)
HXDLIN(1171)		 ::Dynamic _hx_switch_0 = align;
            		if (  (_hx_switch_0==0) ){
HXLINE(1174)			return HX_("center",d5,25,db,05);
HXDLIN(1174)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(1176)			return HX_("justify",50,df,b5,83);
HXDLIN(1176)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(1173)			return HX_("left",07,08,b0,47);
HXDLIN(1173)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE(1175)			return HX_("right",dc,0b,64,e9);
HXDLIN(1175)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(1177)			return HX_("left",07,08,b0,47);
            		}
            		_hx_goto_0:;
HXLINE(1171)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTextAlign_Impl__obj,fromOpenFL,return )

 ::Dynamic FlxTextAlign_Impl__obj::toOpenFL(::String align){
            	HX_STACKFRAME(&_hx_pos_b1c62838e0cb70a0_1183_toOpenFL)
HXDLIN(1183)		::String _hx_switch_0 = align;
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(1186)			return 0;
HXDLIN(1186)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("justify",50,df,b5,83)) ){
HXLINE(1188)			return 2;
HXDLIN(1188)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(1185)			return 3;
HXDLIN(1185)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(1187)			return 4;
HXDLIN(1187)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(1189)			return 3;
            		}
            		_hx_goto_2:;
HXLINE(1183)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTextAlign_Impl__obj,toOpenFL,return )


FlxTextAlign_Impl__obj::FlxTextAlign_Impl__obj()
{
}

bool FlxTextAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toOpenFL") ) { outValue = toOpenFL_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromOpenFL") ) { outValue = fromOpenFL_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxTextAlign_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxTextAlign_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxTextAlign_Impl__obj::__mClass;

static ::String FlxTextAlign_Impl__obj_sStaticFields[] = {
	HX_("fromOpenFL",9a,4c,d8,64),
	HX_("toOpenFL",6b,ef,d2,48),
	::String(null())
};

void FlxTextAlign_Impl__obj::__register()
{
	FlxTextAlign_Impl__obj _hx_dummy;
	FlxTextAlign_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.text._FlxText.FlxTextAlign_Impl_",65,e8,c9,65);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTextAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTextAlign_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxTextAlign_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTextAlign_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTextAlign_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace text
} // end namespace _FlxText
