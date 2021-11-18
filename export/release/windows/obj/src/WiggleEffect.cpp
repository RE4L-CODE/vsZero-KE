// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_WiggleEffect
#include <WiggleEffect.h>
#endif
#ifndef INCLUDED_WiggleShader
#include <WiggleShader.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b9f8e4733e2427ce_15_new,"WiggleEffect","new",0x562335ae,"WiggleEffect.new","WiggleEffect.hx",15,0x20879982)
static const Float _hx_array_data_8ed786bc_1[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b9f8e4733e2427ce_30_update,"WiggleEffect","update",0x72b1e57b,"WiggleEffect.update","WiggleEffect.hx",30,0x20879982)
HX_LOCAL_STACK_FRAME(_hx_pos_b9f8e4733e2427ce_41_set_waveSpeed,"WiggleEffect","set_waveSpeed",0xb4ea4bbf,"WiggleEffect.set_waveSpeed","WiggleEffect.hx",41,0x20879982)
HX_LOCAL_STACK_FRAME(_hx_pos_b9f8e4733e2427ce_48_set_waveFrequency,"WiggleEffect","set_waveFrequency",0x0e45b2d4,"WiggleEffect.set_waveFrequency","WiggleEffect.hx",48,0x20879982)
HX_LOCAL_STACK_FRAME(_hx_pos_b9f8e4733e2427ce_55_set_waveAmplitude,"WiggleEffect","set_waveAmplitude",0xbc56457b,"WiggleEffect.set_waveAmplitude","WiggleEffect.hx",55,0x20879982)

void WiggleEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b9f8e4733e2427ce_15_new)
HXLINE(  21)		this->waveAmplitude = ((Float)0);
HXLINE(  20)		this->waveFrequency = ((Float)0);
HXLINE(  19)		this->waveSpeed = ((Float)0);
HXLINE(  17)		this->shader =  ::WiggleShader_obj::__alloc( HX_CTX );
HXLINE(  25)		this->shader->uTime->value = ::Array_obj< Float >::fromData( _hx_array_data_8ed786bc_1,1);
            	}

Dynamic WiggleEffect_obj::__CreateEmpty() { return new WiggleEffect_obj; }

void *WiggleEffect_obj::_hx_vtable = 0;

Dynamic WiggleEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WiggleEffect_obj > _hx_result = new WiggleEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WiggleEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x77b8d97c;
}

void WiggleEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_b9f8e4733e2427ce_30_update)
HXDLIN(  30)		::Array< Float > _hx_tmp = this->shader->uTime->value;
HXDLIN(  30)		int _hx_tmp1 = 0;
HXDLIN(  30)		_hx_tmp[_hx_tmp1] = (_hx_tmp->__get(_hx_tmp1) + elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiggleEffect_obj,update,(void))

Float WiggleEffect_obj::set_waveSpeed(Float v){
            	HX_STACKFRAME(&_hx_pos_b9f8e4733e2427ce_41_set_waveSpeed)
HXLINE(  42)		this->waveSpeed = v;
HXLINE(  43)		this->shader->uSpeed->value = ::Array_obj< Float >::__new(1)->init(0,this->waveSpeed);
HXLINE(  44)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiggleEffect_obj,set_waveSpeed,return )

Float WiggleEffect_obj::set_waveFrequency(Float v){
            	HX_STACKFRAME(&_hx_pos_b9f8e4733e2427ce_48_set_waveFrequency)
HXLINE(  49)		this->waveFrequency = v;
HXLINE(  50)		this->shader->uFrequency->value = ::Array_obj< Float >::__new(1)->init(0,this->waveFrequency);
HXLINE(  51)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiggleEffect_obj,set_waveFrequency,return )

Float WiggleEffect_obj::set_waveAmplitude(Float v){
            	HX_STACKFRAME(&_hx_pos_b9f8e4733e2427ce_55_set_waveAmplitude)
HXLINE(  56)		this->waveAmplitude = v;
HXLINE(  57)		this->shader->uWaveAmplitude->value = ::Array_obj< Float >::__new(1)->init(0,this->waveAmplitude);
HXLINE(  58)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiggleEffect_obj,set_waveAmplitude,return )


::hx::ObjectPtr< WiggleEffect_obj > WiggleEffect_obj::__new() {
	::hx::ObjectPtr< WiggleEffect_obj > __this = new WiggleEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< WiggleEffect_obj > WiggleEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	WiggleEffect_obj *__this = (WiggleEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WiggleEffect_obj), true, "WiggleEffect"));
	*(void **)__this = WiggleEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

WiggleEffect_obj::WiggleEffect_obj()
{
}

void WiggleEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WiggleEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_MARK_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_MARK_MEMBER_NAME(waveAmplitude,"waveAmplitude");
	HX_MARK_END_CLASS();
}

void WiggleEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_VISIT_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_VISIT_MEMBER_NAME(waveAmplitude,"waveAmplitude");
}

::hx::Val WiggleEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { return ::hx::Val( waveSpeed ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"waveFrequency") ) { return ::hx::Val( waveFrequency ); }
		if (HX_FIELD_EQ(inName,"waveAmplitude") ) { return ::hx::Val( waveAmplitude ); }
		if (HX_FIELD_EQ(inName,"set_waveSpeed") ) { return ::hx::Val( set_waveSpeed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_waveFrequency") ) { return ::hx::Val( set_waveFrequency_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_waveAmplitude") ) { return ::hx::Val( set_waveAmplitude_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WiggleEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::WiggleShader >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveSpeed(inValue.Cast< Float >()) );waveSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"waveFrequency") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveFrequency(inValue.Cast< Float >()) );waveFrequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waveAmplitude") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveAmplitude(inValue.Cast< Float >()) );waveAmplitude=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WiggleEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("waveSpeed",0e,43,dc,5b));
	outFields->push(HX_("waveFrequency",a3,fd,a6,f7));
	outFields->push(HX_("waveAmplitude",4a,90,b7,a5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WiggleEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::WiggleShader */ ,(int)offsetof(WiggleEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(WiggleEffect_obj,waveSpeed),HX_("waveSpeed",0e,43,dc,5b)},
	{::hx::fsFloat,(int)offsetof(WiggleEffect_obj,waveFrequency),HX_("waveFrequency",a3,fd,a6,f7)},
	{::hx::fsFloat,(int)offsetof(WiggleEffect_obj,waveAmplitude),HX_("waveAmplitude",4a,90,b7,a5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WiggleEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String WiggleEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("waveSpeed",0e,43,dc,5b),
	HX_("waveFrequency",a3,fd,a6,f7),
	HX_("waveAmplitude",4a,90,b7,a5),
	HX_("update",09,86,05,87),
	HX_("set_waveSpeed",f1,f8,45,62),
	HX_("set_waveFrequency",06,e1,84,21),
	HX_("set_waveAmplitude",ad,73,95,cf),
	::String(null()) };

::hx::Class WiggleEffect_obj::__mClass;

void WiggleEffect_obj::__register()
{
	WiggleEffect_obj _hx_dummy;
	WiggleEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("WiggleEffect",bc,86,d7,8e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WiggleEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WiggleEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WiggleEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WiggleEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

