#ifndef INCLUDED_flixel_tweens_misc_FlickerTween
#define INCLUDED_flixel_tweens_misc_FlickerTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,misc,FlickerTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace tweens{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES FlickerTween_obj : public  ::flixel::tweens::FlxTween_obj
{
	public:
		typedef  ::flixel::tweens::FlxTween_obj super;
		typedef FlickerTween_obj OBJ_;
		FlickerTween_obj();

	public:
		enum { _hx_ClassId = 0x063e39c7 };

		void __construct( ::Dynamic options, ::flixel::tweens::FlxTweenManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.misc.FlickerTween")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tweens.misc.FlickerTween"); }
		static ::hx::ObjectPtr< FlickerTween_obj > __new( ::Dynamic options, ::flixel::tweens::FlxTweenManager manager);
		static ::hx::ObjectPtr< FlickerTween_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic options, ::flixel::tweens::FlxTweenManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlickerTween_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlickerTween",73,c8,6e,5b); }

		static bool defaultTweenFunction( ::flixel::tweens::misc::FlickerTween tween);
		static ::Dynamic defaultTweenFunction_dyn();

		 ::flixel::FlxBasic basic;
		 ::Dynamic tweenFunction;
		Dynamic tweenFunction_dyn() { return tweenFunction;}
		bool endVisibility;
		Float period;
		Float ratio;
		void destroy();

		 ::flixel::tweens::misc::FlickerTween tween( ::flixel::FlxBasic basic,Float duration,Float period);
		::Dynamic tween_dyn();

		void update(Float elapsed);

		void onEnd();

		bool isTweenOf( ::Dynamic object,::String field);

};

} // end namespace flixel
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_flixel_tweens_misc_FlickerTween */ 
