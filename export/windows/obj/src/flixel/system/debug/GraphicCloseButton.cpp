#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicCloseButton
#include <flixel/system/debug/GraphicCloseButton.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9923fe68235644cc_57_new,"flixel.system.debug.GraphicCloseButton","new",0xf0ec029c,"flixel.system.debug.GraphicCloseButton.new","flixel/system/debug/FlxDebugger.hx",57,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicCloseButton_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_9923fe68235644cc_57_new)
HXDLIN(  57)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicCloseButton_obj::__CreateEmpty() { return new GraphicCloseButton_obj; }

void *GraphicCloseButton_obj::_hx_vtable = 0;

Dynamic GraphicCloseButton_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicCloseButton_obj > _hx_result = new GraphicCloseButton_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicCloseButton_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x71d8cf26;
	}
}


::hx::ObjectPtr< GraphicCloseButton_obj > GraphicCloseButton_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicCloseButton_obj > __this = new GraphicCloseButton_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicCloseButton_obj > GraphicCloseButton_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicCloseButton_obj *__this = (GraphicCloseButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicCloseButton_obj), true, "flixel.system.debug.GraphicCloseButton"));
	*(void **)__this = GraphicCloseButton_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicCloseButton_obj::GraphicCloseButton_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicCloseButton_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicCloseButton_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicCloseButton_obj::__mClass;

void GraphicCloseButton_obj::__register()
{
	GraphicCloseButton_obj _hx_dummy;
	GraphicCloseButton_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.GraphicCloseButton",aa,c4,df,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicCloseButton_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicCloseButton_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicCloseButton_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
