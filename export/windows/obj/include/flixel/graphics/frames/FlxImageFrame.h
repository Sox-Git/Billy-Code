#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#define INCLUDED_flixel_graphics_frames_FlxImageFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxImageFrame)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace graphics{
namespace frames{


class HXCPP_CLASS_ATTRIBUTES FlxImageFrame_obj : public  ::flixel::graphics::frames::FlxFramesCollection_obj
{
	public:
		typedef  ::flixel::graphics::frames::FlxFramesCollection_obj super;
		typedef FlxImageFrame_obj OBJ_;
		FlxImageFrame_obj();

	public:
		enum { _hx_ClassId = 0x071ccbb3 };

		void __construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.frames.FlxImageFrame")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.frames.FlxImageFrame"); }
		static ::hx::ObjectPtr< FlxImageFrame_obj > __new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border);
		static ::hx::ObjectPtr< FlxImageFrame_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxImageFrame_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxImageFrame",c4,19,a9,40); }

		static  ::flixel::graphics::frames::FlxImageFrame fromEmptyFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect);
		static ::Dynamic fromEmptyFrame_dyn();

		static  ::flixel::graphics::frames::FlxImageFrame fromFrame( ::flixel::graphics::frames::FlxFrame source);
		static ::Dynamic fromFrame_dyn();

		static  ::flixel::graphics::frames::FlxImageFrame fromImage( ::Dynamic source);
		static ::Dynamic fromImage_dyn();

		static  ::flixel::graphics::frames::FlxImageFrame fromGraphic( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect region);
		static ::Dynamic fromGraphic_dyn();

		static  ::flixel::graphics::frames::FlxImageFrame fromRectangle( ::Dynamic source, ::flixel::math::FlxRect region);
		static ::Dynamic fromRectangle_dyn();

		static  ::flixel::graphics::frames::FlxImageFrame fromBitmapAddSpacesAndBorders( ::Dynamic source, ::flixel::math::FlxBasePoint border, ::flixel::math::FlxRect region);
		static ::Dynamic fromBitmapAddSpacesAndBorders_dyn();

		static  ::flixel::graphics::frames::FlxImageFrame fromFrameAddSpacesAndBorders( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxBasePoint border);
		static ::Dynamic fromFrameAddSpacesAndBorders_dyn();

		static  ::flixel::graphics::frames::FlxImageFrame findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect, ::flixel::math::FlxBasePoint frameBorder);
		static ::Dynamic findFrame_dyn();

		static  ::flixel::graphics::frames::FlxImageFrame findEmptyFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxRect frameRect);
		static ::Dynamic findEmptyFrame_dyn();

		bool equals( ::flixel::math::FlxRect rect, ::flixel::math::FlxBasePoint border);
		::Dynamic equals_dyn();

		 ::flixel::graphics::frames::FlxFramesCollection addBorder( ::flixel::math::FlxBasePoint border);

		 ::flixel::graphics::frames::FlxFrame get_frame();
		::Dynamic get_frame_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames

#endif /* INCLUDED_flixel_graphics_frames_FlxImageFrame */ 
