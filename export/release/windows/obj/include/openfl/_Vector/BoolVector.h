// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl__Vector_BoolVector
#define INCLUDED_openfl__Vector_BoolVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,BoolVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)

namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES BoolVector_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BoolVector_obj OBJ_;
		BoolVector_obj();

	public:
		enum { _hx_ClassId = 0x718919df };

		void __construct(::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::Array< bool > array);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._Vector.BoolVector")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl._Vector.BoolVector"); }
		static ::hx::ObjectPtr< BoolVector_obj > __new(::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::Array< bool > array);
		static ::hx::ObjectPtr< BoolVector_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::Array< bool > array);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BoolVector_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("BoolVector",ad,28,bf,2d); }

		static void __boot();
		static  ::Dynamic __meta__;
		bool fixed;
		::Array< bool > _hx___array;
		 ::Dynamic toJSON();
		::Dynamic toJSON_dyn();

		int set_length(int value);
		::Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_BoolVector */ 
