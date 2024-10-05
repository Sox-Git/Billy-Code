#ifndef INCLUDED_flixel_graphics_frames_FlxBitmapFont
#define INCLUDED_flixel_graphics_frames_FlxBitmapFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxBitmapFont)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace graphics{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES FlxBitmapFont_obj : public  ::flixel::graphics::frames::FlxFramesCollection_obj
{
	public:
		typedef  ::flixel::graphics::frames::FlxFramesCollection_obj super;
		typedef FlxBitmapFont_obj OBJ_;
		FlxBitmapFont_obj();

	public:
		enum { _hx_ClassId = 0x29e94a3f };

		void __construct( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxBasePoint border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.frames.FlxBitmapFont")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.frames.FlxBitmapFont"); }
		static ::hx::ObjectPtr< FlxBitmapFont_obj > __new( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxBasePoint border);
		static ::hx::ObjectPtr< FlxBitmapFont_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxBasePoint border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBitmapFont_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBitmapFont",50,98,75,63); }

		static void __boot();
		static int SPACE_CODE;
		static int TAB_CODE;
		static int NEW_LINE_CODE;
		static ::String DEFAULT_FONT_KEY;
		static ::String DEFAULT_FONT_DATA;
		static ::String DEFAULT_CHARS;
		static  ::openfl::geom::Point point;
		static  ::openfl::geom::Rectangle flashRect;
		static  ::flixel::graphics::frames::FlxBitmapFont getDefaultFont();
		static ::Dynamic getDefaultFont_dyn();

		static  ::flixel::graphics::frames::FlxBitmapFont fromAngelCode( ::Dynamic source, ::Dynamic data);
		static ::Dynamic fromAngelCode_dyn();

		static  ::flixel::graphics::frames::FlxBitmapFont fromXNA( ::Dynamic source,::String letters,::hx::Null< int >  charBGColor);
		static ::Dynamic fromXNA_dyn();

		static  ::openfl::geom::Point transformPoint( ::openfl::geom::Point point, ::flixel::graphics::frames::FlxFrame frame);
		static ::Dynamic transformPoint_dyn();

		static  ::flixel::graphics::frames::FlxBitmapFont fromMonospace( ::Dynamic source,::String letters, ::flixel::math::FlxBasePoint charSize, ::flixel::math::FlxRect region, ::flixel::math::FlxBasePoint spacing);
		static ::Dynamic fromMonospace_dyn();

		static  ::flixel::graphics::frames::FlxBitmapFont findFont( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxBasePoint border);
		static ::Dynamic findFont_dyn();

		int size;
		int lineHeight;
		bool bold;
		bool italic;
		::String fontName;
		int numLetters;
		int minOffsetX;
		int spaceWidth;
		 ::haxe::ds::IntMap charMap;
		 ::haxe::ds::IntMap charAdvance;
		 ::haxe::ds::IntMap kerning;
		 ::flixel::graphics::frames::FlxFrame frame;
		void destroy();

		void addCharFrame(int charCode, ::flixel::math::FlxRect frame, ::flixel::math::FlxBasePoint offset,int xAdvance);
		::Dynamic addCharFrame_dyn();

		void setCharFrame(int charCode, ::flixel::math::FlxRect frame,int xAdvance, ::flixel::math::FlxBasePoint offset);
		::Dynamic setCharFrame_dyn();

		void updateSourceHeight();
		::Dynamic updateSourceHeight_dyn();

		bool charExists(int charCode);
		::Dynamic charExists_dyn();

		 ::flixel::graphics::frames::FlxFrame getCharFrame(int charCode);
		::Dynamic getCharFrame_dyn();

		int getCharAdvance(int charCode);
		::Dynamic getCharAdvance_dyn();

		int getKerning(int prevCode,int nextCode);
		::Dynamic getKerning_dyn();

		void addKerningPair(int prevCode,int nextCode,int amount);
		::Dynamic addKerningPair_dyn();

		Float getCharWidth(int charCode);
		::Dynamic getCharWidth_dyn();

		 ::flixel::graphics::frames::FlxFramesCollection addBorder( ::flixel::math::FlxBasePoint border);

};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames

#endif /* INCLUDED_flixel_graphics_frames_FlxBitmapFont */ 
