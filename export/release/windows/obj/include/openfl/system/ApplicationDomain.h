// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_system_ApplicationDomain
#define INCLUDED_openfl_system_ApplicationDomain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_5a0a7282aa095189_74_new)
HX_DECLARE_CLASS2(openfl,_hx_system,ApplicationDomain)

namespace openfl{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES ApplicationDomain_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ApplicationDomain_obj OBJ_;
		ApplicationDomain_obj();

	public:
		enum { _hx_ClassId = 0x2ad5ad35 };

		void __construct( ::openfl::_hx_system::ApplicationDomain parentDomain);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.system.ApplicationDomain")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.system.ApplicationDomain"); }

		inline static ::hx::ObjectPtr< ApplicationDomain_obj > __new( ::openfl::_hx_system::ApplicationDomain parentDomain) {
			::hx::ObjectPtr< ApplicationDomain_obj > __this = new ApplicationDomain_obj();
			__this->__construct(parentDomain);
			return __this;
		}

		inline static ::hx::ObjectPtr< ApplicationDomain_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::_hx_system::ApplicationDomain parentDomain) {
			ApplicationDomain_obj *__this = (ApplicationDomain_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ApplicationDomain_obj), true, "openfl.system.ApplicationDomain"));
			*(void **)__this = ApplicationDomain_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_5a0a7282aa095189_74_new)
HXDLIN(  74)		if (::hx::IsNotNull( parentDomain )) {
HXLINE(  76)			( ( ::openfl::_hx_system::ApplicationDomain)(__this) )->parentDomain = parentDomain;
            		}
            		else {
HXLINE(  80)			( ( ::openfl::_hx_system::ApplicationDomain)(__this) )->parentDomain = ::openfl::_hx_system::ApplicationDomain_obj::currentDomain;
            		}
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ApplicationDomain_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ApplicationDomain",94,ec,60,45); }

		static void __boot();
		static  ::openfl::_hx_system::ApplicationDomain currentDomain;
		 ::openfl::_hx_system::ApplicationDomain parentDomain;
};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_ApplicationDomain */ 
