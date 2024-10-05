#ifndef INCLUDED_flixel_input_FlxKeyManager
#define INCLUDED_flixel_input_FlxKeyManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)

namespace flixel{
namespace input{


class HXCPP_CLASS_ATTRIBUTES FlxKeyManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxKeyManager_obj OBJ_;
		FlxKeyManager_obj();

	public:
		enum { _hx_ClassId = 0x5fcf46d2 };

		void __construct( ::Dynamic createKeyList);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.FlxKeyManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.FlxKeyManager"); }
		static ::hx::ObjectPtr< FlxKeyManager_obj > __new( ::Dynamic createKeyList);
		static ::hx::ObjectPtr< FlxKeyManager_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic createKeyList);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxKeyManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxKeyManager",80,0d,a1,b0); }

		bool enabled;
		::cpp::VirtualArray preventDefaultKeys;
		 ::Dynamic pressed;
		 ::Dynamic justPressed;
		 ::Dynamic released;
		 ::Dynamic justReleased;
		::Array< ::Dynamic> _keyListArray;
		 ::haxe::ds::IntMap _keyListMap;
		bool anyPressed(::cpp::VirtualArray KeyArray);
		::Dynamic anyPressed_dyn();

		bool anyJustPressed(::cpp::VirtualArray KeyArray);
		::Dynamic anyJustPressed_dyn();

		bool anyJustReleased(::cpp::VirtualArray KeyArray);
		::Dynamic anyJustReleased_dyn();

		int firstPressed();
		::Dynamic firstPressed_dyn();

		int firstJustPressed();
		::Dynamic firstJustPressed_dyn();

		int firstJustReleased();
		::Dynamic firstJustReleased_dyn();

		bool checkStatus( ::Dynamic KeyCode,int Status);
		::Dynamic checkStatus_dyn();

		bool checkStatusUnsafe( ::Dynamic KeyCode,int Status);
		::Dynamic checkStatusUnsafe_dyn();

		::Array< ::Dynamic> getIsDown();
		::Dynamic getIsDown_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void reset();
		::Dynamic reset_dyn();

		void update();
		::Dynamic update_dyn();

		bool checkKeyArrayState(::cpp::VirtualArray KeyArray,int State);
		::Dynamic checkKeyArrayState_dyn();

		virtual void onKeyUp( ::openfl::events::KeyboardEvent event);
		::Dynamic onKeyUp_dyn();

		virtual void onKeyDown( ::openfl::events::KeyboardEvent event);
		::Dynamic onKeyDown_dyn();

		void handlePreventDefaultKeys(int keyCode, ::openfl::events::KeyboardEvent event);
		::Dynamic handlePreventDefaultKeys_dyn();

		bool inKeyArray(::cpp::VirtualArray KeyArray, ::openfl::events::KeyboardEvent Event);
		::Dynamic inKeyArray_dyn();

		virtual int resolveKeyCode( ::openfl::events::KeyboardEvent e);
		::Dynamic resolveKeyCode_dyn();

		void updateKeyStates(int KeyCode,bool Down);
		::Dynamic updateKeyStates_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		 ::flixel::input::FlxInput getKey(int KeyCode);
		::Dynamic getKey_dyn();

};

} // end namespace flixel
} // end namespace input

#endif /* INCLUDED_flixel_input_FlxKeyManager */ 
