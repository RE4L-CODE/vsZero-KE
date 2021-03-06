// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#define INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,utils,_ByteArray,ByteArray_Impl_)

namespace openfl{
namespace utils{
namespace _ByteArray{


class HXCPP_CLASS_ATTRIBUTES ByteArray_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ByteArray_Impl__obj OBJ_;
		ByteArray_Impl__obj();

	public:
		enum { _hx_ClassId = 0x63baca82 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.utils._ByteArray.ByteArray_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.utils._ByteArray.ByteArray_Impl_"); }

		inline static ::hx::ObjectPtr< ByteArray_Impl__obj > __new() {
			::hx::ObjectPtr< ByteArray_Impl__obj > __this = new ByteArray_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ByteArray_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ByteArray_Impl__obj *__this = (ByteArray_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ByteArray_Impl__obj), false, "openfl.utils._ByteArray.ByteArray_Impl_"));
			*(void **)__this = ByteArray_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ByteArray_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ByteArray_Impl_",b1,b0,f9,e1); }

		static  ::openfl::utils::ByteArrayData fromArrayBuffer( ::haxe::io::Bytes buffer);
		static ::Dynamic fromArrayBuffer_dyn();

		static  ::openfl::utils::ByteArrayData fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::openfl::utils::ByteArrayData fromBytesData(::Array< unsigned char > bytesData);
		static ::Dynamic fromBytesData_dyn();

		static  ::haxe::io::Bytes toArrayBuffer( ::openfl::utils::ByteArrayData byteArray);
		static ::Dynamic toArrayBuffer_dyn();

		static int get_length( ::openfl::utils::ByteArrayData this1);
		static ::Dynamic get_length_dyn();

		static int set_length( ::openfl::utils::ByteArrayData this1,int value);
		static ::Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _ByteArray

#endif /* INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_ */ 
