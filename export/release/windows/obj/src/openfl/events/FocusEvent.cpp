// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_168_new,"openfl.events.FocusEvent","new",0xf00a0d8b,"openfl.events.FocusEvent.new","openfl/events/FocusEvent.hx",168,0xe559e625)
namespace openfl{
namespace events{

void FocusEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_shiftKey,::hx::Null< int >  __o_keyCode){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		bool shiftKey = __o_shiftKey.Default(false);
            		int keyCode = __o_keyCode.Default(0);
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_168_new)
HXLINE( 169)		super::__construct(type,bubbles,cancelable);
HXLINE( 171)		this->keyCode = keyCode;
HXLINE( 172)		this->shiftKey = shiftKey;
HXLINE( 173)		this->relatedObject = relatedObject;
            	}

Dynamic FocusEvent_obj::__CreateEmpty() { return new FocusEvent_obj; }

void *FocusEvent_obj::_hx_vtable = 0;

Dynamic FocusEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FocusEvent_obj > _hx_result = new FocusEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FocusEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x2575b1ab;
	}
}


::hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_shiftKey,::hx::Null< int >  __o_keyCode) {
	::hx::ObjectPtr< FocusEvent_obj > __this = new FocusEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,relatedObject,__o_shiftKey,__o_keyCode);
	return __this;
}

::hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_shiftKey,::hx::Null< int >  __o_keyCode) {
	FocusEvent_obj *__this = (FocusEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FocusEvent_obj), true, "openfl.events.FocusEvent"));
	*(void **)__this = FocusEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,relatedObject,__o_shiftKey,__o_keyCode);
	return __this;
}

FocusEvent_obj::FocusEvent_obj()
{
}

void FocusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusEvent);
	HX_MARK_MEMBER_NAME(keyCode,"keyCode");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FocusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyCode,"keyCode");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FocusEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return ::hx::Val( keyCode ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return ::hx::Val( shiftKey ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return ::hx::Val( relatedObject ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FocusEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FocusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("keyCode",6c,22,9e,9b));
	outFields->push(HX_("relatedObject",0a,bf,cb,e8));
	outFields->push(HX_("shiftKey",3d,92,9f,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FocusEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FocusEvent_obj,keyCode),HX_("keyCode",6c,22,9e,9b)},
	{::hx::fsObject /*  ::openfl::display::InteractiveObject */ ,(int)offsetof(FocusEvent_obj,relatedObject),HX_("relatedObject",0a,bf,cb,e8)},
	{::hx::fsBool,(int)offsetof(FocusEvent_obj,shiftKey),HX_("shiftKey",3d,92,9f,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FocusEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String FocusEvent_obj_sMemberFields[] = {
	HX_("keyCode",6c,22,9e,9b),
	HX_("relatedObject",0a,bf,cb,e8),
	HX_("shiftKey",3d,92,9f,99),
	::String(null()) };

::hx::Class FocusEvent_obj::__mClass;

void FocusEvent_obj::__register()
{
	FocusEvent_obj _hx_dummy;
	FocusEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.FocusEvent",19,ec,e3,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FocusEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FocusEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
