#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicArrowLeft
#include <flixel/system/debug/GraphicArrowLeft.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a7e581f07b396ffa_51_new,"flixel.system.debug.GraphicArrowLeft","new",0x89eb9442,"flixel.system.debug.GraphicArrowLeft.new","flixel/system/debug/FlxDebugger.hx",51,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicArrowLeft_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_a7e581f07b396ffa_51_new)
HXDLIN(  51)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicArrowLeft_obj::__CreateEmpty() { return new GraphicArrowLeft_obj; }

void *GraphicArrowLeft_obj::_hx_vtable = 0;

Dynamic GraphicArrowLeft_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicArrowLeft_obj > _hx_result = new GraphicArrowLeft_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicArrowLeft_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x0e9f7bb0;
	}
}


::hx::ObjectPtr< GraphicArrowLeft_obj > GraphicArrowLeft_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicArrowLeft_obj > __this = new GraphicArrowLeft_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicArrowLeft_obj > GraphicArrowLeft_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicArrowLeft_obj *__this = (GraphicArrowLeft_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicArrowLeft_obj), true, "flixel.system.debug.GraphicArrowLeft"));
	*(void **)__this = GraphicArrowLeft_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicArrowLeft_obj::GraphicArrowLeft_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicArrowLeft_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicArrowLeft_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicArrowLeft_obj::__mClass;

void GraphicArrowLeft_obj::__register()
{
	GraphicArrowLeft_obj _hx_dummy;
	GraphicArrowLeft_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.GraphicArrowLeft",50,0b,c0,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicArrowLeft_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicArrowLeft_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicArrowLeft_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
