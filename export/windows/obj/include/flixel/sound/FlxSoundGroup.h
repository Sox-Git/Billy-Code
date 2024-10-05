#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#define INCLUDED_flixel_sound_FlxSoundGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,sound,FlxSound)
HX_DECLARE_CLASS2(flixel,sound,FlxSoundGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace sound{


class HXCPP_CLASS_ATTRIBUTES FlxSoundGroup_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxSoundGroup_obj OBJ_;
		FlxSoundGroup_obj();

	public:
		enum { _hx_ClassId = 0x3a01b90f };

		void __construct(::hx::Null< Float >  __o_volume);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.sound.FlxSoundGroup")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.sound.FlxSoundGroup"); }
		static ::hx::ObjectPtr< FlxSoundGroup_obj > __new(::hx::Null< Float >  __o_volume);
		static ::hx::ObjectPtr< FlxSoundGroup_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_volume);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSoundGroup_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxSoundGroup",e2,a2,91,31); }

		::Array< ::Dynamic> sounds;
		Float volume;
		bool add( ::flixel::sound::FlxSound sound);
		::Dynamic add_dyn();

		bool remove( ::flixel::sound::FlxSound sound);
		::Dynamic remove_dyn();

		void pause();
		::Dynamic pause_dyn();

		void resume();
		::Dynamic resume_dyn();

		Float set_volume(Float volume);
		::Dynamic set_volume_dyn();

};

} // end namespace flixel
} // end namespace sound

#endif /* INCLUDED_flixel_sound_FlxSoundGroup */ 
