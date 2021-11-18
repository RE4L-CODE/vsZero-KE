// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_polymod_format_JsonHelp
#include <polymod/format/JsonHelp.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9c18bffd7895cc1b_76_mapStr,"polymod.format.JsonHelp","mapStr",0x1ad2de5b,"polymod.format.JsonHelp.mapStr","polymod/format/JsonHelp.hx",76,0x7164f0d6)
HX_LOCAL_STACK_FRAME(_hx_pos_9c18bffd7895cc1b_95_str,"polymod.format.JsonHelp","str",0x1ad0fe0b,"polymod.format.JsonHelp.str","polymod/format/JsonHelp.hx",95,0x7164f0d6)
namespace polymod{
namespace format{

void JsonHelp_obj::__construct() { }

Dynamic JsonHelp_obj::__CreateEmpty() { return new JsonHelp_obj; }

void *JsonHelp_obj::_hx_vtable = 0;

Dynamic JsonHelp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JsonHelp_obj > _hx_result = new JsonHelp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JsonHelp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x626a4b56;
}

 ::haxe::ds::StringMap JsonHelp_obj::mapStr( ::Dynamic json,::String field){
            	HX_GC_STACKFRAME(&_hx_pos_9c18bffd7895cc1b_76_mapStr)
HXLINE(  77)		 ::haxe::ds::StringMap map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  78)		bool _hx_tmp;
HXDLIN(  78)		bool _hx_tmp1;
HXDLIN(  78)		if (::hx::IsNotNull( json )) {
HXLINE(  78)			_hx_tmp1 = (field == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  78)			_hx_tmp1 = true;
            		}
HXDLIN(  78)		if (!(_hx_tmp1)) {
HXLINE(  78)			_hx_tmp = ::hx::IsNull( field );
            		}
            		else {
HXLINE(  78)			_hx_tmp = true;
            		}
HXDLIN(  78)		if (_hx_tmp) {
HXLINE(  79)			return map;
            		}
HXLINE(  80)		 ::Dynamic val = null();
HXLINE(  81)		if (::Reflect_obj::hasField(json,field)) {
HXLINE(  82)			val = ::Reflect_obj::field(json,field);
            		}
HXLINE(  83)		if (::hx::IsNotNull( val )) {
HXLINE(  85)			int _g = 0;
HXDLIN(  85)			::Array< ::String > _g1 = ::Reflect_obj::fields(val);
HXDLIN(  85)			while((_g < _g1->length)){
HXLINE(  85)				::String field = _g1->__get(_g);
HXDLIN(  85)				_g = (_g + 1);
HXLINE(  87)				 ::Dynamic fieldVal = ::Reflect_obj::field(val,field);
HXLINE(  88)				map->set(field,::Std_obj::string(fieldVal));
            			}
            		}
HXLINE(  91)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JsonHelp_obj,mapStr,return )

::String JsonHelp_obj::str( ::Dynamic json,::String field,::String __o_defaultValue){
            		::String defaultValue = __o_defaultValue;
            		if (::hx::IsNull(__o_defaultValue)) defaultValue = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_9c18bffd7895cc1b_95_str)
HXLINE(  96)		::String str = HX_("",00,00,00,00);
HXLINE(  97)		if (::Reflect_obj::hasField(json,field)) {
HXLINE(  98)			str = ( (::String)(::Reflect_obj::field(json,field)) );
            		}
HXLINE(  99)		bool _hx_tmp;
HXDLIN(  99)		if (::hx::IsNotNull( str )) {
HXLINE(  99)			_hx_tmp = (str == HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  99)			_hx_tmp = true;
            		}
HXDLIN(  99)		if (_hx_tmp) {
HXLINE( 100)			return defaultValue;
            		}
HXLINE( 101)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JsonHelp_obj,str,return )


JsonHelp_obj::JsonHelp_obj()
{
}

bool JsonHelp_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { outValue = str_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mapStr") ) { outValue = mapStr_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *JsonHelp_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *JsonHelp_obj_sStaticStorageInfo = 0;
#endif

::hx::Class JsonHelp_obj::__mClass;

static ::String JsonHelp_obj_sStaticFields[] = {
	HX_("mapStr",75,df,0b,b9),
	HX_("str",b1,a8,57,00),
	::String(null())
};

void JsonHelp_obj::__register()
{
	JsonHelp_obj _hx_dummy;
	JsonHelp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.JsonHelp",c8,80,2d,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JsonHelp_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(JsonHelp_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< JsonHelp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JsonHelp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JsonHelp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format
