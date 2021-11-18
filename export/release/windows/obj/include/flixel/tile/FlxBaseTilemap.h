// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#define INCLUDED_flixel_tile_FlxBaseTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,tile,FlxBaseTilemap)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES FlxBaseTilemap_obj : public  ::flixel::FlxObject_obj
{
	public:
		typedef  ::flixel::FlxObject_obj super;
		typedef FlxBaseTilemap_obj OBJ_;
		FlxBaseTilemap_obj();

	public:
		enum { _hx_ClassId = 0x3d6253b5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tile.FlxBaseTilemap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tile.FlxBaseTilemap"); }
		static ::hx::ObjectPtr< FlxBaseTilemap_obj > __new();
		static ::hx::ObjectPtr< FlxBaseTilemap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBaseTilemap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBaseTilemap",eb,7c,1d,f6); }

		::cpp::VirtualArray _tileObjects;
		::Array< int > _data;
		int getTileIndexByCoords( ::flixel::math::FlxPoint Coord);
		::Dynamic getTileIndexByCoords_dyn();

		bool overlapsWithCallback( ::flixel::FlxObject Object, ::Dynamic Callback,::hx::Null< bool >  FlipCallbackParams, ::flixel::math::FlxPoint Position);
		::Dynamic overlapsWithCallback_dyn();

		void destroy();

		bool overlaps( ::flixel::FlxBasic ObjectOrGroup,::hx::Null< bool >  InScreenSpace, ::flixel::FlxCamera Camera);

		bool tilemapOverlapsCallback( ::flixel::FlxBasic ObjectOrGroup,::hx::Null< Float >  X,::hx::Null< Float >  Y,::hx::Null< bool >  InScreenSpace, ::flixel::FlxCamera Camera);
		::Dynamic tilemapOverlapsCallback_dyn();

		bool overlapsPoint( ::flixel::math::FlxPoint WorldPoint,::hx::Null< bool >  InScreenSpace, ::flixel::FlxCamera Camera);

		bool tileAtPointAllowsCollisions( ::flixel::math::FlxPoint point);
		::Dynamic tileAtPointAllowsCollisions_dyn();

};

} // end namespace flixel
} // end namespace tile

#endif /* INCLUDED_flixel_tile_FlxBaseTilemap */ 