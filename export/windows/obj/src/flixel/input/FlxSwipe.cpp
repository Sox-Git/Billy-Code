#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_223f15e5be8ee429_33_new,"flixel.input.FlxSwipe","new",0xecc12d70,"flixel.input.FlxSwipe.new","flixel/input/FlxSwipe.hx",33,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_42_destroy,"flixel.input.FlxSwipe","destroy",0xc5cf520a,"flixel.input.FlxSwipe.destroy","flixel/input/FlxSwipe.hx",42,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_49_toString,"flixel.input.FlxSwipe","toString",0xb726199c,"flixel.input.FlxSwipe.toString","flixel/input/FlxSwipe.hx",49,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_61_get_distance,"flixel.input.FlxSwipe","get_distance",0xd139c82e,"flixel.input.FlxSwipe.get_distance","flixel/input/FlxSwipe.hx",61,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_66_get_angle,"flixel.input.FlxSwipe","get_angle",0xc834293a,"flixel.input.FlxSwipe.get_angle","flixel/input/FlxSwipe.hx",66,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_71_get_degrees,"flixel.input.FlxSwipe","get_degrees",0x43fe30ce,"flixel.input.FlxSwipe.get_degrees","flixel/input/FlxSwipe.hx",71,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_76_get_radians,"flixel.input.FlxSwipe","get_radians",0x30939399,"flixel.input.FlxSwipe.get_radians","flixel/input/FlxSwipe.hx",76,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_81_get_duration,"flixel.input.FlxSwipe","get_duration",0x79ce444d,"flixel.input.FlxSwipe.get_duration","flixel/input/FlxSwipe.hx",81,0xe38cac7e)
namespace flixel{
namespace input{

void FlxSwipe_obj::__construct(int ID, ::flixel::math::FlxBasePoint StartPosition, ::flixel::math::FlxBasePoint EndPosition,int StartTimeInTicks){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_33_new)
HXLINE(  34)		this->ID = ID;
HXLINE(  35)		this->startPosition = StartPosition;
HXLINE(  36)		this->endPosition = EndPosition;
HXLINE(  37)		this->_startTimeInTicks = StartTimeInTicks;
HXLINE(  38)		this->_endTimeInTicks = ::flixel::FlxG_obj::game->ticks;
            	}

Dynamic FlxSwipe_obj::__CreateEmpty() { return new FlxSwipe_obj; }

void *FlxSwipe_obj::_hx_vtable = 0;

Dynamic FlxSwipe_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSwipe_obj > _hx_result = new FlxSwipe_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxSwipe_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37477ab6;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_FlxSwipe__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::FlxSwipe_obj::destroy,
};

void *FlxSwipe_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_input_FlxSwipe__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxSwipe_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_42_destroy)
HXLINE(  43)		this->startPosition = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->startPosition)) );
HXLINE(  44)		this->endPosition = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->endPosition)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,destroy,(void))

::String FlxSwipe_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_49_toString)
HXLINE(  50)		 ::Dynamic value = this->ID;
HXDLIN(  50)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  50)		_this->label = HX_("ID",db,3f,00,00);
HXDLIN(  50)		_this->value = value;
HXLINE(  51)		 ::Dynamic value1 = this->startPosition;
HXDLIN(  51)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  51)		_this1->label = HX_("start",62,74,0b,84);
HXDLIN(  51)		_this1->value = value1;
HXLINE(  52)		 ::Dynamic value2 = this->endPosition;
HXDLIN(  52)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  52)		_this2->label = HX_("end",db,03,4d,00);
HXDLIN(  52)		_this2->value = value2;
HXLINE(  53)		Float dx = (this->startPosition->x - this->endPosition->x);
HXDLIN(  53)		Float dy = (this->startPosition->y - this->endPosition->y);
HXDLIN(  53)		 ::Dynamic value3 = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
HXDLIN(  53)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  53)		_this3->label = HX_("distance",35,93,f9,6b);
HXDLIN(  53)		_this3->value = value3;
HXLINE(  54)		 ::flixel::math::FlxBasePoint this1 = this->startPosition;
HXDLIN(  54)		 ::flixel::math::FlxBasePoint point = this->endPosition;
HXDLIN(  54)		Float x = (point->x - this1->x);
HXDLIN(  54)		Float y = (point->y - this1->y);
HXDLIN(  54)		 ::Dynamic value4 = (::Math_obj::atan2(y,x) * (( (Float)(180) ) / ::Math_obj::PI));
HXDLIN(  54)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  54)		_this4->label = HX_("degrees",a7,e3,5a,3a);
HXDLIN(  54)		_this4->value = value4;
HXLINE(  55)		 ::Dynamic value5 = (( (Float)((this->_endTimeInTicks - this->_startTimeInTicks)) ) / ( (Float)(1000) ));
HXDLIN(  55)		 ::flixel::util::LabelValuePair _this5 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN(  55)		_this5->label = HX_("duration",54,0f,8e,14);
HXDLIN(  55)		_this5->value = value5;
HXLINE(  49)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(6)->init(0,_this)->init(1,_this1)->init(2,_this2)->init(3,_this3)->init(4,_this4)->init(5,_this5));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,toString,return )

Float FlxSwipe_obj::get_distance(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_61_get_distance)
HXDLIN(  61)		Float dx = (this->startPosition->x - this->endPosition->x);
HXDLIN(  61)		Float dy = (this->startPosition->y - this->endPosition->y);
HXDLIN(  61)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_distance,return )

Float FlxSwipe_obj::get_angle(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_66_get_angle)
HXDLIN(  66)		 ::flixel::math::FlxBasePoint this1 = this->startPosition;
HXDLIN(  66)		 ::flixel::math::FlxBasePoint point = this->endPosition;
HXDLIN(  66)		Float x = (point->x - this1->x);
HXDLIN(  66)		Float y = (point->y - this1->y);
HXDLIN(  66)		return (::Math_obj::atan2(y,x) * (( (Float)(180) ) / ::Math_obj::PI));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_angle,return )

Float FlxSwipe_obj::get_degrees(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_71_get_degrees)
HXDLIN(  71)		 ::flixel::math::FlxBasePoint this1 = this->startPosition;
HXDLIN(  71)		 ::flixel::math::FlxBasePoint point = this->endPosition;
HXDLIN(  71)		Float x = (point->x - this1->x);
HXDLIN(  71)		Float y = (point->y - this1->y);
HXDLIN(  71)		return (::Math_obj::atan2(y,x) * (( (Float)(180) ) / ::Math_obj::PI));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_degrees,return )

Float FlxSwipe_obj::get_radians(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_76_get_radians)
HXDLIN(  76)		 ::flixel::math::FlxBasePoint this1 = this->startPosition;
HXDLIN(  76)		 ::flixel::math::FlxBasePoint point = this->endPosition;
HXDLIN(  76)		Float x = (point->x - this1->x);
HXDLIN(  76)		Float y = (point->y - this1->y);
HXDLIN(  76)		return ::Math_obj::atan2(y,x);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_radians,return )

Float FlxSwipe_obj::get_duration(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_81_get_duration)
HXDLIN(  81)		return (( (Float)((this->_endTimeInTicks - this->_startTimeInTicks)) ) / ( (Float)(1000) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_duration,return )


::hx::ObjectPtr< FlxSwipe_obj > FlxSwipe_obj::__new(int ID, ::flixel::math::FlxBasePoint StartPosition, ::flixel::math::FlxBasePoint EndPosition,int StartTimeInTicks) {
	::hx::ObjectPtr< FlxSwipe_obj > __this = new FlxSwipe_obj();
	__this->__construct(ID,StartPosition,EndPosition,StartTimeInTicks);
	return __this;
}

::hx::ObjectPtr< FlxSwipe_obj > FlxSwipe_obj::__alloc(::hx::Ctx *_hx_ctx,int ID, ::flixel::math::FlxBasePoint StartPosition, ::flixel::math::FlxBasePoint EndPosition,int StartTimeInTicks) {
	FlxSwipe_obj *__this = (FlxSwipe_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSwipe_obj), true, "flixel.input.FlxSwipe"));
	*(void **)__this = FlxSwipe_obj::_hx_vtable;
	__this->__construct(ID,StartPosition,EndPosition,StartTimeInTicks);
	return __this;
}

FlxSwipe_obj::FlxSwipe_obj()
{
}

void FlxSwipe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSwipe);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(startPosition,"startPosition");
	HX_MARK_MEMBER_NAME(endPosition,"endPosition");
	HX_MARK_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_MARK_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxSwipe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(startPosition,"startPosition");
	HX_VISIT_MEMBER_NAME(endPosition,"endPosition");
	HX_VISIT_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_VISIT_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
}

::hx::Val FlxSwipe_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ::hx::Val( ID ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_angle() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"degrees") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_degrees() ); }
		if (HX_FIELD_EQ(inName,"radians") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_radians() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_distance() ); }
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_duration() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_angle") ) { return ::hx::Val( get_angle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { return ::hx::Val( endPosition ); }
		if (HX_FIELD_EQ(inName,"get_degrees") ) { return ::hx::Val( get_degrees_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_radians") ) { return ::hx::Val( get_radians_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return ::hx::Val( get_distance_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return ::hx::Val( get_duration_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { return ::hx::Val( startPosition ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { return ::hx::Val( _endTimeInTicks ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { return ::hx::Val( _startTimeInTicks ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSwipe_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { endPosition=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { startPosition=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { _endTimeInTicks=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { _startTimeInTicks=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSwipe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ID",db,3f,00,00));
	outFields->push(HX_("startPosition",2b,03,b6,cf));
	outFields->push(HX_("endPosition",a4,33,b9,82));
	outFields->push(HX_("distance",35,93,f9,6b));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("degrees",a7,e3,5a,3a));
	outFields->push(HX_("radians",72,46,f0,26));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("_startTimeInTicks",e1,34,b7,36));
	outFields->push(HX_("_endTimeInTicks",48,30,b2,c2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSwipe_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxSwipe_obj,ID),HX_("ID",db,3f,00,00)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSwipe_obj,startPosition),HX_("startPosition",2b,03,b6,cf)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxSwipe_obj,endPosition),HX_("endPosition",a4,33,b9,82)},
	{::hx::fsInt,(int)offsetof(FlxSwipe_obj,_startTimeInTicks),HX_("_startTimeInTicks",e1,34,b7,36)},
	{::hx::fsInt,(int)offsetof(FlxSwipe_obj,_endTimeInTicks),HX_("_endTimeInTicks",48,30,b2,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSwipe_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSwipe_obj_sMemberFields[] = {
	HX_("ID",db,3f,00,00),
	HX_("startPosition",2b,03,b6,cf),
	HX_("endPosition",a4,33,b9,82),
	HX_("_startTimeInTicks",e1,34,b7,36),
	HX_("_endTimeInTicks",48,30,b2,c2),
	HX_("destroy",fa,2c,86,24),
	HX_("toString",ac,d0,6e,38),
	HX_("get_distance",3e,47,13,21),
	HX_("get_angle",2a,a0,8b,66),
	HX_("get_degrees",be,43,55,c0),
	HX_("get_radians",89,a6,ea,ac),
	HX_("get_duration",5d,c3,a7,c9),
	::String(null()) };

::hx::Class FlxSwipe_obj::__mClass;

void FlxSwipe_obj::__register()
{
	FlxSwipe_obj _hx_dummy;
	FlxSwipe_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.FlxSwipe",7e,f5,e9,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSwipe_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSwipe_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSwipe_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSwipe_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
