// Generated by Haxe 4.1.5
#ifndef INCLUDED_VideoHandler
#define INCLUDED_VideoHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(VideoHandler)



class HXCPP_CLASS_ATTRIBUTES VideoHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VideoHandler_obj OBJ_;
		VideoHandler_obj();

	public:
		enum { _hx_ClassId = 0x10c5b76f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="VideoHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"VideoHandler"); }

		inline static ::hx::ObjectPtr< VideoHandler_obj > __new() {
			::hx::ObjectPtr< VideoHandler_obj > __this = new VideoHandler_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< VideoHandler_obj > __alloc(::hx::Ctx *_hx_ctx) {
			VideoHandler_obj *__this = (VideoHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoHandler_obj), false, "VideoHandler"));
			*(void **)__this = VideoHandler_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VideoHandler_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VideoHandler",af,64,e4,27); }

};


#endif /* INCLUDED_VideoHandler */ 
