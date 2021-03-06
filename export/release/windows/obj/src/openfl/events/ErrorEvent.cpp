// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0aefc26d1b1b4062_76_new,"openfl.events.ErrorEvent","new",0x1354a39b,"openfl.events.ErrorEvent.new","openfl/events/ErrorEvent.hx",76,0x9d2fc215)
namespace openfl{
namespace events{

void ErrorEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_text,::hx::Null< int >  __o_id){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		int id = __o_id.Default(0);
            	HX_STACKFRAME(&_hx_pos_0aefc26d1b1b4062_76_new)
HXLINE(  77)		super::__construct(type,bubbles,cancelable,text);
HXLINE(  78)		this->errorID = id;
            	}

Dynamic ErrorEvent_obj::__CreateEmpty() { return new ErrorEvent_obj; }

void *ErrorEvent_obj::_hx_vtable = 0;

Dynamic ErrorEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ErrorEvent_obj > _hx_result = new ErrorEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool ErrorEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27730e1f) {
		if (inClassId<=(int)0x08ec4c31) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
		} else {
			return inClassId==(int)0x27730e1f;
		}
	} else {
		return inClassId==(int)0x53d8fde0;
	}
}


ErrorEvent_obj::ErrorEvent_obj()
{
}

::hx::Val ErrorEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { return ::hx::Val( errorID ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ErrorEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { errorID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("errorID",a3,8d,0a,ea));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ErrorEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ErrorEvent_obj,errorID),HX_("errorID",a3,8d,0a,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ErrorEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String ErrorEvent_obj_sMemberFields[] = {
	HX_("errorID",a3,8d,0a,ea),
	::String(null()) };

::hx::Class ErrorEvent_obj::__mClass;

void ErrorEvent_obj::__register()
{
	ErrorEvent_obj _hx_dummy;
	ErrorEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.ErrorEvent",29,3a,86,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ErrorEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ErrorEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ErrorEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ErrorEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
