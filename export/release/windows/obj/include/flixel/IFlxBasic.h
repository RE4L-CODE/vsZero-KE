// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_IFlxBasic
#define INCLUDED_flixel_IFlxBasic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,IFlxBasic)

namespace flixel{


class HXCPP_CLASS_ATTRIBUTES IFlxBasic_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		bool (::hx::Object :: *_hx_set_active)(bool value); 
		static inline bool set_active( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_set_active)(value);
		}
		bool (::hx::Object :: *_hx_set_visible)(bool value); 
		static inline bool set_visible( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::IFlxBasic_obj *>(_hx_.mPtr->_hx_getInterface(0x284cfea9)))->_hx_set_visible)(value);
		}
};

} // end namespace flixel

#endif /* INCLUDED_flixel_IFlxBasic */ 
