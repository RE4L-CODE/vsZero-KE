// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_polymod_Framework
#include <polymod/Framework.h>
#endif
#ifndef INCLUDED_polymod_ModMetadata
#include <polymod/ModMetadata.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_PolymodError
#include <polymod/PolymodError.h>
#endif
#ifndef INCLUDED_polymod_PolymodErrorType
#include <polymod/PolymodErrorType.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssets
#include <polymod/backends/PolymodAssets.h>
#endif
#ifndef INCLUDED_polymod_format_ParseRules
#include <polymod/format/ParseRules.h>
#endif
#ifndef INCLUDED_polymod_fs_IFileSystem
#include <polymod/fs/IFileSystem.h>
#endif
#ifndef INCLUDED_polymod_fs_SysFileSystem
#include <polymod/fs/SysFileSystem.h>
#endif
#ifndef INCLUDED_polymod_util_SemanticVersion
#include <polymod/util/SemanticVersion.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_131_init,"polymod.Polymod","init",0x00ecc620,"polymod.Polymod.init","polymod/Polymod.hx",131,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_275_getDefaultIgnoreList,"polymod.Polymod","getDefaultIgnoreList",0xc5278c4b,"polymod.Polymod.getDefaultIgnoreList","polymod/Polymod.hx",275,0xd80c6d61)
static const ::String _hx_array_data_e42eaf5e_4[] = {
	HX_("_polymod_meta.json",69,fc,10,06),HX_("_polymod_icon.png",3c,6c,4c,14),HX_("_polymod_pack.txt",63,9d,09,cb),HX_("ASSET_LICENSE.txt",b4,72,9f,4f),HX_("CODE_LICENSE.txt",91,61,d1,6f),HX_("LICENSE.txt",e3,aa,9a,6b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_293_scan,"polymod.Polymod","scan",0x0780888d,"polymod.Polymod.scan","polymod/Polymod.hx",293,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_386_error,"polymod.Polymod","error",0x8351eeb8,"polymod.Polymod.error","polymod/Polymod.hx",386,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_394_warning,"polymod.Polymod","warning",0x8e76994c,"polymod.Polymod.warning","polymod/Polymod.hx",394,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_402_notice,"polymod.Polymod","notice",0x44af4728,"polymod.Polymod.notice","polymod/Polymod.hx",402,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_414_listModFiles,"polymod.Polymod","listModFiles",0x718ff9e3,"polymod.Polymod.listModFiles","polymod/Polymod.hx",414,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_424_initModPack,"polymod.Polymod","initModPack",0x0bf5087b,"polymod.Polymod.initModPack","polymod/Polymod.hx",424,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_439_getModPack,"polymod.Polymod","getModPack",0xa5a25fd5,"polymod.Polymod.getModPack","polymod/Polymod.hx",439,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_122_boot,"polymod.Polymod","boot",0xfc4d0f42,"polymod.Polymod.boot","polymod/Polymod.hx",122,0xd80c6d61)
HX_LOCAL_STACK_FRAME(_hx_pos_321500f50b2e3bfa_123_boot,"polymod.Polymod","boot",0xfc4d0f42,"polymod.Polymod.boot","polymod/Polymod.hx",123,0xd80c6d61)
namespace polymod{

void Polymod_obj::__construct() { }

Dynamic Polymod_obj::__CreateEmpty() { return new Polymod_obj; }

void *Polymod_obj::_hx_vtable = 0;

Dynamic Polymod_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Polymod_obj > _hx_result = new Polymod_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Polymod_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4937d120;
}

 ::Dynamic Polymod_obj::onError;

 ::polymod::backends::PolymodAssetLibrary Polymod_obj::library;

::Array< ::Dynamic> Polymod_obj::init( ::Dynamic params){
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_131_init)
HXLINE( 132)		::polymod::Polymod_obj::onError = params->__Field(HX_("errorCallback",ad,29,bf,d7),::hx::paccDynamic);
HXLINE( 134)		::String modRoot = ( (::String)(params->__Field(HX_("modRoot",04,ba,da,e0),::hx::paccDynamic)) );
HXLINE( 135)		::Array< ::String > dirs = ( (::Array< ::String >)(params->__Field(HX_("dirs",86,66,69,42),::hx::paccDynamic)) );
HXLINE( 136)		 ::polymod::util::SemanticVersion apiVersion = null();
HXLINE( 137)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 139)			::String apiStr = ( (::String)(params->__Field(HX_("apiVersion",9e,39,c9,e5),::hx::paccDynamic)) );
HXLINE( 140)			bool _hx_tmp;
HXDLIN( 140)			if (::hx::IsNotNull( apiStr )) {
HXLINE( 140)				_hx_tmp = (apiStr == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 140)				_hx_tmp = true;
            			}
HXDLIN( 140)			if (_hx_tmp) {
HXLINE( 142)				apiStr = HX_("*.*.*",a2,34,5c,4d);
            			}
HXLINE( 144)			apiVersion = ::polymod::util::SemanticVersion_obj::fromString(apiStr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(   1)				{
HXLINE(   1)					null();
            				}
HXDLIN(   1)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 148)				::polymod::Polymod_obj::error(HX_("parse_api_version",e7,a5,59,ab),((HX_("Error parsing api version: (",d8,67,2c,ab) + ::Std_obj::string(msg)) + HX_(")",29,00,00,00)),HX_("init",10,3b,bb,45));
HXLINE( 149)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 152)		::Array< ::Dynamic> modMeta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 153)		::Array< ::Dynamic> modVers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 155)		::Dynamic fileSystem;
HXDLIN( 155)		if (::hx::IsNotNull( params->__Field(HX_("customFilesystem",7c,dd,ec,23),::hx::paccDynamic) )) {
HXLINE( 155)			fileSystem = ::Type_obj::createInstance(params->__Field(HX_("customFilesystem",7c,dd,ec,23),::hx::paccDynamic),::cpp::VirtualArray_obj::__new(0));
            		}
            		else {
HXLINE( 155)			fileSystem =  ::polymod::fs::SysFileSystem_obj::__alloc( HX_CTX ,( (::String)(params->__Field(HX_("modRoot",04,ba,da,e0),::hx::paccDynamic)) ));
            		}
HXLINE( 168)		if (::hx::IsNotNull( params->__Field(HX_("modVersions",3d,b3,b4,55),::hx::paccDynamic) )) {
HXLINE( 170)			int _g = 0;
HXDLIN( 170)			::Array< ::String > _g1 = ( (::Array< ::String >)(params->__Field(HX_("modVersions",3d,b3,b4,55),::hx::paccDynamic)) );
HXDLIN( 170)			while((_g < _g1->length)){
HXLINE( 170)				::String str = _g1->__get(_g);
HXDLIN( 170)				_g = (_g + 1);
HXLINE( 172)				 ::polymod::util::SemanticVersion semVer = null();
HXLINE( 173)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 175)					semVer = ::polymod::util::SemanticVersion_obj::fromString(str);
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(   1)						{
HXLINE(   1)							null();
            						}
HXDLIN(   1)						 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 178)						{
HXLINE( 179)							::polymod::Polymod_obj::error(HX_("param_mod_version",69,37,99,54),(HX_("There was an error with one of the mod version patterns you provided: ",a5,c6,14,8b) + ::Std_obj::string(msg)),HX_("init",10,3b,bb,45));
HXLINE( 180)							semVer = ::polymod::util::SemanticVersion_obj::fromString(HX_("*.*.*",a2,34,5c,4d));
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 182)				modVers->push(semVer);
            			}
            		}
HXLINE( 186)		{
HXLINE( 186)			int _g = 0;
HXDLIN( 186)			int _g1 = dirs->length;
HXDLIN( 186)			while((_g < _g1)){
HXLINE( 186)				_g = (_g + 1);
HXDLIN( 186)				int i = (_g - 1);
HXLINE( 188)				if (::hx::IsNotNull( dirs->__get(i) )) {
HXLINE( 190)					::String origDir = dirs->__get(i);
HXLINE( 191)					dirs[i] = ::polymod::util::Util_obj::pathJoin(modRoot,dirs->__get(i));
HXLINE( 192)					 ::polymod::ModMetadata meta = ::polymod::fs::IFileSystem_obj::getMetadata(fileSystem,dirs->__get(i));
HXLINE( 194)					if (::hx::IsNotNull( meta )) {
HXLINE( 196)						meta->id = origDir;
HXLINE( 197)						int apiScore = meta->apiVersion->checkCompatibility(apiVersion);
HXLINE( 198)						if ((apiScore < 3)) {
HXLINE( 201)							::String _hx_tmp = ((((HX_("Mod \"",24,57,85,9f) + origDir) + HX_("\" was built for incompatible API version ",c7,84,bf,95)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 200)							::polymod::Polymod_obj::error(HX_("version_conflict_api",b4,79,7a,d1),(_hx_tmp + ( (::String)(params->__Field(HX_("apiVersion",9e,39,c9,e5),::hx::paccDynamic)) ).toString()),HX_("init",10,3b,bb,45));
            						}
            						else {
HXLINE( 211)							if ((apiVersion->major == 0)) {
HXLINE( 214)								if ((apiVersion->minor != meta->apiVersion->minor)) {
HXLINE( 217)									::String _hx_tmp = (((((HX_("Modding API is in pre-release, some things might have changed!\n",23,df,36,3a) + HX_("Mod \"",24,57,85,9f)) + origDir) + HX_("\" was built for API version ",5c,9c,7b,4e)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 216)									::polymod::Polymod_obj::warning(HX_("version_prerelease_api",26,70,a7,43),(_hx_tmp + apiVersion->toString()),HX_("init",10,3b,bb,45));
            								}
            							}
            						}
HXLINE( 228)						 ::polymod::util::SemanticVersion modVer;
HXDLIN( 228)						if ((modVers->length > i)) {
HXLINE( 228)							modVer = modVers->__get(i).StaticCast<  ::polymod::util::SemanticVersion >();
            						}
            						else {
HXLINE( 228)							modVer = null();
            						}
HXLINE( 229)						if (::hx::IsNotNull( modVer )) {
HXLINE( 231)							int score = modVer->checkCompatibility(meta->modVersion);
HXLINE( 232)							if ((score < 3)) {
HXLINE( 235)								::String _hx_tmp = ((HX_("Mod pack wants version ",0e,47,1b,3b) + modVer->toString()) + HX_(" of mod(",af,f2,b6,ab));
HXDLIN( 235)								::String _hx_tmp1 = ((_hx_tmp + meta->id) + HX_("), found incompatible version ",74,75,29,24));
HXLINE( 234)								::polymod::Polymod_obj::error(HX_("version_conflict_mod",dc,93,83,d1),((_hx_tmp1 + meta->modVersion->toString()) + HX_(" instead",62,18,ec,b3)),HX_("init",10,3b,bb,45));
            							}
            						}
HXLINE( 245)						modMeta->push(meta);
            					}
            				}
            			}
            		}
HXLINE( 250)		::polymod::Polymod_obj::library = ::polymod::backends::PolymodAssets_obj::init( ::Dynamic(::hx::Anon_obj::Create(8)
            			->setFixed(0,HX_("customBackend",63,24,96,a5), ::Dynamic(params->__Field(HX_("customBackend",63,24,96,a5),::hx::paccDynamic)))
            			->setFixed(1,HX_("fileSystem",8b,de,66,d3),fileSystem)
            			->setFixed(2,HX_("parseRules",c4,aa,37,1b), ::Dynamic(params->__Field(HX_("parseRules",c4,aa,37,1b),::hx::paccDynamic)))
            			->setFixed(3,HX_("extensionMap",5d,28,7a,23), ::Dynamic(params->__Field(HX_("extensionMap",5d,28,7a,23),::hx::paccDynamic)))
            			->setFixed(4,HX_("frameworkParams",64,76,eb,26), ::Dynamic(params->__Field(HX_("frameworkParams",64,76,eb,26),::hx::paccDynamic)))
            			->setFixed(5,HX_("dirs",86,66,69,42),dirs)
            			->setFixed(6,HX_("framework",7e,94,a4,51), ::Dynamic(params->__Field(HX_("framework",7e,94,a4,51),::hx::paccDynamic)))
            			->setFixed(7,HX_("ignoredFiles",05,36,92,57), ::Dynamic(params->__Field(HX_("ignoredFiles",05,36,92,57),::hx::paccDynamic)))));
HXLINE( 261)		if (::hx::IsNull( ::polymod::Polymod_obj::library )) {
HXLINE( 262)			return null();
            		}
HXLINE( 265)		if (::polymod::backends::PolymodAssets_obj::exists(HX_("_polymod_pack.txt",63,9d,09,cb))) {
HXLINE( 267)			::polymod::Polymod_obj::initModPack(params);
            		}
HXLINE( 270)		return modMeta;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,init,return )

::Array< ::String > Polymod_obj::getDefaultIgnoreList(){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_275_getDefaultIgnoreList)
HXDLIN( 275)		return ::Array_obj< ::String >::fromData( _hx_array_data_e42eaf5e_4,6);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Polymod_obj,getDefaultIgnoreList,return )

::Array< ::Dynamic> Polymod_obj::scan(::String modRoot,::String __o_apiVersionStr, ::Dynamic errorCallback,::Dynamic fileSystem){
            		::String apiVersionStr = __o_apiVersionStr;
            		if (::hx::IsNull(__o_apiVersionStr)) apiVersionStr = HX_("*.*.*",a2,34,5c,4d);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_293_scan)
HXLINE( 294)		::polymod::Polymod_obj::onError = errorCallback;
HXLINE( 295)		 ::polymod::util::SemanticVersion apiVersion = null();
HXLINE( 296)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 298)			apiVersion = ::polymod::util::SemanticVersion_obj::fromString(apiVersionStr);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(   1)				{
HXLINE(   1)					null();
            				}
HXDLIN(   1)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 302)				::polymod::Polymod_obj::error(HX_("parse_api_version",e7,a5,59,ab),((HX_("Error parsing api version: (",d8,67,2c,ab) + ::Std_obj::string(msg)) + HX_(")",29,00,00,00)),HX_("scan",7d,fd,4e,4c));
HXLINE( 303)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 306)		if (::hx::IsNull( fileSystem )) {
HXLINE( 309)			fileSystem =  ::polymod::fs::SysFileSystem_obj::__alloc( HX_CTX ,modRoot);
            		}
HXLINE( 315)		::Array< ::Dynamic> modMeta = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 317)		bool _hx_tmp;
HXDLIN( 317)		if (::polymod::fs::IFileSystem_obj::exists(fileSystem,modRoot)) {
HXLINE( 317)			_hx_tmp = !(::polymod::fs::IFileSystem_obj::isDirectory(fileSystem,modRoot));
            		}
            		else {
HXLINE( 317)			_hx_tmp = true;
            		}
HXDLIN( 317)		if (_hx_tmp) {
HXLINE( 319)			return modMeta;
            		}
HXLINE( 321)		::Array< ::String > dirs = ::polymod::fs::IFileSystem_obj::readDirectory(fileSystem,modRoot);
HXLINE( 322)		int l = dirs->length;
HXLINE( 323)		{
HXLINE( 323)			int _g = 0;
HXDLIN( 323)			int _g1 = l;
HXDLIN( 323)			while((_g < _g1)){
HXLINE( 323)				_g = (_g + 1);
HXDLIN( 323)				int i = (_g - 1);
HXLINE( 325)				int j = ((l - i) - 1);
HXLINE( 326)				::String dir = dirs->__get(j);
HXLINE( 327)				::String testDir = ((modRoot + HX_("/",2f,00,00,00)) + dir);
HXLINE( 328)				bool _hx_tmp;
HXDLIN( 328)				if (::polymod::fs::IFileSystem_obj::isDirectory(fileSystem,testDir)) {
HXLINE( 328)					_hx_tmp = !(::polymod::fs::IFileSystem_obj::exists(fileSystem,testDir));
            				}
            				else {
HXLINE( 328)					_hx_tmp = true;
            				}
HXDLIN( 328)				if (_hx_tmp) {
HXLINE( 330)					dirs->removeRange(j,1);
            				}
            			}
            		}
HXLINE( 334)		{
HXLINE( 334)			int _g2 = 0;
HXDLIN( 334)			int _g3 = dirs->length;
HXDLIN( 334)			while((_g2 < _g3)){
HXLINE( 334)				_g2 = (_g2 + 1);
HXDLIN( 334)				int i = (_g2 - 1);
HXLINE( 336)				if (::hx::IsNotNull( dirs->__get(i) )) {
HXLINE( 338)					::String origDir = dirs->__get(i);
HXLINE( 339)					dirs[i] = ((modRoot + HX_("/",2f,00,00,00)) + dirs->__get(i));
HXLINE( 340)					 ::polymod::ModMetadata meta = ::polymod::fs::IFileSystem_obj::getMetadata(fileSystem,dirs->__get(i));
HXLINE( 342)					if (::hx::IsNotNull( meta )) {
HXLINE( 344)						meta->id = origDir;
HXLINE( 345)						int apiScore = meta->apiVersion->checkCompatibility(apiVersion);
HXLINE( 346)						if ((apiScore < 3)) {
HXLINE( 349)							::String _hx_tmp = ((((HX_("Mod \"",24,57,85,9f) + origDir) + HX_("\" was built for incompatible API version ",c7,84,bf,95)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 348)							::polymod::Polymod_obj::error(HX_("version_conflict_api",b4,79,7a,d1),(_hx_tmp + apiVersion->toString()),HX_("scan",7d,fd,4e,4c));
            						}
            						else {
HXLINE( 359)							if ((apiVersion->major == 0)) {
HXLINE( 362)								if ((apiVersion->minor != meta->apiVersion->minor)) {
HXLINE( 365)									::String _hx_tmp = (((((HX_("Modding API is in pre-release, some things might have changed!\n",23,df,36,3a) + HX_("Mod \"",24,57,85,9f)) + origDir) + HX_("\" was built for API version ",5c,9c,7b,4e)) + meta->apiVersion->toString()) + HX_(", current API version is ",6d,fd,69,3f));
HXLINE( 364)									::polymod::Polymod_obj::warning(HX_("version_prerelease_api",26,70,a7,43),(_hx_tmp + apiVersion->toString()),HX_("scan",7d,fd,4e,4c));
            								}
            							}
            						}
HXLINE( 376)						modMeta->push(meta);
            					}
            				}
            			}
            		}
HXLINE( 381)		return modMeta;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Polymod_obj,scan,return )

void Polymod_obj::error(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_386_error)
HXDLIN( 386)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 388)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::ERROR_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,error,(void))

void Polymod_obj::warning(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_394_warning)
HXDLIN( 394)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 396)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::WARNING_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,warning,(void))

void Polymod_obj::notice(::String code,::String message,::String __o_origin){
            		::String origin = __o_origin;
            		if (::hx::IsNull(__o_origin)) origin = HX_("unknown",8a,23,7b,e1);
            	HX_GC_STACKFRAME(&_hx_pos_321500f50b2e3bfa_402_notice)
HXDLIN( 402)		if (::hx::IsNotNull( ::polymod::Polymod_obj::onError )) {
HXLINE( 404)			::polymod::Polymod_obj::onError( ::polymod::PolymodError_obj::__alloc( HX_CTX ,::polymod::PolymodErrorType_obj::NOTICE_dyn(),code,message,origin));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polymod_obj,notice,(void))

::Array< ::String > Polymod_obj::listModFiles(::String type){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_414_listModFiles)
HXLINE( 415)		if (::hx::IsNotNull( ::polymod::Polymod_obj::library )) {
HXLINE( 417)			return ::polymod::Polymod_obj::library->listModFiles(type);
            		}
HXLINE( 419)		return ::Array_obj< ::String >::__new(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,listModFiles,return )

void Polymod_obj::initModPack( ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_424_initModPack)
HXLINE( 425)		::String polymodpack = ::polymod::backends::PolymodAssets_obj::getText(HX_("_polymod_pack.txt",63,9d,09,cb));
HXLINE( 426)		if (::hx::IsNotNull( polymodpack )) {
HXLINE( 428)			 ::Dynamic data = ::polymod::Polymod_obj::getModPack(polymodpack);
HXLINE( 429)			::Array< ::String > mods = ( (::Array< ::String >)(data->__Field(HX_("mods",71,d3,60,48),::hx::paccDynamic)) );
HXLINE( 430)			::Array< ::String > vers = ( (::Array< ::String >)(data->__Field(HX_("versions",5b,4e,b8,d6),::hx::paccDynamic)) );
HXLINE( 432)			params->__SetField(HX_("dirs",86,66,69,42),mods,::hx::paccDynamic);
HXLINE( 433)			params->__SetField(HX_("modVersions",3d,b3,b4,55),vers,::hx::paccDynamic);
HXLINE( 434)			::polymod::Polymod_obj::init(params);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,initModPack,(void))

 ::Dynamic Polymod_obj::getModPack(::String text){
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_439_getModPack)
HXLINE( 440)		if (::hx::IsNotNull( text )) {
HXLINE( 442)			::Array< ::String > mods = text.split(HX_(",",2c,00,00,00));
HXLINE( 443)			bool _hx_tmp;
HXDLIN( 443)			if (::hx::IsNotNull( mods )) {
HXLINE( 443)				_hx_tmp = (mods->length == 0);
            			}
            			else {
HXLINE( 443)				_hx_tmp = true;
            			}
HXDLIN( 443)			if (_hx_tmp) {
HXLINE( 445)				return null();
            			}
HXLINE( 447)			::Array< ::String > vers = ::Array_obj< ::String >::__new(0);
HXLINE( 448)			{
HXLINE( 448)				int _g = 0;
HXDLIN( 448)				int _g1 = mods->length;
HXDLIN( 448)				while((_g < _g1)){
HXLINE( 448)					_g = (_g + 1);
HXDLIN( 448)					int i = (_g - 1);
HXLINE( 450)					vers[i] = HX_("*.*.*",a2,34,5c,4d);
HXLINE( 451)					if ((mods->__get(i).indexOf(HX_(":",3a,00,00,00),null()) != -1)) {
HXLINE( 453)						::Array< ::String > arr = mods->__get(i).split(HX_(":",3a,00,00,00));
HXLINE( 454)						bool _hx_tmp;
HXDLIN( 454)						if (::hx::IsNotNull( arr )) {
HXLINE( 454)							_hx_tmp = (arr->length == 2);
            						}
            						else {
HXLINE( 454)							_hx_tmp = false;
            						}
HXDLIN( 454)						if (_hx_tmp) {
HXLINE( 456)							mods[i] = arr->__get(0);
HXLINE( 457)							vers[i] = arr->__get(1);
            						}
            					}
            				}
            			}
HXLINE( 461)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("versions",5b,4e,b8,d6),vers)
            				->setFixed(1,HX_("mods",71,d3,60,48),mods));
            		}
HXLINE( 463)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polymod_obj,getModPack,return )


Polymod_obj::Polymod_obj()
{
}

bool Polymod_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scan") ) { outValue = scan_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"notice") ) { outValue = notice_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { outValue = ( onError ); return true; }
		if (HX_FIELD_EQ(inName,"library") ) { outValue = ( library ); return true; }
		if (HX_FIELD_EQ(inName,"warning") ) { outValue = warning_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getModPack") ) { outValue = getModPack_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initModPack") ) { outValue = initModPack_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"listModFiles") ) { outValue = listModFiles_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getDefaultIgnoreList") ) { outValue = getDefaultIgnoreList_dyn(); return true; }
	}
	return false;
}

bool Polymod_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { onError=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"library") ) { library=ioValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Polymod_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Polymod_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Polymod_obj::onError,HX_("onError",29,6a,67,09)},
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(void *) &Polymod_obj::library,HX_("library",fb,26,70,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Polymod_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polymod_obj::onError,"onError");
	HX_MARK_MEMBER_NAME(Polymod_obj::library,"library");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Polymod_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polymod_obj::onError,"onError");
	HX_VISIT_MEMBER_NAME(Polymod_obj::library,"library");
};

#endif

::hx::Class Polymod_obj::__mClass;

static ::String Polymod_obj_sStaticFields[] = {
	HX_("onError",29,6a,67,09),
	HX_("library",fb,26,70,3f),
	HX_("init",10,3b,bb,45),
	HX_("getDefaultIgnoreList",3b,e1,b2,45),
	HX_("scan",7d,fd,4e,4c),
	HX_("error",c8,cb,29,73),
	HX_("warning",5c,da,cb,09),
	HX_("notice",18,d8,b8,31),
	HX_("listModFiles",d3,de,44,5a),
	HX_("initModPack",8b,11,e8,97),
	HX_("getModPack",c5,28,df,2e),
	::String(null())
};

void Polymod_obj::__register()
{
	Polymod_obj _hx_dummy;
	Polymod_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.Polymod",5e,af,2e,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polymod_obj::__GetStatic;
	__mClass->mSetStaticField = &Polymod_obj::__SetStatic;
	__mClass->mMarkFunc = Polymod_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Polymod_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Polymod_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Polymod_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Polymod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Polymod_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Polymod_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_122_boot)
HXDLIN( 122)		onError = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_321500f50b2e3bfa_123_boot)
HXDLIN( 123)		library = null();
            	}
}

} // end namespace polymod
