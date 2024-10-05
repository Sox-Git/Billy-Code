#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_86aaea01378aa57b_26_new,"flixel.input.keyboard.FlxKeyboard","new",0xa12d657a,"flixel.input.keyboard.FlxKeyboard.new","flixel/input/keyboard/FlxKeyboard.hx",26,0x41882875)
HX_DEFINE_STACK_FRAME(_hx_pos_86aaea01378aa57b_25_new,"flixel.input.keyboard.FlxKeyboard","new",0xa12d657a,"flixel.input.keyboard.FlxKeyboard.new","flixel/input/keyboard/FlxKeyboard.hx",25,0x41882875)
HX_LOCAL_STACK_FRAME(_hx_pos_86aaea01378aa57b_100_onKeyUp,"flixel.input.keyboard.FlxKeyboard","onKeyUp",0xa36f8255,"flixel.input.keyboard.FlxKeyboard.onKeyUp","flixel/input/keyboard/FlxKeyboard.hx",100,0x41882875)
HX_LOCAL_STACK_FRAME(_hx_pos_86aaea01378aa57b_113_onKeyDown,"flixel.input.keyboard.FlxKeyboard","onKeyDown",0xf4d786dc,"flixel.input.keyboard.FlxKeyboard.onKeyDown","flixel/input/keyboard/FlxKeyboard.hx",113,0x41882875)
HX_LOCAL_STACK_FRAME(_hx_pos_86aaea01378aa57b_125_resolveKeyCode,"flixel.input.keyboard.FlxKeyboard","resolveKeyCode",0x581c5a06,"flixel.input.keyboard.FlxKeyboard.resolveKeyCode","flixel/input/keyboard/FlxKeyboard.hx",125,0x41882875)
HX_LOCAL_STACK_FRAME(_hx_pos_86aaea01378aa57b_143_record,"flixel.input.keyboard.FlxKeyboard","record",0x38ad8db7,"flixel.input.keyboard.FlxKeyboard.record","flixel/input/keyboard/FlxKeyboard.hx",143,0x41882875)
HX_LOCAL_STACK_FRAME(_hx_pos_86aaea01378aa57b_172_playback,"flixel.input.keyboard.FlxKeyboard","playback",0x84dcbec1,"flixel.input.keyboard.FlxKeyboard.playback","flixel/input/keyboard/FlxKeyboard.hx",172,0x41882875)
namespace flixel{
namespace input{
namespace keyboard{

void FlxKeyboard_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		 ::flixel::input::keyboard::FlxKeyList _hx_run(int status, ::flixel::input::FlxKeyManager keyManager){
            			HX_GC_STACKFRAME(&_hx_pos_86aaea01378aa57b_26_new)
HXLINE(  26)			return  ::flixel::input::keyboard::FlxKeyList_obj::__alloc( HX_CTX ,status,keyManager);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_86aaea01378aa57b_25_new)
HXLINE(  26)		super::__construct( ::Dynamic(new _hx_Closure_0()));
HXLINE(  32)		{
HXLINE(  32)			 ::Dynamic code = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->iterator();
HXDLIN(  32)			while(( (bool)(code->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  32)				int code1 = ( (int)(code->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  34)				bool _hx_tmp;
HXDLIN(  34)				if ((code1 != -2)) {
HXLINE(  34)					_hx_tmp = (code1 != -1);
            				}
            				else {
HXLINE(  34)					_hx_tmp = false;
            				}
HXDLIN(  34)				if (_hx_tmp) {
HXLINE(  36)					 ::flixel::input::FlxInput input =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,code1);
HXLINE(  37)					this->_keyListArray->push(input);
HXLINE(  38)					this->_keyListMap->set(code1,input);
            				}
            			}
            		}
HXLINE(  43)		this->_nativeCorrection =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  45)		this->_nativeCorrection->set(HX_("0_64",2d,83,02,20),45);
HXLINE(  46)		this->_nativeCorrection->set(HX_("0_65",2e,83,02,20),35);
HXLINE(  47)		this->_nativeCorrection->set(HX_("0_67",30,83,02,20),34);
HXLINE(  48)		this->_nativeCorrection->set(HX_("0_69",32,83,02,20),-1);
HXLINE(  49)		this->_nativeCorrection->set(HX_("0_73",0b,84,02,20),33);
HXLINE(  50)		this->_nativeCorrection->set(HX_("0_266",23,3d,2d,e2),46);
HXLINE(  51)		this->_nativeCorrection->set(HX_("123_222",a5,bc,d4,8f),219);
HXLINE(  52)		this->_nativeCorrection->set(HX_("125_187",a5,28,a1,b6),221);
HXLINE(  53)		this->_nativeCorrection->set(HX_("126_233",08,7b,08,4a),192);
HXLINE(  54)		this->_nativeCorrection->set(HX_("0_43",6e,81,02,20),187);
HXLINE(  56)		this->_nativeCorrection->set(HX_("0_80",e7,84,02,20),112);
HXLINE(  57)		this->_nativeCorrection->set(HX_("0_81",e8,84,02,20),113);
HXLINE(  58)		this->_nativeCorrection->set(HX_("0_82",e9,84,02,20),114);
HXLINE(  59)		this->_nativeCorrection->set(HX_("0_83",ea,84,02,20),115);
HXLINE(  60)		this->_nativeCorrection->set(HX_("0_84",eb,84,02,20),116);
HXLINE(  61)		this->_nativeCorrection->set(HX_("0_85",ec,84,02,20),117);
HXLINE(  62)		this->_nativeCorrection->set(HX_("0_86",ed,84,02,20),118);
HXLINE(  63)		this->_nativeCorrection->set(HX_("0_87",ee,84,02,20),119);
HXLINE(  64)		this->_nativeCorrection->set(HX_("0_88",ef,84,02,20),120);
HXLINE(  65)		this->_nativeCorrection->set(HX_("0_89",f0,84,02,20),121);
HXLINE(  66)		this->_nativeCorrection->set(HX_("0_90",c6,85,02,20),122);
HXLINE(  68)		this->_nativeCorrection->set(HX_("48_224",f9,a0,f0,47),48);
HXLINE(  69)		this->_nativeCorrection->set(HX_("49_38",5f,96,cb,16),49);
HXLINE(  70)		this->_nativeCorrection->set(HX_("50_233",2e,5a,17,13),50);
HXLINE(  71)		this->_nativeCorrection->set(HX_("51_34",e4,75,e8,a4),51);
HXLINE(  72)		this->_nativeCorrection->set(HX_("52_222",50,82,e4,39),52);
HXLINE(  73)		this->_nativeCorrection->set(HX_("53_40",fd,e3,3a,a6),53);
HXLINE(  74)		this->_nativeCorrection->set(HX_("54_189",52,ee,b0,60),54);
HXLINE(  75)		this->_nativeCorrection->set(HX_("55_232",b2,40,18,f4),55);
HXLINE(  76)		this->_nativeCorrection->set(HX_("56_95",3a,8c,36,a8),56);
HXLINE(  77)		this->_nativeCorrection->set(HX_("57_231",b3,69,e5,1a),57);
HXLINE(  79)		this->_nativeCorrection->set(HX_("48_64",59,62,22,16),96);
HXLINE(  80)		this->_nativeCorrection->set(HX_("49_65",f9,98,cb,16),97);
HXLINE(  81)		this->_nativeCorrection->set(HX_("50_66",e4,41,3f,a4),98);
HXLINE(  82)		this->_nativeCorrection->set(HX_("51_67",84,78,e8,a4),99);
HXLINE(  83)		this->_nativeCorrection->set(HX_("52_68",24,af,91,a5),100);
HXLINE(  84)		this->_nativeCorrection->set(HX_("53_69",c4,e5,3a,a6),101);
HXLINE(  85)		this->_nativeCorrection->set(HX_("54_70",39,1d,e4,a6),102);
HXLINE(  86)		this->_nativeCorrection->set(HX_("55_71",d9,53,8d,a7),103);
HXLINE(  87)		this->_nativeCorrection->set(HX_("56_72",79,8a,36,a8),104);
HXLINE(  88)		this->_nativeCorrection->set(HX_("57_73",19,c1,df,a8),105);
HXLINE(  90)		this->_nativeCorrection->set(HX_("43_75",1e,52,d4,12),107);
HXLINE(  91)		this->_nativeCorrection->set(HX_("45_77",5e,bf,26,14),109);
HXLINE(  92)		this->_nativeCorrection->set(HX_("47_79",9e,2c,79,15),191);
HXLINE(  93)		this->_nativeCorrection->set(HX_("46_78",fe,f5,cf,14),110);
HXLINE(  94)		this->_nativeCorrection->set(HX_("42_74",7e,1b,2b,12),106);
            	}

Dynamic FlxKeyboard_obj::__CreateEmpty() { return new FlxKeyboard_obj; }

void *FlxKeyboard_obj::_hx_vtable = 0;

Dynamic FlxKeyboard_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxKeyboard_obj > _hx_result = new FlxKeyboard_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxKeyboard_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4ba0dea4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4ba0dea4;
	} else {
		return inClassId==(int)0x5fcf46d2;
	}
}

void FlxKeyboard_obj::onKeyUp( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_86aaea01378aa57b_100_onKeyUp)
HXDLIN( 100)		this->super::onKeyUp(event);
            	}


void FlxKeyboard_obj::onKeyDown( ::openfl::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_86aaea01378aa57b_113_onKeyDown)
HXDLIN( 113)		this->super::onKeyDown(event);
            	}


int FlxKeyboard_obj::resolveKeyCode( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_86aaea01378aa57b_125_resolveKeyCode)
HXLINE( 129)		 ::Dynamic code = this->_nativeCorrection->get(((e->charCode + HX_("_",5f,00,00,00)) + e->keyCode));
HXLINE( 130)		if (::hx::IsNull( code )) {
HXLINE( 130)			return e->keyCode;
            		}
            		else {
HXLINE( 130)			return ( (int)(code) );
            		}
HXDLIN( 130)		return 0;
            	}


::Array< ::Dynamic> FlxKeyboard_obj::record(){
            	HX_GC_STACKFRAME(&_hx_pos_86aaea01378aa57b_143_record)
HXLINE( 144)		::Array< ::Dynamic> data = null();
HXLINE( 146)		{
HXLINE( 146)			int _g = 0;
HXDLIN( 146)			::Array< ::Dynamic> _g1 = this->_keyListArray;
HXDLIN( 146)			while((_g < _g1->length)){
HXLINE( 146)				 ::flixel::input::FlxInput key = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 146)				_g = (_g + 1);
HXLINE( 148)				bool _hx_tmp;
HXDLIN( 148)				if (::hx::IsNotNull( key )) {
HXLINE( 148)					if ((key->current != 0)) {
HXLINE( 148)						_hx_tmp = (key->current == -1);
            					}
            					else {
HXLINE( 148)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 148)					_hx_tmp = true;
            				}
HXDLIN( 148)				if (_hx_tmp) {
HXLINE( 150)					continue;
            				}
HXLINE( 153)				if (::hx::IsNull( data )) {
HXLINE( 155)					data = ::Array_obj< ::Dynamic>::__new();
            				}
HXLINE( 158)				data->push( ::flixel::_hx_system::replay::CodeValuePair_obj::__alloc( HX_CTX ,( (int)(key->ID) ),key->current));
            			}
            		}
HXLINE( 161)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,record,return )

void FlxKeyboard_obj::playback(::Array< ::Dynamic> Record){
            	HX_STACKFRAME(&_hx_pos_86aaea01378aa57b_172_playback)
HXLINE( 173)		int i = 0;
HXLINE( 174)		int l = Record->length;
HXLINE( 176)		while((i < l)){
HXLINE( 178)			i = (i + 1);
HXDLIN( 178)			 ::flixel::_hx_system::replay::CodeValuePair o = Record->__get((i - 1)).StaticCast<  ::flixel::_hx_system::replay::CodeValuePair >();
HXLINE( 179)			 ::flixel::input::FlxInput o2 = ( ( ::flixel::input::FlxInput)(this->_keyListMap->get(o->code)) );
HXLINE( 180)			o2->current = o->value;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,playback,(void))


::hx::ObjectPtr< FlxKeyboard_obj > FlxKeyboard_obj::__new() {
	::hx::ObjectPtr< FlxKeyboard_obj > __this = new FlxKeyboard_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxKeyboard_obj > FlxKeyboard_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxKeyboard_obj *__this = (FlxKeyboard_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxKeyboard_obj), true, "flixel.input.keyboard.FlxKeyboard"));
	*(void **)__this = FlxKeyboard_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxKeyboard_obj::FlxKeyboard_obj()
{
}

void FlxKeyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyboard);
	HX_MARK_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
	 ::flixel::input::FlxKeyManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxKeyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
	 ::flixel::input::FlxKeyManager_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxKeyboard_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"record") ) { return ::hx::Val( record_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return ::hx::Val( onKeyUp_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return ::hx::Val( playback_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resolveKeyCode") ) { return ::hx::Val( resolveKeyCode_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { return ::hx::Val( _nativeCorrection ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxKeyboard_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { _nativeCorrection=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_nativeCorrection",74,82,e1,11));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxKeyboard_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FlxKeyboard_obj,_nativeCorrection),HX_("_nativeCorrection",74,82,e1,11)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxKeyboard_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxKeyboard_obj_sMemberFields[] = {
	HX_("_nativeCorrection",74,82,e1,11),
	HX_("onKeyUp",3b,58,3c,75),
	HX_("onKeyDown",42,22,f2,73),
	HX_("resolveKeyCode",e0,ac,16,f4),
	HX_("record",91,76,ec,fd),
	HX_("playback",1b,12,4b,46),
	::String(null()) };

::hx::Class FlxKeyboard_obj::__mClass;

void FlxKeyboard_obj::__register()
{
	FlxKeyboard_obj _hx_dummy;
	FlxKeyboard_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.keyboard.FlxKeyboard",88,e0,02,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxKeyboard_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxKeyboard_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxKeyboard_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxKeyboard_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
