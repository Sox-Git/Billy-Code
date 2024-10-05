#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicInteractive
#include <flixel/system/debug/GraphicInteractive.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8e56f9cbe4884d6a_60_new,"flixel.system.debug.GraphicInteractive","new",0x8c45a4b4,"flixel.system.debug.GraphicInteractive.new","flixel/system/debug/FlxDebugger.hx",60,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicInteractive_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_8e56f9cbe4884d6a_60_new)
HXDLIN(  60)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicInteractive_obj::__CreateEmpty() { return new GraphicInteractive_obj; }

void *GraphicInteractive_obj::_hx_vtable = 0;

Dynamic GraphicInteractive_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicInteractive_obj > _hx_result = new GraphicInteractive_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicInteractive_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x79ecc322;
	}
}


::hx::ObjectPtr< GraphicInteractive_obj > GraphicInteractive_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicInteractive_obj > __this = new GraphicInteractive_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicInteractive_obj > GraphicInteractive_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicInteractive_obj *__this = (GraphicInteractive_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicInteractive_obj), true, "flixel.system.debug.GraphicInteractive"));
	*(void **)__this = GraphicInteractive_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicInteractive_obj::GraphicInteractive_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicInteractive_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicInteractive_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicInteractive_obj::__mClass;

void GraphicInteractive_obj::__register()
{
	GraphicInteractive_obj _hx_dummy;
	GraphicInteractive_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.GraphicInteractive",c2,7a,08,b3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicInteractive_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicInteractive_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicInteractive_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug