// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_geom_Matrix
#define INCLUDED_openfl_geom_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,math,Matrix3)
HX_DECLARE_CLASS2(lime,utils,ObjectPool)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Matrix_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();

	public:
		enum { _hx_ClassId = 0x065caf19 };

		void __construct(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.geom.Matrix")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.geom.Matrix"); }
		static ::hx::ObjectPtr< Matrix_obj > __new(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty);
		static ::hx::ObjectPtr< Matrix_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Matrix_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Matrix",61,aa,5c,f0); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::lime::utils::ObjectPool _hx___pool;
		static  ::lime::math::Matrix3 _hx___matrix3;
		Float a;
		Float b;
		Float c;
		Float d;
		Float tx;
		Float ty;
		 ::openfl::geom::Matrix clone();
		::Dynamic clone_dyn();

		void concat( ::openfl::geom::Matrix m);
		::Dynamic concat_dyn();

		void copyFrom( ::openfl::geom::Matrix sourceMatrix);
		::Dynamic copyFrom_dyn();

		void createGradientBox(Float width,Float height,::hx::Null< Float >  rotation,::hx::Null< Float >  tx,::hx::Null< Float >  ty);
		::Dynamic createGradientBox_dyn();

		bool equals( ::openfl::geom::Matrix matrix);
		::Dynamic equals_dyn();

		void identity();
		::Dynamic identity_dyn();

		 ::openfl::geom::Matrix invert();
		::Dynamic invert_dyn();

		void rotate(Float theta);
		::Dynamic rotate_dyn();

		void scale(Float sx,Float sy);
		::Dynamic scale_dyn();

		void setTo(Float a,Float b,Float c,Float d,Float tx,Float ty);
		::Dynamic setTo_dyn();

		void translate(Float dx,Float dy);
		::Dynamic translate_dyn();

		 ::lime::math::Matrix3 _hx___toMatrix3();
		::Dynamic _hx___toMatrix3_dyn();

};

} // end namespace openfl
} // end namespace geom

#endif /* INCLUDED_openfl_geom_Matrix */ 
