#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_AttribAccess_Impl_
#define INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_AttribAccess_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(flixel,graphics,frames,bmfont,_BMFontXml,AttribAccess_Impl_)

namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{
namespace _BMFontXml{


class HXCPP_CLASS_ATTRIBUTES AttribAccess_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AttribAccess_Impl__obj OBJ_;
		AttribAccess_Impl__obj();

	public:
		enum { _hx_ClassId = 0x591d1eb3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_"); }

		inline static ::hx::ObjectPtr< AttribAccess_Impl__obj > __new() {
			::hx::ObjectPtr< AttribAccess_Impl__obj > __this = new AttribAccess_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AttribAccess_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			AttribAccess_Impl__obj *__this = (AttribAccess_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AttribAccess_Impl__obj), false, "flixel.graphics.frames.bmfont._BMFontXml.AttribAccess_Impl_"));
			*(void **)__this = AttribAccess_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AttribAccess_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AttribAccess_Impl_",ce,c3,81,f2); }

		static ::String stringHelper( ::Xml this1,::String name, ::Dynamic invalid,::String backup);
		static ::Dynamic stringHelper_dyn();

		static ::String stringSafe( ::Xml this1,::String name,::String backup);
		static ::Dynamic stringSafe_dyn();

		static ::String string( ::Xml this1,::String name);
		static ::Dynamic string_dyn();

		static ::String stringWarn( ::Xml this1,::String name,::String backup);
		static ::Dynamic stringWarn_dyn();

		static ::String stringError( ::Xml this1,::String name,::String backup);
		static ::Dynamic stringError_dyn();

		static int intHelper( ::Xml this1,::String name, ::Dynamic invalid,int backup);
		static ::Dynamic intHelper_dyn();

		static int intSafe( ::Xml this1,::String name,int backup);
		static ::Dynamic intSafe_dyn();

		static int _hx_int( ::Xml this1,::String name);
		static ::Dynamic _hx_int_dyn();

		static int intWarn( ::Xml this1,::String name,int backup);
		static ::Dynamic intWarn_dyn();

		static int intError( ::Xml this1,::String name,int backup);
		static ::Dynamic intError_dyn();

		static bool boolHelper( ::Xml this1,::String name, ::Dynamic invalid,bool backup);
		static ::Dynamic boolHelper_dyn();

		static bool boolSafe( ::Xml this1,::String name,bool backup);
		static ::Dynamic boolSafe_dyn();

		static bool _hx_bool( ::Xml this1,::String name);
		static ::Dynamic _hx_bool_dyn();

		static bool boolWarn( ::Xml this1,::String name,bool backup);
		static ::Dynamic boolWarn_dyn();

		static bool boolError( ::Xml this1,::String name,bool backup);
		static ::Dynamic boolError_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
} // end namespace _BMFontXml

#endif /* INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_AttribAccess_Impl_ */ 
