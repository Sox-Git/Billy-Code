#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)



class HXCPP_CLASS_ATTRIBUTES AssetPaths_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();

	public:
		enum { _hx_ClassId = 0x78a931fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="AssetPaths")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"AssetPaths"); }

		inline static ::hx::ObjectPtr< AssetPaths_obj > __new() {
			::hx::ObjectPtr< AssetPaths_obj > __this = new AssetPaths_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AssetPaths_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AssetPaths_obj *__this = (AssetPaths_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetPaths_obj), false, "AssetPaths"));
			*(void **)__this = AssetPaths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetPaths",3e,0f,e6,60); }

		static void __boot();
		static ::String billy_dead_text__png;
		static ::String billyidle__png;
		static ::String billywalkLEFT__png;
		static ::String billywalkRIGHT__png;
		static ::String chromosome1__png;
		static ::String chromosome2__png;
		static ::String chromosome3__png;
		static ::String dont_touch__png;
		static ::String hand__png;
		static ::String red_zone__png;
		static ::String stage1__png;
		static ::String stage2__png;
		static ::String stage3__png;
		static ::String this_is_a_chromosome__png;
		static ::String copy__png;
		static ::String creds__png;
		static ::String menu__png;
		static ::String shameless_plug__png;
		static ::String a3932218fd2160bf357a7fe1e06621d2__png;
		static ::String e3e66ddc9817357eb2b64cc7ea0c8db6__png;
		static ::String e7463e36d366f2c02a23aeb5948bb95c__png;
		static ::String thank__png;
		static ::String billy_title__png;
		static ::String press_space__png;
		static ::String secret__png;
		static ::String billy_story__png;
		static ::String story__png;
		static ::String cursor__png;
		static ::String bb1__png;
		static ::String bb2__png;
		static ::String bb3__png;
		static ::String bg__png;
		static ::String chromosomes__wav;
		static ::String detroit_clean__wav;
		static ::String Theme_of_my_dead_goldfish__wav;
		static ::String TitleTheme1__ogg;
		static ::String death__mp3;
		static ::String fart__wav;
		static ::String pop__wav;
		static ::Array< ::String > allFiles;
};


#endif /* INCLUDED_AssetPaths */ 
