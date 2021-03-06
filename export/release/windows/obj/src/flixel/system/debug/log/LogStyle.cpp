// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4946e010770d7497_56_new,"flixel.system.debug.log.LogStyle","new",0xce018851,"flixel.system.debug.log.LogStyle.new","flixel/system/debug/log/LogStyle.hx",56,0x39dedcdd)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace log{

void LogStyle_obj::__construct(::String __o_Prefix,::String __o_Color,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_Bold,::hx::Null< bool >  __o_Italic,::hx::Null< bool >  __o_Underlined,::String ErrorSound,::hx::Null< bool >  __o_OpenConsole, ::Dynamic CallbackFunction){
            		::String Prefix = __o_Prefix;
            		if (::hx::IsNull(__o_Prefix)) Prefix = HX_("",00,00,00,00);
            		::String Color = __o_Color;
            		if (::hx::IsNull(__o_Color)) Color = HX_("FFFFFF",c0,27,82,79);
            		int Size = __o_Size.Default(12);
            		bool Bold = __o_Bold.Default(false);
            		bool Italic = __o_Italic.Default(false);
            		bool Underlined = __o_Underlined.Default(false);
            		bool OpenConsole = __o_OpenConsole.Default(false);
            	HX_STACKFRAME(&_hx_pos_4946e010770d7497_56_new)
HXLINE(  57)		this->prefix = Prefix;
HXLINE(  58)		this->color = Color;
HXLINE(  59)		this->size = Size;
HXLINE(  60)		this->bold = Bold;
HXLINE(  61)		this->italic = Italic;
HXLINE(  62)		this->underlined = Underlined;
HXLINE(  63)		this->errorSound = ErrorSound;
HXLINE(  64)		this->openConsole = OpenConsole;
HXLINE(  65)		this->callbackFunction = CallbackFunction;
            	}

Dynamic LogStyle_obj::__CreateEmpty() { return new LogStyle_obj; }

void *LogStyle_obj::_hx_vtable = 0;

Dynamic LogStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LogStyle_obj > _hx_result = new LogStyle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool LogStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x74ec9bed;
}


LogStyle_obj::LogStyle_obj()
{
}

void LogStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogStyle);
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(underlined,"underlined");
	HX_MARK_MEMBER_NAME(errorSound,"errorSound");
	HX_MARK_MEMBER_NAME(openConsole,"openConsole");
	HX_MARK_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_MARK_END_CLASS();
}

void LogStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(underlined,"underlined");
	HX_VISIT_MEMBER_NAME(errorSound,"errorSound");
	HX_VISIT_MEMBER_NAME(openConsole,"openConsole");
	HX_VISIT_MEMBER_NAME(callbackFunction,"callbackFunction");
}

::hx::Val LogStyle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		if (HX_FIELD_EQ(inName,"bold") ) { return ::hx::Val( bold ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { return ::hx::Val( prefix ); }
		if (HX_FIELD_EQ(inName,"italic") ) { return ::hx::Val( italic ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"underlined") ) { return ::hx::Val( underlined ); }
		if (HX_FIELD_EQ(inName,"errorSound") ) { return ::hx::Val( errorSound ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"openConsole") ) { return ::hx::Val( openConsole ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { return ::hx::Val( callbackFunction ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LogStyle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"underlined") ) { underlined=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"errorSound") ) { errorSound=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"openConsole") ) { openConsole=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { callbackFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("prefix",92,d9,b6,ae));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("underlined",d8,55,21,4f));
	outFields->push(HX_("errorSound",e7,7b,d0,f5));
	outFields->push(HX_("openConsole",ad,7c,17,b4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LogStyle_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(LogStyle_obj,prefix),HX_("prefix",92,d9,b6,ae)},
	{::hx::fsString,(int)offsetof(LogStyle_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsInt,(int)offsetof(LogStyle_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsBool,(int)offsetof(LogStyle_obj,bold),HX_("bold",85,81,1b,41)},
	{::hx::fsBool,(int)offsetof(LogStyle_obj,italic),HX_("italic",f0,2e,64,06)},
	{::hx::fsBool,(int)offsetof(LogStyle_obj,underlined),HX_("underlined",d8,55,21,4f)},
	{::hx::fsString,(int)offsetof(LogStyle_obj,errorSound),HX_("errorSound",e7,7b,d0,f5)},
	{::hx::fsBool,(int)offsetof(LogStyle_obj,openConsole),HX_("openConsole",ad,7c,17,b4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LogStyle_obj,callbackFunction),HX_("callbackFunction",fd,cd,91,7e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LogStyle_obj_sStaticStorageInfo = 0;
#endif

static ::String LogStyle_obj_sMemberFields[] = {
	HX_("prefix",92,d9,b6,ae),
	HX_("color",63,71,5c,4a),
	HX_("size",c1,a0,53,4c),
	HX_("bold",85,81,1b,41),
	HX_("italic",f0,2e,64,06),
	HX_("underlined",d8,55,21,4f),
	HX_("errorSound",e7,7b,d0,f5),
	HX_("openConsole",ad,7c,17,b4),
	HX_("callbackFunction",fd,cd,91,7e),
	::String(null()) };

::hx::Class LogStyle_obj::__mClass;

void LogStyle_obj::__register()
{
	LogStyle_obj _hx_dummy;
	LogStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.log.LogStyle",df,0b,09,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LogStyle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LogStyle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace log
