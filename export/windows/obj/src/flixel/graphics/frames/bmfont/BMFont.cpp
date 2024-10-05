#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxBitmapFont
#include <flixel/graphics/frames/FlxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFont
#include <flixel/graphics/frames/bmfont/BMFont.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontChar
#include <flixel/graphics/frames/bmfont/BMFontChar.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontCommon
#include <flixel/graphics/frames/bmfont/BMFontCommon.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontInfo
#include <flixel/graphics/frames/bmfont/BMFontInfo.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontKerning
#include <flixel/graphics/frames/bmfont/BMFontKerning.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontPage
#include <flixel/graphics/frames/bmfont/BMFontPage.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFont_BMFontFileType
#include <flixel/graphics/frames/bmfont/_BMFont/BMFontFileType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_BMFontXml_Impl_
#include <flixel/graphics/frames/bmfont/_BMFontXml/BMFontXml_Impl_.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_NodeAccess_Impl_
#include <flixel/graphics/frames/bmfont/_BMFontXml/NodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4a007ae567d5ade1_19_new,"flixel.graphics.frames.bmfont.BMFont","new",0xcaf476a9,"flixel.graphics.frames.bmfont.BMFont.new","flixel/graphics/frames/bmfont/BMFont.hx",19,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_127_initBitmapFont,"flixel.graphics.frames.bmfont.BMFont","initBitmapFont",0x33f3cce5,"flixel.graphics.frames.bmfont.BMFont.initBitmapFont","flixel/graphics/frames/bmfont/BMFont.hx",127,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_37_fromXml,"flixel.graphics.frames.bmfont.BMFont","fromXml",0x7f323d56,"flixel.graphics.frames.bmfont.BMFont.fromXml","flixel/graphics/frames/bmfont/BMFont.hx",37,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_54_fromText,"flixel.graphics.frames.bmfont.BMFont","fromText",0xca188c4e,"flixel.graphics.frames.bmfont.BMFont.fromText","flixel/graphics/frames/bmfont/BMFont.hx",54,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_88_fromBytes,"flixel.graphics.frames.bmfont.BMFont","fromBytes",0xbb60f5aa,"flixel.graphics.frames.bmfont.BMFont.fromBytes","flixel/graphics/frames/bmfont/BMFont.hx",88,0x28ad9ee7)
static const int _hx_array_data_e79fee37_12[] = {
	(int)66,(int)77,(int)70,
};
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_174_parse,"flixel.graphics.frames.bmfont.BMFont","parse",0xee231abc,"flixel.graphics.frames.bmfont.BMFont.parse","flixel/graphics/frames/bmfont/BMFont.hx",174,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_188_guessType,"flixel.graphics.frames.bmfont.BMFont","guessType",0x1e68983a,"flixel.graphics.frames.bmfont.BMFont.guessType","flixel/graphics/frames/bmfont/BMFont.hx",188,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_232_safeParseXML,"flixel.graphics.frames.bmfont.BMFont","safeParseXML",0xe4b4f268,"flixel.graphics.frames.bmfont.BMFont.safeParseXML","flixel/graphics/frames/bmfont/BMFont.hx",232,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_244_detectFromText,"flixel.graphics.frames.bmfont.BMFont","detectFromText",0x83d6b511,"flixel.graphics.frames.bmfont.BMFont.detectFromText","flixel/graphics/frames/bmfont/BMFont.hx",244,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_254_isValidBytes,"flixel.graphics.frames.bmfont.BMFont","isValidBytes",0xde4d62f0,"flixel.graphics.frames.bmfont.BMFont.isValidBytes","flixel/graphics/frames/bmfont/BMFont.hx",254,0x28ad9ee7)
static const int _hx_array_data_e79fee37_19[] = {
	(int)66,(int)77,(int)70,
};
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{

void BMFont_obj::__construct( ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kernings){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_19_new)
HXLINE(  25)		this->kernings = null();
HXLINE(  29)		this->info = info;
HXLINE(  30)		this->common = common;
HXLINE(  31)		this->pages = pages;
HXLINE(  32)		this->chars = chars;
HXLINE(  33)		this->kernings = kernings;
            	}

Dynamic BMFont_obj::__CreateEmpty() { return new BMFont_obj; }

void *BMFont_obj::_hx_vtable = 0;

Dynamic BMFont_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFont_obj > _hx_result = new BMFont_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool BMFont_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5bdb70e1;
}

 ::flixel::graphics::frames::FlxBitmapFont BMFont_obj::initBitmapFont( ::flixel::graphics::frames::FlxBitmapFont font){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_127_initBitmapFont)
HXLINE( 129)		font->lineHeight = this->common->lineHeight;
HXLINE( 130)		font->size = this->info->size;
HXLINE( 131)		font->fontName = this->info->face;
HXLINE( 132)		font->bold = this->info->bold;
HXLINE( 133)		font->italic = this->info->italic;
HXLINE( 135)		{
HXLINE( 135)			int _g = 0;
HXDLIN( 135)			::Array< ::Dynamic> _g1 = this->chars;
HXDLIN( 135)			while((_g < _g1->length)){
HXLINE( 135)				 ::flixel::graphics::frames::bmfont::BMFontChar _hx_char = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::bmfont::BMFontChar >();
HXDLIN( 135)				_g = (_g + 1);
HXLINE( 137)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 137)				_this->x = ( (Float)(0) );
HXDLIN( 137)				_this->y = ( (Float)(0) );
HXDLIN( 137)				_this->width = ( (Float)(0) );
HXDLIN( 137)				_this->height = ( (Float)(0) );
HXDLIN( 137)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 137)				rect->_inPool = false;
HXDLIN( 137)				 ::flixel::math::FlxRect frame = rect;
HXLINE( 138)				frame->x = ( (Float)(_hx_char->x) );
HXLINE( 139)				frame->y = ( (Float)(_hx_char->y) );
HXLINE( 140)				frame->width = ( (Float)(_hx_char->width) );
HXLINE( 141)				frame->height = ( (Float)(_hx_char->height) );
HXLINE( 143)				int _hx_tmp;
HXDLIN( 143)				if ((font->minOffsetX < -(_hx_char->xoffset))) {
HXLINE( 143)					_hx_tmp = -(_hx_char->xoffset);
            				}
            				else {
HXLINE( 143)					_hx_tmp = font->minOffsetX;
            				}
HXDLIN( 143)				font->minOffsetX = _hx_tmp;
HXLINE( 145)				if ((_hx_char->id == -1)) {
HXLINE( 147)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid font data!",4f,74,27,6e)));
            				}
HXLINE( 150)				int char1 = _hx_char->id;
HXDLIN( 150)				Float x = ( (Float)(_hx_char->xoffset) );
HXDLIN( 150)				Float y = ( (Float)(_hx_char->yoffset) );
HXDLIN( 150)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 150)				point->_inPool = false;
HXDLIN( 150)				font->addCharFrame(char1,frame,point,_hx_char->xadvance);
HXLINE( 152)				if ((_hx_char->id == 32)) {
HXLINE( 154)					font->spaceWidth = _hx_char->xadvance;
            				}
            				else {
HXLINE( 158)					int _hx_tmp;
HXDLIN( 158)					if ((font->lineHeight > (_hx_char->height + _hx_char->yoffset))) {
HXLINE( 158)						_hx_tmp = font->lineHeight;
            					}
            					else {
HXLINE( 158)						_hx_tmp = (_hx_char->height + _hx_char->yoffset);
            					}
HXDLIN( 158)					font->lineHeight = _hx_tmp;
            				}
            			}
            		}
HXLINE( 162)		if (::hx::IsNotNull( this->kernings )) {
HXLINE( 164)			int _g = 0;
HXDLIN( 164)			::Array< ::Dynamic> _g1 = this->kernings;
HXDLIN( 164)			while((_g < _g1->length)){
HXLINE( 164)				 ::flixel::graphics::frames::bmfont::BMFontKerning kerning = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::bmfont::BMFontKerning >();
HXDLIN( 164)				_g = (_g + 1);
HXLINE( 165)				font->addKerningPair(kerning->first,kerning->second,kerning->amount);
            			}
            		}
HXLINE( 168)		font->updateSourceHeight();
HXLINE( 169)		return font;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,initBitmapFont,return )

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::fromXml( ::Xml xml){
            	HX_GC_STACKFRAME(&_hx_pos_4a007ae567d5ade1_37_fromXml)
HXLINE(  38)		bool _hx_tmp;
HXDLIN(  38)		if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE(  38)			_hx_tmp = (xml->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE(  38)			_hx_tmp = false;
            		}
HXDLIN(  38)		if (_hx_tmp) {
HXLINE(  38)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            		}
HXDLIN(  38)		 ::Xml this1 = xml;
HXDLIN(  38)		 ::Xml main = this1;
HXLINE(  39)		 ::flixel::graphics::frames::bmfont::BMFontInfo info = ::flixel::graphics::frames::bmfont::BMFontInfo_obj::fromXml(::flixel::graphics::frames::bmfont::_BMFontXml::NodeAccess_Impl__obj::get(main,HX_("info",6e,38,bb,45)));
HXLINE(  40)		 ::flixel::graphics::frames::bmfont::BMFontCommon common = ::flixel::graphics::frames::bmfont::BMFontCommon_obj::fromXml(::flixel::graphics::frames::bmfont::_BMFontXml::NodeAccess_Impl__obj::get(main,HX_("common",2b,75,2e,c7)));
HXLINE(  41)		::Array< ::Dynamic> pages = ::flixel::graphics::frames::bmfont::BMFontPage_obj::listFromXml(::flixel::graphics::frames::bmfont::_BMFontXml::NodeAccess_Impl__obj::get(main,HX_("pages",44,2b,4d,bd)));
HXLINE(  42)		::Array< ::Dynamic> chars = ::flixel::graphics::frames::bmfont::BMFontChar_obj::listFromXml(::flixel::graphics::frames::bmfont::_BMFontXml::NodeAccess_Impl__obj::get(main,HX_("chars",dd,9c,b3,45)));
HXLINE(  43)		::Array< ::Dynamic> kernings = null();
HXLINE(  45)		if (::flixel::graphics::frames::bmfont::_BMFontXml::BMFontXml_Impl__obj::hasNode(main,HX_("kernings",27,b8,8b,80))) {
HXLINE(  47)			kernings = ::flixel::graphics::frames::bmfont::BMFontKerning_obj::listFromXml(::flixel::graphics::frames::bmfont::_BMFontXml::NodeAccess_Impl__obj::get(main,HX_("kernings",27,b8,8b,80)));
            		}
HXLINE(  50)		return  ::flixel::graphics::frames::bmfont::BMFont_obj::__alloc( HX_CTX ,info,common,pages,chars,kernings);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,fromXml,return )

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::fromText(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_4a007ae567d5ade1_54_fromText)
HXLINE(  55)		 ::flixel::graphics::frames::bmfont::BMFontInfo info = null();
HXLINE(  56)		 ::flixel::graphics::frames::bmfont::BMFontCommon common = null();
HXLINE(  57)		::Array< ::Dynamic> pages = ::Array_obj< ::Dynamic>::__new();
HXLINE(  58)		::Array< ::Dynamic> chars = ::Array_obj< ::Dynamic>::__new();
HXLINE(  59)		::Array< ::Dynamic> kernings = ::Array_obj< ::Dynamic>::__new();
HXLINE(  64)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(  64)		{
HXLINE(  64)			int _g1 = 0;
HXDLIN(  64)			::Array< ::String > _g2 = ::StringTools_obj::replace(text,HX_("\r\n",5d,0b,00,00),HX_("\n",0a,00,00,00)).split(HX_("\n",0a,00,00,00));
HXDLIN(  64)			while((_g1 < _g2->length)){
HXLINE(  64)				::String v = _g2->__get(_g1);
HXDLIN(  64)				_g1 = (_g1 + 1);
HXDLIN(  64)				if ((v.length > 0)) {
HXLINE(  64)					_g->push(v);
            				}
            			}
            		}
HXDLIN(  64)		::Array< ::String > lines = _g;
HXLINE(  65)		{
HXLINE(  65)			int _g3 = 0;
HXDLIN(  65)			while((_g3 < lines->length)){
HXLINE(  65)				::String line = lines->__get(_g3);
HXDLIN(  65)				_g3 = (_g3 + 1);
HXLINE(  67)				::String blockType = line.substring(0,line.indexOf(HX_(" ",20,00,00,00),null()));
HXLINE(  68)				::String blockAttrs = line.substring((line.indexOf(HX_(" ",20,00,00,00),null()) + 1),null());
HXLINE(  69)				::String _hx_switch_0 = blockType;
            				if (  (_hx_switch_0==HX_("char",d6,5e,bf,41)) ){
HXLINE(  75)					chars->push(::flixel::graphics::frames::bmfont::BMFontChar_obj::fromText(blockAttrs));
HXDLIN(  75)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==HX_("common",2b,75,2e,c7)) ){
HXLINE(  72)					common = ::flixel::graphics::frames::bmfont::BMFontCommon_obj::fromText(blockAttrs);
HXDLIN(  72)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==HX_("info",6e,38,bb,45)) ){
HXLINE(  71)					info = ::flixel::graphics::frames::bmfont::BMFontInfo_obj::fromText(blockAttrs);
HXDLIN(  71)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==HX_("kerning",cc,ba,37,b0)) ){
HXLINE(  77)					kernings->push(::flixel::graphics::frames::bmfont::BMFontKerning_obj::fromText(blockAttrs));
HXDLIN(  77)					goto _hx_goto_7;
            				}
            				if (  (_hx_switch_0==HX_("page",4f,da,51,4a)) ){
HXLINE(  73)					pages->push(::flixel::graphics::frames::bmfont::BMFontPage_obj::fromText(blockAttrs));
HXDLIN(  73)					goto _hx_goto_7;
            				}
            				_hx_goto_7:;
            			}
            		}
HXLINE(  81)		::Array< ::Dynamic> _hx_tmp;
HXDLIN(  81)		if ((kernings->length > 0)) {
HXLINE(  81)			_hx_tmp = kernings;
            		}
            		else {
HXLINE(  81)			_hx_tmp = null();
            		}
HXDLIN(  81)		return  ::flixel::graphics::frames::bmfont::BMFont_obj::__alloc( HX_CTX ,info,common,pages,chars,_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,fromText,return )

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_4a007ae567d5ade1_88_fromBytes)
HXLINE(  89)		 ::haxe::io::BytesInput bytes1 =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null());
HXLINE(  90)		::Array< int > expectedBytes = ::Array_obj< int >::fromData( _hx_array_data_e79fee37_12,3);
HXLINE(  91)		{
HXLINE(  91)			int _g = 0;
HXDLIN(  91)			while((_g < expectedBytes->length)){
HXLINE(  91)				int b = expectedBytes->__get(_g);
HXDLIN(  91)				_g = (_g + 1);
HXLINE(  93)				int testByte = bytes1->readByte();
HXLINE(  94)				if ((testByte != b)) {
HXLINE(  95)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Invalid binary .fnt file. Found ",18,03,19,53) + testByte) + HX_(", expected ",b4,e5,81,19)) + b)));
            				}
            			}
            		}
HXLINE(  97)		int version = bytes1->readByte();
HXLINE(  98)		if ((version < 3)) {
HXLINE( 100)			::flixel::FlxG_obj::log->advanced(HX_("The BMFont parser is made to work on files with version 3. Using earlier versions can cause issues!",db,84,bd,6a),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
HXLINE( 103)		 ::flixel::graphics::frames::bmfont::BMFontInfo info = null();
HXLINE( 104)		 ::flixel::graphics::frames::bmfont::BMFontCommon common = null();
HXLINE( 105)		::Array< ::Dynamic> pages = null();
HXLINE( 106)		::Array< ::Dynamic> chars = null();
HXLINE( 107)		::Array< ::Dynamic> kerning = null();
HXLINE( 110)		while((bytes1->pos < bytes1->totlen)){
HXLINE( 112)			int blockId = bytes1->readByte();
HXLINE( 113)			switch((int)(blockId)){
            				case (int)1: {
HXLINE( 115)					info = ::flixel::graphics::frames::bmfont::BMFontInfo_obj::fromBytes(bytes1);
            				}
            				break;
            				case (int)2: {
HXLINE( 116)					common = ::flixel::graphics::frames::bmfont::BMFontCommon_obj::fromBytes(bytes1);
            				}
            				break;
            				case (int)3: {
HXLINE( 117)					pages = ::flixel::graphics::frames::bmfont::BMFontPage_obj::listFromBytes(bytes1);
            				}
            				break;
            				case (int)4: {
HXLINE( 118)					chars = ::flixel::graphics::frames::bmfont::BMFontChar_obj::listFromBytes(bytes1);
            				}
            				break;
            				case (int)5: {
HXLINE( 119)					kerning = ::flixel::graphics::frames::bmfont::BMFontKerning_obj::listFromBytes(bytes1);
            				}
            				break;
            			}
            		}
HXLINE( 122)		return  ::flixel::graphics::frames::bmfont::BMFont_obj::__alloc( HX_CTX ,info,common,pages,chars,kerning);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,fromBytes,return )

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::parse( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_174_parse)
HXDLIN( 174)		 ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType _g = ::flixel::graphics::frames::bmfont::BMFont_obj::guessType(data);
HXDLIN( 174)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 176)				::String text = _g->_hx_getString(0);
HXDLIN( 176)				return ::flixel::graphics::frames::bmfont::BMFont_obj::fromText(text);
            			}
            			break;
            			case (int)1: {
HXLINE( 177)				 ::Xml xml = _g->_hx_getObject(0).StaticCast<  ::Xml >();
HXDLIN( 177)				return ::flixel::graphics::frames::bmfont::BMFont_obj::fromXml(xml);
            			}
            			break;
            			case (int)2: {
HXLINE( 178)				 ::haxe::io::Bytes bytes = _g->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN( 178)				return ::flixel::graphics::frames::bmfont::BMFont_obj::fromBytes(bytes);
            			}
            			break;
            		}
HXLINE( 174)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,parse,return )

 ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType BMFont_obj::guessType( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_188_guessType)
HXLINE( 189)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::Xml >())) {
HXLINE( 191)			return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::XML(::hx::TCast<  ::Xml >::cast(data)->firstElement());
            		}
HXLINE( 194)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::haxe::io::Bytes >())) {
HXLINE( 196)			 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(data) );
HXLINE( 197)			if (::flixel::graphics::frames::bmfont::BMFont_obj::isValidBytes(bytes)) {
HXLINE( 198)				return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::BINARY(bytes);
            			}
HXLINE( 200)			return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(bytes->toString());
            		}
HXLINE( 203)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::String >())) {
HXLINE( 205)			::String dataStr = ( (::String)(data) );
HXLINE( 206)			if (::openfl::utils::Assets_obj::exists(dataStr,null())) {
HXLINE( 209)				 ::openfl::utils::ByteArrayData bytes = ::openfl::utils::Assets_obj::getBytes(dataStr);
HXLINE( 210)				if (::hx::IsNull( bytes )) {
HXLINE( 211)					return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(::openfl::utils::Assets_obj::getText(dataStr));
            				}
HXLINE( 213)				if (::flixel::graphics::frames::bmfont::BMFont_obj::isValidBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes))) {
HXLINE( 214)					return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::BINARY(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes));
            				}
HXLINE( 216)				return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(bytes->toString());
            			}
            			else {
HXLINE( 221)				return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(dataStr);
            			}
            		}
HXLINE( 225)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid FlxAngelCodeAsset: ",51,07,1f,ee) + ::Std_obj::string(data))));
HXDLIN( 225)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,guessType,return )

 ::Xml BMFont_obj::safeParseXML(::String str){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_232_safeParseXML)
HXDLIN( 232)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 234)			 ::Xml xml = ::Xml_obj::parse(str);
HXLINE( 235)			return xml;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 237)				{
HXLINE( 237)					null();
            				}
HXLINE( 239)				return null();
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 232)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,safeParseXML,return )

 ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType BMFont_obj::detectFromText(::String text){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_244_detectFromText)
HXLINE( 245)		 ::Xml xml = ::flixel::graphics::frames::bmfont::BMFont_obj::safeParseXML(text);
HXLINE( 246)		bool _hx_tmp;
HXDLIN( 246)		if (::hx::IsNotNull( xml )) {
HXLINE( 246)			_hx_tmp = ::hx::IsNotNull( xml->firstElement() );
            		}
            		else {
HXLINE( 246)			_hx_tmp = false;
            		}
HXDLIN( 246)		if (_hx_tmp) {
HXLINE( 248)			return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::XML(xml->firstElement());
            		}
HXLINE( 250)		return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::TEXT(text);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,detectFromText,return )

bool BMFont_obj::isValidBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_254_isValidBytes)
HXLINE( 255)		::Array< int > expected = ::Array_obj< int >::fromData( _hx_array_data_e79fee37_19,3);
HXLINE( 256)		{
HXLINE( 256)			int _g = 0;
HXDLIN( 256)			int _g1 = expected->length;
HXDLIN( 256)			while((_g < _g1)){
HXLINE( 256)				_g = (_g + 1);
HXDLIN( 256)				int i = (_g - 1);
HXLINE( 258)				if ((bytes->b->__get(i) != expected->__get(i))) {
HXLINE( 259)					return false;
            				}
            			}
            		}
HXLINE( 262)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,isValidBytes,return )


::hx::ObjectPtr< BMFont_obj > BMFont_obj::__new( ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kernings) {
	::hx::ObjectPtr< BMFont_obj > __this = new BMFont_obj();
	__this->__construct(info,common,pages,chars,kernings);
	return __this;
}

::hx::ObjectPtr< BMFont_obj > BMFont_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kernings) {
	BMFont_obj *__this = (BMFont_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMFont_obj), true, "flixel.graphics.frames.bmfont.BMFont"));
	*(void **)__this = BMFont_obj::_hx_vtable;
	__this->__construct(info,common,pages,chars,kernings);
	return __this;
}

BMFont_obj::BMFont_obj()
{
}

void BMFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BMFont);
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(common,"common");
	HX_MARK_MEMBER_NAME(pages,"pages");
	HX_MARK_MEMBER_NAME(chars,"chars");
	HX_MARK_MEMBER_NAME(kernings,"kernings");
	HX_MARK_END_CLASS();
}

void BMFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(common,"common");
	HX_VISIT_MEMBER_NAME(pages,"pages");
	HX_VISIT_MEMBER_NAME(chars,"chars");
	HX_VISIT_MEMBER_NAME(kernings,"kernings");
}

::hx::Val BMFont_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return ::hx::Val( info ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { return ::hx::Val( pages ); }
		if (HX_FIELD_EQ(inName,"chars") ) { return ::hx::Val( chars ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"common") ) { return ::hx::Val( common ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"kernings") ) { return ::hx::Val( kernings ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initBitmapFont") ) { return ::hx::Val( initBitmapFont_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BMFont_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromXml") ) { outValue = fromXml_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromText") ) { outValue = fromText_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"guessType") ) { outValue = guessType_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"safeParseXML") ) { outValue = safeParseXML_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isValidBytes") ) { outValue = isValidBytes_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"detectFromText") ) { outValue = detectFromText_dyn(); return true; }
	}
	return false;
}

::hx::Val BMFont_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast<  ::flixel::graphics::frames::bmfont::BMFontInfo >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { pages=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"chars") ) { chars=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"common") ) { common=inValue.Cast<  ::flixel::graphics::frames::bmfont::BMFontCommon >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"kernings") ) { kernings=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("info",6e,38,bb,45));
	outFields->push(HX_("common",2b,75,2e,c7));
	outFields->push(HX_("pages",44,2b,4d,bd));
	outFields->push(HX_("chars",dd,9c,b3,45));
	outFields->push(HX_("kernings",27,b8,8b,80));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BMFont_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::graphics::frames::bmfont::BMFontInfo */ ,(int)offsetof(BMFont_obj,info),HX_("info",6e,38,bb,45)},
	{::hx::fsObject /*  ::flixel::graphics::frames::bmfont::BMFontCommon */ ,(int)offsetof(BMFont_obj,common),HX_("common",2b,75,2e,c7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BMFont_obj,pages),HX_("pages",44,2b,4d,bd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BMFont_obj,chars),HX_("chars",dd,9c,b3,45)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BMFont_obj,kernings),HX_("kernings",27,b8,8b,80)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BMFont_obj_sStaticStorageInfo = 0;
#endif

static ::String BMFont_obj_sMemberFields[] = {
	HX_("info",6e,38,bb,45),
	HX_("common",2b,75,2e,c7),
	HX_("pages",44,2b,4d,bd),
	HX_("chars",dd,9c,b3,45),
	HX_("kernings",27,b8,8b,80),
	HX_("initBitmapFont",8e,70,e8,59),
	::String(null()) };

::hx::Class BMFont_obj::__mClass;

static ::String BMFont_obj_sStaticFields[] = {
	HX_("fromXml",8d,3e,06,58),
	HX_("fromText",37,9b,c5,aa),
	HX_("fromBytes",a1,f2,20,72),
	HX_("parse",33,90,55,bd),
	HX_("guessType",31,95,28,d5),
	HX_("safeParseXML",d1,29,5e,e4),
	HX_("detectFromText",ba,58,cb,a9),
	HX_("isValidBytes",59,9a,f6,dd),
	::String(null())
};

void BMFont_obj::__register()
{
	BMFont_obj _hx_dummy;
	BMFont_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont.BMFont",37,ee,9f,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFont_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFont_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BMFont_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BMFont_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFont_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFont_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont