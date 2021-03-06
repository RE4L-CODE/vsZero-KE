// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_display__internal_SamplerState
#include <openfl/display/_internal/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ccb53fcc86b81631_39_new,"openfl.display3D.textures.CubeTexture","new",0x2100f37b,"openfl.display3D.textures.CubeTexture.new","openfl/display3D/textures/CubeTexture.hx",39,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_256___getGLFramebuffer,"openfl.display3D.textures.CubeTexture","__getGLFramebuffer",0x0b1986d7,"openfl.display3D.textures.CubeTexture.__getGLFramebuffer","openfl/display3D/textures/CubeTexture.hx",256,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_287___setSamplerState,"openfl.display3D.textures.CubeTexture","__setSamplerState",0x909e23e6,"openfl.display3D.textures.CubeTexture.__setSamplerState","openfl/display3D/textures/CubeTexture.hx",287,0xffe9b114)
namespace openfl{
namespace display3D{
namespace textures{

void CubeTexture_obj::__construct( ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_39_new)
HXLINE(  40)		super::__construct(context);
HXLINE(  42)		this->_hx___size = size;
HXLINE(  43)		this->_hx___width = (this->_hx___height = this->_hx___size);
HXLINE(  45)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  46)		this->_hx___streamingLevels = streamingLevels;
HXLINE(  48)		this->_hx___textureTarget = this->_hx___context->gl->TEXTURE_CUBE_MAP;
HXLINE(  49)		this->_hx___uploadedSides = 0;
            	}

Dynamic CubeTexture_obj::__CreateEmpty() { return new CubeTexture_obj; }

void *CubeTexture_obj::_hx_vtable = 0;

Dynamic CubeTexture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CubeTexture_obj > _hx_result = new CubeTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool CubeTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1503748b) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x1503748b;
		}
	} else {
		return inClassId==(int)0x3247d979;
	}
}

 ::lime::graphics::opengl::GLObject CubeTexture_obj::_hx___getGLFramebuffer(bool enableDepthAndStencil,int antiAlias,int surfaceSelector){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_256___getGLFramebuffer)
HXLINE( 257)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 259)		if (::hx::IsNull( this->_hx___glFramebuffer )) {
HXLINE( 261)			this->_hx___glFramebuffer = gl->createFramebuffer();
HXLINE( 262)			this->_hx___framebufferSurface = -1;
            		}
HXLINE( 265)		if ((this->_hx___framebufferSurface != surfaceSelector)) {
HXLINE( 267)			this->_hx___framebufferSurface = surfaceSelector;
HXLINE( 269)			this->_hx___context->_hx___bindGLFramebuffer(this->_hx___glFramebuffer);
HXLINE( 270)			gl->framebufferTexture2D(gl->FRAMEBUFFER,gl->COLOR_ATTACHMENT0,(gl->TEXTURE_CUBE_MAP_POSITIVE_X + surfaceSelector),this->_hx___textureID,0);
HXLINE( 272)			if (this->_hx___context->_hx___enableErrorChecking) {
HXLINE( 274)				int code = gl->checkFramebufferStatus(gl->FRAMEBUFFER);
HXLINE( 276)				if ((code != gl->FRAMEBUFFER_COMPLETE)) {
HXLINE( 278)					::lime::utils::Log_obj::error((((((HX_("Error: Context3D.setRenderToTexture status:",4c,0a,86,52) + code) + HX_(" width:",94,67,ab,7e)) + this->_hx___width) + HX_(" height:",53,26,89,26)) + this->_hx___height),::hx::SourceInfo(HX_("openfl/display3D/textures/CubeTexture.hx",14,b1,e9,ff),278,HX_("openfl.display3D.textures.CubeTexture",09,1a,15,3a),HX_("__getGLFramebuffer",92,f3,72,c9)));
            				}
            			}
            		}
HXLINE( 283)		return this->super::_hx___getGLFramebuffer(enableDepthAndStencil,antiAlias,surfaceSelector);
            	}


bool CubeTexture_obj::_hx___setSamplerState( ::openfl::display::_internal::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_287___setSamplerState)
HXLINE( 288)		if (this->super::_hx___setSamplerState(state)) {
HXLINE( 290)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 292)			bool _hx_tmp;
HXDLIN( 292)			if (::hx::IsNotEq( state->mipfilter,2 )) {
HXLINE( 292)				_hx_tmp = !(this->_hx___samplerState->mipmapGenerated);
            			}
            			else {
HXLINE( 292)				_hx_tmp = false;
            			}
HXDLIN( 292)			if (_hx_tmp) {
HXLINE( 294)				gl->generateMipmap(gl->TEXTURE_CUBE_MAP);
HXLINE( 295)				this->_hx___samplerState->mipmapGenerated = true;
            			}
HXLINE( 298)			if ((::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy != 0)) {
HXLINE( 300)				int aniso;
HXDLIN( 300)				 ::Dynamic _hx_switch_0 = state->filter;
            				if (  (_hx_switch_0==0) ){
HXLINE( 300)					aniso = 16;
HXDLIN( 300)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE( 300)					aniso = 2;
HXDLIN( 300)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE( 300)					aniso = 4;
HXDLIN( 300)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE( 300)					aniso = 8;
HXDLIN( 300)					goto _hx_goto_2;
            				}
            				/* default */{
HXLINE( 300)					aniso = 1;
            				}
            				_hx_goto_2:;
HXLINE( 309)				if ((aniso > ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy)) {
HXLINE( 311)					aniso = ::openfl::display3D::Context3D_obj::_hx___glMaxTextureMaxAnisotropy;
            				}
HXLINE( 314)				gl->texParameterf(gl->TEXTURE_CUBE_MAP,::openfl::display3D::Context3D_obj::_hx___glTextureMaxAnisotropy,( (Float)(aniso) ));
            			}
HXLINE( 317)			return true;
            		}
HXLINE( 320)		return false;
            	}



::hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new( ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	::hx::ObjectPtr< CubeTexture_obj > __this = new CubeTexture_obj();
	__this->__construct(context,size,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

::hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	CubeTexture_obj *__this = (CubeTexture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CubeTexture_obj), true, "openfl.display3D.textures.CubeTexture"));
	*(void **)__this = CubeTexture_obj::_hx_vtable;
	__this->__construct(context,size,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

CubeTexture_obj::CubeTexture_obj()
{
}

::hx::Val CubeTexture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { return ::hx::Val( _hx___size ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { return ::hx::Val( _hx___uploadedSides ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return ::hx::Val( _hx___setSamplerState_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__getGLFramebuffer") ) { return ::hx::Val( _hx___getGLFramebuffer_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__framebufferSurface") ) { return ::hx::Val( _hx___framebufferSurface ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CubeTexture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { _hx___size=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { _hx___uploadedSides=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__framebufferSurface") ) { _hx___framebufferSurface=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__framebufferSurface",e0,3b,24,cd));
	outFields->push(HX_("__size",e1,03,4c,fb));
	outFields->push(HX_("__uploadedSides",1c,d7,55,a3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CubeTexture_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CubeTexture_obj,_hx___framebufferSurface),HX_("__framebufferSurface",e0,3b,24,cd)},
	{::hx::fsInt,(int)offsetof(CubeTexture_obj,_hx___size),HX_("__size",e1,03,4c,fb)},
	{::hx::fsInt,(int)offsetof(CubeTexture_obj,_hx___uploadedSides),HX_("__uploadedSides",1c,d7,55,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CubeTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String CubeTexture_obj_sMemberFields[] = {
	HX_("__framebufferSurface",e0,3b,24,cd),
	HX_("__size",e1,03,4c,fb),
	HX_("__uploadedSides",1c,d7,55,a3),
	HX_("__getGLFramebuffer",92,f3,72,c9),
	HX_("__setSamplerState",8b,e7,cf,5d),
	::String(null()) };

::hx::Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	CubeTexture_obj _hx_dummy;
	CubeTexture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D.textures.CubeTexture",09,1a,15,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CubeTexture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CubeTexture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeTexture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
