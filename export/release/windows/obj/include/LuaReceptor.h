// Generated by Haxe 4.1.5
#ifndef INCLUDED_LuaReceptor
#define INCLUDED_LuaReceptor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_LuaClass
#include <LuaClass.h>
#endif
#ifndef INCLUDED_cc9afe4755847ade
#define INCLUDED_cc9afe4755847ade
#include "linc_lua.h"
#endif
HX_DECLARE_CLASS0(LuaClass)
HX_DECLARE_CLASS0(LuaReceptor)
HX_DECLARE_CLASS0(StaticArrow)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES LuaReceptor_obj : public  ::LuaClass_obj
{
	public:
		typedef  ::LuaClass_obj super;
		typedef LuaReceptor_obj OBJ_;
		LuaReceptor_obj();

	public:
		enum { _hx_ClassId = 0x0694eee8 };

		void __construct( ::StaticArrow connectedSprite,::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="LuaReceptor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"LuaReceptor"); }
		static ::hx::ObjectPtr< LuaReceptor_obj > __new( ::StaticArrow connectedSprite,::String name);
		static ::hx::ObjectPtr< LuaReceptor_obj > __alloc(::hx::Ctx *_hx_ctx, ::StaticArrow connectedSprite,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LuaReceptor_obj();

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
		::String __ToString() const { return HX_("LuaReceptor",74,6d,d7,d2); }

		static void __boot();
		static  cpp::Reference<lua_State> state;
		static  ::StaticArrow findReceptor(int index);
		static ::Dynamic findReceptor_dyn();

		static int tweenPos( lua_State* l);

		static int tweenAngle( lua_State* l);

		static int tweenAlpha( lua_State* l);

		static ::cpp::Function< int  ( lua_State*) > tweenPosC;
		static Dynamic tweenPosC_dyn() { return tweenPosC;}
		static ::cpp::Function< int  ( lua_State*) > tweenAngleC;
		static Dynamic tweenAngleC_dyn() { return tweenAngleC;}
		static ::cpp::Function< int  ( lua_State*) > tweenAlphaC;
		static Dynamic tweenAlphaC_dyn() { return tweenAlphaC;}
		 ::StaticArrow sprite;
		int SetNumProperty( cpp::Reference<lua_State> l);
		::Dynamic SetNumProperty_dyn();

		void Register( cpp::Reference<lua_State> l);

};


#endif /* INCLUDED_LuaReceptor */ 
