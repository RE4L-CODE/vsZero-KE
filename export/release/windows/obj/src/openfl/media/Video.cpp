// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_media_Video
#include <openfl/media/Video.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb6bc49fba42380b_207_new,"openfl.media.Video","new",0x18e7e9e5,"openfl.media.Video.new","openfl/media/Video.hx",207,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_274___enterFrame,"openfl.media.Video","__enterFrame",0x9c348cf0,"openfl.media.Video.__enterFrame","openfl/media/Video.hx",274,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_284___getBounds,"openfl.media.Video","__getBounds",0x07e0ff10,"openfl.media.Video.__getBounds","openfl/media/Video.hx",284,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_398___hitTest,"openfl.media.Video","__hitTest",0x56a13c6a,"openfl.media.Video.__hitTest","openfl/media/Video.hx",398,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_421___hitTestMask,"openfl.media.Video","__hitTestMask",0x01982676,"openfl.media.Video.__hitTestMask","openfl/media/Video.hx",421,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_436_get_height,"openfl.media.Video","get_height",0x7919c8cb,"openfl.media.Video.get_height","openfl/media/Video.hx",436,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_440_set_height,"openfl.media.Video","set_height",0x7c97673f,"openfl.media.Video.set_height","openfl/media/Video.hx",440,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_477_get_width,"openfl.media.Video","get_width",0x00df9da2,"openfl.media.Video.get_width","openfl/media/Video.hx",477,0x054fa1ed)
HX_LOCAL_STACK_FRAME(_hx_pos_cb6bc49fba42380b_481_set_width,"openfl.media.Video","set_width",0xe43089ae,"openfl.media.Video.set_width","openfl/media/Video.hx",481,0x054fa1ed)
namespace openfl{
namespace media{

void Video_obj::__construct(::hx::Null< int >  __o_width,::hx::Null< int >  __o_height){
            		int width = __o_width.Default(320);
            		int height = __o_height.Default(240);
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_207_new)
HXLINE( 208)		super::__construct();
HXLINE( 210)		this->_hx___drawableType = 8;
HXLINE( 211)		this->_hx___width = ( (Float)(width) );
HXLINE( 212)		this->_hx___height = ( (Float)(height) );
HXLINE( 214)		this->_hx___textureTime = ( (Float)(-1) );
HXLINE( 216)		this->smoothing = false;
HXLINE( 217)		this->deblocking = 0;
            	}

Dynamic Video_obj::__CreateEmpty() { return new Video_obj; }

void *Video_obj::_hx_vtable = 0;

Dynamic Video_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Video_obj > _hx_result = new Video_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Video_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12694e03) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x12694e03;
		}
	} else {
		return inClassId==(int)0x6b353933;
	}
}

void Video_obj::_hx___enterFrame(int deltaTime){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_274___enterFrame)
            	}


void Video_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_284___getBounds)
HXLINE( 285)		 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 286)		bounds->setTo(( (Float)(0) ),( (Float)(0) ),this->_hx___width,this->_hx___height);
HXLINE( 287)		bounds->_hx___transform(bounds,matrix);
HXLINE( 289)		rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE( 291)		::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            	}


bool Video_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_398___hitTest)
HXLINE( 399)		bool _hx_tmp;
HXDLIN( 399)		if (hitObject->get_visible()) {
HXLINE( 399)			_hx_tmp = this->_hx___isMask;
            		}
            		else {
HXLINE( 399)			_hx_tmp = true;
            		}
HXDLIN( 399)		if (_hx_tmp) {
HXLINE( 399)			return false;
            		}
HXLINE( 400)		bool _hx_tmp1;
HXDLIN( 400)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 400)			_hx_tmp1 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 400)			_hx_tmp1 = false;
            		}
HXDLIN( 400)		if (_hx_tmp1) {
HXLINE( 400)			return false;
            		}
HXLINE( 402)		this->_hx___getRenderTransform();
HXLINE( 404)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 404)		Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 404)		Float px;
HXDLIN( 404)		if ((norm == 0)) {
HXLINE( 404)			px = -(_this->tx);
            		}
            		else {
HXLINE( 404)			px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - y)) + (_this->d * (x - _this->tx))));
            		}
HXLINE( 405)		 ::openfl::geom::Matrix _this1 = this->_hx___renderTransform;
HXDLIN( 405)		Float norm1 = ((_this1->a * _this1->d) - (_this1->b * _this1->c));
HXDLIN( 405)		Float py;
HXDLIN( 405)		if ((norm1 == 0)) {
HXLINE( 405)			py = -(_this1->ty);
            		}
            		else {
HXLINE( 405)			py = ((((Float)1.0) / norm1) * ((_this1->a * (y - _this1->ty)) + (_this1->b * (_this1->tx - x))));
            		}
HXLINE( 407)		bool _hx_tmp2;
HXDLIN( 407)		bool _hx_tmp3;
HXDLIN( 407)		bool _hx_tmp4;
HXDLIN( 407)		if ((px > 0)) {
HXLINE( 407)			_hx_tmp4 = (py > 0);
            		}
            		else {
HXLINE( 407)			_hx_tmp4 = false;
            		}
HXDLIN( 407)		if (_hx_tmp4) {
HXLINE( 407)			_hx_tmp3 = (px <= this->_hx___width);
            		}
            		else {
HXLINE( 407)			_hx_tmp3 = false;
            		}
HXDLIN( 407)		if (_hx_tmp3) {
HXLINE( 407)			_hx_tmp2 = (py <= this->_hx___height);
            		}
            		else {
HXLINE( 407)			_hx_tmp2 = false;
            		}
HXDLIN( 407)		if (_hx_tmp2) {
HXLINE( 409)			bool _hx_tmp;
HXDLIN( 409)			if (::hx::IsNotNull( stack )) {
HXLINE( 409)				_hx_tmp = !(interactiveOnly);
            			}
            			else {
HXLINE( 409)				_hx_tmp = false;
            			}
HXDLIN( 409)			if (_hx_tmp) {
HXLINE( 411)				stack->push(hitObject);
            			}
HXLINE( 414)			return true;
            		}
HXLINE( 417)		return false;
            	}


bool Video_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_421___hitTestMask)
HXLINE( 422)		 ::openfl::geom::Point point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 423)		point->setTo(x,y);
HXLINE( 425)		this->_hx___globalToLocal(point,point);
HXLINE( 427)		bool hit;
HXDLIN( 427)		bool hit1;
HXDLIN( 427)		bool hit2;
HXDLIN( 427)		if ((point->x > 0)) {
HXLINE( 427)			hit2 = (point->y > 0);
            		}
            		else {
HXLINE( 427)			hit2 = false;
            		}
HXDLIN( 427)		if (hit2) {
HXLINE( 427)			hit1 = (point->x <= this->_hx___width);
            		}
            		else {
HXLINE( 427)			hit1 = false;
            		}
HXDLIN( 427)		if (hit1) {
HXLINE( 427)			hit = (point->y <= this->_hx___height);
            		}
            		else {
HXLINE( 427)			hit = false;
            		}
HXLINE( 429)		::openfl::geom::Point_obj::_hx___pool->release(point);
HXLINE( 430)		return hit;
            	}


Float Video_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_436_get_height)
HXDLIN( 436)		Float _hx_tmp = this->_hx___height;
HXDLIN( 436)		return (_hx_tmp * this->get_scaleY());
            	}


Float Video_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_440_set_height)
HXLINE( 441)		bool _hx_tmp;
HXDLIN( 441)		if ((this->get_scaleY() == 1)) {
HXLINE( 441)			_hx_tmp = (value != this->_hx___height);
            		}
            		else {
HXLINE( 441)			_hx_tmp = true;
            		}
HXDLIN( 441)		if (_hx_tmp) {
HXLINE( 443)			this->_hx___setTransformDirty();
HXLINE( 444)			this->_hx___dirty = true;
            		}
HXLINE( 447)		this->set_scaleY(( (Float)(1) ));
HXLINE( 448)		return (this->_hx___height = value);
            	}


Float Video_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_477_get_width)
HXDLIN( 477)		return (this->_hx___width * this->_hx___scaleX);
            	}


Float Video_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_cb6bc49fba42380b_481_set_width)
HXLINE( 482)		bool _hx_tmp;
HXDLIN( 482)		if ((this->_hx___scaleX == 1)) {
HXLINE( 482)			_hx_tmp = (this->_hx___width != value);
            		}
            		else {
HXLINE( 482)			_hx_tmp = true;
            		}
HXDLIN( 482)		if (_hx_tmp) {
HXLINE( 484)			this->_hx___setTransformDirty();
HXLINE( 485)			this->_hx___dirty = true;
            		}
HXLINE( 488)		this->set_scaleX(( (Float)(1) ));
HXLINE( 489)		return (this->_hx___width = value);
            	}



::hx::ObjectPtr< Video_obj > Video_obj::__new(::hx::Null< int >  __o_width,::hx::Null< int >  __o_height) {
	::hx::ObjectPtr< Video_obj > __this = new Video_obj();
	__this->__construct(__o_width,__o_height);
	return __this;
}

::hx::ObjectPtr< Video_obj > Video_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height) {
	Video_obj *__this = (Video_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Video_obj), true, "openfl.media.Video"));
	*(void **)__this = Video_obj::_hx_vtable;
	__this->__construct(__o_width,__o_height);
	return __this;
}

Video_obj::Video_obj()
{
}

::hx::Val Video_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return ::hx::Val( _hx___dirty ); }
		if (HX_FIELD_EQ(inName,"__width") ) { return ::hx::Val( _hx___width ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { return ::hx::Val( _hx___height ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return ::hx::Val( smoothing ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deblocking") ) { return ::hx::Val( deblocking ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return ::hx::Val( _hx___getBounds_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__textureTime") ) { return ::hx::Val( _hx___textureTime ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Video_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { _hx___dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__width") ) { _hx___width=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { _hx___height=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deblocking") ) { deblocking=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__textureTime") ) { _hx___textureTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Video_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("deblocking",36,66,05,70));
	outFields->push(HX_("smoothing",74,d5,e1,95));
	outFields->push(HX_("__dirty",f2,a8,2e,44));
	outFields->push(HX_("__height",07,73,7b,aa));
	outFields->push(HX_("__textureTime",68,0b,f4,4b));
	outFields->push(HX_("__width",e6,0e,c1,34));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Video_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Video_obj,deblocking),HX_("deblocking",36,66,05,70)},
	{::hx::fsBool,(int)offsetof(Video_obj,smoothing),HX_("smoothing",74,d5,e1,95)},
	{::hx::fsBool,(int)offsetof(Video_obj,_hx___dirty),HX_("__dirty",f2,a8,2e,44)},
	{::hx::fsFloat,(int)offsetof(Video_obj,_hx___height),HX_("__height",07,73,7b,aa)},
	{::hx::fsFloat,(int)offsetof(Video_obj,_hx___textureTime),HX_("__textureTime",68,0b,f4,4b)},
	{::hx::fsFloat,(int)offsetof(Video_obj,_hx___width),HX_("__width",e6,0e,c1,34)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Video_obj_sStaticStorageInfo = 0;
#endif

static ::String Video_obj_sMemberFields[] = {
	HX_("deblocking",36,66,05,70),
	HX_("smoothing",74,d5,e1,95),
	HX_("__dirty",f2,a8,2e,44),
	HX_("__height",07,73,7b,aa),
	HX_("__textureTime",68,0b,f4,4b),
	HX_("__width",e6,0e,c1,34),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("__getBounds",8b,58,a0,10),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	::String(null()) };

::hx::Class Video_obj::__mClass;

void Video_obj::__register()
{
	Video_obj _hx_dummy;
	Video_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.media.Video",73,13,12,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Video_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Video_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Video_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Video_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace media
