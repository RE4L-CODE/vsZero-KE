// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#define INCLUDED_flixel_addons_ui_FlxUITabMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUITabMenu_obj : public  ::flixel::addons::ui::FlxUIGroup_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUITabMenu_obj OBJ_;
		FlxUITabMenu_obj();

	public:
		enum { _hx_ClassId = 0x7f2b8171 };

		void __construct( ::flixel::FlxSprite back_,::Array< ::Dynamic> tabs_,::Array< ::Dynamic> tab_names_and_labels_, ::flixel::math::FlxPoint tab_offset, ::Dynamic __o_stretch_tabs, ::Dynamic tab_spacing,::Array< ::String > tab_stacking);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUITabMenu")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUITabMenu"); }
		static ::hx::ObjectPtr< FlxUITabMenu_obj > __new( ::flixel::FlxSprite back_,::Array< ::Dynamic> tabs_,::Array< ::Dynamic> tab_names_and_labels_, ::flixel::math::FlxPoint tab_offset, ::Dynamic __o_stretch_tabs, ::Dynamic tab_spacing,::Array< ::String > tab_stacking);
		static ::hx::ObjectPtr< FlxUITabMenu_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxSprite back_,::Array< ::Dynamic> tabs_,::Array< ::Dynamic> tab_names_and_labels_, ::flixel::math::FlxPoint tab_offset, ::Dynamic __o_stretch_tabs, ::Dynamic tab_spacing,::Array< ::String > tab_stacking);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUITabMenu_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUITabMenu",0e,14,c0,e2); }

		void getEvent(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		::Dynamic getEvent_dyn();

		 ::Dynamic getRequest(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);
		::Dynamic getRequest_dyn();

		bool skipButtonUpdate;
		bool set_skipButtonUpdate(bool b);
		::Dynamic set_skipButtonUpdate_dyn();

		Float get_width();

		Float get_height();

		void resize(Float W,Float H);
		::Dynamic resize_dyn();

		int get_selected_tab();
		::Dynamic get_selected_tab_dyn();

		int set_selected_tab(int i);
		::Dynamic set_selected_tab_dyn();

		void destroy();

		::Dynamic getTab(::String name, ::Dynamic index);
		::Dynamic getTab_dyn();

		void addGroup( ::flixel::addons::ui::FlxUIGroup g);
		::Dynamic addGroup_dyn();

		void _onTabEvent(::String name);
		::Dynamic _onTabEvent_dyn();

		void stackTabs();
		::Dynamic stackTabs_dyn();

		void showTabId(::String name);
		::Dynamic showTabId_dyn();

		 ::flixel::FlxSprite _back;
		::Array< ::Dynamic> _tabs;
		::Array< ::Dynamic> _tab_groups;
		bool _stretch_tabs;
		 ::Dynamic _tab_spacing;
		::Array< ::String > _tab_stacking;
		 ::flixel::math::FlxPoint _tab_offset;
		::String _selected_tab_id;
		int _selected_tab;
		int sortTabs(::Dynamic a,::Dynamic b);
		::Dynamic sortTabs_dyn();

		void showTabInt(int i);
		::Dynamic showTabInt_dyn();

		void _showOnlyGroup(::String name);
		::Dynamic _showOnlyGroup_dyn();

		::Dynamic getFirstTab();
		::Dynamic getFirstTab_dyn();

		void distributeTabs(::hx::Null< Float >  W);
		::Dynamic distributeTabs_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUITabMenu */ 