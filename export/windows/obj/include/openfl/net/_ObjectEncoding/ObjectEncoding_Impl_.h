#ifndef INCLUDED_openfl_net__ObjectEncoding_ObjectEncoding_Impl_
#define INCLUDED_openfl_net__ObjectEncoding_ObjectEncoding_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,net,IDynamicPropertyWriter)
HX_DECLARE_CLASS3(openfl,net,_ObjectEncoding,ObjectEncoding_Impl_)

namespace openfl{
namespace net{
namespace _ObjectEncoding{


class HXCPP_CLASS_ATTRIBUTES ObjectEncoding_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ObjectEncoding_Impl__obj OBJ_;
		ObjectEncoding_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6c2beb76 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.net._ObjectEncoding.ObjectEncoding_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.net._ObjectEncoding.ObjectEncoding_Impl_"); }

		inline static ::hx::ObjectPtr< ObjectEncoding_Impl__obj > __new() {
			::hx::ObjectPtr< ObjectEncoding_Impl__obj > __this = new ObjectEncoding_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ObjectEncoding_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ObjectEncoding_Impl__obj *__this = (ObjectEncoding_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ObjectEncoding_Impl__obj), false, "openfl.net._ObjectEncoding.ObjectEncoding_Impl_"));
			*(void **)__this = ObjectEncoding_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ObjectEncoding_Impl__obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ObjectEncoding_Impl_",f2,d8,a0,55); }

		static void __boot();
		static ::Dynamic dynamicPropertyWriter;
		static int AMF0;
		static int AMF3;
		static int HXSF;
		static int JSON;
		static int DEFAULT;
};

} // end namespace openfl
} // end namespace net
} // end namespace _ObjectEncoding

#endif /* INCLUDED_openfl_net__ObjectEncoding_ObjectEncoding_Impl_ */ 
