// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_EditorRes
#include <EditorRes.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37ed1de7af318ea7_614_new,"EditorRes","new",0x71802005,"EditorRes.new","Options.hx",614,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_37ed1de7af318ea7_620_left,"EditorRes","left",0xdd4968c2,"EditorRes.left","Options.hx",620,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_37ed1de7af318ea7_628_right,"EditorRes","right",0x39ff4ec1,"EditorRes.right","Options.hx",628,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_37ed1de7af318ea7_635_updateDisplay,"EditorRes","updateDisplay",0x5958bf1e,"EditorRes.updateDisplay","Options.hx",635,0x9d9a0240)

void EditorRes_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_37ed1de7af318ea7_614_new)
HXLINE( 615)		super::__construct();
HXLINE( 616)		this->description = desc;
            	}

Dynamic EditorRes_obj::__CreateEmpty() { return new EditorRes_obj; }

void *EditorRes_obj::_hx_vtable = 0;

Dynamic EditorRes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EditorRes_obj > _hx_result = new EditorRes_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EditorRes_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x499700ef;
	}
}

bool EditorRes_obj::left(){
            	HX_STACKFRAME(&_hx_pos_37ed1de7af318ea7_620_left)
HXLINE( 621)		::flixel::FlxG_obj::save->data->__SetField(HX_("editorBG",b2,00,f3,de),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("editorBG",b2,00,f3,de),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 623)		this->display = this->updateDisplay();
HXLINE( 624)		return true;
            	}


bool EditorRes_obj::right(){
            	HX_STACKFRAME(&_hx_pos_37ed1de7af318ea7_628_right)
HXLINE( 629)		this->left();
HXLINE( 630)		return true;
            	}


::String EditorRes_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_37ed1de7af318ea7_635_updateDisplay)
HXDLIN( 635)		::String _hx_tmp;
HXDLIN( 635)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("editorBG",b2,00,f3,de),::hx::paccDynamic)) )) {
HXDLIN( 635)			_hx_tmp = HX_("Shown",b1,f8,54,0f);
            		}
            		else {
HXDLIN( 635)			_hx_tmp = HX_("Hidden",8a,73,2a,81);
            		}
HXDLIN( 635)		return ((HX_("Editor Grid: < ",23,13,85,91) + _hx_tmp) + HX_(" >",1e,1c,00,00));
            	}



::hx::ObjectPtr< EditorRes_obj > EditorRes_obj::__new(::String desc) {
	::hx::ObjectPtr< EditorRes_obj > __this = new EditorRes_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< EditorRes_obj > EditorRes_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	EditorRes_obj *__this = (EditorRes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EditorRes_obj), true, "EditorRes"));
	*(void **)__this = EditorRes_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

EditorRes_obj::EditorRes_obj()
{
}

::hx::Val EditorRes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EditorRes_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EditorRes_obj_sStaticStorageInfo = 0;
#endif

static ::String EditorRes_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class EditorRes_obj::__mClass;

void EditorRes_obj::__register()
{
	EditorRes_obj _hx_dummy;
	EditorRes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("EditorRes",93,b9,8c,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EditorRes_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EditorRes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EditorRes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EditorRes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
