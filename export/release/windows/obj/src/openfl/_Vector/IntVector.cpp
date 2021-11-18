// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1396_new,"openfl._Vector.IntVector","new",0x6313ae9a,"openfl._Vector.IntVector.new","openfl/Vector.hx",1396,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1441_get,"openfl._Vector.IntVector","get",0x630e5ed0,"openfl._Vector.IntVector.get","openfl/Vector.hx",1441,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1502_push,"openfl._Vector.IntVector","push",0x4f83a660,"openfl._Vector.IntVector.push","openfl/Vector.hx",1502,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1530_set,"openfl._Vector.IntVector","set",0x631779dc,"openfl._Vector.IntVector.set","openfl/Vector.hx",1530,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1565_splice,"openfl._Vector.IntVector","splice",0x41f3c782,"openfl._Vector.IntVector.splice","openfl/Vector.hx",1565,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1571_toJSON,"openfl._Vector.IntVector","toJSON",0xfe5e8b29,"openfl._Vector.IntVector.toJSON","openfl/Vector.hx",1571,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1590_get_length,"openfl._Vector.IntVector","get_length",0x4714c1b5,"openfl._Vector.IntVector.get_length","openfl/Vector.hx",1590,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1594_set_length,"openfl._Vector.IntVector","set_length",0x4a926029,"openfl._Vector.IntVector.set_length","openfl/Vector.hx",1594,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1388_boot,"openfl._Vector.IntVector","boot",0x463e18b8,"openfl._Vector.IntVector.boot","openfl/Vector.hx",1388,0x4a01873c)
namespace openfl{
namespace _Vector{

void IntVector_obj::__construct(::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::Array< int > array){
            		int length = __o_length.Default(0);
            		bool fixed = __o_fixed.Default(false);
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1396_new)
HXLINE(1397)		if (::hx::IsNull( array )) {
HXLINE(1397)			array = ::Array_obj< int >::__new();
            		}
HXLINE(1398)		this->_hx___array = array;
HXLINE(1400)		if ((length > 0)) {
HXLINE(1402)			this->set_length(length);
            		}
HXLINE(1405)		this->fixed = fixed;
            	}

Dynamic IntVector_obj::__CreateEmpty() { return new IntVector_obj; }

void *IntVector_obj::_hx_vtable = 0;

Dynamic IntVector_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IntVector_obj > _hx_result = new IntVector_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool IntVector_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4c44b864;
}

static ::openfl::_Vector::IVector_obj _hx_openfl__Vector_IntVector__hx_openfl__Vector_IVector= {
};

void *IntVector_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x45e7caba: return &_hx_openfl__Vector_IntVector__hx_openfl__Vector_IVector;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

int IntVector_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1441_get)
HXDLIN(1441)		return this->_hx___array->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,get,return )

int IntVector_obj::push(int x){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1502_push)
HXDLIN(1502)		if (!(this->fixed)) {
HXLINE(1504)			return this->_hx___array->push(x);
            		}
            		else {
HXLINE(1508)			return this->_hx___array->length;
            		}
HXLINE(1502)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,push,return )

int IntVector_obj::set(int index,int value){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1530_set)
HXDLIN(1530)		bool _hx_tmp;
HXDLIN(1530)		if (this->fixed) {
HXDLIN(1530)			_hx_tmp = (index < this->_hx___array->length);
            		}
            		else {
HXDLIN(1530)			_hx_tmp = true;
            		}
HXDLIN(1530)		if (_hx_tmp) {
HXLINE(1532)			return (this->_hx___array[index] = value);
            		}
            		else {
HXLINE(1536)			return value;
            		}
HXLINE(1530)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,set,return )

::Dynamic IntVector_obj::splice(int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1565_splice)
HXDLIN(1565)		return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,0,false,this->_hx___array->splice(pos,len));
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,splice,return )

 ::Dynamic IntVector_obj::toJSON(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1571_toJSON)
HXDLIN(1571)		return this->_hx___array;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,toJSON,return )

int IntVector_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1590_get_length)
HXDLIN(1590)		return this->_hx___array->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,get_length,return )

int IntVector_obj::set_length(int value){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1594_set_length)
HXLINE(1595)		if (!(this->fixed)) {
HXLINE(1598)			_hx_array_set_size_exact(this->_hx___array,value);
            		}
HXLINE(1620)		return this->_hx___array->length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,set_length,return )


::hx::ObjectPtr< IntVector_obj > IntVector_obj::__new(::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::Array< int > array) {
	::hx::ObjectPtr< IntVector_obj > __this = new IntVector_obj();
	__this->__construct(__o_length,__o_fixed,array);
	return __this;
}

::hx::ObjectPtr< IntVector_obj > IntVector_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_length,::hx::Null< bool >  __o_fixed,::Array< int > array) {
	IntVector_obj *__this = (IntVector_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(IntVector_obj), true, "openfl._Vector.IntVector"));
	*(void **)__this = IntVector_obj::_hx_vtable;
	__this->__construct(__o_length,__o_fixed,array);
	return __this;
}

IntVector_obj::IntVector_obj()
{
}

void IntVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(_hx___array,"__array");
	HX_MARK_END_CLASS();
}

void IntVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(_hx___array,"__array");
}

::hx::Val IntVector_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { return ::hx::Val( fixed ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"splice") ) { return ::hx::Val( splice_dyn() ); }
		if (HX_FIELD_EQ(inName,"toJSON") ) { return ::hx::Val( toJSON_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return ::hx::Val( _hx___array ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return ::hx::Val( set_length_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IntVector_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_length(inValue.Cast< int >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { _hx___array=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fixed",74,f9,a1,00));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("__array",79,c6,ed,8f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IntVector_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(IntVector_obj,fixed),HX_("fixed",74,f9,a1,00)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(IntVector_obj,_hx___array),HX_("__array",79,c6,ed,8f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IntVector_obj_sStaticStorageInfo = 0;
#endif

static ::String IntVector_obj_sMemberFields[] = {
	HX_("fixed",74,f9,a1,00),
	HX_("__array",79,c6,ed,8f),
	HX_("get",96,80,4e,00),
	HX_("push",da,11,61,4a),
	HX_("set",a2,9b,57,00),
	HX_("splice",7c,85,9e,bf),
	HX_("toJSON",23,49,09,7c),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	::String(null()) };

::hx::Class IntVector_obj::__mClass;

void IntVector_obj::__register()
{
	IntVector_obj _hx_dummy;
	IntVector_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._Vector.IntVector",a8,19,86,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IntVector_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IntVector_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IntVector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IntVector_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void IntVector_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1388_boot)
HXDLIN(1388)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("toJSON",23,49,09,7c), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace _Vector
