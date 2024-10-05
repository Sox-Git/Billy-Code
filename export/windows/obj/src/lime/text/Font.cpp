#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_text_Font
#include <lime/app/Promise_lime_text_Font.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_text_Font
#include <lime/net/_HTTPRequest_lime_text_Font.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphMetrics
#include <lime/text/GlyphMetrics.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_51012fd6257f8a4a_54_new,"lime.text.Font","new",0x97494f29,"lime.text.Font.new","lime/text/Font.hx",54,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_103_decompose,"lime.text.Font","decompose",0x6e29ff3a,"lime.text.Font.decompose","lime/text/Font.hx",103,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_182_getGlyph,"lime.text.Font","getGlyph",0x5bf955cd,"lime.text.Font.getGlyph","lime/text/Font.hx",182,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_194_getGlyphs,"lime.text.Font","getGlyphs",0x1e31be06,"lime.text.Font.getGlyphs","lime/text/Font.hx",194,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_202_getGlyphMetrics,"lime.text.Font","getGlyphMetrics",0x8c9677f6,"lime.text.Font.getGlyphMetrics","lime/text/Font.hx",202,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_219_renderGlyph,"lime.text.Font","renderGlyph",0xe6e51a3f,"lime.text.Font.renderGlyph","lime/text/Font.hx",219,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_258_renderGlyphs,"lime.text.Font","renderGlyphs",0x2191dd54,"lime.text.Font.renderGlyphs","lime/text/Font.hx",258,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_422___copyFrom,"lime.text.Font","__copyFrom",0x8a0b5b36,"lime.text.Font.__copyFrom","lime/text/Font.hx",422,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_446___fromBytes,"lime.text.Font","__fromBytes",0x257c2b4a,"lime.text.Font.__fromBytes","lime/text/Font.hx",446,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_459___fromFile,"lime.text.Font","__fromFile",0x6331ec7d,"lime.text.Font.__fromFile","lime/text/Font.hx",459,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_472___initializeSource,"lime.text.Font","__initializeSource",0xb57a50c2,"lime.text.Font.__initializeSource","lime/text/Font.hx",472,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_499___loadFromName,"lime.text.Font","__loadFromName",0x6b610412,"lime.text.Font.__loadFromName","lime/text/Font.hx",499,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_596___setSize,"lime.text.Font","__setSize",0x86a86dec,"lime.text.Font.__setSize","lime/text/Font.hx",596,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_121_fromBytes,"lime.text.Font","fromBytes",0x65a32e2a,"lime.text.Font.fromBytes","lime/text/Font.hx",121,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_135_fromFile,"lime.text.Font","fromFile",0x07a4e59d,"lime.text.Font.fromFile","lime/text/Font.hx",135,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_150_loadFromBytes,"lime.text.Font","loadFromBytes",0x5727f7a4,"lime.text.Font.loadFromBytes","lime/text/Font.hx",150,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_158_loadFromFile,"lime.text.Font","loadFromFile",0x5ed36963,"lime.text.Font.loadFromFile","lime/text/Font.hx",158,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_154_loadFromFile,"lime.text.Font","loadFromFile",0x5ed36963,"lime.text.Font.loadFromFile","lime/text/Font.hx",154,0x3be57807)
HX_LOCAL_STACK_FRAME(_hx_pos_51012fd6257f8a4a_175_loadFromName,"lime.text.Font","loadFromName",0x64170d32,"lime.text.Font.loadFromName","lime/text/Font.hx",175,0x3be57807)
namespace lime{
namespace text{

void Font_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_51012fd6257f8a4a_54_new)
HXLINE(  55)		if (::hx::IsNotNull( name )) {
HXLINE(  57)			this->name = name;
            		}
HXLINE(  60)		if (!(this->_hx___init)) {
HXLINE(  62)			this->ascender = 0;
HXLINE(  66)			this->descender = 0;
HXLINE(  70)			this->height = 0;
HXLINE(  74)			this->numGlyphs = 0;
HXLINE(  78)			this->underlinePosition = 0;
HXLINE(  82)			this->underlineThickness = 0;
HXLINE(  86)			this->unitsPerEM = 0;
HXLINE(  88)			if (::hx::IsNotNull( this->_hx___fontID )) {
HXLINE(  90)				if (::lime::utils::Assets_obj::isLocal(this->_hx___fontID,null(),null())) {
HXLINE(  92)					this->_hx___fromBytes(::lime::utils::Assets_obj::getBytes(this->_hx___fontID));
            				}
            			}
            			else {
HXLINE(  95)				if (::hx::IsNotNull( this->_hx___fontPath )) {
HXLINE(  97)					this->_hx___fromFile(this->_hx___fontPath);
            				}
            			}
            		}
            	}

Dynamic Font_obj::__CreateEmpty() { return new Font_obj; }

void *Font_obj::_hx_vtable = 0;

Dynamic Font_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Font_obj > _hx_result = new Font_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Font_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x40cee131;
}

 ::Dynamic Font_obj::decompose(){
            	HX_STACKFRAME(&_hx_pos_51012fd6257f8a4a_103_decompose)
HXLINE( 105)		if (::hx::IsNull( this->src )) {
HXLINE( 105)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Uninitialized font handle.",3a,84,ab,29)));
            		}
HXLINE( 106)		 ::Dynamic data = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_font_outline_decompose(::hx::DynamicPtr(this->src),20480)) );
HXLINE( 114)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,decompose,return )

int Font_obj::getGlyph(::String character){
            	HX_STACKFRAME(&_hx_pos_51012fd6257f8a4a_182_getGlyph)
HXDLIN( 182)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_font_get_glyph_index(::hx::DynamicPtr(this->src),character);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyph,return )

::Array< int > Font_obj::getGlyphs(::String __o_characters){
            		::String characters = __o_characters;
            		if (::hx::IsNull(__o_characters)) characters = HX_("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^`'\"/\\&*()[]{}<>|:;_-+=?,. ",c1,f6,34,50);
            	HX_STACKFRAME(&_hx_pos_51012fd6257f8a4a_194_getGlyphs)
HXDLIN( 194)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_font_get_glyph_indices(::hx::DynamicPtr(this->src),characters)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyphs,return )

 ::lime::text::GlyphMetrics Font_obj::getGlyphMetrics(int glyph){
            	HX_GC_STACKFRAME(&_hx_pos_51012fd6257f8a4a_202_getGlyphMetrics)
HXLINE( 204)		 ::Dynamic value = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_font_get_glyph_metrics(::hx::DynamicPtr(this->src),glyph)) );
HXLINE( 205)		 ::lime::text::GlyphMetrics metrics =  ::lime::text::GlyphMetrics_obj::__alloc( HX_CTX );
HXLINE( 207)		metrics->advance =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,value->__Field(HX_("horizontalAdvance",fe,57,3e,ce),::hx::paccDynamic),value->__Field(HX_("verticalAdvance",ac,8e,f7,57),::hx::paccDynamic));
HXLINE( 208)		metrics->height = ( (int)(value->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
HXLINE( 209)		metrics->horizontalBearing =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,value->__Field(HX_("horizontalBearingX",ae,21,22,6c),::hx::paccDynamic),value->__Field(HX_("horizontalBearingY",af,21,22,6c),::hx::paccDynamic));
HXLINE( 210)		metrics->verticalBearing =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,value->__Field(HX_("verticalBearingX",40,c3,78,64),::hx::paccDynamic),value->__Field(HX_("verticalBearingY",41,c3,78,64),::hx::paccDynamic));
HXLINE( 212)		return metrics;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,getGlyphMetrics,return )

 ::lime::graphics::Image Font_obj::renderGlyph(int glyph,int fontSize){
            	HX_GC_STACKFRAME(&_hx_pos_51012fd6257f8a4a_219_renderGlyph)
HXLINE( 221)		this->_hx___setSize(fontSize);
HXLINE( 223)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(0);
HXLINE( 226)		int dataPosition = 0;
HXLINE( 227)		bytes = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_font_render_glyph(::hx::DynamicPtr(this->src),glyph,::hx::DynamicPtr(bytes))) );
HXLINE( 229)		bool _hx_tmp;
HXDLIN( 229)		if (::hx::IsNotNull( bytes )) {
HXLINE( 229)			_hx_tmp = (bytes->length > 0);
            		}
            		else {
HXLINE( 229)			_hx_tmp = false;
            		}
HXDLIN( 229)		if (_hx_tmp) {
HXLINE( 231)			int index = (((( (int)(bytes->b->__get(dataPosition)) ) | (( (int)(bytes->b->__get((dataPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((dataPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((dataPosition + 3))) ) << 24));
HXLINE( 232)			dataPosition = (dataPosition + 4);
HXLINE( 233)			int width = (((( (int)(bytes->b->__get(dataPosition)) ) | (( (int)(bytes->b->__get((dataPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((dataPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((dataPosition + 3))) ) << 24));
HXLINE( 234)			dataPosition = (dataPosition + 4);
HXLINE( 235)			int height = (((( (int)(bytes->b->__get(dataPosition)) ) | (( (int)(bytes->b->__get((dataPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((dataPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((dataPosition + 3))) ) << 24));
HXLINE( 236)			dataPosition = (dataPosition + 4);
HXLINE( 237)			int x = (((( (int)(bytes->b->__get(dataPosition)) ) | (( (int)(bytes->b->__get((dataPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((dataPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((dataPosition + 3))) ) << 24));
HXLINE( 238)			dataPosition = (dataPosition + 4);
HXLINE( 239)			int y = (((( (int)(bytes->b->__get(dataPosition)) ) | (( (int)(bytes->b->__get((dataPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((dataPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((dataPosition + 3))) ) << 24));
HXLINE( 240)			dataPosition = (dataPosition + 4);
HXLINE( 242)			 ::haxe::io::Bytes data = bytes->sub(dataPosition,(width * height));
HXLINE( 243)			dataPosition = (dataPosition + (width * height));
HXLINE( 245)			 ::Dynamic elements = null();
HXDLIN( 245)			::cpp::VirtualArray array = null();
HXDLIN( 245)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 245)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 245)			 ::Dynamic len = null();
HXDLIN( 245)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 245)			if (::hx::IsNotNull( elements )) {
HXLINE( 245)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE( 245)				if (::hx::IsNotNull( array )) {
HXLINE( 245)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 245)					_this->byteOffset = 0;
HXDLIN( 245)					_this->length = array->get_length();
HXDLIN( 245)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 245)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 245)					_this->buffer = this2;
HXDLIN( 245)					_this->copyFromArray(array,null());
HXDLIN( 245)					this1 = _this;
            				}
            				else {
HXLINE( 245)					if (::hx::IsNotNull( vector )) {
HXLINE( 245)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 245)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 245)						_this->byteOffset = 0;
HXDLIN( 245)						_this->length = array->get_length();
HXDLIN( 245)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 245)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 245)						_this->buffer = this2;
HXDLIN( 245)						_this->copyFromArray(array,null());
HXDLIN( 245)						this1 = _this;
            					}
            					else {
HXLINE( 245)						if (::hx::IsNotNull( view )) {
HXLINE( 245)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 245)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 245)							int srcLength = view->length;
HXDLIN( 245)							int srcByteOffset = view->byteOffset;
HXDLIN( 245)							int srcElementSize = view->bytesPerElement;
HXDLIN( 245)							int elementSize = _this->bytesPerElement;
HXDLIN( 245)							if ((view->type == _this->type)) {
HXLINE( 245)								int srcLength = srcData->length;
HXDLIN( 245)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 245)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 245)								_this->buffer = this1;
HXDLIN( 245)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 245)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 245)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 245)							_this->byteOffset = 0;
HXDLIN( 245)							_this->length = srcLength;
HXDLIN( 245)							this1 = _this;
            						}
            						else {
HXLINE( 245)							if (::hx::IsNotNull( data )) {
HXLINE( 245)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 245)								int in_byteOffset = 0;
HXDLIN( 245)								if ((in_byteOffset < 0)) {
HXLINE( 245)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 245)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 245)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 245)								int bufferByteLength = data->length;
HXDLIN( 245)								int elementSize = _this->bytesPerElement;
HXDLIN( 245)								int newByteLength = bufferByteLength;
HXDLIN( 245)								if (::hx::IsNull( len )) {
HXLINE( 245)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 245)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 245)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 245)									if ((newByteLength < 0)) {
HXLINE( 245)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 245)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 245)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 245)									if ((newRange > bufferByteLength)) {
HXLINE( 245)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 245)								_this->buffer = data;
HXDLIN( 245)								_this->byteOffset = in_byteOffset;
HXDLIN( 245)								_this->byteLength = newByteLength;
HXDLIN( 245)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 245)								this1 = _this;
            							}
            							else {
HXLINE( 245)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 245)			 ::lime::graphics::ImageBuffer buffer =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this1,width,height,8,null());
HXLINE( 246)			 ::lime::graphics::Image image =  ::lime::graphics::Image_obj::__alloc( HX_CTX ,buffer,0,0,width,height,null(),null());
HXLINE( 247)			image->x = ( (Float)(x) );
HXLINE( 248)			image->y = ( (Float)(y) );
HXLINE( 250)			return image;
            		}
HXLINE( 254)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,renderGlyph,return )

 ::haxe::ds::IntMap Font_obj::renderGlyphs(::Array< int > glyphs,int fontSize){
            	HX_GC_STACKFRAME(&_hx_pos_51012fd6257f8a4a_258_renderGlyphs)
HXLINE( 260)		 ::haxe::ds::IntMap uniqueGlyphs =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 262)		{
HXLINE( 262)			int _g = 0;
HXDLIN( 262)			while((_g < glyphs->length)){
HXLINE( 262)				int glyph = glyphs->__get(_g);
HXDLIN( 262)				_g = (_g + 1);
HXLINE( 264)				uniqueGlyphs->set(glyph,true);
            			}
            		}
HXLINE( 267)		::Array< int > glyphList = ::Array_obj< int >::__new(0);
HXLINE( 269)		{
HXLINE( 269)			 ::Dynamic key = uniqueGlyphs->keys();
HXDLIN( 269)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 269)				int key1 = ( (int)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 271)				glyphList->push(key1);
            			}
            		}
HXLINE( 285)		::lime::_internal::backend::native::NativeCFFI_obj::lime_font_set_size(::hx::DynamicPtr(this->src),fontSize);
HXLINE( 287)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(0);
HXLINE( 288)		bytes = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_font_render_glyphs(::hx::DynamicPtr(this->src),::hx::DynamicPtr(glyphList),::hx::DynamicPtr(bytes))) );
HXLINE( 290)		bool _hx_tmp;
HXDLIN( 290)		if (::hx::IsNotNull( bytes )) {
HXLINE( 290)			_hx_tmp = (bytes->length > 0);
            		}
            		else {
HXLINE( 290)			_hx_tmp = false;
            		}
HXDLIN( 290)		if (_hx_tmp) {
HXLINE( 292)			int bytesPosition = 0;
HXLINE( 293)			int count = (((( (int)(bytes->b->__get(bytesPosition)) ) | (( (int)(bytes->b->__get((bytesPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((bytesPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((bytesPosition + 3))) ) << 24));
HXLINE( 294)			bytesPosition = (bytesPosition + 4);
HXLINE( 296)			int bufferWidth = 128;
HXLINE( 297)			int bufferHeight = 128;
HXLINE( 298)			int offsetX = 0;
HXLINE( 299)			int offsetY = 0;
HXLINE( 300)			int maxRows = 0;
HXLINE( 302)			int width;
HXDLIN( 302)			int height;
HXLINE( 303)			int i = 0;
HXLINE( 305)			while((i < count)){
HXLINE( 307)				bytesPosition = (bytesPosition + 4);
HXLINE( 308)				width = (((( (int)(bytes->b->__get(bytesPosition)) ) | (( (int)(bytes->b->__get((bytesPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((bytesPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((bytesPosition + 3))) ) << 24));
HXLINE( 309)				bytesPosition = (bytesPosition + 4);
HXLINE( 310)				height = (((( (int)(bytes->b->__get(bytesPosition)) ) | (( (int)(bytes->b->__get((bytesPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((bytesPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((bytesPosition + 3))) ) << 24));
HXLINE( 311)				bytesPosition = (bytesPosition + 4);
HXLINE( 313)				bytesPosition = (bytesPosition + (8 + (width * height)));
HXLINE( 315)				if (((offsetX + width) > bufferWidth)) {
HXLINE( 317)					offsetY = (offsetY + (maxRows + 1));
HXLINE( 318)					offsetX = 0;
HXLINE( 319)					maxRows = 0;
            				}
HXLINE( 322)				if (((offsetY + height) > bufferHeight)) {
HXLINE( 324)					if ((bufferWidth < bufferHeight)) {
HXLINE( 326)						bufferWidth = (bufferWidth * 2);
            					}
            					else {
HXLINE( 330)						bufferHeight = (bufferHeight * 2);
            					}
HXLINE( 333)					offsetX = 0;
HXLINE( 334)					offsetY = 0;
HXLINE( 335)					maxRows = 0;
HXLINE( 339)					bytesPosition = 4;
HXLINE( 340)					i = 0;
HXLINE( 341)					continue;
            				}
HXLINE( 344)				offsetX = (offsetX + (width + 1));
HXLINE( 346)				if ((height > maxRows)) {
HXLINE( 348)					maxRows = height;
            				}
HXLINE( 351)				i = (i + 1);
            			}
HXLINE( 354)			 ::haxe::ds::IntMap map =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 355)			 ::lime::graphics::ImageBuffer buffer =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,null(),bufferWidth,bufferHeight,8,null());
HXLINE( 356)			int dataPosition = 0;
HXLINE( 357)			 ::haxe::io::Bytes data = ::haxe::io::Bytes_obj::alloc((bufferWidth * bufferHeight));
HXLINE( 359)			bytesPosition = 4;
HXLINE( 360)			offsetX = 0;
HXLINE( 361)			offsetY = 0;
HXLINE( 362)			maxRows = 0;
HXLINE( 364)			int index;
HXDLIN( 364)			int x;
HXDLIN( 364)			int y;
HXDLIN( 364)			 ::lime::graphics::Image image;
HXLINE( 366)			{
HXLINE( 366)				int _g = 0;
HXDLIN( 366)				int _g1 = count;
HXDLIN( 366)				while((_g < _g1)){
HXLINE( 366)					_g = (_g + 1);
HXDLIN( 366)					int i = (_g - 1);
HXLINE( 368)					index = (((( (int)(bytes->b->__get(bytesPosition)) ) | (( (int)(bytes->b->__get((bytesPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((bytesPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((bytesPosition + 3))) ) << 24));
HXLINE( 369)					bytesPosition = (bytesPosition + 4);
HXLINE( 370)					width = (((( (int)(bytes->b->__get(bytesPosition)) ) | (( (int)(bytes->b->__get((bytesPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((bytesPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((bytesPosition + 3))) ) << 24));
HXLINE( 371)					bytesPosition = (bytesPosition + 4);
HXLINE( 372)					height = (((( (int)(bytes->b->__get(bytesPosition)) ) | (( (int)(bytes->b->__get((bytesPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((bytesPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((bytesPosition + 3))) ) << 24));
HXLINE( 373)					bytesPosition = (bytesPosition + 4);
HXLINE( 374)					x = (((( (int)(bytes->b->__get(bytesPosition)) ) | (( (int)(bytes->b->__get((bytesPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((bytesPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((bytesPosition + 3))) ) << 24));
HXLINE( 375)					bytesPosition = (bytesPosition + 4);
HXLINE( 376)					y = (((( (int)(bytes->b->__get(bytesPosition)) ) | (( (int)(bytes->b->__get((bytesPosition + 1))) ) << 8)) | (( (int)(bytes->b->__get((bytesPosition + 2))) ) << 16)) | (( (int)(bytes->b->__get((bytesPosition + 3))) ) << 24));
HXLINE( 377)					bytesPosition = (bytesPosition + 4);
HXLINE( 379)					if (((offsetX + width) > bufferWidth)) {
HXLINE( 381)						offsetY = (offsetY + (maxRows + 1));
HXLINE( 382)						offsetX = 0;
HXLINE( 383)						maxRows = 0;
            					}
HXLINE( 386)					{
HXLINE( 386)						int _g1 = 0;
HXDLIN( 386)						int _g2 = height;
HXDLIN( 386)						while((_g1 < _g2)){
HXLINE( 386)							_g1 = (_g1 + 1);
HXDLIN( 386)							int i = (_g1 - 1);
HXLINE( 388)							dataPosition = (((i + offsetY) * bufferWidth) + offsetX);
HXLINE( 389)							data->blit(dataPosition,bytes,bytesPosition,width);
HXLINE( 390)							bytesPosition = (bytesPosition + width);
            						}
            					}
HXLINE( 393)					image =  ::lime::graphics::Image_obj::__alloc( HX_CTX ,buffer,offsetX,offsetY,width,height,null(),null());
HXLINE( 394)					image->x = ( (Float)(x) );
HXLINE( 395)					image->y = ( (Float)(y) );
HXLINE( 397)					map->set(index,image);
HXLINE( 399)					offsetX = (offsetX + (width + 1));
HXLINE( 401)					if ((height > maxRows)) {
HXLINE( 403)						maxRows = height;
            					}
            				}
            			}
HXLINE( 410)			 ::Dynamic elements = null();
HXDLIN( 410)			::cpp::VirtualArray array = null();
HXDLIN( 410)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 410)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 410)			 ::Dynamic len = null();
HXDLIN( 410)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 410)			if (::hx::IsNotNull( elements )) {
HXLINE( 410)				this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE( 410)				if (::hx::IsNotNull( array )) {
HXLINE( 410)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 410)					_this->byteOffset = 0;
HXDLIN( 410)					_this->length = array->get_length();
HXDLIN( 410)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 410)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 410)					_this->buffer = this2;
HXDLIN( 410)					_this->copyFromArray(array,null());
HXDLIN( 410)					this1 = _this;
            				}
            				else {
HXLINE( 410)					if (::hx::IsNotNull( vector )) {
HXLINE( 410)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 410)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 410)						_this->byteOffset = 0;
HXDLIN( 410)						_this->length = array->get_length();
HXDLIN( 410)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 410)						 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 410)						_this->buffer = this2;
HXDLIN( 410)						_this->copyFromArray(array,null());
HXDLIN( 410)						this1 = _this;
            					}
            					else {
HXLINE( 410)						if (::hx::IsNotNull( view )) {
HXLINE( 410)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 410)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 410)							int srcLength = view->length;
HXDLIN( 410)							int srcByteOffset = view->byteOffset;
HXDLIN( 410)							int srcElementSize = view->bytesPerElement;
HXDLIN( 410)							int elementSize = _this->bytesPerElement;
HXDLIN( 410)							if ((view->type == _this->type)) {
HXLINE( 410)								int srcLength = srcData->length;
HXDLIN( 410)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 410)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 410)								_this->buffer = this1;
HXDLIN( 410)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 410)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 410)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 410)							_this->byteOffset = 0;
HXDLIN( 410)							_this->length = srcLength;
HXDLIN( 410)							this1 = _this;
            						}
            						else {
HXLINE( 410)							if (::hx::IsNotNull( data )) {
HXLINE( 410)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 410)								int in_byteOffset = 0;
HXDLIN( 410)								if ((in_byteOffset < 0)) {
HXLINE( 410)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 410)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 410)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 410)								int bufferByteLength = data->length;
HXDLIN( 410)								int elementSize = _this->bytesPerElement;
HXDLIN( 410)								int newByteLength = bufferByteLength;
HXDLIN( 410)								if (::hx::IsNull( len )) {
HXLINE( 410)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 410)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 410)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 410)									if ((newByteLength < 0)) {
HXLINE( 410)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 410)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 410)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 410)									if ((newRange > bufferByteLength)) {
HXLINE( 410)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 410)								_this->buffer = data;
HXDLIN( 410)								_this->byteOffset = in_byteOffset;
HXDLIN( 410)								_this->byteLength = newByteLength;
HXDLIN( 410)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 410)								this1 = _this;
            							}
            							else {
HXLINE( 410)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 410)			buffer->data = this1;
HXLINE( 413)			return map;
            		}
HXLINE( 417)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Font_obj,renderGlyphs,return )

void Font_obj::_hx___copyFrom( ::lime::text::Font other){
            	HX_STACKFRAME(&_hx_pos_51012fd6257f8a4a_422___copyFrom)
HXDLIN( 422)		if (::hx::IsNotNull( other )) {
HXLINE( 424)			this->ascender = other->ascender;
HXLINE( 425)			this->descender = other->descender;
HXLINE( 426)			this->height = other->height;
HXLINE( 427)			this->name = other->name;
HXLINE( 428)			this->numGlyphs = other->numGlyphs;
HXLINE( 429)			this->src = other->src;
HXLINE( 430)			this->underlinePosition = other->underlinePosition;
HXLINE( 431)			this->underlineThickness = other->underlineThickness;
HXLINE( 432)			this->unitsPerEM = other->unitsPerEM;
HXLINE( 434)			this->_hx___fontID = other->_hx___fontID;
HXLINE( 435)			this->_hx___fontPath = other->_hx___fontPath;
HXLINE( 438)			this->_hx___fontPathWithoutDirectory = other->_hx___fontPathWithoutDirectory;
HXLINE( 441)			this->_hx___init = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,_hx___copyFrom,(void))

void Font_obj::_hx___fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_51012fd6257f8a4a_446___fromBytes)
HXLINE( 447)		this->_hx___fontPath = null();
HXLINE( 450)		this->_hx___fontPathWithoutDirectory = null();
HXLINE( 452)		this->src = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_font_load_bytes(::hx::DynamicPtr(bytes))) );
HXLINE( 454)		this->_hx___initializeSource();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,_hx___fromBytes,(void))

void Font_obj::_hx___fromFile(::String path){
            	HX_STACKFRAME(&_hx_pos_51012fd6257f8a4a_459___fromFile)
HXLINE( 460)		this->_hx___fontPath = path;
HXLINE( 463)		this->_hx___fontPathWithoutDirectory = ::haxe::io::Path_obj::withoutDirectory(this->_hx___fontPath);
HXLINE( 465)		this->src = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_font_load_file(::hx::DynamicPtr(this->_hx___fontPath))) );
HXLINE( 467)		this->_hx___initializeSource();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,_hx___fromFile,(void))

void Font_obj::_hx___initializeSource(){
            	HX_STACKFRAME(&_hx_pos_51012fd6257f8a4a_472___initializeSource)
HXLINE( 474)		if (::hx::IsNotNull( this->src )) {
HXLINE( 476)			if (::hx::IsNull( this->name )) {
HXLINE( 481)				this->name = ( (::String)(( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_font_get_family_name(::hx::DynamicPtr(this->src))) )) );
            			}
HXLINE( 485)			this->ascender = ::lime::_internal::backend::native::NativeCFFI_obj::lime_font_get_ascender(::hx::DynamicPtr(this->src));
HXLINE( 486)			this->descender = ::lime::_internal::backend::native::NativeCFFI_obj::lime_font_get_descender(::hx::DynamicPtr(this->src));
HXLINE( 487)			this->height = ::lime::_internal::backend::native::NativeCFFI_obj::lime_font_get_height(::hx::DynamicPtr(this->src));
HXLINE( 488)			this->numGlyphs = ::lime::_internal::backend::native::NativeCFFI_obj::lime_font_get_num_glyphs(::hx::DynamicPtr(this->src));
HXLINE( 489)			this->underlinePosition = ::lime::_internal::backend::native::NativeCFFI_obj::lime_font_get_underline_position(::hx::DynamicPtr(this->src));
HXLINE( 490)			this->underlineThickness = ::lime::_internal::backend::native::NativeCFFI_obj::lime_font_get_underline_thickness(::hx::DynamicPtr(this->src));
HXLINE( 491)			this->unitsPerEM = ::lime::_internal::backend::native::NativeCFFI_obj::lime_font_get_units_per_em(::hx::DynamicPtr(this->src));
            		}
HXLINE( 495)		this->_hx___init = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,_hx___initializeSource,(void))

 ::lime::app::Future Font_obj::_hx___loadFromName(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_51012fd6257f8a4a_499___loadFromName)
HXLINE( 500)		 ::lime::app::Promise_lime_text_Font promise =  ::lime::app::Promise_lime_text_Font_obj::__alloc( HX_CTX );
HXLINE( 561)		promise->error(HX_("",00,00,00,00));
HXLINE( 564)		return promise->future;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,_hx___loadFromName,return )

void Font_obj::_hx___setSize(int size){
            	HX_STACKFRAME(&_hx_pos_51012fd6257f8a4a_596___setSize)
HXDLIN( 596)		::lime::_internal::backend::native::NativeCFFI_obj::lime_font_set_size(::hx::DynamicPtr(this->src),size);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,_hx___setSize,(void))

 ::lime::text::Font Font_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_51012fd6257f8a4a_121_fromBytes)
HXLINE( 122)		if (::hx::IsNull( bytes )) {
HXLINE( 122)			return null();
            		}
HXLINE( 124)		 ::lime::text::Font font =  ::lime::text::Font_obj::__alloc( HX_CTX ,null());
HXLINE( 125)		font->_hx___fromBytes(bytes);
HXLINE( 128)		if (::hx::IsNotNull( font->src )) {
HXLINE( 128)			return font;
            		}
            		else {
HXLINE( 128)			return null();
            		}
HXDLIN( 128)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

 ::lime::text::Font Font_obj::fromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_51012fd6257f8a4a_135_fromFile)
HXLINE( 136)		if (::hx::IsNull( path )) {
HXLINE( 136)			return null();
            		}
HXLINE( 138)		 ::lime::text::Font font =  ::lime::text::Font_obj::__alloc( HX_CTX ,null());
HXLINE( 139)		font->_hx___fromFile(path);
HXLINE( 142)		if (::hx::IsNotNull( font->src )) {
HXLINE( 142)			return font;
            		}
            		else {
HXLINE( 142)			return null();
            		}
HXDLIN( 142)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

 ::lime::app::Future Font_obj::loadFromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_51012fd6257f8a4a_150_loadFromBytes)
HXDLIN( 150)		return ::lime::app::Future_obj::withValue(::lime::text::Font_obj::fromBytes(bytes));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadFromBytes,return )

 ::lime::app::Future Font_obj::loadFromFile(::String path){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::text::Font font){
            			HX_GC_STACKFRAME(&_hx_pos_51012fd6257f8a4a_158_loadFromFile)
HXLINE( 158)			if (::hx::IsNotNull( font )) {
HXLINE( 160)				return ::lime::app::Future_obj::withValue(font);
            			}
            			else {
HXLINE( 164)				return ::lime::app::Future_obj::withError(HX_("",00,00,00,00));
            			}
HXLINE( 158)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_51012fd6257f8a4a_154_loadFromFile)
HXLINE( 155)		 ::lime::net::_HTTPRequest_lime_text_Font request =  ::lime::net::_HTTPRequest_lime_text_Font_obj::__alloc( HX_CTX ,null());
HXLINE( 156)		return request->load(path)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadFromFile,return )

 ::lime::app::Future Font_obj::loadFromName(::String path){
            	HX_STACKFRAME(&_hx_pos_51012fd6257f8a4a_175_loadFromName)
HXDLIN( 175)		return ::lime::app::Future_obj::withError(HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadFromName,return )


::hx::ObjectPtr< Font_obj > Font_obj::__new(::String name) {
	::hx::ObjectPtr< Font_obj > __this = new Font_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< Font_obj > Font_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	Font_obj *__this = (Font_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Font_obj), true, "lime.text.Font"));
	*(void **)__this = Font_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(ascender,"ascender");
	HX_MARK_MEMBER_NAME(descender,"descender");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_MARK_MEMBER_NAME(src,"src");
	HX_MARK_MEMBER_NAME(underlinePosition,"underlinePosition");
	HX_MARK_MEMBER_NAME(underlineThickness,"underlineThickness");
	HX_MARK_MEMBER_NAME(unitsPerEM,"unitsPerEM");
	HX_MARK_MEMBER_NAME(_hx___fontID,"__fontID");
	HX_MARK_MEMBER_NAME(_hx___fontPath,"__fontPath");
	HX_MARK_MEMBER_NAME(_hx___fontPathWithoutDirectory,"__fontPathWithoutDirectory");
	HX_MARK_MEMBER_NAME(_hx___init,"__init");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ascender,"ascender");
	HX_VISIT_MEMBER_NAME(descender,"descender");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(numGlyphs,"numGlyphs");
	HX_VISIT_MEMBER_NAME(src,"src");
	HX_VISIT_MEMBER_NAME(underlinePosition,"underlinePosition");
	HX_VISIT_MEMBER_NAME(underlineThickness,"underlineThickness");
	HX_VISIT_MEMBER_NAME(unitsPerEM,"unitsPerEM");
	HX_VISIT_MEMBER_NAME(_hx___fontID,"__fontID");
	HX_VISIT_MEMBER_NAME(_hx___fontPath,"__fontPath");
	HX_VISIT_MEMBER_NAME(_hx___fontPathWithoutDirectory,"__fontPathWithoutDirectory");
	HX_VISIT_MEMBER_NAME(_hx___init,"__init");
}

::hx::Val Font_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { return ::hx::Val( src ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ascender") ) { return ::hx::Val( ascender ); }
		if (HX_FIELD_EQ(inName,"__fontID") ) { return ::hx::Val( _hx___fontID ); }
		if (HX_FIELD_EQ(inName,"getGlyph") ) { return ::hx::Val( getGlyph_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"descender") ) { return ::hx::Val( descender ); }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { return ::hx::Val( numGlyphs ); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return ::hx::Val( decompose_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGlyphs") ) { return ::hx::Val( getGlyphs_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setSize") ) { return ::hx::Val( _hx___setSize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unitsPerEM") ) { return ::hx::Val( unitsPerEM ); }
		if (HX_FIELD_EQ(inName,"__fontPath") ) { return ::hx::Val( _hx___fontPath ); }
		if (HX_FIELD_EQ(inName,"__copyFrom") ) { return ::hx::Val( _hx___copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return ::hx::Val( _hx___fromFile_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderGlyph") ) { return ::hx::Val( renderGlyph_dyn() ); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return ::hx::Val( _hx___fromBytes_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderGlyphs") ) { return ::hx::Val( renderGlyphs_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__loadFromName") ) { return ::hx::Val( _hx___loadFromName_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getGlyphMetrics") ) { return ::hx::Val( getGlyphMetrics_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"underlinePosition") ) { return ::hx::Val( underlinePosition ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"underlineThickness") ) { return ::hx::Val( underlineThickness ); }
		if (HX_FIELD_EQ(inName,"__initializeSource") ) { return ::hx::Val( _hx___initializeSource_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__fontPathWithoutDirectory") ) { return ::hx::Val( _hx___fontPathWithoutDirectory ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Font_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFromName") ) { outValue = loadFromName_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
	}
	return false;
}

::hx::Val Font_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { src=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__init") ) { _hx___init=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ascender") ) { ascender=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fontID") ) { _hx___fontID=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"descender") ) { descender=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numGlyphs") ) { numGlyphs=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unitsPerEM") ) { unitsPerEM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fontPath") ) { _hx___fontPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"underlinePosition") ) { underlinePosition=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"underlineThickness") ) { underlineThickness=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__fontPathWithoutDirectory") ) { _hx___fontPathWithoutDirectory=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ascender",37,98,10,60));
	outFields->push(HX_("descender",17,65,27,ab));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("numGlyphs",2d,44,5a,5f));
	outFields->push(HX_("src",e4,a6,57,00));
	outFields->push(HX_("underlinePosition",d5,5d,6b,96));
	outFields->push(HX_("underlineThickness",c8,ba,9b,91));
	outFields->push(HX_("unitsPerEM",96,b6,60,21));
	outFields->push(HX_("__fontID",8a,5a,1e,a3));
	outFields->push(HX_("__fontPath",34,76,08,70));
	outFields->push(HX_("__fontPathWithoutDirectory",59,11,28,91));
	outFields->push(HX_("__init",30,9e,b3,f4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Font_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Font_obj,ascender),HX_("ascender",37,98,10,60)},
	{::hx::fsInt,(int)offsetof(Font_obj,descender),HX_("descender",17,65,27,ab)},
	{::hx::fsInt,(int)offsetof(Font_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsString,(int)offsetof(Font_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(Font_obj,numGlyphs),HX_("numGlyphs",2d,44,5a,5f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Font_obj,src),HX_("src",e4,a6,57,00)},
	{::hx::fsInt,(int)offsetof(Font_obj,underlinePosition),HX_("underlinePosition",d5,5d,6b,96)},
	{::hx::fsInt,(int)offsetof(Font_obj,underlineThickness),HX_("underlineThickness",c8,ba,9b,91)},
	{::hx::fsInt,(int)offsetof(Font_obj,unitsPerEM),HX_("unitsPerEM",96,b6,60,21)},
	{::hx::fsString,(int)offsetof(Font_obj,_hx___fontID),HX_("__fontID",8a,5a,1e,a3)},
	{::hx::fsString,(int)offsetof(Font_obj,_hx___fontPath),HX_("__fontPath",34,76,08,70)},
	{::hx::fsString,(int)offsetof(Font_obj,_hx___fontPathWithoutDirectory),HX_("__fontPathWithoutDirectory",59,11,28,91)},
	{::hx::fsBool,(int)offsetof(Font_obj,_hx___init),HX_("__init",30,9e,b3,f4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Font_obj_sStaticStorageInfo = 0;
#endif

static ::String Font_obj_sMemberFields[] = {
	HX_("ascender",37,98,10,60),
	HX_("descender",17,65,27,ab),
	HX_("height",e7,07,4c,02),
	HX_("name",4b,72,ff,48),
	HX_("numGlyphs",2d,44,5a,5f),
	HX_("src",e4,a6,57,00),
	HX_("underlinePosition",d5,5d,6b,96),
	HX_("underlineThickness",c8,ba,9b,91),
	HX_("unitsPerEM",96,b6,60,21),
	HX_("__fontID",8a,5a,1e,a3),
	HX_("__fontPath",34,76,08,70),
	HX_("__fontPathWithoutDirectory",59,11,28,91),
	HX_("__init",30,9e,b3,f4),
	HX_("decompose",b1,c3,a7,7a),
	HX_("getGlyph",36,0d,dc,f5),
	HX_("getGlyphs",7d,82,af,2a),
	HX_("getGlyphMetrics",ad,6f,39,58),
	HX_("renderGlyph",76,2a,b6,61),
	HX_("renderGlyphs",3d,fd,ae,1d),
	HX_("__copyFrom",df,7e,99,6b),
	HX_("__fromBytes",81,3b,4d,a0),
	HX_("__fromFile",26,10,c0,44),
	HX_("__initializeSource",6b,c5,c1,17),
	HX_("__loadFromName",3b,b0,f4,80),
	HX_("__setSize",63,32,26,93),
	::String(null()) };

::hx::Class Font_obj::__mClass;

static ::String Font_obj_sStaticFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromFile",06,9d,87,a1),
	HX_("loadFromBytes",9b,c3,86,f4),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("loadFromName",1b,2d,34,60),
	::String(null())
};

void Font_obj::__register()
{
	Font_obj _hx_dummy;
	Font_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.text.Font",b7,86,7e,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Font_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Font_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Font_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Font_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Font_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Font_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
