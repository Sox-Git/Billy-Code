#ifndef INCLUDED_flixel_math_FlxVelocity
#define INCLUDED_flixel_math_FlxVelocity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxVelocity)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace math{


class HXCPP_CLASS_ATTRIBUTES FlxVelocity_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxVelocity_obj OBJ_;
		FlxVelocity_obj();

	public:
		enum { _hx_ClassId = 0x083cfec7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.math.FlxVelocity")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.math.FlxVelocity"); }

		inline static ::hx::ObjectPtr< FlxVelocity_obj > __new() {
			::hx::ObjectPtr< FlxVelocity_obj > __this = new FlxVelocity_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxVelocity_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxVelocity_obj *__this = (FlxVelocity_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxVelocity_obj), false, "flixel.math.FlxVelocity"));
			*(void **)__this = FlxVelocity_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxVelocity_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxVelocity",8f,dc,14,36); }

		static void moveTowardsObject( ::flixel::FlxSprite Source, ::flixel::FlxSprite Dest,::hx::Null< Float >  Speed,::hx::Null< int >  MaxTime);
		static ::Dynamic moveTowardsObject_dyn();

		static void accelerateTowardsObject( ::flixel::FlxSprite Source, ::flixel::FlxSprite Dest,Float Acceleration,Float MaxSpeed);
		static ::Dynamic accelerateTowardsObject_dyn();

		static void moveTowardsMouse( ::flixel::FlxSprite Source,::hx::Null< Float >  Speed,::hx::Null< int >  MaxTime);
		static ::Dynamic moveTowardsMouse_dyn();

		static void accelerateTowardsMouse( ::flixel::FlxSprite Source,Float Acceleration,Float MaxSpeed);
		static ::Dynamic accelerateTowardsMouse_dyn();

		static void moveTowardsPoint( ::flixel::FlxSprite Source, ::flixel::math::FlxBasePoint Target,::hx::Null< Float >  Speed,::hx::Null< int >  MaxTime);
		static ::Dynamic moveTowardsPoint_dyn();

		static void accelerateTowardsPoint( ::flixel::FlxSprite Source, ::flixel::math::FlxBasePoint Target,Float Acceleration,Float MaxSpeed);
		static ::Dynamic accelerateTowardsPoint_dyn();

		static  ::flixel::math::FlxBasePoint velocityFromAngle(Float Angle,Float Speed);
		static ::Dynamic velocityFromAngle_dyn();

		static  ::flixel::math::FlxBasePoint velocityFromFacing( ::flixel::FlxSprite Parent,Float Speed);
		static ::Dynamic velocityFromFacing_dyn();

		static Float computeVelocity(Float Velocity,Float Acceleration,Float Drag,Float Max,Float Elapsed);
		static ::Dynamic computeVelocity_dyn();

		static void accelerateFromAngle( ::flixel::FlxSprite source,Float radians,Float acceleration,Float maxSpeed,::hx::Null< bool >  resetVelocity);
		static ::Dynamic accelerateFromAngle_dyn();

};

} // end namespace flixel
} // end namespace math

#endif /* INCLUDED_flixel_math_FlxVelocity */ 
