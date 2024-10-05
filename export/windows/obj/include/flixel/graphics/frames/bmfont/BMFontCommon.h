#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontCommon
#define INCLUDED_flixel_graphics_frames_bmfont_BMFontCommon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_548404df940b75d5_14_new)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontCommon)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)

namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{


class HXCPP_CLASS_ATTRIBUTES BMFontCommon_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BMFontCommon_obj OBJ_;
		BMFontCommon_obj();

	public:
		enum { _hx_ClassId = 0x1e2fb8ec };

		void __construct(int lineHeight,int base,int scaleW,int scaleH,int pages,bool packed,int alphaChnl,int redChnl,int greenChnl,int blueChnl);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.frames.bmfont.BMFontCommon")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.frames.bmfont.BMFontCommon"); }

		inline static ::hx::ObjectPtr< BMFontCommon_obj > __new(int lineHeight,int base,int scaleW,int scaleH,int pages,bool packed,int alphaChnl,int redChnl,int greenChnl,int blueChnl) {
			::hx::ObjectPtr< BMFontCommon_obj > __this = new BMFontCommon_obj();
			__this->__construct(lineHeight,base,scaleW,scaleH,pages,packed,alphaChnl,redChnl,greenChnl,blueChnl);
			return __this;
		}

		inline static ::hx::ObjectPtr< BMFontCommon_obj > __alloc(::hx::Ctx *_hx_ctx,int lineHeight,int base,int scaleW,int scaleH,int pages,bool packed,int alphaChnl,int redChnl,int greenChnl,int blueChnl) {
			BMFontCommon_obj *__this = (BMFontCommon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMFontCommon_obj), false, "flixel.graphics.frames.bmfont.BMFontCommon"));
			*(void **)__this = BMFontCommon_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_548404df940b75d5_14_new)
HXDLIN(  14)		( ( ::flixel::graphics::frames::bmfont::BMFontCommon)(__this) )->lineHeight = lineHeight;
HXDLIN(  14)		( ( ::flixel::graphics::frames::bmfont::BMFontCommon)(__this) )->base = base;
HXDLIN(  14)		( ( ::flixel::graphics::frames::bmfont::BMFontCommon)(__this) )->scaleW = scaleW;
HXDLIN(  14)		( ( ::flixel::graphics::frames::bmfont::BMFontCommon)(__this) )->scaleH = scaleH;
HXDLIN(  14)		( ( ::flixel::graphics::frames::bmfont::BMFontCommon)(__this) )->pages = pages;
HXDLIN(  14)		( ( ::flixel::graphics::frames::bmfont::BMFontCommon)(__this) )->packed = packed;
HXDLIN(  14)		( ( ::flixel::graphics::frames::bmfont::BMFontCommon)(__this) )->alphaChnl = alphaChnl;
HXDLIN(  14)		( ( ::flixel::graphics::frames::bmfont::BMFontCommon)(__this) )->redChnl = redChnl;
HXDLIN(  14)		( ( ::flixel::graphics::frames::bmfont::BMFontCommon)(__this) )->greenChnl = greenChnl;
HXDLIN(  14)		( ( ::flixel::graphics::frames::bmfont::BMFontCommon)(__this) )->blueChnl = blueChnl;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BMFontCommon_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BMFontCommon",05,96,73,28); }

		static  ::flixel::graphics::frames::bmfont::BMFontCommon fromXml( ::Xml commonNode);
		static ::Dynamic fromXml_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFontCommon fromText(::String commonText);
		static ::Dynamic fromText_dyn();

		static  ::flixel::graphics::frames::bmfont::BMFontCommon fromBytes( ::haxe::io::BytesInput bytes);
		static ::Dynamic fromBytes_dyn();

		int lineHeight;
		int base;
		int scaleW;
		int scaleH;
		int pages;
		bool packed;
		int alphaChnl;
		int redChnl;
		int greenChnl;
		int blueChnl;
};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont

#endif /* INCLUDED_flixel_graphics_frames_bmfont_BMFontCommon */ 
