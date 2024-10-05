#ifndef INCLUDED_flixel_sound_FlxSound
#define INCLUDED_flixel_sound_FlxSound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,sound,FlxSound)
HX_DECLARE_CLASS2(flixel,sound,FlxSoundGroup)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)

namespace flixel{
namespace sound{


class HXCPP_CLASS_ATTRIBUTES FlxSound_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxSound_obj OBJ_;
		FlxSound_obj();

	public:
		enum { _hx_ClassId = 0x49283010 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.sound.FlxSound")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.sound.FlxSound"); }
		static ::hx::ObjectPtr< FlxSound_obj > __new();
		static ::hx::ObjectPtr< FlxSound_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSound_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxSound",1d,97,a6,3d); }

		Float x;
		Float y;
		bool persist;
		::String name;
		::String artist;
		Float amplitude;
		Float amplitudeLeft;
		Float amplitudeRight;
		bool autoDestroy;
		 ::Dynamic onComplete;
		Dynamic onComplete_dyn() { return onComplete;}
		 ::flixel::sound::FlxSoundGroup group;
		bool looped;
		Float loopTime;
		 ::Dynamic endTime;
		 ::flixel::tweens::FlxTween fadeTween;
		 ::openfl::media::Sound _sound;
		 ::openfl::media::SoundChannel _channel;
		 ::openfl::media::SoundTransform _transform;
		bool _paused;
		Float _volume;
		Float _time;
		Float _length;
		Float _pitch;
		Float _volumeAdjust;
		 ::flixel::FlxObject _target;
		Float _radius;
		bool _proximityPan;
		bool _alreadyPaused;
		void reset();
		::Dynamic reset_dyn();

		void destroy();

		void update(Float elapsed);

		void kill();

		 ::flixel::sound::FlxSound loadEmbedded( ::Dynamic EmbeddedSound,::hx::Null< bool >  Looped,::hx::Null< bool >  AutoDestroy, ::Dynamic OnComplete);
		::Dynamic loadEmbedded_dyn();

		 ::flixel::sound::FlxSound loadStream(::String SoundURL,::hx::Null< bool >  Looped,::hx::Null< bool >  AutoDestroy, ::Dynamic OnComplete, ::Dynamic OnLoad);
		::Dynamic loadStream_dyn();

		 ::flixel::sound::FlxSound init(::hx::Null< bool >  Looped,::hx::Null< bool >  AutoDestroy, ::Dynamic OnComplete);
		::Dynamic init_dyn();

		 ::flixel::sound::FlxSound proximity(Float X,Float Y, ::flixel::FlxObject TargetObject,Float Radius,::hx::Null< bool >  Pan);
		::Dynamic proximity_dyn();

		 ::flixel::sound::FlxSound play(::hx::Null< bool >  ForceRestart,::hx::Null< Float >  StartTime, ::Dynamic EndTime);
		::Dynamic play_dyn();

		 ::flixel::sound::FlxSound resume();
		::Dynamic resume_dyn();

		 ::flixel::sound::FlxSound pause();
		::Dynamic pause_dyn();

		 ::flixel::sound::FlxSound stop();
		::Dynamic stop_dyn();

		 ::flixel::sound::FlxSound fadeOut(::hx::Null< Float >  Duration, ::Dynamic To, ::Dynamic onComplete);
		::Dynamic fadeOut_dyn();

		 ::flixel::sound::FlxSound fadeIn(::hx::Null< Float >  Duration,::hx::Null< Float >  From,::hx::Null< Float >  To, ::Dynamic onComplete);
		::Dynamic fadeIn_dyn();

		void volumeTween(Float f);
		::Dynamic volumeTween_dyn();

		Float getActualVolume();
		::Dynamic getActualVolume_dyn();

		void setPosition(::hx::Null< Float >  X,::hx::Null< Float >  Y);
		::Dynamic setPosition_dyn();

		void updateTransform();
		::Dynamic updateTransform_dyn();

		void startSound(Float StartTime);
		::Dynamic startSound_dyn();

		void stopped( ::openfl::events::Event _);
		::Dynamic stopped_dyn();

		void cleanup(bool destroySound,::hx::Null< bool >  resetPosition);
		::Dynamic cleanup_dyn();

		void gotID3( ::openfl::events::Event _);
		::Dynamic gotID3_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		 ::flixel::sound::FlxSoundGroup set_group( ::flixel::sound::FlxSoundGroup value);
		::Dynamic set_group_dyn();

		bool get_playing();
		::Dynamic get_playing_dyn();

		Float get_volume();
		::Dynamic get_volume_dyn();

		Float set_volume(Float Volume);
		::Dynamic set_volume_dyn();

		Float get_pitch();
		::Dynamic get_pitch_dyn();

		Float set_pitch(Float v);
		::Dynamic set_pitch_dyn();

		Float get_pan();
		::Dynamic get_pan_dyn();

		Float set_pan(Float pan);
		::Dynamic set_pan_dyn();

		Float get_time();
		::Dynamic get_time_dyn();

		Float set_time(Float time);
		::Dynamic set_time_dyn();

		Float get_length();
		::Dynamic get_length_dyn();

		virtual ::String toString();

};

} // end namespace flixel
} // end namespace sound

#endif /* INCLUDED_flixel_sound_FlxSound */ 