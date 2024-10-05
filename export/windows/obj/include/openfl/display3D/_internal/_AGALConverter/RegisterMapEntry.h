#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_RegisterMapEntry
#define INCLUDED_openfl_display3D__internal__AGALConverter_RegisterMapEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b60bca42a6d00202_819_new)
HX_DECLARE_CLASS4(openfl,display3D,_internal,_AGALConverter,RegisterMapEntry)
HX_DECLARE_CLASS4(openfl,display3D,_internal,_AGALConverter,RegisterUsage)

namespace openfl{
namespace display3D{
namespace _internal{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES RegisterMapEntry_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RegisterMapEntry_obj OBJ_;
		RegisterMapEntry_obj();

	public:
		enum { _hx_ClassId = 0x7e000aca };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D._internal._AGALConverter.RegisterMapEntry")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display3D._internal._AGALConverter.RegisterMapEntry"); }

		inline static ::hx::ObjectPtr< RegisterMapEntry_obj > __new() {
			::hx::ObjectPtr< RegisterMapEntry_obj > __this = new RegisterMapEntry_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< RegisterMapEntry_obj > __alloc(::hx::Ctx *_hx_ctx) {
			RegisterMapEntry_obj *__this = (RegisterMapEntry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RegisterMapEntry_obj), true, "openfl.display3D._internal._AGALConverter.RegisterMapEntry"));
			*(void **)__this = RegisterMapEntry_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b60bca42a6d00202_819_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RegisterMapEntry_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RegisterMapEntry",d9,c1,86,00); }

		::String name;
		int number;
		int type;
		 ::openfl::display3D::_internal::_AGALConverter::RegisterUsage usage;
};

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl_display3D__internal__AGALConverter_RegisterMapEntry */ 
