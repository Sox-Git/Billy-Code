#ifndef INCLUDED_flixel_system_debug_GraphicCloseButton
#define INCLUDED_flixel_system_debug_GraphicCloseButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,debug,GraphicCloseButton)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES GraphicCloseButton_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicCloseButton_obj OBJ_;
		GraphicCloseButton_obj();

	public:
		enum { _hx_ClassId = 0x71d8cf26 };

		void __construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.GraphicCloseButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.GraphicCloseButton"); }
		static ::hx::ObjectPtr< GraphicCloseButton_obj > __new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		static ::hx::ObjectPtr< GraphicCloseButton_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicCloseButton_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicCloseButton",22,1a,68,a9); }

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_GraphicCloseButton */ 
