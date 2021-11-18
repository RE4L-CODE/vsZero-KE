// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_99143fe9fb0bb031_152_new,"openfl.geom.Matrix","new",0xd1b9ff67,"openfl.geom.Matrix.new","openfl/geom/Matrix.hx",152,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_169_clone,"openfl.geom.Matrix","clone",0xe2f85224,"openfl.geom.Matrix.clone","openfl/geom/Matrix.hx",169,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_191_concat,"openfl.geom.Matrix","concat",0x6fd1b86d,"openfl.geom.Matrix.concat","openfl/geom/Matrix.hx",191,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_276_copyFrom,"openfl.geom.Matrix","copyFrom",0xb7b00358,"openfl.geom.Matrix.copyFrom","openfl/geom/Matrix.hx",276,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_434_createGradientBox,"openfl.geom.Matrix","createGradientBox",0xa2dcb9a6,"openfl.geom.Matrix.createGradientBox","openfl/geom/Matrix.hx",434,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_478_equals,"openfl.geom.Matrix","equals",0x67f49d98,"openfl.geom.Matrix.equals","openfl/geom/Matrix.hx",478,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_493_identity,"openfl.geom.Matrix","identity",0xa87e3cd7,"openfl.geom.Matrix.identity","openfl/geom/Matrix.hx",493,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_509_invert,"openfl.geom.Matrix","invert",0x47da966f,"openfl.geom.Matrix.invert","openfl/geom/Matrix.hx",509,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_548_rotate,"openfl.geom.Matrix","rotate",0x7321f5b4,"openfl.geom.Matrix.rotate","openfl/geom/Matrix.hx",548,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_594_scale,"openfl.geom.Matrix","scale",0x13640d51,"openfl.geom.Matrix.scale","openfl/geom/Matrix.hx",594,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_635_setTo,"openfl.geom.Matrix","setTo",0x14c4d084,"openfl.geom.Matrix.setTo","openfl/geom/Matrix.hx",635,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_697_translate,"openfl.geom.Matrix","translate",0xbf498595,"openfl.geom.Matrix.translate","openfl/geom/Matrix.hx",697,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_751___toMatrix3,"openfl.geom.Matrix","__toMatrix3",0xaf6ed17e,"openfl.geom.Matrix.__toMatrix3","openfl/geom/Matrix.hx",751,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_74_boot,"openfl.geom.Matrix","boot",0xa91e7b4b,"openfl.geom.Matrix.boot","openfl/geom/Matrix.hx",74,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_77_boot,"openfl.geom.Matrix","boot",0xa91e7b4b,"openfl.geom.Matrix.boot","openfl/geom/Matrix.hx",77,0xa0d54189)
HX_LOCAL_STACK_FRAME(_hx_pos_99143fe9fb0bb031_79_boot,"openfl.geom.Matrix","boot",0xa91e7b4b,"openfl.geom.Matrix.boot","openfl/geom/Matrix.hx",79,0xa0d54189)
namespace openfl{
namespace geom{

void Matrix_obj::__construct(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty){
            		Float a = __o_a.Default(1);
            		Float b = __o_b.Default(0);
            		Float c = __o_c.Default(0);
            		Float d = __o_d.Default(1);
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_152_new)
HXLINE( 153)		this->a = a;
HXLINE( 154)		this->b = b;
HXLINE( 155)		this->c = c;
HXLINE( 156)		this->d = d;
HXLINE( 157)		this->tx = tx;
HXLINE( 158)		this->ty = ty;
            	}

Dynamic Matrix_obj::__CreateEmpty() { return new Matrix_obj; }

void *Matrix_obj::_hx_vtable = 0;

Dynamic Matrix_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Matrix_obj > _hx_result = new Matrix_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Matrix_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x065caf19;
}

 ::openfl::geom::Matrix Matrix_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_169_clone)
HXDLIN( 169)		return  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,this->a,this->b,this->c,this->d,this->tx,this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

void Matrix_obj::concat( ::openfl::geom::Matrix m){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_191_concat)
HXLINE( 192)		Float a1 = ((this->a * m->a) + (this->b * m->c));
HXLINE( 193)		this->b = ((this->a * m->b) + (this->b * m->d));
HXLINE( 194)		this->a = a1;
HXLINE( 196)		Float c1 = ((this->c * m->a) + (this->d * m->c));
HXLINE( 197)		this->d = ((this->c * m->b) + (this->d * m->d));
HXLINE( 198)		this->c = c1;
HXLINE( 200)		Float tx1 = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);
HXLINE( 201)		this->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
HXLINE( 202)		this->tx = tx1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

void Matrix_obj::copyFrom( ::openfl::geom::Matrix sourceMatrix){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_276_copyFrom)
HXLINE( 277)		this->a = sourceMatrix->a;
HXLINE( 278)		this->b = sourceMatrix->b;
HXLINE( 279)		this->c = sourceMatrix->c;
HXLINE( 280)		this->d = sourceMatrix->d;
HXLINE( 281)		this->tx = sourceMatrix->tx;
HXLINE( 282)		this->ty = sourceMatrix->ty;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyFrom,(void))

void Matrix_obj::createGradientBox(Float width,Float height,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty){
            		Float rotation = __o_rotation.Default(0);
            		Float tx = __o_tx.Default(0);
            		Float ty = __o_ty.Default(0);
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_434_createGradientBox)
HXLINE( 435)		this->a = (width / ((Float)1638.4));
HXLINE( 436)		this->d = (height / ((Float)1638.4));
HXLINE( 439)		if ((rotation != 0)) {
HXLINE( 441)			Float cos = ::Math_obj::cos(rotation);
HXLINE( 442)			Float sin = ::Math_obj::sin(rotation);
HXLINE( 444)			this->b = (sin * this->d);
HXLINE( 445)			this->c = (-(sin) * this->a);
HXLINE( 446)			 ::openfl::geom::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 446)			_hx_tmp->a = (_hx_tmp->a * cos);
HXLINE( 447)			 ::openfl::geom::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 447)			_hx_tmp1->d = (_hx_tmp1->d * cos);
            		}
            		else {
HXLINE( 451)			this->b = ( (Float)(0) );
HXLINE( 452)			this->c = ( (Float)(0) );
            		}
HXLINE( 455)		this->tx = (tx + (width / ( (Float)(2) )));
HXLINE( 456)		this->ty = (ty + (height / ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

bool Matrix_obj::equals( ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_478_equals)
HXDLIN( 478)		bool _hx_tmp;
HXDLIN( 478)		bool _hx_tmp1;
HXDLIN( 478)		bool _hx_tmp2;
HXDLIN( 478)		bool _hx_tmp3;
HXDLIN( 478)		bool _hx_tmp4;
HXDLIN( 478)		if (::hx::IsNotNull( matrix )) {
HXDLIN( 478)			_hx_tmp4 = (this->tx == matrix->tx);
            		}
            		else {
HXDLIN( 478)			_hx_tmp4 = false;
            		}
HXDLIN( 478)		if (_hx_tmp4) {
HXDLIN( 478)			_hx_tmp3 = (this->ty == matrix->ty);
            		}
            		else {
HXDLIN( 478)			_hx_tmp3 = false;
            		}
HXDLIN( 478)		if (_hx_tmp3) {
HXDLIN( 478)			_hx_tmp2 = (this->a == matrix->a);
            		}
            		else {
HXDLIN( 478)			_hx_tmp2 = false;
            		}
HXDLIN( 478)		if (_hx_tmp2) {
HXDLIN( 478)			_hx_tmp1 = (this->b == matrix->b);
            		}
            		else {
HXDLIN( 478)			_hx_tmp1 = false;
            		}
HXDLIN( 478)		if (_hx_tmp1) {
HXDLIN( 478)			_hx_tmp = (this->c == matrix->c);
            		}
            		else {
HXDLIN( 478)			_hx_tmp = false;
            		}
HXDLIN( 478)		if (_hx_tmp) {
HXDLIN( 478)			return (this->d == matrix->d);
            		}
            		else {
HXDLIN( 478)			return false;
            		}
HXDLIN( 478)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,equals,return )

void Matrix_obj::identity(){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_493_identity)
HXLINE( 494)		this->a = ( (Float)(1) );
HXLINE( 495)		this->b = ( (Float)(0) );
HXLINE( 496)		this->c = ( (Float)(0) );
HXLINE( 497)		this->d = ( (Float)(1) );
HXLINE( 498)		this->tx = ( (Float)(0) );
HXLINE( 499)		this->ty = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

 ::openfl::geom::Matrix Matrix_obj::invert(){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_509_invert)
HXLINE( 510)		Float norm = ((this->a * this->d) - (this->b * this->c));
HXLINE( 512)		if ((norm == 0)) {
HXLINE( 514)			this->a = (this->b = (this->c = (this->d = ( (Float)(0) ))));
HXLINE( 515)			this->tx = -(this->tx);
HXLINE( 516)			this->ty = -(this->ty);
            		}
            		else {
HXLINE( 520)			norm = (((Float)1.0) / norm);
HXLINE( 521)			Float a1 = (this->d * norm);
HXLINE( 522)			this->d = (this->a * norm);
HXLINE( 523)			this->a = a1;
HXLINE( 524)			 ::openfl::geom::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 524)			_hx_tmp->b = (_hx_tmp->b * -(norm));
HXLINE( 525)			 ::openfl::geom::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 525)			_hx_tmp1->c = (_hx_tmp1->c * -(norm));
HXLINE( 527)			Float tx1 = ((-(this->a) * this->tx) - (this->c * this->ty));
HXLINE( 528)			this->ty = ((-(this->b) * this->tx) - (this->d * this->ty));
HXLINE( 529)			this->tx = tx1;
            		}
HXLINE( 534)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

void Matrix_obj::rotate(Float theta){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_548_rotate)
HXLINE( 562)		Float cos = ::Math_obj::cos(theta);
HXLINE( 564)		Float sin = ::Math_obj::sin(theta);
HXLINE( 566)		Float a1 = ((this->a * cos) - (this->b * sin));
HXLINE( 567)		this->b = ((this->a * sin) + (this->b * cos));
HXLINE( 568)		this->a = a1;
HXLINE( 570)		Float c1 = ((this->c * cos) - (this->d * sin));
HXLINE( 571)		this->d = ((this->c * sin) + (this->d * cos));
HXLINE( 572)		this->c = c1;
HXLINE( 574)		Float tx1 = ((this->tx * cos) - (this->ty * sin));
HXLINE( 575)		this->ty = ((this->tx * sin) + (this->ty * cos));
HXLINE( 576)		this->tx = tx1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

void Matrix_obj::scale(Float sx,Float sy){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_594_scale)
HXLINE( 604)		 ::openfl::geom::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 604)		_hx_tmp->a = (_hx_tmp->a * sx);
HXLINE( 605)		 ::openfl::geom::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 605)		_hx_tmp1->b = (_hx_tmp1->b * sy);
HXLINE( 606)		 ::openfl::geom::Matrix _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 606)		_hx_tmp2->c = (_hx_tmp2->c * sx);
HXLINE( 607)		 ::openfl::geom::Matrix _hx_tmp3 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 607)		_hx_tmp3->d = (_hx_tmp3->d * sy);
HXLINE( 608)		 ::openfl::geom::Matrix _hx_tmp4 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 608)		_hx_tmp4->tx = (_hx_tmp4->tx * sx);
HXLINE( 609)		 ::openfl::geom::Matrix _hx_tmp5 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 609)		_hx_tmp5->ty = (_hx_tmp5->ty * sy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

void Matrix_obj::setTo(Float a,Float b,Float c,Float d,Float tx,Float ty){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_635_setTo)
HXLINE( 636)		this->a = a;
HXLINE( 637)		this->b = b;
HXLINE( 638)		this->c = c;
HXLINE( 639)		this->d = d;
HXLINE( 640)		this->tx = tx;
HXLINE( 641)		this->ty = ty;
            	}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,setTo,(void))

void Matrix_obj::translate(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_697_translate)
HXLINE( 698)		 ::openfl::geom::Matrix _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 698)		_hx_tmp->tx = (_hx_tmp->tx + dx);
HXLINE( 699)		 ::openfl::geom::Matrix _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 699)		_hx_tmp1->ty = (_hx_tmp1->ty + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))

 ::lime::math::Matrix3 Matrix_obj::_hx___toMatrix3(){
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_751___toMatrix3)
HXLINE( 752)		{
HXLINE( 752)			 ::lime::math::Matrix3 _this = ::openfl::geom::Matrix_obj::_hx___matrix3;
HXDLIN( 752)			_this->a = this->a;
HXDLIN( 752)			_this->b = this->b;
HXDLIN( 752)			_this->c = this->c;
HXDLIN( 752)			_this->d = this->d;
HXDLIN( 752)			_this->tx = this->tx;
HXDLIN( 752)			_this->ty = this->ty;
            		}
HXLINE( 753)		return ::openfl::geom::Matrix_obj::_hx___matrix3;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,_hx___toMatrix3,return )

 ::lime::utils::ObjectPool Matrix_obj::_hx___pool;

 ::lime::math::Matrix3 Matrix_obj::_hx___matrix3;


::hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty) {
	::hx::ObjectPtr< Matrix_obj > __this = new Matrix_obj();
	__this->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return __this;
}

::hx::ObjectPtr< Matrix_obj > Matrix_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_a,::hx::Null< Float >  __o_b,::hx::Null< Float >  __o_c,::hx::Null< Float >  __o_d,::hx::Null< Float >  __o_tx,::hx::Null< Float >  __o_ty) {
	Matrix_obj *__this = (Matrix_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Matrix_obj), false, "openfl.geom.Matrix"));
	*(void **)__this = Matrix_obj::_hx_vtable;
	__this->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return __this;
}

Matrix_obj::Matrix_obj()
{
}

::hx::Val Matrix_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"c") ) { return ::hx::Val( c ); }
		if (HX_FIELD_EQ(inName,"d") ) { return ::hx::Val( d ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return ::hx::Val( tx ); }
		if (HX_FIELD_EQ(inName,"ty") ) { return ::hx::Val( ty ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return ::hx::Val( setTo_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"invert") ) { return ::hx::Val( invert_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"identity") ) { return ::hx::Val( identity_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"translate") ) { return ::hx::Val( translate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__toMatrix3") ) { return ::hx::Val( _hx___toMatrix3_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return ::hx::Val( createGradientBox_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Matrix_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__matrix3") ) { outValue = ( _hx___matrix3 ); return true; }
	}
	return false;
}

::hx::Val Matrix_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Matrix_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__matrix3") ) { _hx___matrix3=ioValue.Cast<  ::lime::math::Matrix3 >(); return true; }
	}
	return false;
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("c",63,00,00,00));
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("tx",84,65,00,00));
	outFields->push(HX_("ty",85,65,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Matrix_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Matrix_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,c),HX_("c",63,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,d),HX_("d",64,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,tx),HX_("tx",84,65,00,00)},
	{::hx::fsFloat,(int)offsetof(Matrix_obj,ty),HX_("ty",85,65,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Matrix_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &Matrix_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{::hx::fsObject /*  ::lime::math::Matrix3 */ ,(void *) &Matrix_obj::_hx___matrix3,HX_("__matrix3",b2,93,b5,14)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Matrix_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	HX_("c",63,00,00,00),
	HX_("d",64,00,00,00),
	HX_("tx",84,65,00,00),
	HX_("ty",85,65,00,00),
	HX_("clone",5d,13,63,48),
	HX_("concat",14,09,d0,c7),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("createGradientBox",5f,ec,c0,25),
	HX_("equals",3f,ee,f2,bf),
	HX_("identity",3e,45,2f,b9),
	HX_("invert",16,e7,d8,9f),
	HX_("rotate",5b,46,20,cb),
	HX_("scale",8a,ce,ce,78),
	HX_("setTo",bd,91,2f,7a),
	HX_("translate",4e,d7,7f,49),
	HX_("__toMatrix3",77,c3,27,f1),
	::String(null()) };

static void Matrix_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::_hx___pool,"__pool");
	HX_MARK_MEMBER_NAME(Matrix_obj::_hx___matrix3,"__matrix3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Matrix_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::_hx___pool,"__pool");
	HX_VISIT_MEMBER_NAME(Matrix_obj::_hx___matrix3,"__matrix3");
};

#endif

::hx::Class Matrix_obj::__mClass;

static ::String Matrix_obj_sStaticFields[] = {
	HX_("__pool",fc,e3,54,f9),
	HX_("__matrix3",b2,93,b5,14),
	::String(null())
};

void Matrix_obj::__register()
{
	Matrix_obj _hx_dummy;
	Matrix_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.geom.Matrix",f5,bf,06,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Matrix_obj::__GetStatic;
	__mClass->mSetStaticField = &Matrix_obj::__SetStatic;
	__mClass->mMarkFunc = Matrix_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Matrix_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Matrix_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Matrix_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Matrix_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Matrix_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Matrix_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Matrix_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_74_boot)
HXDLIN(  74)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("equals",3f,ee,f2,bf), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))))));
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::geom::Matrix _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_77_boot)
HXDLIN(  77)			return  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::geom::Matrix m){
            			HX_STACKFRAME(&_hx_pos_99143fe9fb0bb031_77_boot)
HXDLIN(  77)			m->identity();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_77_boot)
HXDLIN(  77)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_99143fe9fb0bb031_79_boot)
HXDLIN(  79)		_hx___matrix3 =  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace openfl
} // end namespace geom
