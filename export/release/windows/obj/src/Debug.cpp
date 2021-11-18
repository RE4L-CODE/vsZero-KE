// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Debug
#include <Debug.h>
#endif
#ifndef INCLUDED_DebugLogWriter
#include <DebugLogWriter.h>
#endif
#ifndef INCLUDED_HealthIcon
#include <HealthIcon.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_TrackerProfile
#include <flixel/system/debug/watch/TrackerProfile.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_82_logTrace,"Debug","logTrace",0x926788fc,"Debug.logTrace","Debug.hx",82,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_98_displayAlert,"Debug","displayAlert",0xee6754d5,"Debug.displayAlert","Debug.hx",98,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_182_onInitProgram,"Debug","onInitProgram",0xbeefe6fa,"Debug.onInitProgram","Debug.hx",182,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_176_onInitProgram,"Debug","onInitProgram",0xbeefe6fa,"Debug.onInitProgram","Debug.hx",176,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_219_onGameStart,"Debug","onGameStart",0x1c8fbb36,"Debug.onGameStart","Debug.hx",219,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_235_writeToFlxGLog,"Debug","writeToFlxGLog",0x9ee112b0,"Debug.writeToFlxGLog","Debug.hx",235,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_243_writeToLogFile,"Debug","writeToLogFile",0x0110dbe1,"Debug.writeToLogFile","Debug.hx",243,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_253_defineTrackerProfiles,"Debug","defineTrackerProfiles",0xe455f28c,"Debug.defineTrackerProfiles","Debug.hx",253,0x6a71a26b)
static const ::String _hx_array_data_6a4cc233_9[] = {
	HX_("curCharacter",09,86,7c,d7),HX_("isPlayer",eb,86,22,90),HX_("barColor",90,b2,2a,19),
};
static const ::String _hx_array_data_6a4cc233_10[] = {
	HX_("char",d6,5e,bf,41),HX_("isPlayer",eb,86,22,90),HX_("isOldIcon",f6,08,f6,fe),
};
static const ::String _hx_array_data_6a4cc233_11[] = {
	HX_("x",78,00,00,00),HX_("y",79,00,00,00),HX_("strumTime",f6,2d,21,f4),HX_("mustPress",ba,d4,17,60),HX_("rawNoteData",44,35,c3,78),HX_("sustainLength",e9,a1,9c,7c),
};
static const ::String _hx_array_data_6a4cc233_12[] = {
	HX_("chartVersion",da,e9,39,c8),HX_("song",d5,23,58,4c),HX_("speed",87,97,69,81),HX_("player1",b0,09,15,8a),HX_("player2",b1,09,15,8a),HX_("gfVersion",b9,c6,7d,f3),HX_("noteStyle",df,ef,aa,c1),HX_("stage",be,6a,0b,84),
};
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_321_formatOutput,"Debug","formatOutput",0x0a15fcb3,"Debug.formatOutput","Debug.hx",321,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_24_boot,"Debug","boot",0x1ff1984d,"Debug.boot","Debug.hx",24,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_25_boot,"Debug","boot",0x1ff1984d,"Debug.boot","Debug.hx",25,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_26_boot,"Debug","boot",0x1ff1984d,"Debug.boot","Debug.hx",26,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_27_boot,"Debug","boot",0x1ff1984d,"Debug.boot","Debug.hx",27,0x6a71a26b)
HX_LOCAL_STACK_FRAME(_hx_pos_c70b4b5185508337_29_boot,"Debug","boot",0x1ff1984d,"Debug.boot","Debug.hx",29,0x6a71a26b)

void Debug_obj::__construct() { }

Dynamic Debug_obj::__CreateEmpty() { return new Debug_obj; }

void *Debug_obj::_hx_vtable = 0;

Dynamic Debug_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Debug_obj > _hx_result = new Debug_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Debug_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x06dc9773;
}

 ::flixel::_hx_system::debug::log::LogStyle Debug_obj::LOG_STYLE_ERROR;

 ::flixel::_hx_system::debug::log::LogStyle Debug_obj::LOG_STYLE_WARN;

 ::flixel::_hx_system::debug::log::LogStyle Debug_obj::LOG_STYLE_INFO;

 ::flixel::_hx_system::debug::log::LogStyle Debug_obj::LOG_STYLE_TRACE;

 ::DebugLogWriter Debug_obj::logFileWriter;

void Debug_obj::logTrace( ::Dynamic input, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_c70b4b5185508337_82_logTrace)
HXLINE(  83)		if (::hx::IsNull( input )) {
HXLINE(  84)			return;
            		}
HXLINE(  85)		::cpp::VirtualArray output = ::Debug_obj::formatOutput(input,pos);
HXLINE(  86)		::Debug_obj::writeToFlxGLog(output,::Debug_obj::LOG_STYLE_TRACE);
HXLINE(  87)		::Debug_obj::writeToLogFile(output,HX_("TRACE",65,c6,0d,94));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,logTrace,(void))

void Debug_obj::displayAlert(::String title,::String description){
            	HX_STACKFRAME(&_hx_pos_c70b4b5185508337_98_displayAlert)
HXDLIN(  98)		::lime::app::Application_obj::current->_hx___window->alert(description,title);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,displayAlert,(void))

void Debug_obj::onInitProgram(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		void _hx_run( ::Dynamic data, ::Dynamic info){
            			HX_STACKFRAME(&_hx_pos_c70b4b5185508337_182_onInitProgram)
HXLINE( 183)			::cpp::VirtualArray paramArray = ::cpp::VirtualArray_obj::__new(1)->init(0,data);
HXLINE( 185)			if (::hx::IsNotNull( info )) {
HXLINE( 187)				if (::hx::IsNotNull( info->__Field(HX_("customParams",d7,51,18,ed),::hx::paccDynamic) )) {
HXLINE( 189)					int _g = 0;
HXDLIN( 189)					::cpp::VirtualArray _g1 = ( (::cpp::VirtualArray)(info->__Field(HX_("customParams",d7,51,18,ed),::hx::paccDynamic)) );
HXDLIN( 189)					while((_g < _g1->get_length())){
HXLINE( 189)						 ::Dynamic i = _g1->__get(_g);
HXDLIN( 189)						_g = (_g + 1);
HXLINE( 191)						paramArray->push(i);
            					}
            				}
            			}
HXLINE( 196)			::Debug_obj::logTrace(paramArray,info);
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_c70b4b5185508337_176_onInitProgram)
HXLINE( 181)		::haxe::Log_obj::trace =  ::Dynamic(new _hx_Closure_0());
HXLINE( 201)		::Debug_obj::logFileWriter =  ::DebugLogWriter_obj::__alloc( HX_CTX ,HX_("TRACE",65,c6,0d,94));
HXLINE( 203)		{
HXLINE( 203)			 ::Dynamic input = HX_("Debug logging initialized. Hello, developer.",f2,6f,02,25);
HXDLIN( 203)			if (::hx::IsNotNull( input )) {
HXLINE( 203)				::cpp::VirtualArray output = ::Debug_obj::formatOutput(input,::hx::SourceInfo(HX_("source/Debug.hx",5f,c5,90,56),203,HX_("Debug",33,c2,4c,6a),HX_("onInitProgram",75,d6,4d,0f)));
HXDLIN( 203)				::Debug_obj::writeToFlxGLog(output,::Debug_obj::LOG_STYLE_INFO);
HXDLIN( 203)				::Debug_obj::writeToLogFile(output,HX_("INFO",6e,00,7c,30));
            			}
            		}
HXLINE( 208)		{
HXLINE( 208)			 ::Dynamic input1 = HX_("This is a RELEASE build.",cc,a1,f2,95);
HXDLIN( 208)			if (::hx::IsNotNull( input1 )) {
HXLINE( 208)				::cpp::VirtualArray output = ::Debug_obj::formatOutput(input1,::hx::SourceInfo(HX_("source/Debug.hx",5f,c5,90,56),208,HX_("Debug",33,c2,4c,6a),HX_("onInitProgram",75,d6,4d,0f)));
HXDLIN( 208)				::Debug_obj::writeToFlxGLog(output,::Debug_obj::LOG_STYLE_INFO);
HXDLIN( 208)				::Debug_obj::writeToLogFile(output,HX_("INFO",6e,00,7c,30));
            			}
            		}
HXLINE( 210)		{
HXLINE( 210)			 ::Dynamic input2 = (HX_("HaxeFlixel version: ",60,01,28,3e) + ::Std_obj::string(::flixel::FlxG_obj::VERSION));
HXDLIN( 210)			if (::hx::IsNotNull( input2 )) {
HXLINE( 210)				::cpp::VirtualArray output = ::Debug_obj::formatOutput(input2,::hx::SourceInfo(HX_("source/Debug.hx",5f,c5,90,56),210,HX_("Debug",33,c2,4c,6a),HX_("onInitProgram",75,d6,4d,0f)));
HXDLIN( 210)				::Debug_obj::writeToFlxGLog(output,::Debug_obj::LOG_STYLE_INFO);
HXDLIN( 210)				::Debug_obj::writeToLogFile(output,HX_("INFO",6e,00,7c,30));
            			}
            		}
HXLINE( 211)		{
HXLINE( 211)			 ::Dynamic input3 = (HX_("Friday Night Funkin' version: ",4b,49,37,e6) + ::MainMenuState_obj::gameVer);
HXDLIN( 211)			if (::hx::IsNotNull( input3 )) {
HXLINE( 211)				::cpp::VirtualArray output = ::Debug_obj::formatOutput(input3,::hx::SourceInfo(HX_("source/Debug.hx",5f,c5,90,56),211,HX_("Debug",33,c2,4c,6a),HX_("onInitProgram",75,d6,4d,0f)));
HXDLIN( 211)				::Debug_obj::writeToFlxGLog(output,::Debug_obj::LOG_STYLE_INFO);
HXDLIN( 211)				::Debug_obj::writeToLogFile(output,HX_("INFO",6e,00,7c,30));
            			}
            		}
HXLINE( 212)		{
HXLINE( 212)			 ::Dynamic input4 = (HX_("KadeEngine version: ",b7,46,52,92) + ::MainMenuState_obj::kadeEngineVer);
HXDLIN( 212)			if (::hx::IsNotNull( input4 )) {
HXLINE( 212)				::cpp::VirtualArray output = ::Debug_obj::formatOutput(input4,::hx::SourceInfo(HX_("source/Debug.hx",5f,c5,90,56),212,HX_("Debug",33,c2,4c,6a),HX_("onInitProgram",75,d6,4d,0f)));
HXDLIN( 212)				::Debug_obj::writeToFlxGLog(output,::Debug_obj::LOG_STYLE_INFO);
HXDLIN( 212)				::Debug_obj::writeToLogFile(output,HX_("INFO",6e,00,7c,30));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,onInitProgram,(void))

void Debug_obj::onGameStart(){
            	HX_STACKFRAME(&_hx_pos_c70b4b5185508337_219_onGameStart)
HXLINE( 223)		::Debug_obj::defineTrackerProfiles();
HXLINE( 227)		if (::hx::IsNull( ::flixel::FlxG_obj::save->data->__Field(HX_("debugLogLevel",d3,6b,21,7d),::hx::paccDynamic) )) {
HXLINE( 228)			::flixel::FlxG_obj::save->data->__SetField(HX_("debugLogLevel",d3,6b,21,7d),HX_("TRACE",65,c6,0d,94),::hx::paccDynamic);
            		}
HXLINE( 230)		::Debug_obj::logFileWriter->setLogLevel(( (::String)(::flixel::FlxG_obj::save->data->__Field(HX_("debugLogLevel",d3,6b,21,7d),::hx::paccDynamic)) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,onGameStart,(void))

void Debug_obj::writeToFlxGLog(::cpp::VirtualArray data, ::flixel::_hx_system::debug::log::LogStyle logStyle){
            	HX_STACKFRAME(&_hx_pos_c70b4b5185508337_235_writeToFlxGLog)
HXDLIN( 235)		bool _hx_tmp;
HXDLIN( 235)		bool _hx_tmp1;
HXDLIN( 235)		if (::hx::IsNotNull( ::hx::ClassOf< ::flixel::FlxG >() )) {
HXDLIN( 235)			_hx_tmp1 = ::hx::IsNotNull( ::flixel::FlxG_obj::game );
            		}
            		else {
HXDLIN( 235)			_hx_tmp1 = false;
            		}
HXDLIN( 235)		if (_hx_tmp1) {
HXDLIN( 235)			_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::log );
            		}
            		else {
HXDLIN( 235)			_hx_tmp = false;
            		}
HXDLIN( 235)		if (_hx_tmp) {
HXLINE( 237)			::flixel::FlxG_obj::log->advanced(data,logStyle,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,writeToFlxGLog,(void))

void Debug_obj::writeToLogFile(::cpp::VirtualArray data,::String __o_logLevel){
            		::String logLevel = __o_logLevel;
            		if (::hx::IsNull(__o_logLevel)) logLevel = HX_("TRACE",65,c6,0d,94);
            	HX_STACKFRAME(&_hx_pos_c70b4b5185508337_243_writeToLogFile)
HXDLIN( 243)		bool _hx_tmp;
HXDLIN( 243)		if (::hx::IsNotNull( ::Debug_obj::logFileWriter )) {
HXDLIN( 243)			_hx_tmp = ::Debug_obj::logFileWriter->isActive();
            		}
            		else {
HXDLIN( 243)			_hx_tmp = false;
            		}
HXDLIN( 243)		if (_hx_tmp) {
HXLINE( 245)			::Debug_obj::logFileWriter->write(data,logLevel);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,writeToLogFile,(void))

void Debug_obj::defineTrackerProfiles(){
            	HX_GC_STACKFRAME(&_hx_pos_c70b4b5185508337_253_defineTrackerProfiles)
HXLINE( 255)		{
HXLINE( 255)			 ::flixel::_hx_system::frontEnds::DebuggerFrontEnd _this = ::flixel::FlxG_obj::debugger;
HXDLIN( 255)			 ::flixel::_hx_system::debug::watch::TrackerProfile Profile =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::Character >(),::Array_obj< ::String >::fromData( _hx_array_data_6a4cc233_9,3),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::FlxSprite >()));
            		}
HXLINE( 256)		{
HXLINE( 256)			 ::flixel::_hx_system::frontEnds::DebuggerFrontEnd _this1 = ::flixel::FlxG_obj::debugger;
HXDLIN( 256)			 ::flixel::_hx_system::debug::watch::TrackerProfile Profile1 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::HealthIcon >(),::Array_obj< ::String >::fromData( _hx_array_data_6a4cc233_10,3),::Array_obj< ::Dynamic>::__new(1)->init(0,::hx::ClassOf< ::flixel::FlxSprite >()));
            		}
HXLINE( 257)		{
HXLINE( 257)			 ::flixel::_hx_system::frontEnds::DebuggerFrontEnd _this2 = ::flixel::FlxG_obj::debugger;
HXDLIN( 257)			 ::flixel::_hx_system::debug::watch::TrackerProfile Profile2 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::Note >(),::Array_obj< ::String >::fromData( _hx_array_data_6a4cc233_11,6),::Array_obj< ::Dynamic>::__new(0));
            		}
HXLINE( 258)		{
HXLINE( 258)			 ::flixel::_hx_system::frontEnds::DebuggerFrontEnd _this3 = ::flixel::FlxG_obj::debugger;
HXDLIN( 258)			 ::flixel::_hx_system::debug::watch::TrackerProfile Profile3 =  ::flixel::_hx_system::debug::watch::TrackerProfile_obj::__alloc( HX_CTX ,::hx::ClassOf< ::Song >(),::Array_obj< ::String >::fromData( _hx_array_data_6a4cc233_12,8),::Array_obj< ::Dynamic>::__new(0));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Debug_obj,defineTrackerProfiles,(void))

::cpp::VirtualArray Debug_obj::formatOutput( ::Dynamic input, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_c70b4b5185508337_321_formatOutput)
HXLINE( 323)		::cpp::VirtualArray inArray = null();
HXLINE( 324)		if (::hx::IsNull( input )) {
HXLINE( 326)			inArray = ::cpp::VirtualArray_obj::__new(1)->init(0,HX_("<NULL>",1b,f6,13,1f));
            		}
            		else {
HXLINE( 328)			if (!(::Std_obj::isOfType(input,( ( ::Dynamic)(::hx::ArrayBase::__mClass) )))) {
HXLINE( 330)				inArray = ::cpp::VirtualArray_obj::__new(1)->init(0,input);
            			}
            			else {
HXLINE( 334)				inArray = ( (::cpp::VirtualArray)(input) );
            			}
            		}
HXLINE( 337)		if (::hx::IsNull( pos )) {
HXLINE( 338)			return inArray;
            		}
HXLINE( 341)		::cpp::VirtualArray output = ::cpp::VirtualArray_obj::__new(1)->init(0, ::Dynamic(((((((HX_("(",28,00,00,00) + pos->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic)) + HX_("/",2f,00,00,00)) + pos->__Field(HX_("methodName",cc,19,0f,12),::hx::paccDynamic)) + HX_("#",23,00,00,00)) + pos->__Field(HX_("lineNumber",dd,81,22,76),::hx::paccDynamic)) + HX_("): ",0f,4f,1f,00))));
HXLINE( 343)		return output->concat(inArray);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Debug_obj,formatOutput,return )


Debug_obj::Debug_obj()
{
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"logTrace") ) { outValue = logTrace_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onGameStart") ) { outValue = onGameStart_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayAlert") ) { outValue = displayAlert_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"formatOutput") ) { outValue = formatOutput_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"logFileWriter") ) { outValue = ( logFileWriter ); return true; }
		if (HX_FIELD_EQ(inName,"onInitProgram") ) { outValue = onInitProgram_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LOG_STYLE_WARN") ) { outValue = ( LOG_STYLE_WARN ); return true; }
		if (HX_FIELD_EQ(inName,"LOG_STYLE_INFO") ) { outValue = ( LOG_STYLE_INFO ); return true; }
		if (HX_FIELD_EQ(inName,"writeToFlxGLog") ) { outValue = writeToFlxGLog_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"writeToLogFile") ) { outValue = writeToLogFile_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"LOG_STYLE_ERROR") ) { outValue = ( LOG_STYLE_ERROR ); return true; }
		if (HX_FIELD_EQ(inName,"LOG_STYLE_TRACE") ) { outValue = ( LOG_STYLE_TRACE ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"defineTrackerProfiles") ) { outValue = defineTrackerProfiles_dyn(); return true; }
	}
	return false;
}

bool Debug_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"logFileWriter") ) { logFileWriter=ioValue.Cast<  ::DebugLogWriter >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LOG_STYLE_WARN") ) { LOG_STYLE_WARN=ioValue.Cast<  ::flixel::_hx_system::debug::log::LogStyle >(); return true; }
		if (HX_FIELD_EQ(inName,"LOG_STYLE_INFO") ) { LOG_STYLE_INFO=ioValue.Cast<  ::flixel::_hx_system::debug::log::LogStyle >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"LOG_STYLE_ERROR") ) { LOG_STYLE_ERROR=ioValue.Cast<  ::flixel::_hx_system::debug::log::LogStyle >(); return true; }
		if (HX_FIELD_EQ(inName,"LOG_STYLE_TRACE") ) { LOG_STYLE_TRACE=ioValue.Cast<  ::flixel::_hx_system::debug::log::LogStyle >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Debug_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Debug_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::_hx_system::debug::log::LogStyle */ ,(void *) &Debug_obj::LOG_STYLE_ERROR,HX_("LOG_STYLE_ERROR",1f,6f,58,60)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::log::LogStyle */ ,(void *) &Debug_obj::LOG_STYLE_WARN,HX_("LOG_STYLE_WARN",af,1a,25,ae)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::log::LogStyle */ ,(void *) &Debug_obj::LOG_STYLE_INFO,HX_("LOG_STYLE_INFO",d7,f0,ed,a4)},
	{::hx::fsObject /*  ::flixel::_hx_system::debug::log::LogStyle */ ,(void *) &Debug_obj::LOG_STYLE_TRACE,HX_("LOG_STYLE_TRACE",dc,31,4e,03)},
	{::hx::fsObject /*  ::DebugLogWriter */ ,(void *) &Debug_obj::logFileWriter,HX_("logFileWriter",f3,c3,cd,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Debug_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Debug_obj::LOG_STYLE_ERROR,"LOG_STYLE_ERROR");
	HX_MARK_MEMBER_NAME(Debug_obj::LOG_STYLE_WARN,"LOG_STYLE_WARN");
	HX_MARK_MEMBER_NAME(Debug_obj::LOG_STYLE_INFO,"LOG_STYLE_INFO");
	HX_MARK_MEMBER_NAME(Debug_obj::LOG_STYLE_TRACE,"LOG_STYLE_TRACE");
	HX_MARK_MEMBER_NAME(Debug_obj::logFileWriter,"logFileWriter");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Debug_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Debug_obj::LOG_STYLE_ERROR,"LOG_STYLE_ERROR");
	HX_VISIT_MEMBER_NAME(Debug_obj::LOG_STYLE_WARN,"LOG_STYLE_WARN");
	HX_VISIT_MEMBER_NAME(Debug_obj::LOG_STYLE_INFO,"LOG_STYLE_INFO");
	HX_VISIT_MEMBER_NAME(Debug_obj::LOG_STYLE_TRACE,"LOG_STYLE_TRACE");
	HX_VISIT_MEMBER_NAME(Debug_obj::logFileWriter,"logFileWriter");
};

#endif

::hx::Class Debug_obj::__mClass;

static ::String Debug_obj_sStaticFields[] = {
	HX_("LOG_STYLE_ERROR",1f,6f,58,60),
	HX_("LOG_STYLE_WARN",af,1a,25,ae),
	HX_("LOG_STYLE_INFO",d7,f0,ed,a4),
	HX_("LOG_STYLE_TRACE",dc,31,4e,03),
	HX_("logFileWriter",f3,c3,cd,1d),
	HX_("logTrace",61,cb,25,01),
	HX_("displayAlert",ba,2d,e7,2d),
	HX_("onInitProgram",75,d6,4d,0f),
	HX_("onGameStart",f1,45,69,db),
	HX_("writeToFlxGLog",d5,ae,b4,a0),
	HX_("writeToLogFile",06,78,e4,02),
	HX_("defineTrackerProfiles",07,55,b8,14),
	HX_("formatOutput",98,d5,95,49),
	::String(null())
};

void Debug_obj::__register()
{
	Debug_obj _hx_dummy;
	Debug_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Debug",33,c2,4c,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &Debug_obj::__SetStatic;
	__mClass->mMarkFunc = Debug_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Debug_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Debug_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Debug_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Debug_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Debug_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Debug_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_c70b4b5185508337_24_boot)
HXDLIN(  24)		LOG_STYLE_ERROR =  ::flixel::_hx_system::debug::log::LogStyle_obj::__alloc( HX_CTX ,HX_("[ERROR] ",d0,1f,cd,be),HX_("FF8888",40,7f,36,70),12,true,false,false,HX_("flixel/sounds/beep",e6,b5,a9,33),true,null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c70b4b5185508337_25_boot)
HXDLIN(  25)		LOG_STYLE_WARN =  ::flixel::_hx_system::debug::log::LogStyle_obj::__alloc( HX_CTX ,HX_("[WARN ] ",c2,2f,6f,de),HX_("D9F85C",15,36,8b,30),12,true,false,false,HX_("flixel/sounds/beep",e6,b5,a9,33),true,null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c70b4b5185508337_26_boot)
HXDLIN(  26)		LOG_STYLE_INFO =  ::flixel::_hx_system::debug::log::LogStyle_obj::__alloc( HX_CTX ,HX_("[INFO ] ",9a,a2,c0,e2),HX_("5CF878",41,9b,32,f3),12,false,null(),null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c70b4b5185508337_27_boot)
HXDLIN(  27)		LOG_STYLE_TRACE =  ::flixel::_hx_system::debug::log::LogStyle_obj::__alloc( HX_CTX ,HX_("[TRACE] ",cd,cb,c6,5c),HX_("5CF878",41,9b,32,f3),12,false,null(),null(),null(),null(),null());
            	}
{
            	HX_STACKFRAME(&_hx_pos_c70b4b5185508337_29_boot)
HXDLIN(  29)		logFileWriter = null();
            	}
}

