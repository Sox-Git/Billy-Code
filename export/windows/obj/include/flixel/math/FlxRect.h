#ifndef INCLUDED_flixel_math_FlxRect
#define INCLUDED_flixel_math_FlxRect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FlxRect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxRect_obj OBJ_;
		FlxRect_obj();

	public:
		enum { _hx_ClassId = 0x7da4a0b2 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxRect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.math.FlxRect"); }
		static ::hx::ObjectPtr< FlxRect_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height);
		static ::hx::ObjectPtr< FlxRect_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_Width,::hx::Null< Float >  __o_Height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxRect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxRect",96,86,ff,db); }

		static void __boot();
		static  ::flixel::util::FlxPool _pool;
		static  ::flixel::math::FlxRect get(::hx::Null< Float >  X,::hx::Null< Float >  Y,::hx::Null< Float >  Width,::hx::Null< Float >  Height);
		static ::Dynamic get_dyn();

		static  ::flixel::math::FlxRect weak(::hx::Null< Float >  X,::hx::Null< Float >  Y,::hx::Null< Float >  Width,::hx::Null< Float >  Height);
		static ::Dynamic weak_dyn();

		static ::Dynamic get_pool();
		static ::Dynamic get_pool_dyn();

		Float x;
		Float y;
		Float width;
		Float height;
		bool _weak;
		bool _inPool;
		void put();
		::Dynamic put_dyn();

		void putWeak();
		::Dynamic putWeak_dyn();

		 ::flixel::math::FlxRect setSize(Float Width,Float Height);
		::Dynamic setSize_dyn();

		 ::flixel::math::FlxRect setPosition(Float x,Float y);
		::Dynamic setPosition_dyn();

		 ::flixel::math::FlxRect set(::hx::Null< Float >  X,::hx::Null< Float >  Y,::hx::Null< Float >  Width,::hx::Null< Float >  Height);
		::Dynamic set_dyn();

		 ::flixel::math::FlxRect copyFrom( ::flixel::math::FlxRect Rect);
		::Dynamic copyFrom_dyn();

		 ::flixel::math::FlxRect copyTo( ::flixel::math::FlxRect Rect);
		::Dynamic copyTo_dyn();

		 ::flixel::math::FlxRect copyFromFlash( ::openfl::geom::Rectangle FlashRect);
		::Dynamic copyFromFlash_dyn();

		 ::openfl::geom::Rectangle copyToFlash( ::openfl::geom::Rectangle FlashRect);
		::Dynamic copyToFlash_dyn();

		bool overlaps( ::flixel::math::FlxRect Rect);
		::Dynamic overlaps_dyn();

		bool containsPoint( ::flixel::math::FlxBasePoint point);
		::Dynamic containsPoint_dyn();

		bool containsXY(Float xPos,Float yPos);
		::Dynamic containsXY_dyn();

		 ::flixel::math::FlxRect _hx_union( ::flixel::math::FlxRect Rect);
		::Dynamic _hx_union_dyn();

		 ::flixel::math::FlxRect floor();
		::Dynamic floor_dyn();

		 ::flixel::math::FlxRect ceil();
		::Dynamic ceil_dyn();

		 ::flixel::math::FlxRect round();
		::Dynamic round_dyn();

		 ::flixel::math::FlxRect fromTwoPoints( ::flixel::math::FlxBasePoint Point1, ::flixel::math::FlxBasePoint Point2);
		::Dynamic fromTwoPoints_dyn();

		 ::flixel::math::FlxRect unionWithPoint( ::flixel::math::FlxBasePoint Point);
		::Dynamic unionWithPoint_dyn();

		 ::flixel::math::FlxRect offset(Float dx,Float dy);
		::Dynamic offset_dyn();

		 ::flixel::math::FlxRect getRotatedBounds(Float degrees, ::flixel::math::FlxBasePoint origin, ::flixel::math::FlxRect newRect);
		::Dynamic getRotatedBounds_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		bool equals( ::flixel::math::FlxRect rect);
		::Dynamic equals_dyn();

		 ::flixel::math::FlxRect intersection( ::flixel::math::FlxRect rect, ::flixel::math::FlxRect result);
		::Dynamic intersection_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		Float get_left();
		::Dynamic get_left_dyn();

		Float set_left(Float Value);
		::Dynamic set_left_dyn();

		Float get_right();
		::Dynamic get_right_dyn();

		Float set_right(Float Value);
		::Dynamic set_right_dyn();

		Float get_top();
		::Dynamic get_top_dyn();

		Float set_top(Float Value);
		::Dynamic set_top_dyn();

		Float get_bottom();
		::Dynamic get_bottom_dyn();

		Float set_bottom(Float Value);
		::Dynamic set_bottom_dyn();

		bool get_isEmpty();
		::Dynamic get_isEmpty_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxRect */ 
