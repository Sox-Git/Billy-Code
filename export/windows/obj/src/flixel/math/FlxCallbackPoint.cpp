#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxCallbackPoint
#include <flixel/math/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0e989bab684323cb_1595_new,"flixel.math.FlxCallbackPoint","new",0x2af621df,"flixel.math.FlxCallbackPoint.new","flixel/math/FlxPoint.hx",1595,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_0e989bab684323cb_1612_set,"flixel.math.FlxCallbackPoint","set",0x2af9ed21,"flixel.math.FlxCallbackPoint.set","flixel/math/FlxPoint.hx",1612,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_0e989bab684323cb_1620_set_x,"flixel.math.FlxCallbackPoint","set_x",0x4f288a9a,"flixel.math.FlxCallbackPoint.set_x","flixel/math/FlxPoint.hx",1620,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_0e989bab684323cb_1628_set_y,"flixel.math.FlxCallbackPoint","set_y",0x4f288a9b,"flixel.math.FlxCallbackPoint.set_y","flixel/math/FlxPoint.hx",1628,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_0e989bab684323cb_1636_destroy,"flixel.math.FlxCallbackPoint","destroy",0xdd08a9f9,"flixel.math.FlxCallbackPoint.destroy","flixel/math/FlxPoint.hx",1636,0xb3e1cd2c)
HX_LOCAL_STACK_FRAME(_hx_pos_0e989bab684323cb_1643_put,"flixel.math.FlxCallbackPoint","put",0x2af7b44e,"flixel.math.FlxCallbackPoint.put","flixel/math/FlxPoint.hx",1643,0xb3e1cd2c)
namespace flixel{
namespace math{

void FlxCallbackPoint_obj::__construct( ::Dynamic setXCallback, ::Dynamic setYCallback, ::Dynamic setXYCallback){
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_1595_new)
HXLINE(1596)		super::__construct(null(),null());
HXLINE(1598)		this->_setXCallback = setXCallback;
HXLINE(1599)		this->_setYCallback = setXYCallback;
HXLINE(1600)		this->_setXYCallback = setXYCallback;
HXLINE(1602)		if (::hx::IsNotNull( this->_setXCallback )) {
HXLINE(1604)			if (::hx::IsNull( this->_setYCallback )) {
HXLINE(1605)				this->_setYCallback = setXCallback;
            			}
HXLINE(1606)			if (::hx::IsNull( this->_setXYCallback )) {
HXLINE(1607)				this->_setXYCallback = setXCallback;
            			}
            		}
            	}

Dynamic FlxCallbackPoint_obj::__CreateEmpty() { return new FlxCallbackPoint_obj; }

void *FlxCallbackPoint_obj::_hx_vtable = 0;

Dynamic FlxCallbackPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxCallbackPoint_obj > _hx_result = new FlxCallbackPoint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxCallbackPoint_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x04527695) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x04527695;
	} else {
		return inClassId==(int)0x532cfc29;
	}
}

 ::flixel::math::FlxBasePoint FlxCallbackPoint_obj::set(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_1612_set)
HXLINE(1613)		this->super::set(x,y);
HXLINE(1614)		if (::hx::IsNotNull( this->_setXYCallback )) {
HXLINE(1615)			this->_setXYCallback(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(1616)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


Float FlxCallbackPoint_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_1620_set_x)
HXLINE(1621)		this->super::set_x(value);
HXLINE(1622)		if (::hx::IsNotNull( this->_setXCallback )) {
HXLINE(1623)			this->_setXCallback(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(1624)		return value;
            	}


Float FlxCallbackPoint_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_1628_set_y)
HXLINE(1629)		this->super::set_y(value);
HXLINE(1630)		if (::hx::IsNotNull( this->_setYCallback )) {
HXLINE(1631)			this->_setYCallback(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(1632)		return value;
            	}


void FlxCallbackPoint_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_1636_destroy)
HXLINE(1637)		this->super::destroy();
HXLINE(1638)		this->_setXCallback = null();
HXLINE(1639)		this->_setYCallback = null();
HXLINE(1640)		this->_setXYCallback = null();
            	}


void FlxCallbackPoint_obj::put(){
            	HX_STACKFRAME(&_hx_pos_0e989bab684323cb_1643_put)
            	}



::hx::ObjectPtr< FlxCallbackPoint_obj > FlxCallbackPoint_obj::__new( ::Dynamic setXCallback, ::Dynamic setYCallback, ::Dynamic setXYCallback) {
	::hx::ObjectPtr< FlxCallbackPoint_obj > __this = new FlxCallbackPoint_obj();
	__this->__construct(setXCallback,setYCallback,setXYCallback);
	return __this;
}

::hx::ObjectPtr< FlxCallbackPoint_obj > FlxCallbackPoint_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic setXCallback, ::Dynamic setYCallback, ::Dynamic setXYCallback) {
	FlxCallbackPoint_obj *__this = (FlxCallbackPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxCallbackPoint_obj), true, "flixel.math.FlxCallbackPoint"));
	*(void **)__this = FlxCallbackPoint_obj::_hx_vtable;
	__this->__construct(setXCallback,setYCallback,setXYCallback);
	return __this;
}

FlxCallbackPoint_obj::FlxCallbackPoint_obj()
{
}

void FlxCallbackPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxCallbackPoint);
	HX_MARK_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_MARK_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_MARK_MEMBER_NAME(_setXYCallback,"_setXYCallback");
	HX_MARK_END_CLASS();
}

void FlxCallbackPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_setXCallback,"_setXCallback");
	HX_VISIT_MEMBER_NAME(_setYCallback,"_setYCallback");
	HX_VISIT_MEMBER_NAME(_setXYCallback,"_setXYCallback");
}

::hx::Val FlxCallbackPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"put") ) { return ::hx::Val( put_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { return ::hx::Val( _setXCallback ); }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { return ::hx::Val( _setYCallback ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { return ::hx::Val( _setXYCallback ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxCallbackPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"_setXCallback") ) { _setXCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_setYCallback") ) { _setYCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setXYCallback") ) { _setXYCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxCallbackPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxCallbackPoint_obj,_setXCallback),HX_("_setXCallback",3a,e1,9f,40)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxCallbackPoint_obj,_setYCallback),HX_("_setYCallback",3b,4a,91,13)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxCallbackPoint_obj,_setXYCallback),HX_("_setXYCallback",49,36,58,b1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxCallbackPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxCallbackPoint_obj_sMemberFields[] = {
	HX_("_setXCallback",3a,e1,9f,40),
	HX_("_setYCallback",3b,4a,91,13),
	HX_("_setXYCallback",49,36,58,b1),
	HX_("set",a2,9b,57,00),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("destroy",fa,2c,86,24),
	HX_("put",cf,62,55,00),
	::String(null()) };

::hx::Class FlxCallbackPoint_obj::__mClass;

void FlxCallbackPoint_obj::__register()
{
	FlxCallbackPoint_obj _hx_dummy;
	FlxCallbackPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxCallbackPoint",6d,46,f2,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxCallbackPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxCallbackPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxCallbackPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxCallbackPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace math
