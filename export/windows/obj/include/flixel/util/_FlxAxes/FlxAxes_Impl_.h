#ifndef INCLUDED_flixel_util__FlxAxes_FlxAxes_Impl_
#define INCLUDED_flixel_util__FlxAxes_FlxAxes_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,util,_FlxAxes,FlxAxes_Impl_)

namespace flixel{
namespace util{
namespace _FlxAxes{


class HXCPP_CLASS_ATTRIBUTES FlxAxes_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxAxes_Impl__obj OBJ_;
		FlxAxes_Impl__obj();

	public:
		enum { _hx_ClassId = 0x17413779 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util._FlxAxes.FlxAxes_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util._FlxAxes.FlxAxes_Impl_"); }

		inline static ::hx::ObjectPtr< FlxAxes_Impl__obj > __new() {
			::hx::ObjectPtr< FlxAxes_Impl__obj > __this = new FlxAxes_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxAxes_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxAxes_Impl__obj *__this = (FlxAxes_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAxes_Impl__obj), false, "flixel.util._FlxAxes.FlxAxes_Impl_"));
			*(void **)__this = FlxAxes_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAxes_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAxes_Impl_",77,1a,4d,77); }

		static void __boot();
		static int X;
		static int Y;
		static int XY;
		static int NONE;
		static int get_self(int this1);
		static ::Dynamic get_self_dyn();

		static bool get_x(int this1);
		static ::Dynamic get_x_dyn();

		static bool get_y(int this1);
		static ::Dynamic get_y_dyn();

		static ::String toString(int this1);
		static ::Dynamic toString_dyn();

		static int fromBools(bool x,bool y);
		static ::Dynamic fromBools_dyn();

		static int fromString(::String axes);
		static ::Dynamic fromString_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxAxes

#endif /* INCLUDED_flixel_util__FlxAxes_FlxAxes_Impl_ */ 
