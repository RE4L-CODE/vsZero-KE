// Generated by Haxe 4.1.5
#ifndef INCLUDED_BadMsOption
#define INCLUDED_BadMsOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(BadMsOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES BadMsOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef BadMsOption_obj OBJ_;
		BadMsOption_obj();

	public:
		enum { _hx_ClassId = 0x71374f80 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="BadMsOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"BadMsOption"); }
		static ::hx::ObjectPtr< BadMsOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< BadMsOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BadMsOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BadMsOption",40,0a,3c,be); }

		bool left();

		bool right();

		void onType(::String _hx_char);

		::String updateDisplay();

};


#endif /* INCLUDED_BadMsOption */ 
