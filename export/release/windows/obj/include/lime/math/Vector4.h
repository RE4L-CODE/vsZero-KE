// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_math_Vector4
#define INCLUDED_lime_math_Vector4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4684393cb692a867_68_new)
HX_DECLARE_CLASS2(lime,math,Vector4)

namespace lime{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Vector4_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Vector4_obj OBJ_;
		Vector4_obj();

	public:
		enum { _hx_ClassId = 0x38fae9ac };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.math.Vector4")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.math.Vector4"); }

		inline static ::hx::ObjectPtr< Vector4_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
			::hx::ObjectPtr< Vector4_obj > __this = new Vector4_obj();
			__this->__construct(__o_x,__o_y,__o_z,__o_w);
			return __this;
		}

		inline static ::hx::ObjectPtr< Vector4_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_z,::hx::Null< Float >  __o_w) {
			Vector4_obj *__this = (Vector4_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Vector4_obj), false, "lime.math.Vector4"));
			*(void **)__this = Vector4_obj::_hx_vtable;
{
            		Float x = __o_x.Default(((Float)0.));
            		Float y = __o_y.Default(((Float)0.));
            		Float z = __o_z.Default(((Float)0.));
            		Float w = __o_w.Default(((Float)0.));
            	HX_STACKFRAME(&_hx_pos_4684393cb692a867_68_new)
HXLINE(  69)		( ( ::lime::math::Vector4)(__this) )->w = w;
HXLINE(  70)		( ( ::lime::math::Vector4)(__this) )->x = x;
HXLINE(  71)		( ( ::lime::math::Vector4)(__this) )->y = y;
HXLINE(  72)		( ( ::lime::math::Vector4)(__this) )->z = z;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Vector4_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Vector4",f1,21,ee,a7); }

		Float w;
		Float x;
		Float y;
		Float z;
};

} // end namespace lime
} // end namespace math

#endif /* INCLUDED_lime_math_Vector4 */ 
