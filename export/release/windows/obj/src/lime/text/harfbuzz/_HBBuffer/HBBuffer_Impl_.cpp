// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz_HBGlyphInfo
#include <lime/text/harfbuzz/HBGlyphInfo.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz_HBGlyphPosition
#include <lime/text/harfbuzz/HBGlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz__HBBuffer_HBBuffer_Impl_
#include <lime/text/harfbuzz/_HBBuffer/HBBuffer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_23__new,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","_new",0x3aec073a,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_._new","lime/text/harfbuzz/HBBuffer.hx",23,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_56_addUTF16,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","addUTF16",0x64878c44,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.addUTF16","lime/text/harfbuzz/HBBuffer.hx",56,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_75_getGlyphInfo,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","getGlyphInfo",0x4be6379d,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.getGlyphInfo","lime/text/harfbuzz/HBBuffer.hx",75,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_111_getGlyphPositions,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","getGlyphPositions",0xfdb08a1b,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.getGlyphPositions","lime/text/harfbuzz/HBBuffer.hx",111,0x7e6f757d)
HX_LOCAL_STACK_FRAME(_hx_pos_0be9af83ebc60cde_174_reset,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_","reset",0x3e4ef5d6,"lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_.reset","lime/text/harfbuzz/HBBuffer.hx",174,0x7e6f757d)
namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBBuffer{

void HBBuffer_Impl__obj::__construct() { }

Dynamic HBBuffer_Impl__obj::__CreateEmpty() { return new HBBuffer_Impl__obj; }

void *HBBuffer_Impl__obj::_hx_vtable = 0;

Dynamic HBBuffer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HBBuffer_Impl__obj > _hx_result = new HBBuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBBuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x56d99e0d;
}

 ::Dynamic HBBuffer_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_23__new)
HXDLIN(  23)		 ::Dynamic this1 = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_create()) );
HXDLIN(  23)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HBBuffer_Impl__obj,_new,return )

void HBBuffer_Impl__obj::addUTF16( ::Dynamic this1,Float text,int textLength,int itemOffset,int itemLength){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_56_addUTF16)
HXDLIN(  56)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_add_utf16(::hx::DynamicPtr(this1),text,textLength,itemOffset,itemLength);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HBBuffer_Impl__obj,addUTF16,(void))

::Array< ::Dynamic> HBBuffer_Impl__obj::getGlyphInfo( ::Dynamic this1){
            	HX_GC_STACKFRAME(&_hx_pos_0be9af83ebc60cde_75_getGlyphInfo)
HXLINE(  77)		 ::haxe::io::Bytes bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::alloc(0);
HXLINE(  78)		bytes = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_glyph_infos(::hx::DynamicPtr(this1),::hx::DynamicPtr(bytes))) );
HXLINE(  80)		if (::hx::IsNull( bytes )) {
HXLINE(  82)			return null();
            		}
            		else {
HXLINE(  86)			::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new();
HXLINE(  88)			int length = bytes->length;
HXLINE(  89)			int position = 0;
HXDLIN(  89)			 ::lime::text::harfbuzz::HBGlyphInfo info;
HXLINE(  91)			while((position < length)){
HXLINE(  93)				info =  ::lime::text::harfbuzz::HBGlyphInfo_obj::__alloc( HX_CTX );
HXLINE(  94)				info->codepoint = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE(  95)				position = (position + 4);
HXLINE(  96)				info->mask = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE(  97)				position = (position + 4);
HXLINE(  98)				info->cluster = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE(  99)				position = (position + 4);
HXLINE( 100)				result->push(info);
            			}
HXLINE( 103)			return result;
            		}
HXLINE(  80)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,getGlyphInfo,return )

::Array< ::Dynamic> HBBuffer_Impl__obj::getGlyphPositions( ::Dynamic this1){
            	HX_GC_STACKFRAME(&_hx_pos_0be9af83ebc60cde_111_getGlyphPositions)
HXLINE( 113)		 ::haxe::io::Bytes bytes = ::lime::utils::_Bytes::Bytes_Impl__obj::alloc(0);
HXLINE( 114)		bytes = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_get_glyph_positions(::hx::DynamicPtr(this1),::hx::DynamicPtr(bytes))) );
HXLINE( 116)		if (::hx::IsNull( bytes )) {
HXLINE( 118)			return null();
            		}
            		else {
HXLINE( 122)			::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new();
HXLINE( 124)			int length = bytes->length;
HXLINE( 125)			int position = 0;
HXDLIN( 125)			 ::lime::text::harfbuzz::HBGlyphPosition glyphPosition;
HXLINE( 127)			while((position < length)){
HXLINE( 129)				glyphPosition =  ::lime::text::harfbuzz::HBGlyphPosition_obj::__alloc( HX_CTX );
HXLINE( 130)				glyphPosition->xAdvance = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE( 131)				position = (position + 4);
HXLINE( 132)				glyphPosition->yAdvance = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE( 133)				position = (position + 4);
HXLINE( 134)				glyphPosition->xOffset = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE( 135)				position = (position + 4);
HXLINE( 136)				glyphPosition->yOffset = (((( (int)(bytes->b->__get(position)) ) | (( (int)(bytes->b->__get((position + 1))) ) << 8)) | (( (int)(bytes->b->__get((position + 2))) ) << 16)) | (( (int)(bytes->b->__get((position + 3))) ) << 24));
HXLINE( 137)				position = (position + 4);
HXLINE( 138)				result->push(glyphPosition);
            			}
HXLINE( 141)			return result;
            		}
HXLINE( 116)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,getGlyphPositions,return )

void HBBuffer_Impl__obj::reset( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_0be9af83ebc60cde_174_reset)
HXDLIN( 174)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_buffer_reset(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBuffer_Impl__obj,reset,(void))


HBBuffer_Impl__obj::HBBuffer_Impl__obj()
{
}

bool HBBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addUTF16") ) { outValue = addUTF16_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getGlyphInfo") ) { outValue = getGlyphInfo_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getGlyphPositions") ) { outValue = getGlyphPositions_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HBBuffer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HBBuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HBBuffer_Impl__obj::__mClass;

static ::String HBBuffer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("addUTF16",eb,39,fa,0e),
	HX_("getGlyphInfo",c4,44,9e,91),
	HX_("getGlyphPositions",94,6f,94,38),
	HX_("reset",cf,49,c8,e6),
	::String(null())
};

void HBBuffer_Impl__obj::__register()
{
	HBBuffer_Impl__obj _hx_dummy;
	HBBuffer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.text.harfbuzz._HBBuffer.HBBuffer_Impl_",35,bd,fe,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HBBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HBBuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HBBuffer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBBuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBBuffer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBBuffer
