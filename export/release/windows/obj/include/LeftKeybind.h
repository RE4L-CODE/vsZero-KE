// Generated by Haxe 4.1.5
#ifndef INCLUDED_LeftKeybind
#define INCLUDED_LeftKeybind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(LeftKeybind)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES LeftKeybind_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef LeftKeybind_obj OBJ_;
		LeftKeybind_obj();

	public:
		enum { _hx_ClassId = 0x46d856b5 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="LeftKeybind")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"LeftKeybind"); }
		static ::hx::ObjectPtr< LeftKeybind_obj > __new(::String desc);
		static ::hx::ObjectPtr< LeftKeybind_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LeftKeybind_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LeftKeybind",75,11,dd,93); }

		void onType(::String text);

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_LeftKeybind */ 
