#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__NativeWindowSystemChrome_NativeWindowSystemChrome_Impl_
#include <openfl/display/_NativeWindowSystemChrome/NativeWindowSystemChrome_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e065275bef39ada1_41_fromInt,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_","fromInt",0x49fb5d50,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_.fromInt","openfl/display/NativeWindowSystemChrome.hx",41,0xb27ed582)
HX_LOCAL_STACK_FRAME(_hx_pos_e065275bef39ada1_46_fromString,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_","fromString",0x05948b10,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_.fromString","openfl/display/NativeWindowSystemChrome.hx",46,0xb27ed582)
HX_LOCAL_STACK_FRAME(_hx_pos_e065275bef39ada1_57_toInt,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_","toInt",0x83d86d1f,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_.toInt","openfl/display/NativeWindowSystemChrome.hx",57,0xb27ed582)
HX_LOCAL_STACK_FRAME(_hx_pos_e065275bef39ada1_62_toString,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_","toString",0x06de06a1,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_.toString","openfl/display/NativeWindowSystemChrome.hx",62,0xb27ed582)
HX_LOCAL_STACK_FRAME(_hx_pos_e065275bef39ada1_25_boot,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_","boot",0xbc715ba7,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_.boot","openfl/display/NativeWindowSystemChrome.hx",25,0xb27ed582)
HX_LOCAL_STACK_FRAME(_hx_pos_e065275bef39ada1_30_boot,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_","boot",0xbc715ba7,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_.boot","openfl/display/NativeWindowSystemChrome.hx",30,0xb27ed582)
HX_LOCAL_STACK_FRAME(_hx_pos_e065275bef39ada1_37_boot,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_","boot",0xbc715ba7,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_.boot","openfl/display/NativeWindowSystemChrome.hx",37,0xb27ed582)
namespace openfl{
namespace display{
namespace _NativeWindowSystemChrome{

void NativeWindowSystemChrome_Impl__obj::__construct() { }

Dynamic NativeWindowSystemChrome_Impl__obj::__CreateEmpty() { return new NativeWindowSystemChrome_Impl__obj; }

void *NativeWindowSystemChrome_Impl__obj::_hx_vtable = 0;

Dynamic NativeWindowSystemChrome_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeWindowSystemChrome_Impl__obj > _hx_result = new NativeWindowSystemChrome_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NativeWindowSystemChrome_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x58cb52ed;
}

 ::Dynamic NativeWindowSystemChrome_Impl__obj::ALTERNATE;

 ::Dynamic NativeWindowSystemChrome_Impl__obj::NONE;

 ::Dynamic NativeWindowSystemChrome_Impl__obj::STANDARD;

 ::Dynamic NativeWindowSystemChrome_Impl__obj::fromInt( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e065275bef39ada1_41_fromInt)
HXDLIN(  41)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowSystemChrome_Impl__obj,fromInt,return )

 ::Dynamic NativeWindowSystemChrome_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_e065275bef39ada1_46_fromString)
HXDLIN(  46)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("alternate",3a,c9,33,35)) ){
HXLINE(  48)			return 0;
HXDLIN(  48)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  49)			return 1;
HXDLIN(  49)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("standard",3d,37,78,ea)) ){
HXLINE(  50)			return 2;
HXDLIN(  50)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  51)			return null();
            		}
            		_hx_goto_1:;
HXLINE(  46)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowSystemChrome_Impl__obj,fromString,return )

 ::Dynamic NativeWindowSystemChrome_Impl__obj::toInt( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_e065275bef39ada1_57_toInt)
HXDLIN(  57)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowSystemChrome_Impl__obj,toInt,return )

::String NativeWindowSystemChrome_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_e065275bef39ada1_62_toString)
HXDLIN(  62)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  64)			return HX_("alternate",3a,c9,33,35);
HXDLIN(  64)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  65)			return HX_("none",b8,12,0a,49);
HXDLIN(  65)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  66)			return HX_("standard",3d,37,78,ea);
HXDLIN(  66)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE(  67)			return null();
            		}
            		_hx_goto_4:;
HXLINE(  62)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindowSystemChrome_Impl__obj,toString,return )


NativeWindowSystemChrome_Impl__obj::NativeWindowSystemChrome_Impl__obj()
{
}

bool NativeWindowSystemChrome_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NativeWindowSystemChrome_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo NativeWindowSystemChrome_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &NativeWindowSystemChrome_Impl__obj::ALTERNATE,HX_("ALTERNATE",1a,39,8c,30)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &NativeWindowSystemChrome_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &NativeWindowSystemChrome_Impl__obj::STANDARD,HX_("STANDARD",3d,c7,fd,43)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void NativeWindowSystemChrome_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeWindowSystemChrome_Impl__obj::ALTERNATE,"ALTERNATE");
	HX_MARK_MEMBER_NAME(NativeWindowSystemChrome_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(NativeWindowSystemChrome_Impl__obj::STANDARD,"STANDARD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeWindowSystemChrome_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeWindowSystemChrome_Impl__obj::ALTERNATE,"ALTERNATE");
	HX_VISIT_MEMBER_NAME(NativeWindowSystemChrome_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(NativeWindowSystemChrome_Impl__obj::STANDARD,"STANDARD");
};

#endif

::hx::Class NativeWindowSystemChrome_Impl__obj::__mClass;

static ::String NativeWindowSystemChrome_Impl__obj_sStaticFields[] = {
	HX_("ALTERNATE",1a,39,8c,30),
	HX_("NONE",b8,da,ca,33),
	HX_("STANDARD",3d,c7,fd,43),
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromString",db,2d,74,54),
	HX_("toInt",34,be,11,14),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void NativeWindowSystemChrome_Impl__obj::__register()
{
	NativeWindowSystemChrome_Impl__obj _hx_dummy;
	NativeWindowSystemChrome_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_",19,bd,d7,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeWindowSystemChrome_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NativeWindowSystemChrome_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeWindowSystemChrome_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NativeWindowSystemChrome_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeWindowSystemChrome_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeWindowSystemChrome_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeWindowSystemChrome_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NativeWindowSystemChrome_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e065275bef39ada1_25_boot)
HXDLIN(  25)		ALTERNATE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e065275bef39ada1_30_boot)
HXDLIN(  30)		NONE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e065275bef39ada1_37_boot)
HXDLIN(  37)		STANDARD = 2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _NativeWindowSystemChrome
