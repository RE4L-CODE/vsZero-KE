// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_Anchor
#include <flixel/addons/ui/Anchor.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_AnchorPoint
#include <flixel/addons/ui/AnchorPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8e2cb63194d68a1b_22_new,"flixel.addons.ui.Anchor","new",0xade40a78,"flixel.addons.ui.Anchor.new","flixel/addons/ui/Anchor.hx",22,0x879e85f7)
HX_LOCAL_STACK_FRAME(_hx_pos_8e2cb63194d68a1b_28_destroy,"flixel.addons.ui.Anchor","destroy",0xe9595312,"flixel.addons.ui.Anchor.destroy","flixel/addons/ui/Anchor.hx",28,0x879e85f7)
HX_LOCAL_STACK_FRAME(_hx_pos_8e2cb63194d68a1b_34_anchorThing,"flixel.addons.ui.Anchor","anchorThing",0xb950c751,"flixel.addons.ui.Anchor.anchorThing","flixel/addons/ui/Anchor.hx",34,0x879e85f7)
HX_LOCAL_STACK_FRAME(_hx_pos_8e2cb63194d68a1b_71_getFlipped,"flixel.addons.ui.Anchor","getFlipped",0xbdefab34,"flixel.addons.ui.Anchor.getFlipped","flixel/addons/ui/Anchor.hx",71,0x879e85f7)
HX_LOCAL_STACK_FRAME(_hx_pos_8e2cb63194d68a1b_100_clone,"flixel.addons.ui.Anchor","clone",0xa6080375,"flixel.addons.ui.Anchor.clone","flixel/addons/ui/Anchor.hx",100,0x879e85f7)
HX_LOCAL_STACK_FRAME(_hx_pos_8e2cb63194d68a1b_104_flipAnchorSide,"flixel.addons.ui.Anchor","flipAnchorSide",0xb2a530a1,"flixel.addons.ui.Anchor.flipAnchorSide","flixel/addons/ui/Anchor.hx",104,0x879e85f7)
namespace flixel{
namespace addons{
namespace ui{

void Anchor_obj::__construct(Float XOff,Float YOff,::String XSide,::String YSide,::String XFlush,::String YFlush){
            	HX_GC_STACKFRAME(&_hx_pos_8e2cb63194d68a1b_22_new)
HXLINE(  23)		this->x =  ::flixel::addons::ui::AnchorPoint_obj::__alloc( HX_CTX ,XOff,XSide,XFlush);
HXLINE(  24)		this->y =  ::flixel::addons::ui::AnchorPoint_obj::__alloc( HX_CTX ,YOff,YSide,YFlush);
            	}

Dynamic Anchor_obj::__CreateEmpty() { return new Anchor_obj; }

void *Anchor_obj::_hx_vtable = 0;

Dynamic Anchor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Anchor_obj > _hx_result = new Anchor_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Anchor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x348d3c80;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_ui_Anchor__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::ui::Anchor_obj::destroy,
};

void *Anchor_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_ui_Anchor__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void Anchor_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_8e2cb63194d68a1b_28_destroy)
HXLINE(  29)		this->x = null();
HXLINE(  30)		this->y = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Anchor_obj,destroy,(void))

void Anchor_obj::anchorThing( ::flixel::FlxObject thing, ::flixel::FlxObject destination){
            	HX_STACKFRAME(&_hx_pos_8e2cb63194d68a1b_34_anchorThing)
HXLINE(  35)		Float destX = ( (Float)(0) );
HXLINE(  36)		Float destY = ( (Float)(0) );
HXLINE(  38)		::String _hx_switch_0 = this->x->side;
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  42)			Float destination1 = destination->x;
HXDLIN(  42)			destX = (destination1 + (destination->get_width() / ( (Float)(2) )));
HXDLIN(  42)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(  40)			destX = destination->x;
HXDLIN(  40)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  41)			Float destination1 = destination->x;
HXDLIN(  41)			destX = (destination1 + destination->get_width());
HXDLIN(  41)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  43)			destX = destination->x;
            		}
            		_hx_goto_2:;
HXLINE(  45)		::String _hx_switch_1 = this->y->side;
            		if (  (_hx_switch_1==HX_("bottom",eb,e6,78,65)) ){
HXLINE(  48)			Float destination1 = destination->y;
HXDLIN(  48)			destY = (destination1 + destination->get_height());
HXDLIN(  48)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE(  49)			Float destination1 = destination->y;
HXDLIN(  49)			destY = (destination1 + (destination->get_height() / ( (Float)(2) )));
HXDLIN(  49)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_1==HX_("top",95,66,58,00)) ){
HXLINE(  47)			destY = destination->y;
HXDLIN(  47)			goto _hx_goto_3;
            		}
            		/* default */{
HXLINE(  50)			destY = destination->y;
            		}
            		_hx_goto_3:;
HXLINE(  52)		::String _hx_switch_2 = this->x->flush;
            		if (  (_hx_switch_2==HX_("center",d5,25,db,05)) ){
HXLINE(  56)			destX = (destX - (thing->get_width() / ( (Float)(2) )));
HXDLIN(  56)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_2==HX_("left",07,08,b0,47)) ){
HXLINE(  54)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_2==HX_("right",dc,0b,64,e9)) ){
HXLINE(  55)			destX = (destX - thing->get_width());
HXDLIN(  55)			goto _hx_goto_4;
            		}
            		/* default */{
            		}
            		_hx_goto_4:;
HXLINE(  59)		::String _hx_switch_3 = this->y->flush;
            		if (  (_hx_switch_3==HX_("bottom",eb,e6,78,65)) ){
HXLINE(  62)			destY = (destY - thing->get_height());
HXDLIN(  62)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_3==HX_("center",d5,25,db,05)) ){
HXLINE(  63)			destY = (destY - (thing->get_height() / ( (Float)(2) )));
HXDLIN(  63)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_3==HX_("top",95,66,58,00)) ){
HXLINE(  61)			goto _hx_goto_5;
            		}
            		/* default */{
            		}
            		_hx_goto_5:;
HXLINE(  66)		thing->set_x((destX + this->x->offset));
HXLINE(  67)		thing->set_y((destY + this->y->offset));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Anchor_obj,anchorThing,(void))

 ::flixel::addons::ui::Anchor Anchor_obj::getFlipped(bool FlipX,bool FlipY, ::flixel::addons::ui::Anchor AnchorObject){
            	HX_GC_STACKFRAME(&_hx_pos_8e2cb63194d68a1b_71_getFlipped)
HXLINE(  72)		Float xoff;
HXDLIN(  72)		if (FlipX) {
HXLINE(  72)			xoff = (( (Float)(-1) ) * this->x->offset);
            		}
            		else {
HXLINE(  72)			xoff = this->x->offset;
            		}
HXLINE(  73)		Float yoff;
HXDLIN(  73)		if (FlipY) {
HXLINE(  73)			yoff = (( (Float)(-1) ) * this->y->offset);
            		}
            		else {
HXLINE(  73)			yoff = this->y->offset;
            		}
HXLINE(  75)		::String xside;
HXDLIN(  75)		if (FlipX) {
HXLINE(  75)			xside = this->flipAnchorSide(this->x->side);
            		}
            		else {
HXLINE(  75)			xside = this->x->side;
            		}
HXLINE(  76)		::String yside;
HXDLIN(  76)		if (FlipY) {
HXLINE(  76)			yside = this->flipAnchorSide(this->y->side);
            		}
            		else {
HXLINE(  76)			yside = this->y->side;
            		}
HXLINE(  78)		::String xflush;
HXDLIN(  78)		if (FlipX) {
HXLINE(  78)			xflush = this->flipAnchorSide(this->x->flush);
            		}
            		else {
HXLINE(  78)			xflush = this->x->flush;
            		}
HXLINE(  79)		::String yflush;
HXDLIN(  79)		if (FlipY) {
HXLINE(  79)			yflush = this->flipAnchorSide(this->y->flush);
            		}
            		else {
HXLINE(  79)			yflush = this->y->flush;
            		}
HXLINE(  81)		if (::hx::IsNull( AnchorObject )) {
HXLINE(  83)			AnchorObject =  ::flixel::addons::ui::Anchor_obj::__alloc( HX_CTX ,xoff,yoff,xside,yside,xflush,yflush);
            		}
            		else {
HXLINE(  87)			AnchorObject->x->offset = xoff;
HXLINE(  88)			AnchorObject->y->offset = yoff;
HXLINE(  89)			AnchorObject->x->side = xside;
HXLINE(  90)			AnchorObject->y->side = yside;
HXLINE(  91)			AnchorObject->x->flush = xflush;
HXLINE(  92)			AnchorObject->y->flush = yflush;
            		}
HXLINE(  95)		return AnchorObject;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Anchor_obj,getFlipped,return )

 ::flixel::addons::ui::Anchor Anchor_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_8e2cb63194d68a1b_100_clone)
HXDLIN( 100)		return  ::flixel::addons::ui::Anchor_obj::__alloc( HX_CTX ,this->x->offset,this->y->offset,this->x->side,this->y->side,this->x->flush,this->y->flush);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Anchor_obj,clone,return )

::String Anchor_obj::flipAnchorSide(::String str){
            	HX_STACKFRAME(&_hx_pos_8e2cb63194d68a1b_104_flipAnchorSide)
HXLINE( 105)		if ((str == HX_("left",07,08,b0,47))) {
HXLINE( 106)			return HX_("right",dc,0b,64,e9);
            		}
HXLINE( 107)		if ((str == HX_("right",dc,0b,64,e9))) {
HXLINE( 108)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 109)		if ((str == HX_("top",95,66,58,00))) {
HXLINE( 110)			return HX_("bottom",eb,e6,78,65);
            		}
HXLINE( 111)		if ((str == HX_("bottom",eb,e6,78,65))) {
HXLINE( 112)			return HX_("top",95,66,58,00);
            		}
HXLINE( 113)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Anchor_obj,flipAnchorSide,return )


::hx::ObjectPtr< Anchor_obj > Anchor_obj::__new(Float XOff,Float YOff,::String XSide,::String YSide,::String XFlush,::String YFlush) {
	::hx::ObjectPtr< Anchor_obj > __this = new Anchor_obj();
	__this->__construct(XOff,YOff,XSide,YSide,XFlush,YFlush);
	return __this;
}

::hx::ObjectPtr< Anchor_obj > Anchor_obj::__alloc(::hx::Ctx *_hx_ctx,Float XOff,Float YOff,::String XSide,::String YSide,::String XFlush,::String YFlush) {
	Anchor_obj *__this = (Anchor_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Anchor_obj), true, "flixel.addons.ui.Anchor"));
	*(void **)__this = Anchor_obj::_hx_vtable;
	__this->__construct(XOff,YOff,XSide,YSide,XFlush,YFlush);
	return __this;
}

Anchor_obj::Anchor_obj()
{
}

void Anchor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Anchor);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void Anchor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

::hx::Val Anchor_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getFlipped") ) { return ::hx::Val( getFlipped_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"anchorThing") ) { return ::hx::Val( anchorThing_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flipAnchorSide") ) { return ::hx::Val( flipAnchorSide_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Anchor_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast<  ::flixel::addons::ui::AnchorPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast<  ::flixel::addons::ui::AnchorPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Anchor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Anchor_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::ui::AnchorPoint */ ,(int)offsetof(Anchor_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsObject /*  ::flixel::addons::ui::AnchorPoint */ ,(int)offsetof(Anchor_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Anchor_obj_sStaticStorageInfo = 0;
#endif

static ::String Anchor_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("destroy",fa,2c,86,24),
	HX_("anchorThing",39,b5,54,83),
	HX_("getFlipped",4c,f2,e9,ce),
	HX_("clone",5d,13,63,48),
	HX_("flipAnchorSide",b9,e3,6c,0d),
	::String(null()) };

::hx::Class Anchor_obj::__mClass;

void Anchor_obj::__register()
{
	Anchor_obj _hx_dummy;
	Anchor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.Anchor",86,ae,07,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Anchor_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Anchor_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Anchor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Anchor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
