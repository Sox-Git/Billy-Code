#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_AGALConverter
#include <openfl/display3D/_internal/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_RegisterMap
#include <openfl/display3D/_internal/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_DestRegister
#include <openfl/display3D/_internal/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_ProgramType
#include <openfl/display3D/_internal/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_RegisterMapEntry
#include <openfl/display3D/_internal/_AGALConverter/RegisterMapEntry.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_RegisterUsage
#include <openfl/display3D/_internal/_AGALConverter/RegisterUsage.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SamplerRegister
#include <openfl/display3D/_internal/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SourceRegister
#include <openfl/display3D/_internal/_AGALConverter/SourceRegister.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_599_new,"openfl.display3D._internal.RegisterMap","new",0xf04350e0,"openfl.display3D._internal.RegisterMap.new","openfl/display3D/_internal/AGALConverter.hx",599,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_607_add,"openfl.display3D._internal.RegisterMap","add",0xf03972a1,"openfl.display3D._internal.RegisterMap.add","openfl/display3D/_internal/AGALConverter.hx",607,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_631_addDR,"openfl.display3D._internal.RegisterMap","addDR",0x8774586f,"openfl.display3D._internal.RegisterMap.addDR","openfl/display3D/_internal/AGALConverter.hx",631,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_636_addSaR,"openfl.display3D._internal.RegisterMap","addSaR",0xfe6477e3,"openfl.display3D._internal.RegisterMap.addSaR","openfl/display3D/_internal/AGALConverter.hx",636,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_640_addSR,"openfl.display3D._internal.RegisterMap","addSR",0x87746580,"openfl.display3D._internal.RegisterMap.addSR","openfl/display3D/_internal/AGALConverter.hx",640,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_652_getRegisterUsage,"openfl.display3D._internal.RegisterMap","getRegisterUsage",0x90c2f8c8,"openfl.display3D._internal.RegisterMap.getRegisterUsage","openfl/display3D/_internal/AGALConverter.hx",652,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_662_getUsage,"openfl.display3D._internal.RegisterMap","getUsage",0xd3951c2b,"openfl.display3D._internal.RegisterMap.getUsage","openfl/display3D/_internal/AGALConverter.hx",662,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_678_toGLSL,"openfl.display3D._internal.RegisterMap","toGLSL",0xd9642879,"openfl.display3D._internal.RegisterMap.toGLSL","openfl/display3D/_internal/AGALConverter.hx",678,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_685_toGLSL,"openfl.display3D._internal.RegisterMap","toGLSL",0xd9642879,"openfl.display3D._internal.RegisterMap.toGLSL","openfl/display3D/_internal/AGALConverter.hx",685,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_675_toGLSL,"openfl.display3D._internal.RegisterMap","toGLSL",0xd9642879,"openfl.display3D._internal.RegisterMap.toGLSL","openfl/display3D/_internal/AGALConverter.hx",675,0x4de1651d)
static const ::String _hx_array_data_cad9a0ee_13[] = {
	HX_("attribute ",84,a8,71,97),
};
static const ::String _hx_array_data_cad9a0ee_14[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_15[] = {
	HX_("\t",09,00,00,00),
};
static const ::String _hx_array_data_cad9a0ee_16[] = {
	HX_("varying ",b0,25,c9,a4),
};
static const ::String _hx_array_data_cad9a0ee_17[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_18[] = {
	HX_("vec4 ",c0,4c,56,34),
};
static const ::String _hx_array_data_cad9a0ee_19[] = {
	HX_("mat4 ",0c,20,23,03),
};
static const ::String _hx_array_data_cad9a0ee_20[] = {
	HX_("sampler2D ",06,3c,4f,7c),
};
static const ::String _hx_array_data_cad9a0ee_21[] = {
	HX_("samplerCube ",63,87,00,86),
};
static const ::String _hx_array_data_cad9a0ee_22[] = {
	HX_("vec4 ",c0,4c,56,34),
};
static const ::String _hx_array_data_cad9a0ee_23[] = {
	HX_("sampler2D ",06,3c,4f,7c),
};
static const ::String _hx_array_data_cad9a0ee_24[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_25[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_26[] = {
	HX_("sampler2D ",06,3c,4f,7c),
};
static const ::String _hx_array_data_cad9a0ee_27[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_28[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_29[] = {
	HX_("bool ",b6,20,f8,b6),
};
static const ::String _hx_array_data_cad9a0ee_30[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_31[] = {
	HX_("samplerCube ",63,87,00,86),
};
static const ::String _hx_array_data_cad9a0ee_32[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_33[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_34[] = {
	HX_("samplerCube ",63,87,00,86),
};
static const ::String _hx_array_data_cad9a0ee_35[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_36[] = {
	HX_("uniform ",6c,cc,54,02),
};
static const ::String _hx_array_data_cad9a0ee_37[] = {
	HX_("bool ",b6,20,f8,b6),
};
static const ::String _hx_array_data_cad9a0ee_38[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_39[] = {
	HX_(";\n",6f,33,00,00),
};
static const ::String _hx_array_data_cad9a0ee_40[] = {
	HX_(";\n",6f,33,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b37c0bf690c3fac4_597_boot,"openfl.display3D._internal.RegisterMap","boot",0x42bc73b2,"openfl.display3D._internal.RegisterMap.boot","openfl/display3D/_internal/AGALConverter.hx",597,0x4de1651d)
namespace openfl{
namespace display3D{
namespace _internal{

void RegisterMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_599_new)
HXDLIN( 599)		this->mEntries = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic RegisterMap_obj::__CreateEmpty() { return new RegisterMap_obj; }

void *RegisterMap_obj::_hx_vtable = 0;

Dynamic RegisterMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RegisterMap_obj > _hx_result = new RegisterMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RegisterMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x326c9b3c;
}

void RegisterMap_obj::add(int type,::String name,int number, ::openfl::display3D::_internal::_AGALConverter::RegisterUsage usage){
            	HX_GC_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_607_add)
HXLINE( 608)		{
HXLINE( 608)			int _g = 0;
HXDLIN( 608)			::Array< ::Dynamic> _g1 = this->mEntries;
HXDLIN( 608)			while((_g < _g1->length)){
HXLINE( 608)				 ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry entry = _g1->__get(_g).StaticCast<  ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry >();
HXDLIN( 608)				_g = (_g + 1);
HXLINE( 610)				bool _hx_tmp;
HXDLIN( 610)				bool _hx_tmp1;
HXDLIN( 610)				if ((entry->type == type)) {
HXLINE( 610)					_hx_tmp1 = (entry->name == name);
            				}
            				else {
HXLINE( 610)					_hx_tmp1 = false;
            				}
HXDLIN( 610)				if (_hx_tmp1) {
HXLINE( 610)					_hx_tmp = (entry->number == number);
            				}
            				else {
HXLINE( 610)					_hx_tmp = false;
            				}
HXDLIN( 610)				if (_hx_tmp) {
HXLINE( 612)					if (::hx::IsPointerNotEq( entry->usage,usage )) {
HXLINE( 614)						HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Cannot use register in multiple ways yet (mat4/vec4)",5e,30,e0,74)));
            					}
HXLINE( 617)					return;
            				}
            			}
            		}
HXLINE( 621)		 ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry entry =  ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry_obj::__alloc( HX_CTX );
HXLINE( 622)		entry->type = type;
HXLINE( 623)		entry->name = name;
HXLINE( 624)		entry->number = number;
HXLINE( 625)		entry->usage = usage;
HXLINE( 626)		this->mEntries->push(entry);
            	}


HX_DEFINE_DYNAMIC_FUNC4(RegisterMap_obj,add,(void))

void RegisterMap_obj::addDR( ::openfl::display3D::_internal::_AGALConverter::DestRegister dr, ::openfl::display3D::_internal::_AGALConverter::RegisterUsage usage){
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_631_addDR)
HXDLIN( 631)		int dr1 = dr->type;
HXDLIN( 631)		::String _hx_tmp = dr->toGLSL(false);
HXDLIN( 631)		this->add(dr1,_hx_tmp,dr->n,usage);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addDR,(void))

void RegisterMap_obj::addSaR( ::openfl::display3D::_internal::_AGALConverter::SamplerRegister sr, ::openfl::display3D::_internal::_AGALConverter::RegisterUsage usage){
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_636_addSaR)
HXDLIN( 636)		int sr1 = sr->type;
HXDLIN( 636)		::String _hx_tmp = sr->toGLSL();
HXDLIN( 636)		this->add(sr1,_hx_tmp,sr->n,usage);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addSaR,(void))

void RegisterMap_obj::addSR( ::openfl::display3D::_internal::_AGALConverter::SourceRegister sr, ::openfl::display3D::_internal::_AGALConverter::RegisterUsage usage,::hx::Null< int >  __o_offset){
            		int offset = __o_offset.Default(0);
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_640_addSR)
HXLINE( 641)		if ((sr->d != 0)) {
HXLINE( 643)			int sr1 = sr->itype;
HXDLIN( 643)			::String _hx_tmp = ::openfl::display3D::_internal::AGALConverter_obj::prefixFromType(sr->itype,sr->programType);
HXDLIN( 643)			this->add(sr1,(_hx_tmp + sr->n),sr->n,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 644)			int sr2 = sr->type;
HXDLIN( 644)			::String _hx_tmp1 = ::openfl::display3D::_internal::AGALConverter_obj::prefixFromType(sr->type,sr->programType);
HXDLIN( 644)			this->add(sr2,(_hx_tmp1 + sr->o),sr->o,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn());
HXLINE( 645)			return;
            		}
HXLINE( 648)		int sr1 = sr->type;
HXDLIN( 648)		::String _hx_tmp = sr->toGLSL(false,offset);
HXDLIN( 648)		this->add(sr1,_hx_tmp,(sr->n + offset),usage);
            	}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,addSR,(void))

 ::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterMap_obj::getRegisterUsage( ::openfl::display3D::_internal::_AGALConverter::SourceRegister sr){
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_652_getRegisterUsage)
HXLINE( 653)		if ((sr->d != 0)) {
HXLINE( 655)			return ::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn();
            		}
HXLINE( 658)		int sr1 = sr->type;
HXDLIN( 658)		::String _hx_tmp = sr->toGLSL(false,null());
HXDLIN( 658)		return this->getUsage(sr1,_hx_tmp,sr->n);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,getRegisterUsage,return )

 ::openfl::display3D::_internal::_AGALConverter::RegisterUsage RegisterMap_obj::getUsage(int type,::String name,int number){
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_662_getUsage)
HXLINE( 663)		{
HXLINE( 663)			int _g = 0;
HXDLIN( 663)			::Array< ::Dynamic> _g1 = this->mEntries;
HXDLIN( 663)			while((_g < _g1->length)){
HXLINE( 663)				 ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry entry = _g1->__get(_g).StaticCast<  ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry >();
HXDLIN( 663)				_g = (_g + 1);
HXLINE( 665)				bool _hx_tmp;
HXDLIN( 665)				bool _hx_tmp1;
HXDLIN( 665)				if ((entry->type == type)) {
HXLINE( 665)					_hx_tmp1 = (entry->name == name);
            				}
            				else {
HXLINE( 665)					_hx_tmp1 = false;
            				}
HXDLIN( 665)				if (_hx_tmp1) {
HXLINE( 665)					_hx_tmp = (entry->number == number);
            				}
            				else {
HXLINE( 665)					_hx_tmp = false;
            				}
HXDLIN( 665)				if (_hx_tmp) {
HXLINE( 667)					return entry->usage;
            				}
            			}
            		}
HXLINE( 671)		return ::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::UNUSED_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,getUsage,return )

::String RegisterMap_obj::toGLSL(bool tempRegistersOnly){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry a, ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry b){
            			HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_678_toGLSL)
HXLINE( 678)			return (a->number - b->number);
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(2)
            		int _hx_run( ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry a, ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry b){
            			HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_685_toGLSL)
HXLINE( 685)			return (a->type - b->type);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_675_toGLSL)
HXLINE( 676)		this->mEntries->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 681)		 ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry entry;
HXLINE( 683)		this->mEntries->sort( ::Dynamic(new _hx_Closure_1()));
HXLINE( 688)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 690)		{
HXLINE( 690)			int _g = 0;
HXDLIN( 690)			int _g1 = this->mEntries->length;
HXDLIN( 690)			while((_g < _g1)){
HXLINE( 690)				_g = (_g + 1);
HXDLIN( 690)				int i = (_g - 1);
HXLINE( 692)				entry = this->mEntries->__get(i).StaticCast<  ::openfl::display3D::_internal::_AGALConverter::RegisterMapEntry >();
HXLINE( 696)				bool _hx_tmp;
HXDLIN( 696)				bool _hx_tmp1;
HXDLIN( 696)				if (tempRegistersOnly) {
HXLINE( 696)					_hx_tmp1 = (entry->type != 2);
            				}
            				else {
HXLINE( 696)					_hx_tmp1 = false;
            				}
HXDLIN( 696)				if (!(_hx_tmp1)) {
HXLINE( 697)					if (!(tempRegistersOnly)) {
HXLINE( 696)						_hx_tmp = (entry->type == 2);
            					}
            					else {
HXLINE( 696)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 696)					_hx_tmp = true;
            				}
HXDLIN( 696)				if (_hx_tmp) {
HXLINE( 699)					continue;
            				}
HXLINE( 703)				if ((entry->type == 3)) {
HXLINE( 705)					continue;
            				}
HXLINE( 708)				switch((int)(entry->type)){
            					case (int)0: {
HXLINE( 712)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 712)							sb->flush();
            						}
HXDLIN( 712)						if (::hx::IsNull( sb->b )) {
HXLINE( 712)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_13,1);
            						}
            						else {
HXLINE( 712)							sb->b->push(HX_("attribute ",84,a8,71,97));
            						}
            					}
            					break;
            					case (int)1: {
HXLINE( 716)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 716)							sb->flush();
            						}
HXDLIN( 716)						if (::hx::IsNull( sb->b )) {
HXLINE( 716)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_14,1);
            						}
            						else {
HXLINE( 716)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 719)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 719)							sb->flush();
            						}
HXDLIN( 719)						if (::hx::IsNull( sb->b )) {
HXLINE( 719)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_15,1);
            						}
            						else {
HXLINE( 719)							sb->b->push(HX_("\t",09,00,00,00));
            						}
            					}
            					break;
            					case (int)3: {
            					}
            					break;
            					case (int)4: {
HXLINE( 724)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 724)							sb->flush();
            						}
HXDLIN( 724)						if (::hx::IsNull( sb->b )) {
HXLINE( 724)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_16,1);
            						}
            						else {
HXLINE( 724)							sb->b->push(HX_("varying ",b0,25,c9,a4));
            						}
            					}
            					break;
            					case (int)5: {
HXLINE( 727)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 727)							sb->flush();
            						}
HXDLIN( 727)						if (::hx::IsNull( sb->b )) {
HXLINE( 727)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_17,1);
            						}
            						else {
HXLINE( 727)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
            					break;
            					default:{
HXLINE( 730)						HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            					}
            				}
HXLINE( 733)				switch((int)(entry->usage->_hx_getIndex())){
            					case (int)0: {
HXLINE( 751)						::lime::utils::Log_obj::info(HX_("Missing switch patten: RegisterUsage.UNUSED",38,09,f6,02),::hx::SourceInfo(HX_("openfl/display3D/_internal/AGALConverter.hx",1d,65,e1,4d),751,HX_("openfl.display3D._internal.RegisterMap",ee,a0,d9,ca),HX_("toGLSL",f9,58,08,7a)));
            					}
            					break;
            					case (int)1: {
HXLINE( 736)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 736)							sb->flush();
            						}
HXDLIN( 736)						if (::hx::IsNull( sb->b )) {
HXLINE( 736)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_18,1);
            						}
            						else {
HXLINE( 736)							sb->b->push(HX_("vec4 ",c0,4c,56,34));
            						}
            					}
            					break;
            					case (int)2: {
HXLINE( 742)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 742)							sb->flush();
            						}
HXDLIN( 742)						if (::hx::IsNull( sb->b )) {
HXLINE( 742)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_19,1);
            						}
            						else {
HXLINE( 742)							sb->b->push(HX_("mat4 ",0c,20,23,03));
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 745)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 745)							sb->flush();
            						}
HXDLIN( 745)						if (::hx::IsNull( sb->b )) {
HXLINE( 745)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_20,1);
            						}
            						else {
HXLINE( 745)							sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            						}
            					}
            					break;
            					case (int)4: {
            					}
            					break;
            					case (int)5: {
HXLINE( 748)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 748)							sb->flush();
            						}
HXDLIN( 748)						if (::hx::IsNull( sb->b )) {
HXLINE( 748)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_21,1);
            						}
            						else {
HXLINE( 748)							sb->b->push(HX_("samplerCube ",63,87,00,86));
            						}
            					}
            					break;
            					case (int)6: {
            					}
            					break;
            					case (int)7: {
HXLINE( 739)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 739)							sb->flush();
            						}
HXDLIN( 739)						if (::hx::IsNull( sb->b )) {
HXLINE( 739)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_22,1);
            						}
            						else {
HXLINE( 739)							sb->b->push(HX_("vec4 ",c0,4c,56,34));
            						}
            					}
            					break;
            				}
HXLINE( 760)				if (::hx::IsPointerEq( entry->usage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_2D_ALPHA_dyn() )) {
HXLINE( 762)					{
HXLINE( 762)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 762)							sb->flush();
            						}
HXDLIN( 762)						if (::hx::IsNull( sb->b )) {
HXLINE( 762)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_23,1);
            						}
            						else {
HXLINE( 762)							sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            						}
            					}
HXLINE( 763)					{
HXLINE( 763)						::String x = entry->name;
HXDLIN( 763)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 763)							sb->flush();
            						}
HXDLIN( 763)						if (::hx::IsNull( sb->b )) {
HXLINE( 763)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 763)							::Array< ::String > sb1 = sb->b;
HXDLIN( 763)							sb1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 764)					{
HXLINE( 764)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 764)							sb->flush();
            						}
HXDLIN( 764)						if (::hx::IsNull( sb->b )) {
HXLINE( 764)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_24,1);
            						}
            						else {
HXLINE( 764)							sb->b->push(HX_(";\n",6f,33,00,00));
            						}
            					}
HXLINE( 766)					{
HXLINE( 766)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 766)							sb->flush();
            						}
HXDLIN( 766)						if (::hx::IsNull( sb->b )) {
HXLINE( 766)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_25,1);
            						}
            						else {
HXLINE( 766)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
HXLINE( 767)					{
HXLINE( 767)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 767)							sb->flush();
            						}
HXDLIN( 767)						if (::hx::IsNull( sb->b )) {
HXLINE( 767)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_26,1);
            						}
            						else {
HXLINE( 767)							sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            						}
            					}
HXLINE( 768)					{
HXLINE( 768)						::String x1 = (entry->name + HX_("_alpha",9f,ee,7d,1d));
HXDLIN( 768)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 768)							sb->flush();
            						}
HXDLIN( 768)						if (::hx::IsNull( sb->b )) {
HXLINE( 768)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 768)							::Array< ::String > sb1 = sb->b;
HXDLIN( 768)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 769)					{
HXLINE( 769)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 769)							sb->flush();
            						}
HXDLIN( 769)						if (::hx::IsNull( sb->b )) {
HXLINE( 769)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_27,1);
            						}
            						else {
HXLINE( 769)							sb->b->push(HX_(";\n",6f,33,00,00));
            						}
            					}
HXLINE( 771)					{
HXLINE( 771)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 771)							sb->flush();
            						}
HXDLIN( 771)						if (::hx::IsNull( sb->b )) {
HXLINE( 771)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_28,1);
            						}
            						else {
HXLINE( 771)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            					}
HXLINE( 772)					{
HXLINE( 772)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 772)							sb->flush();
            						}
HXDLIN( 772)						if (::hx::IsNull( sb->b )) {
HXLINE( 772)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_29,1);
            						}
            						else {
HXLINE( 772)							sb->b->push(HX_("bool ",b6,20,f8,b6));
            						}
            					}
HXLINE( 773)					{
HXLINE( 773)						::String x2 = (entry->name + HX_("_alphaEnabled",a2,df,12,f4));
HXDLIN( 773)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 773)							sb->flush();
            						}
HXDLIN( 773)						if (::hx::IsNull( sb->b )) {
HXLINE( 773)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 773)							::Array< ::String > sb1 = sb->b;
HXDLIN( 773)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 774)					{
HXLINE( 774)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 774)							sb->flush();
            						}
HXDLIN( 774)						if (::hx::IsNull( sb->b )) {
HXLINE( 774)							sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_30,1);
            						}
            						else {
HXLINE( 774)							sb->b->push(HX_(";\n",6f,33,00,00));
            						}
            					}
            				}
            				else {
HXLINE( 776)					if (::hx::IsPointerEq( entry->usage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_CUBE_ALPHA_dyn() )) {
HXLINE( 778)						{
HXLINE( 778)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 778)								sb->flush();
            							}
HXDLIN( 778)							if (::hx::IsNull( sb->b )) {
HXLINE( 778)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_31,1);
            							}
            							else {
HXLINE( 778)								sb->b->push(HX_("samplerCube ",63,87,00,86));
            							}
            						}
HXLINE( 779)						{
HXLINE( 779)							::String x = entry->name;
HXDLIN( 779)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 779)								sb->flush();
            							}
HXDLIN( 779)							if (::hx::IsNull( sb->b )) {
HXLINE( 779)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 779)								::Array< ::String > sb1 = sb->b;
HXDLIN( 779)								sb1->push(::Std_obj::string(x));
            							}
            						}
HXLINE( 780)						{
HXLINE( 780)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 780)								sb->flush();
            							}
HXDLIN( 780)							if (::hx::IsNull( sb->b )) {
HXLINE( 780)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_32,1);
            							}
            							else {
HXLINE( 780)								sb->b->push(HX_(";\n",6f,33,00,00));
            							}
            						}
HXLINE( 782)						{
HXLINE( 782)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 782)								sb->flush();
            							}
HXDLIN( 782)							if (::hx::IsNull( sb->b )) {
HXLINE( 782)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_33,1);
            							}
            							else {
HXLINE( 782)								sb->b->push(HX_("uniform ",6c,cc,54,02));
            							}
            						}
HXLINE( 783)						{
HXLINE( 783)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 783)								sb->flush();
            							}
HXDLIN( 783)							if (::hx::IsNull( sb->b )) {
HXLINE( 783)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_34,1);
            							}
            							else {
HXLINE( 783)								sb->b->push(HX_("samplerCube ",63,87,00,86));
            							}
            						}
HXLINE( 784)						{
HXLINE( 784)							::String x1 = (entry->name + HX_("_alpha",9f,ee,7d,1d));
HXDLIN( 784)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 784)								sb->flush();
            							}
HXDLIN( 784)							if (::hx::IsNull( sb->b )) {
HXLINE( 784)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            							}
            							else {
HXLINE( 784)								::Array< ::String > sb1 = sb->b;
HXDLIN( 784)								sb1->push(::Std_obj::string(x1));
            							}
            						}
HXLINE( 785)						{
HXLINE( 785)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 785)								sb->flush();
            							}
HXDLIN( 785)							if (::hx::IsNull( sb->b )) {
HXLINE( 785)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_35,1);
            							}
            							else {
HXLINE( 785)								sb->b->push(HX_(";\n",6f,33,00,00));
            							}
            						}
HXLINE( 787)						{
HXLINE( 787)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 787)								sb->flush();
            							}
HXDLIN( 787)							if (::hx::IsNull( sb->b )) {
HXLINE( 787)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_36,1);
            							}
            							else {
HXLINE( 787)								sb->b->push(HX_("uniform ",6c,cc,54,02));
            							}
            						}
HXLINE( 788)						{
HXLINE( 788)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 788)								sb->flush();
            							}
HXDLIN( 788)							if (::hx::IsNull( sb->b )) {
HXLINE( 788)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_37,1);
            							}
            							else {
HXLINE( 788)								sb->b->push(HX_("bool ",b6,20,f8,b6));
            							}
            						}
HXLINE( 789)						{
HXLINE( 789)							::String x2 = (entry->name + HX_("_alphaEnabled",a2,df,12,f4));
HXDLIN( 789)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 789)								sb->flush();
            							}
HXDLIN( 789)							if (::hx::IsNull( sb->b )) {
HXLINE( 789)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            							}
            							else {
HXLINE( 789)								::Array< ::String > sb1 = sb->b;
HXDLIN( 789)								sb1->push(::Std_obj::string(x2));
            							}
            						}
HXLINE( 790)						{
HXLINE( 790)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 790)								sb->flush();
            							}
HXDLIN( 790)							if (::hx::IsNull( sb->b )) {
HXLINE( 790)								sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_38,1);
            							}
            							else {
HXLINE( 790)								sb->b->push(HX_(";\n",6f,33,00,00));
            							}
            						}
            					}
            					else {
HXLINE( 792)						if (::hx::IsPointerEq( entry->usage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn() )) {
HXLINE( 794)							{
HXLINE( 794)								::String x = (entry->name + HX_("[128]",21,60,00,86));
HXDLIN( 794)								if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 794)									sb->flush();
            								}
HXDLIN( 794)								if (::hx::IsNull( sb->b )) {
HXLINE( 794)									sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 794)									::Array< ::String > sb1 = sb->b;
HXDLIN( 794)									sb1->push(::Std_obj::string(x));
            								}
            							}
HXLINE( 795)							{
HXLINE( 795)								if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 795)									sb->flush();
            								}
HXDLIN( 795)								if (::hx::IsNull( sb->b )) {
HXLINE( 795)									sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_39,1);
            								}
            								else {
HXLINE( 795)									sb->b->push(HX_(";\n",6f,33,00,00));
            								}
            							}
            						}
            						else {
HXLINE( 799)							{
HXLINE( 799)								::String x = entry->name;
HXDLIN( 799)								if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 799)									sb->flush();
            								}
HXDLIN( 799)								if (::hx::IsNull( sb->b )) {
HXLINE( 799)									sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 799)									::Array< ::String > sb1 = sb->b;
HXDLIN( 799)									sb1->push(::Std_obj::string(x));
            								}
            							}
HXLINE( 800)							{
HXLINE( 800)								if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 800)									sb->flush();
            								}
HXDLIN( 800)								if (::hx::IsNull( sb->b )) {
HXLINE( 800)									sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_cad9a0ee_40,1);
            								}
            								else {
HXLINE( 800)									sb->b->push(HX_(";\n",6f,33,00,00));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 804)		return sb->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,toGLSL,return )


::hx::ObjectPtr< RegisterMap_obj > RegisterMap_obj::__new() {
	::hx::ObjectPtr< RegisterMap_obj > __this = new RegisterMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< RegisterMap_obj > RegisterMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	RegisterMap_obj *__this = (RegisterMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RegisterMap_obj), true, "openfl.display3D._internal.RegisterMap"));
	*(void **)__this = RegisterMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

RegisterMap_obj::RegisterMap_obj()
{
}

void RegisterMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegisterMap);
	HX_MARK_MEMBER_NAME(mEntries,"mEntries");
	HX_MARK_END_CLASS();
}

void RegisterMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mEntries,"mEntries");
}

::hx::Val RegisterMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"addDR") ) { return ::hx::Val( addDR_dyn() ); }
		if (HX_FIELD_EQ(inName,"addSR") ) { return ::hx::Val( addSR_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addSaR") ) { return ::hx::Val( addSaR_dyn() ); }
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return ::hx::Val( toGLSL_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { return ::hx::Val( mEntries ); }
		if (HX_FIELD_EQ(inName,"getUsage") ) { return ::hx::Val( getUsage_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getRegisterUsage") ) { return ::hx::Val( getRegisterUsage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RegisterMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { mEntries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegisterMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mEntries",63,ec,2a,a1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RegisterMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(RegisterMap_obj,mEntries),HX_("mEntries",63,ec,2a,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RegisterMap_obj_sStaticStorageInfo = 0;
#endif

static ::String RegisterMap_obj_sMemberFields[] = {
	HX_("mEntries",63,ec,2a,a1),
	HX_("add",21,f2,49,00),
	HX_("addDR",ef,b7,43,1c),
	HX_("addSaR",63,a8,08,9f),
	HX_("addSR",00,c5,43,1c),
	HX_("getRegisterUsage",48,c9,b8,09),
	HX_("getUsage",ab,6c,06,0a),
	HX_("toGLSL",f9,58,08,7a),
	::String(null()) };

::hx::Class RegisterMap_obj::__mClass;

void RegisterMap_obj::__register()
{
	RegisterMap_obj _hx_dummy;
	RegisterMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._internal.RegisterMap",ee,a0,d9,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RegisterMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RegisterMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RegisterMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RegisterMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void RegisterMap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b37c0bf690c3fac4_597_boot)
HXDLIN( 597)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
