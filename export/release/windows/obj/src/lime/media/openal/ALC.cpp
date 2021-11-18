// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_media_openal_ALC
#include <lime/media/openal/ALC.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3ab4d7f5cd522c83_39_closeDevice,"lime.media.openal.ALC","closeDevice",0x299f7402,"lime.media.openal.ALC.closeDevice","lime/media/openal/ALC.hx",39,0x4354dabb)
HX_LOCAL_STACK_FRAME(_hx_pos_3ab4d7f5cd522c83_46_createContext,"lime.media.openal.ALC","createContext",0xb9806ce7,"lime.media.openal.ALC.createContext","lime/media/openal/ALC.hx",46,0x4354dabb)
HX_LOCAL_STACK_FRAME(_hx_pos_3ab4d7f5cd522c83_72_destroyContext,"lime.media.openal.ALC","destroyContext",0x9b5c4701,"lime.media.openal.ALC.destroyContext","lime/media/openal/ALC.hx",72,0x4354dabb)
HX_LOCAL_STACK_FRAME(_hx_pos_3ab4d7f5cd522c83_77_getContextsDevice,"lime.media.openal.ALC","getContextsDevice",0x197cc724,"lime.media.openal.ALC.getContextsDevice","lime/media/openal/ALC.hx",77,0x4354dabb)
HX_LOCAL_STACK_FRAME(_hx_pos_3ab4d7f5cd522c83_90_getCurrentContext,"lime.media.openal.ALC","getCurrentContext",0x166a9280,"lime.media.openal.ALC.getCurrentContext","lime/media/openal/ALC.hx",90,0x4354dabb)
HX_LOCAL_STACK_FRAME(_hx_pos_3ab4d7f5cd522c83_159_makeContextCurrent,"lime.media.openal.ALC","makeContextCurrent",0x65611584,"lime.media.openal.ALC.makeContextCurrent","lime/media/openal/ALC.hx",159,0x4354dabb)
HX_LOCAL_STACK_FRAME(_hx_pos_3ab4d7f5cd522c83_166_openDevice,"lime.media.openal.ALC","openDevice",0x31de24ec,"lime.media.openal.ALC.openDevice","lime/media/openal/ALC.hx",166,0x4354dabb)
HX_LOCAL_STACK_FRAME(_hx_pos_3ab4d7f5cd522c83_182_pauseDevice,"lime.media.openal.ALC","pauseDevice",0x636035c0,"lime.media.openal.ALC.pauseDevice","lime/media/openal/ALC.hx",182,0x4354dabb)
HX_LOCAL_STACK_FRAME(_hx_pos_3ab4d7f5cd522c83_189_processContext,"lime.media.openal.ALC","processContext",0xe14e9a2c,"lime.media.openal.ALC.processContext","lime/media/openal/ALC.hx",189,0x4354dabb)
HX_LOCAL_STACK_FRAME(_hx_pos_3ab4d7f5cd522c83_196_resumeDevice,"lime.media.openal.ALC","resumeDevice",0x6ff2aa0f,"lime.media.openal.ALC.resumeDevice","lime/media/openal/ALC.hx",196,0x4354dabb)
HX_LOCAL_STACK_FRAME(_hx_pos_3ab4d7f5cd522c83_203_suspendContext,"lime.media.openal.ALC","suspendContext",0x143578bf,"lime.media.openal.ALC.suspendContext","lime/media/openal/ALC.hx",203,0x4354dabb)
namespace lime{
namespace media{
namespace openal{

void ALC_obj::__construct() { }

Dynamic ALC_obj::__CreateEmpty() { return new ALC_obj; }

void *ALC_obj::_hx_vtable = 0;

Dynamic ALC_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ALC_obj > _hx_result = new ALC_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ALC_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d6a1a00;
}

bool ALC_obj::closeDevice( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_3ab4d7f5cd522c83_39_closeDevice)
HXDLIN(  39)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_alc_close_device(::hx::DynamicPtr(device));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,closeDevice,return )

 ::Dynamic ALC_obj::createContext( ::Dynamic device,::Array< int > attrlist){
            	HX_STACKFRAME(&_hx_pos_3ab4d7f5cd522c83_46_createContext)
HXLINE(  58)		 ::hx::Object * handle = ::lime::_internal::backend::native::NativeCFFI_obj::lime_alc_create_context(::hx::DynamicPtr(device),::hx::DynamicPtr(attrlist));
HXLINE(  60)		if (::hx::IsNotNull( handle )) {
HXLINE(  62)			 ::Dynamic this1 = ( ( ::Dynamic)(handle) );
HXDLIN(  62)			return this1;
            		}
HXLINE(  66)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ALC_obj,createContext,return )

void ALC_obj::destroyContext( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_3ab4d7f5cd522c83_72_destroyContext)
HXDLIN(  72)		::lime::_internal::backend::native::NativeCFFI_obj::lime_alc_destroy_context(::hx::DynamicPtr(context));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,destroyContext,(void))

 ::Dynamic ALC_obj::getContextsDevice( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_3ab4d7f5cd522c83_77_getContextsDevice)
HXLINE(  78)		 ::Dynamic handle = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_alc_get_contexts_device(::hx::DynamicPtr(context))) );
HXLINE(  80)		if (::hx::IsNotNull( handle )) {
HXLINE(  82)			 ::Dynamic this1 = handle;
HXDLIN(  82)			return this1;
            		}
HXLINE(  86)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,getContextsDevice,return )

 ::Dynamic ALC_obj::getCurrentContext(){
            	HX_STACKFRAME(&_hx_pos_3ab4d7f5cd522c83_90_getCurrentContext)
HXLINE(  92)		 ::Dynamic handle = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_alc_get_current_context()) );
HXLINE(  94)		if (::hx::IsNotNull( handle )) {
HXLINE(  96)			 ::Dynamic this1 = handle;
HXDLIN(  96)			return this1;
            		}
HXLINE( 100)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ALC_obj,getCurrentContext,return )

bool ALC_obj::makeContextCurrent( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_3ab4d7f5cd522c83_159_makeContextCurrent)
HXDLIN( 159)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_alc_make_context_current(::hx::DynamicPtr(context));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,makeContextCurrent,return )

 ::Dynamic ALC_obj::openDevice(::String deviceName){
            	HX_STACKFRAME(&_hx_pos_3ab4d7f5cd522c83_166_openDevice)
HXLINE( 168)		 ::hx::Object * handle = ::lime::_internal::backend::native::NativeCFFI_obj::lime_alc_open_device(deviceName);
HXLINE( 170)		if (::hx::IsNotNull( handle )) {
HXLINE( 172)			 ::Dynamic this1 = ( ( ::Dynamic)(handle) );
HXDLIN( 172)			return this1;
            		}
HXLINE( 176)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,openDevice,return )

void ALC_obj::pauseDevice( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_3ab4d7f5cd522c83_182_pauseDevice)
HXDLIN( 182)		::lime::_internal::backend::native::NativeCFFI_obj::lime_alc_pause_device(::hx::DynamicPtr(device));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,pauseDevice,(void))

void ALC_obj::processContext( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_3ab4d7f5cd522c83_189_processContext)
HXDLIN( 189)		::lime::_internal::backend::native::NativeCFFI_obj::lime_alc_process_context(::hx::DynamicPtr(context));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,processContext,(void))

void ALC_obj::resumeDevice( ::Dynamic device){
            	HX_STACKFRAME(&_hx_pos_3ab4d7f5cd522c83_196_resumeDevice)
HXDLIN( 196)		::lime::_internal::backend::native::NativeCFFI_obj::lime_alc_resume_device(::hx::DynamicPtr(device));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,resumeDevice,(void))

void ALC_obj::suspendContext( ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_3ab4d7f5cd522c83_203_suspendContext)
HXDLIN( 203)		::lime::_internal::backend::native::NativeCFFI_obj::lime_alc_suspend_context(::hx::DynamicPtr(context));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALC_obj,suspendContext,(void))


ALC_obj::ALC_obj()
{
}

bool ALC_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"openDevice") ) { outValue = openDevice_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"closeDevice") ) { outValue = closeDevice_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pauseDevice") ) { outValue = pauseDevice_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resumeDevice") ) { outValue = resumeDevice_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createContext") ) { outValue = createContext_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyContext") ) { outValue = destroyContext_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"processContext") ) { outValue = processContext_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"suspendContext") ) { outValue = suspendContext_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getContextsDevice") ) { outValue = getContextsDevice_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCurrentContext") ) { outValue = getCurrentContext_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"makeContextCurrent") ) { outValue = makeContextCurrent_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ALC_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ALC_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ALC_obj::__mClass;

static ::String ALC_obj_sStaticFields[] = {
	HX_("closeDevice",6e,02,c8,2b),
	HX_("createContext",53,6e,ba,01),
	HX_("destroyContext",15,84,e3,85),
	HX_("getContextsDevice",90,ee,91,9c),
	HX_("getCurrentContext",ec,b9,7f,99),
	HX_("makeContextCurrent",98,6c,ce,94),
	HX_("openDevice",00,48,14,bf),
	HX_("pauseDevice",2c,c4,88,65),
	HX_("processContext",40,d7,d5,cb),
	HX_("resumeDevice",23,ba,46,51),
	HX_("suspendContext",d3,b5,bc,fe),
	::String(null())
};

void ALC_obj::__register()
{
	ALC_obj _hx_dummy;
	ALC_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.openal.ALC",02,c4,da,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALC_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ALC_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ALC_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALC_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALC_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace openal
