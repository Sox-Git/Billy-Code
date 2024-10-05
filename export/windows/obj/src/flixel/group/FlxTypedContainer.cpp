#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedContainer
#include <flixel/group/FlxTypedContainer.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_77762eb3314b9fd5_31_new,"flixel.group.FlxTypedContainer","new",0x137ecf5a,"flixel.group.FlxTypedContainer.new","flixel/group/FlxContainer.hx",31,0x932c444c)
HX_LOCAL_STACK_FRAME(_hx_pos_77762eb3314b9fd5_35_onMemberAdd,"flixel.group.FlxTypedContainer","onMemberAdd",0xadaea7c2,"flixel.group.FlxTypedContainer.onMemberAdd","flixel/group/FlxContainer.hx",35,0x932c444c)
HX_LOCAL_STACK_FRAME(_hx_pos_77762eb3314b9fd5_45_onMemberRemove,"flixel.group.FlxTypedContainer","onMemberRemove",0xdbae6143,"flixel.group.FlxTypedContainer.onMemberRemove","flixel/group/FlxContainer.hx",45,0x932c444c)
namespace flixel{
namespace group{

void FlxTypedContainer_obj::__construct(::hx::Null< int >  __o_maxSize){
            		int maxSize = __o_maxSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_77762eb3314b9fd5_31_new)
HXDLIN(  31)		super::__construct(maxSize);
            	}

Dynamic FlxTypedContainer_obj::__CreateEmpty() { return new FlxTypedContainer_obj; }

void *FlxTypedContainer_obj::_hx_vtable = 0;

Dynamic FlxTypedContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedContainer_obj > _hx_result = new FlxTypedContainer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxTypedContainer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x563293a6) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x563293a6;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxTypedContainer_obj::onMemberAdd( ::Dynamic member){
            	HX_STACKFRAME(&_hx_pos_77762eb3314b9fd5_35_onMemberAdd)
HXLINE(  37)		if (::hx::IsNotNull( ( ( ::flixel::FlxBasic)(member) )->get_container() )) {
HXLINE(  38)			( ( ::flixel::FlxBasic)(member) )->get_container()->remove(member,null()).StaticCast<  ::flixel::FlxBasic >();
            		}
HXLINE(  40)		( ( ::flixel::FlxBasic)(member) )->container = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  41)		this->super::onMemberAdd(member);
            	}


void FlxTypedContainer_obj::onMemberRemove( ::Dynamic member){
            	HX_STACKFRAME(&_hx_pos_77762eb3314b9fd5_45_onMemberRemove)
HXLINE(  46)		( ( ::flixel::FlxBasic)(member) )->container = null();
HXLINE(  47)		this->super::onMemberRemove(member);
            	}



::hx::ObjectPtr< FlxTypedContainer_obj > FlxTypedContainer_obj::__new(::hx::Null< int >  __o_maxSize) {
	::hx::ObjectPtr< FlxTypedContainer_obj > __this = new FlxTypedContainer_obj();
	__this->__construct(__o_maxSize);
	return __this;
}

::hx::ObjectPtr< FlxTypedContainer_obj > FlxTypedContainer_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_maxSize) {
	FlxTypedContainer_obj *__this = (FlxTypedContainer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedContainer_obj), true, "flixel.group.FlxTypedContainer"));
	*(void **)__this = FlxTypedContainer_obj::_hx_vtable;
	__this->__construct(__o_maxSize);
	return __this;
}

FlxTypedContainer_obj::FlxTypedContainer_obj()
{
}

::hx::Val FlxTypedContainer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"onMemberAdd") ) { return ::hx::Val( onMemberAdd_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onMemberRemove") ) { return ::hx::Val( onMemberRemove_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxTypedContainer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxTypedContainer_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedContainer_obj_sMemberFields[] = {
	HX_("onMemberAdd",c8,1e,95,da),
	HX_("onMemberRemove",fd,91,e3,ee),
	::String(null()) };

::hx::Class FlxTypedContainer_obj::__mClass;

void FlxTypedContainer_obj::__register()
{
	FlxTypedContainer_obj _hx_dummy;
	FlxTypedContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.group.FlxTypedContainer",68,da,21,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedContainer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace group