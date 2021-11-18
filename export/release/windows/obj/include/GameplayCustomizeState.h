// Generated by Haxe 4.1.5
#ifndef INCLUDED_GameplayCustomizeState
#define INCLUDED_GameplayCustomizeState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(Boyfriend)
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(GameplayCustomizeState)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS0(Stage)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)



class HXCPP_CLASS_ATTRIBUTES GameplayCustomizeState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef GameplayCustomizeState_obj OBJ_;
		GameplayCustomizeState_obj();

	public:
		enum { _hx_ClassId = 0x4e1b7334 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="GameplayCustomizeState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"GameplayCustomizeState"); }
		static ::hx::ObjectPtr< GameplayCustomizeState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< GameplayCustomizeState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameplayCustomizeState_obj();

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
		::String __ToString() const { return HX_("GameplayCustomizeState",74,30,cf,3c); }

		static void __boot();
		static  ::Character dad;
		static  ::Character gf;
		static  ::Boyfriend boyfriend;
		static  ::Stage Stage;
		static ::String freeplayBf;
		static ::String freeplayDad;
		static ::String freeplayGf;
		static ::String freeplayNoteStyle;
		static ::String freeplayStage;
		static ::String freeplaySong;
		static int freeplayWeek;
		Float defaultX;
		Float defaultY;
		 ::flixel::FlxSprite sick;
		 ::flixel::text::FlxText text;
		 ::flixel::FlxSprite blackBorder;
		 ::flixel::FlxSprite laneunderlay;
		 ::flixel::FlxSprite laneunderlayOpponent;
		 ::flixel::FlxSprite strumLine;
		 ::flixel::group::FlxTypedGroup strumLineNotes;
		 ::flixel::group::FlxTypedGroup playerStrums;
		 ::flixel::group::FlxTypedGroup cpuStrums;
		 ::flixel::math::FlxPoint camPos;
		::String pixelShitPart1;
		::String pixelShitPart2;
		::String pixelShitPart3;
		::String pixelShitPart4;
		 ::flixel::FlxCamera camHUD;
		 ::flixel::FlxCamera camGame;
		 ::flixel::FlxObject camFollow;
		::Array< ::String > dataSuffix;
		::Array< ::String > dataColor;
		void create();

		void update(Float elapsed);

		void beatHit();

		void generateStaticArrows(int player);
		::Dynamic generateStaticArrows_dyn();

};


#endif /* INCLUDED_GameplayCustomizeState */ 