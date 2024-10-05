#include <hxcpp.h>

#ifndef INCLUDED_openfl_desktop_Icon
#include <openfl/desktop/Icon.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dc6c6a3398d1b432_15_new,"openfl.desktop.Icon","new",0x7c78c87b,"openfl.desktop.Icon.new","openfl/desktop/Icon.hx",15,0x1229ba93)
namespace openfl{
namespace desktop{

void Icon_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dc6c6a3398d1b432_15_new)
HXLINE(  51)		this->bitmaps = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  19)		super::__construct(null());
            	}

Dynamic Icon_obj::__CreateEmpty() { return new Icon_obj; }

void *Icon_obj::_hx_vtable = 0;

Dynamic Icon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Icon_obj > _hx_result = new Icon_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Icon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x2de3da5d;
	}
}


::hx::ObjectPtr< Icon_obj > Icon_obj::__new() {
	::hx::ObjectPtr< Icon_obj > __this = new Icon_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Icon_obj > Icon_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Icon_obj *__this = (Icon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Icon_obj), true, "openfl.desktop.Icon"));
	*(void **)__this = Icon_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Icon_obj::Icon_obj()
{
}

void Icon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Icon);
	HX_MARK_MEMBER_NAME(bitmaps,"bitmaps");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Icon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmaps,"bitmaps");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Icon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bitmaps") ) { return ::hx::Val( bitmaps ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Icon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"bitmaps") ) { bitmaps=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Icon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitmaps",a4,e1,81,f9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Icon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Icon_obj,bitmaps),HX_("bitmaps",a4,e1,81,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Icon_obj_sStaticStorageInfo = 0;
#endif

static ::String Icon_obj_sMemberFields[] = {
	HX_("bitmaps",a4,e1,81,f9),
	::String(null()) };

::hx::Class Icon_obj::__mClass;

void Icon_obj::__register()
{
	Icon_obj _hx_dummy;
	Icon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.desktop.Icon",09,6f,be,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Icon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Icon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Icon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Icon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace desktop
