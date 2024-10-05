#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedContainer
#include <flixel/group/FlxTypedContainer.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#include <flixel/sound/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f119275e66a7b90_7_new,"MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",7,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_10_create,"MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",10,0xdfbcb22c)
HX_LOCAL_STACK_FRAME(_hx_pos_1f119275e66a7b90_39_update,"MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",39,0xdfbcb22c)

void MenuState_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_7_new)
HXDLIN(   7)		super::__construct();
            	}

Dynamic MenuState_obj::__CreateEmpty() { return new MenuState_obj; }

void *MenuState_obj::_hx_vtable = 0;

Dynamic MenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuState_obj > _hx_result = new MenuState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x563293a6) {
			if (inClassId<=(int)0x32c1072e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x32c1072e;
			} else {
				return inClassId==(int)0x563293a6;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1f119275e66a7b90_10_create)
HXLINE(  11)		this->super::create();
HXLINE(  12)		 ::flixel::FlxSprite BG =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  13)		BG->loadGraphic(HX_("assets/images/Menu/Main/bg.png",d1,21,7d,7e),null(),null(),null(),null(),null());
HXLINE(  14)		this->add(BG);
HXLINE(  16)		 ::flixel::FlxSprite BB1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  17)		BB1->loadGraphic(HX_("assets/images/Menu/Main/bb1.png",bb,da,cc,bd),null(),null(),null(),null(),null());
HXLINE(  18)		this->add(BB1);
HXLINE(  19)		BB1->set_y(( (Float)(100) ));
HXLINE(  20)		BB1->set_x(( (Float)(50) ));
HXLINE(  22)		 ::flixel::FlxSprite bb2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  23)		bb2->loadGraphic(HX_("assets/images/Menu/Main/bb2.png",3c,6f,33,51),null(),null(),null(),null(),null());
HXLINE(  24)		this->add(bb2);
HXLINE(  25)		bb2->set_y(( (Float)(100) ));
HXLINE(  26)		bb2->set_x(( (Float)(350) ));
HXLINE(  28)		 ::flixel::FlxSprite bb3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  29)		bb3->loadGraphic(HX_("assets/images/Menu/Main/bb3.png",bd,03,9a,e4),null(),null(),null(),null(),null());
HXLINE(  30)		this->add(bb3);
HXLINE(  31)		bb3->set_y(( (Float)(100) ));
HXLINE(  32)		bb3->set_x(( (Float)(650) ));
HXLINE(  34)		::flixel::FlxG_obj::sound->playMusic(HX_("assets/music/BB1/TitleTheme1.ogg",2d,5e,1e,5e),1,true,null());
            	}


void MenuState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_1f119275e66a7b90_39_update)
HXDLIN(  39)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< MenuState_obj > MenuState_obj::__new() {
	::hx::ObjectPtr< MenuState_obj > __this = new MenuState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MenuState_obj > MenuState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MenuState_obj *__this = (MenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuState_obj), true, "MenuState"));
	*(void **)__this = MenuState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MenuState_obj::MenuState_obj()
{
}

::hx::Val MenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MenuState_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuState_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	MenuState_obj _hx_dummy;
	MenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuState",d2,bf,b6,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

