#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicArrowRight
#include <flixel/system/debug/GraphicArrowRight.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d12d58443e0e0eba_54_new,"flixel.system.debug.GraphicArrowRight","new",0x7bbb3ee5,"flixel.system.debug.GraphicArrowRight.new","flixel/system/debug/FlxDebugger.hx",54,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicArrowRight_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_d12d58443e0e0eba_54_new)
HXDLIN(  54)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicArrowRight_obj::__CreateEmpty() { return new GraphicArrowRight_obj; }

void *GraphicArrowRight_obj::_hx_vtable = 0;

Dynamic GraphicArrowRight_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicArrowRight_obj > _hx_result = new GraphicArrowRight_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicArrowRight_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x33f9cc13;
	}
}


::hx::ObjectPtr< GraphicArrowRight_obj > GraphicArrowRight_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicArrowRight_obj > __this = new GraphicArrowRight_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicArrowRight_obj > GraphicArrowRight_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicArrowRight_obj *__this = (GraphicArrowRight_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicArrowRight_obj), true, "flixel.system.debug.GraphicArrowRight"));
	*(void **)__this = GraphicArrowRight_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicArrowRight_obj::GraphicArrowRight_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicArrowRight_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicArrowRight_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicArrowRight_obj::__mClass;

void GraphicArrowRight_obj::__register()
{
	GraphicArrowRight_obj _hx_dummy;
	GraphicArrowRight_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.GraphicArrowRight",73,e8,56,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicArrowRight_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicArrowRight_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicArrowRight_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug