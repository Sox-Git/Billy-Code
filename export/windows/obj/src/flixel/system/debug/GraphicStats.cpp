#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicStats
#include <flixel/system/debug/GraphicStats.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_72648bfda28cf679_39_new,"flixel.system.debug.GraphicStats","new",0xb5925771,"flixel.system.debug.GraphicStats.new","flixel/system/debug/FlxDebugger.hx",39,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicStats_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_72648bfda28cf679_39_new)
HXDLIN(  39)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicStats_obj::__CreateEmpty() { return new GraphicStats_obj; }

void *GraphicStats_obj::_hx_vtable = 0;

Dynamic GraphicStats_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicStats_obj > _hx_result = new GraphicStats_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicStats_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x2f838b5f;
	}
}


::hx::ObjectPtr< GraphicStats_obj > GraphicStats_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicStats_obj > __this = new GraphicStats_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicStats_obj > GraphicStats_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicStats_obj *__this = (GraphicStats_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicStats_obj), true, "flixel.system.debug.GraphicStats"));
	*(void **)__this = GraphicStats_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicStats_obj::GraphicStats_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicStats_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicStats_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicStats_obj::__mClass;

void GraphicStats_obj::__register()
{
	GraphicStats_obj _hx_dummy;
	GraphicStats_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.GraphicStats",ff,ca,fb,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicStats_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicStats_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicStats_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
