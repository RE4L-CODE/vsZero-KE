// Generated by Haxe 4.1.5
#ifndef INCLUDED_VolDownBind
#define INCLUDED_VolDownBind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(VolDownBind)



class HXCPP_CLASS_ATTRIBUTES VolDownBind_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef VolDownBind_obj OBJ_;
		VolDownBind_obj();

	public:
		enum { _hx_ClassId = 0x092acb72 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="VolDownBind")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"VolDownBind"); }
		static ::hx::ObjectPtr< VolDownBind_obj > __new(::String desc);
		static ::hx::ObjectPtr< VolDownBind_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VolDownBind_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VolDownBind",52,fd,8a,f8); }

		void onType(::String text);

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_VolDownBind */ 
