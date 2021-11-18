// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_media_AudioBuffer
#include <lime/app/Promise_lime_media_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#include <lime/media/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_media_AudioBuffer
#include <lime/net/_HTTPRequest_lime_media_AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_60_new,"lime.media.AudioBuffer","new",0x18eea6a5,"lime.media.AudioBuffer.new","lime/media/AudioBuffer.hx",60,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_116_fromBytes,"lime.media.AudioBuffer","fromBytes",0x20c94aa6,"lime.media.AudioBuffer.fromBytes","lime/media/AudioBuffer.hx",116,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_149_fromFile,"lime.media.AudioBuffer","fromFile",0x1084eca1,"lime.media.AudioBuffer.fromFile","lime/media/AudioBuffer.hx",149,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_200_fromFiles,"lime.media.AudioBuffer","fromFiles",0x63ca20b2,"lime.media.AudioBuffer.fromFiles","lime/media/AudioBuffer.hx",200,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_298_loadFromFile,"lime.media.AudioBuffer","loadFromFile",0x735d4267,"lime.media.AudioBuffer.loadFromFile","lime/media/AudioBuffer.hx",298,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_247_loadFromFile,"lime.media.AudioBuffer","loadFromFile",0x735d4267,"lime.media.AudioBuffer.loadFromFile","lime/media/AudioBuffer.hx",247,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_336_loadFromFiles,"lime.media.AudioBuffer","loadFromFiles",0x7e3cd82c,"lime.media.AudioBuffer.loadFromFiles","lime/media/AudioBuffer.hx",336,0xf6fabaad)
HX_LOCAL_STACK_FRAME(_hx_pos_3ac99a7056b92cf3_311_loadFromFiles,"lime.media.AudioBuffer","loadFromFiles",0x7e3cd82c,"lime.media.AudioBuffer.loadFromFiles","lime/media/AudioBuffer.hx",311,0xf6fabaad)
namespace lime{
namespace media{

void AudioBuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_60_new)
            	}

Dynamic AudioBuffer_obj::__CreateEmpty() { return new AudioBuffer_obj; }

void *AudioBuffer_obj::_hx_vtable = 0;

Dynamic AudioBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AudioBuffer_obj > _hx_result = new AudioBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AudioBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x010acaab;
}

 ::lime::media::AudioBuffer AudioBuffer_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_116_fromBytes)
HXLINE( 117)		if (::hx::IsNull( bytes )) {
HXLINE( 117)			return null();
            		}
HXLINE( 126)		 ::lime::media::AudioBuffer audioBuffer =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 127)		 ::Dynamic elements = null();
HXDLIN( 127)		 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN( 127)		::cpp::VirtualArray array = null();
HXDLIN( 127)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 127)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 127)		 ::Dynamic len = null();
HXDLIN( 127)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 127)		if (::hx::IsNotNull( elements )) {
HXLINE( 127)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE( 127)			if (::hx::IsNotNull( array )) {
HXLINE( 127)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 127)				_this->byteOffset = 0;
HXDLIN( 127)				_this->length = array->get_length();
HXDLIN( 127)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 127)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 127)				_this->buffer = this2;
HXDLIN( 127)				_this->copyFromArray(array,null());
HXDLIN( 127)				this1 = _this;
            			}
            			else {
HXLINE( 127)				if (::hx::IsNotNull( vector )) {
HXLINE( 127)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 127)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 127)					_this->byteOffset = 0;
HXDLIN( 127)					_this->length = array->get_length();
HXDLIN( 127)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 127)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 127)					_this->buffer = this2;
HXDLIN( 127)					_this->copyFromArray(array,null());
HXDLIN( 127)					this1 = _this;
            				}
            				else {
HXLINE( 127)					if (::hx::IsNotNull( view )) {
HXLINE( 127)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 127)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 127)						int srcLength = view->length;
HXDLIN( 127)						int srcByteOffset = view->byteOffset;
HXDLIN( 127)						int srcElementSize = view->bytesPerElement;
HXDLIN( 127)						int elementSize = _this->bytesPerElement;
HXDLIN( 127)						if ((view->type == _this->type)) {
HXLINE( 127)							int srcLength = srcData->length;
HXDLIN( 127)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 127)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 127)							_this->buffer = this1;
HXDLIN( 127)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 127)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 127)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 127)						_this->byteOffset = 0;
HXDLIN( 127)						_this->length = srcLength;
HXDLIN( 127)						this1 = _this;
            					}
            					else {
HXLINE( 127)						if (::hx::IsNotNull( buffer )) {
HXLINE( 127)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 127)							int in_byteOffset = 0;
HXDLIN( 127)							if ((in_byteOffset < 0)) {
HXLINE( 127)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 127)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 127)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 127)							int bufferByteLength = buffer->length;
HXDLIN( 127)							int elementSize = _this->bytesPerElement;
HXDLIN( 127)							int newByteLength = bufferByteLength;
HXDLIN( 127)							if (::hx::IsNull( len )) {
HXLINE( 127)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 127)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 127)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 127)								if ((newByteLength < 0)) {
HXLINE( 127)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 127)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 127)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 127)								if ((newRange > bufferByteLength)) {
HXLINE( 127)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 127)							_this->buffer = buffer;
HXDLIN( 127)							_this->byteOffset = in_byteOffset;
HXDLIN( 127)							_this->byteLength = newByteLength;
HXDLIN( 127)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 127)							this1 = _this;
            						}
            						else {
HXLINE( 127)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 127)		audioBuffer->data = this1;
HXLINE( 129)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_audio_load_bytes(::hx::DynamicPtr(bytes),::hx::DynamicPtr(audioBuffer))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromBytes,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_149_fromFile)
HXLINE( 150)		if (::hx::IsNull( path )) {
HXLINE( 150)			return null();
            		}
HXLINE( 175)		 ::lime::media::AudioBuffer audioBuffer =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 176)		 ::Dynamic elements = null();
HXDLIN( 176)		 ::haxe::io::Bytes buffer = ::haxe::io::Bytes_obj::alloc(0);
HXDLIN( 176)		::cpp::VirtualArray array = null();
HXDLIN( 176)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 176)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 176)		 ::Dynamic len = null();
HXDLIN( 176)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 176)		if (::hx::IsNotNull( elements )) {
HXLINE( 176)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE( 176)			if (::hx::IsNotNull( array )) {
HXLINE( 176)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 176)				_this->byteOffset = 0;
HXDLIN( 176)				_this->length = array->get_length();
HXDLIN( 176)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 176)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 176)				_this->buffer = this2;
HXDLIN( 176)				_this->copyFromArray(array,null());
HXDLIN( 176)				this1 = _this;
            			}
            			else {
HXLINE( 176)				if (::hx::IsNotNull( vector )) {
HXLINE( 176)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 176)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 176)					_this->byteOffset = 0;
HXDLIN( 176)					_this->length = array->get_length();
HXDLIN( 176)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 176)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 176)					_this->buffer = this2;
HXDLIN( 176)					_this->copyFromArray(array,null());
HXDLIN( 176)					this1 = _this;
            				}
            				else {
HXLINE( 176)					if (::hx::IsNotNull( view )) {
HXLINE( 176)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 176)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 176)						int srcLength = view->length;
HXDLIN( 176)						int srcByteOffset = view->byteOffset;
HXDLIN( 176)						int srcElementSize = view->bytesPerElement;
HXDLIN( 176)						int elementSize = _this->bytesPerElement;
HXDLIN( 176)						if ((view->type == _this->type)) {
HXLINE( 176)							int srcLength = srcData->length;
HXDLIN( 176)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 176)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 176)							_this->buffer = this1;
HXDLIN( 176)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE( 176)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN( 176)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 176)						_this->byteOffset = 0;
HXDLIN( 176)						_this->length = srcLength;
HXDLIN( 176)						this1 = _this;
            					}
            					else {
HXLINE( 176)						if (::hx::IsNotNull( buffer )) {
HXLINE( 176)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 176)							int in_byteOffset = 0;
HXDLIN( 176)							if ((in_byteOffset < 0)) {
HXLINE( 176)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 176)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 176)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN( 176)							int bufferByteLength = buffer->length;
HXDLIN( 176)							int elementSize = _this->bytesPerElement;
HXDLIN( 176)							int newByteLength = bufferByteLength;
HXDLIN( 176)							if (::hx::IsNull( len )) {
HXLINE( 176)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 176)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 176)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 176)								if ((newByteLength < 0)) {
HXLINE( 176)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE( 176)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 176)								int newRange = (in_byteOffset + newByteLength);
HXDLIN( 176)								if ((newRange > bufferByteLength)) {
HXLINE( 176)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN( 176)							_this->buffer = buffer;
HXDLIN( 176)							_this->byteOffset = in_byteOffset;
HXDLIN( 176)							_this->byteLength = newByteLength;
HXDLIN( 176)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 176)							this1 = _this;
            						}
            						else {
HXLINE( 176)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN( 176)		audioBuffer->data = this1;
HXLINE( 178)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_audio_load_file(::hx::DynamicPtr(path),::hx::DynamicPtr(audioBuffer))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFile,return )

 ::lime::media::AudioBuffer AudioBuffer_obj::fromFiles(::Array< ::String > paths){
            	HX_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_200_fromFiles)
HXLINE( 212)		 ::lime::media::AudioBuffer buffer = null();
HXLINE( 214)		{
HXLINE( 214)			int _g = 0;
HXDLIN( 214)			while((_g < paths->length)){
HXLINE( 214)				::String path = paths->__get(_g);
HXDLIN( 214)				_g = (_g + 1);
HXLINE( 216)				buffer = ::lime::media::AudioBuffer_obj::fromFile(path);
HXLINE( 217)				if (::hx::IsNotNull( buffer )) {
HXLINE( 217)					goto _hx_goto_3;
            				}
            			}
            			_hx_goto_3:;
            		}
HXLINE( 220)		return buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,fromFiles,return )

 ::lime::app::Future AudioBuffer_obj::loadFromFile(::String path){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::media::AudioBuffer buffer){
            			HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_298_loadFromFile)
HXLINE( 298)			if (::hx::IsNotNull( buffer )) {
HXLINE( 300)				return ::lime::app::Future_obj::withValue(buffer);
            			}
            			else {
HXLINE( 304)				return ::lime::app::Future_obj::withError(HX_("",00,00,00,00));
            			}
HXLINE( 298)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_247_loadFromFile)
HXLINE( 295)		 ::lime::net::_HTTPRequest_lime_media_AudioBuffer request =  ::lime::net::_HTTPRequest_lime_media_AudioBuffer_obj::__alloc( HX_CTX ,null());
HXLINE( 296)		return request->load(path)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,loadFromFile,return )

 ::lime::app::Future AudioBuffer_obj::loadFromFiles(::Array< ::String > paths){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,paths) HXARGC(0)
            		 ::lime::media::AudioBuffer _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_336_loadFromFiles)
HXLINE( 336)			return ::lime::media::AudioBuffer_obj::fromFiles(paths);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_GC_STACKFRAME(&_hx_pos_3ac99a7056b92cf3_311_loadFromFiles)
HXLINE( 312)		 ::lime::app::Promise_lime_media_AudioBuffer promise =  ::lime::app::Promise_lime_media_AudioBuffer_obj::__alloc( HX_CTX );
HXLINE( 336)		promise->completeWith( ::lime::app::Future_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(paths)),true));
HXLINE( 339)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioBuffer_obj,loadFromFiles,return )


AudioBuffer_obj::AudioBuffer_obj()
{
}

void AudioBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioBuffer);
	HX_MARK_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_MEMBER_NAME(_hx___srcBuffer,"__srcBuffer");
	HX_MARK_MEMBER_NAME(_hx___srcVorbisFile,"__srcVorbisFile");
	HX_MARK_END_CLASS();
}

void AudioBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerSample,"bitsPerSample");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
	HX_VISIT_MEMBER_NAME(_hx___srcBuffer,"__srcBuffer");
	HX_VISIT_MEMBER_NAME(_hx___srcVorbisFile,"__srcVorbisFile");
}

::hx::Val AudioBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return ::hx::Val( channels ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return ::hx::Val( sampleRate ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__srcBuffer") ) { return ::hx::Val( _hx___srcBuffer ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { return ::hx::Val( bitsPerSample ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcVorbisFile") ) { return ::hx::Val( _hx___srcVorbisFile ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AudioBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromFiles") ) { outValue = fromFiles_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromFiles") ) { outValue = loadFromFiles_dyn(); return true; }
	}
	return false;
}

::hx::Val AudioBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__srcBuffer") ) { _hx___srcBuffer=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bitsPerSample") ) { bitsPerSample=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcVorbisFile") ) { _hx___srcVorbisFile=inValue.Cast<  ::lime::media::vorbis::VorbisFile >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitsPerSample",01,01,36,c4));
	outFields->push(HX_("channels",50,aa,ee,6a));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("sampleRate",2a,3c,4c,67));
	outFields->push(HX_("__srcBuffer",e4,63,0b,83));
	outFields->push(HX_("__srcVorbisFile",53,8c,ee,ce));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AudioBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AudioBuffer_obj,bitsPerSample),HX_("bitsPerSample",01,01,36,c4)},
	{::hx::fsInt,(int)offsetof(AudioBuffer_obj,channels),HX_("channels",50,aa,ee,6a)},
	{::hx::fsObject /*  ::lime::utils::ArrayBufferView */ ,(int)offsetof(AudioBuffer_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsInt,(int)offsetof(AudioBuffer_obj,sampleRate),HX_("sampleRate",2a,3c,4c,67)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AudioBuffer_obj,_hx___srcBuffer),HX_("__srcBuffer",e4,63,0b,83)},
	{::hx::fsObject /*  ::lime::media::vorbis::VorbisFile */ ,(int)offsetof(AudioBuffer_obj,_hx___srcVorbisFile),HX_("__srcVorbisFile",53,8c,ee,ce)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AudioBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String AudioBuffer_obj_sMemberFields[] = {
	HX_("bitsPerSample",01,01,36,c4),
	HX_("channels",50,aa,ee,6a),
	HX_("data",2a,56,63,42),
	HX_("sampleRate",2a,3c,4c,67),
	HX_("__srcBuffer",e4,63,0b,83),
	HX_("__srcVorbisFile",53,8c,ee,ce),
	::String(null()) };

::hx::Class AudioBuffer_obj::__mClass;

static ::String AudioBuffer_obj_sStaticFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromFile",06,9d,87,a1),
	HX_("fromFiles",ad,c8,21,b5),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("loadFromFiles",a7,99,87,37),
	::String(null())
};

void AudioBuffer_obj::__register()
{
	AudioBuffer_obj _hx_dummy;
	AudioBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.AudioBuffer",33,70,4b,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AudioBuffer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AudioBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AudioBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
