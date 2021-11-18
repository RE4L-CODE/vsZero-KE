// Generated by Haxe 4.1.5
#ifndef INCLUDED_AnimationDebug
#define INCLUDED_AnimationDebug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(AnimationDebug)
HX_DECLARE_CLASS0(Boyfriend)
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUINumericStepper)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,net,FileReference)



class HXCPP_CLASS_ATTRIBUTES AnimationDebug_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef AnimationDebug_obj OBJ_;
		AnimationDebug_obj();

	public:
		enum { _hx_ClassId = 0x7383fb8f };

		void __construct(::String __o_daAnim);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="AnimationDebug")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"AnimationDebug"); }
		static ::hx::ObjectPtr< AnimationDebug_obj > __new(::String __o_daAnim);
		static ::hx::ObjectPtr< AnimationDebug_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_daAnim);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimationDebug_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimationDebug",cf,78,98,91); }

		 ::openfl::net::FileReference _file;
		 ::Boyfriend bf;
		 ::Character dad;
		 ::Character _hx_char;
		 ::flixel::text::FlxText textAnim;
		 ::flixel::group::FlxTypedGroup dumbTexts;
		::Array< ::String > animList;
		int curAnim;
		bool isDad;
		::String daAnim;
		 ::flixel::FlxObject camFollow;
		 ::flixel::FlxSprite background;
		 ::flixel::FlxSprite curt;
		 ::flixel::FlxSprite front;
		 ::flixel::addons::ui::FlxUITabMenu UI_box;
		 ::flixel::addons::ui::FlxUITabMenu UI_options;
		 ::flixel::addons::ui::FlxUINumericStepper offsetX;
		 ::flixel::addons::ui::FlxUINumericStepper offsetY;
		::Array< ::String > characters;
		void create();

		void addOffsetUI();
		::Dynamic addOffsetUI_dyn();

		void genBoyOffsets(::hx::Null< bool >  pushList, ::Dynamic cleanArray);
		::Dynamic genBoyOffsets_dyn();

		void saveBoyOffsets();
		::Dynamic saveBoyOffsets_dyn();

		void onSaveComplete( ::openfl::events::Event _);
		::Dynamic onSaveComplete_dyn();

		void onSaveCancel( ::openfl::events::Event _);
		::Dynamic onSaveCancel_dyn();

		void onSaveError( ::openfl::events::IOErrorEvent _);
		::Dynamic onSaveError_dyn();

		void updateTexts();
		::Dynamic updateTexts_dyn();

		 ::flixel::text::FlxText helpText;
		void addHelpText();
		::Dynamic addHelpText_dyn();

		void getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);

		void update(Float elapsed);

};


#endif /* INCLUDED_AnimationDebug */ 