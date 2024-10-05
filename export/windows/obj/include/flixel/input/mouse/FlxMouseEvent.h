#ifndef INCLUDED_flixel_input_mouse_FlxMouseEvent
#define INCLUDED_flixel_input_mouse_FlxMouseEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouseEvent)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouseEventManager)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace mouse{


class HXCPP_CLASS_ATTRIBUTES FlxMouseEvent_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxMouseEvent_obj OBJ_;
		FlxMouseEvent_obj();

	public:
		enum { _hx_ClassId = 0x790dbc50 };

		void __construct( ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,bool mouseChildren,bool mouseEnabled,bool pixelPerfect,::Array< int > mouseButtons);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.mouse.FlxMouseEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.mouse.FlxMouseEvent"); }
		static ::hx::ObjectPtr< FlxMouseEvent_obj > __new( ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,bool mouseChildren,bool mouseEnabled,bool pixelPerfect,::Array< int > mouseButtons);
		static ::hx::ObjectPtr< FlxMouseEvent_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,bool mouseChildren,bool mouseEnabled,bool pixelPerfect,::Array< int > mouseButtons);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxMouseEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxMouseEvent",a7,96,e9,c1); }

		static  ::flixel::input::mouse::FlxMouseEventManager globalManager;
		static  ::Dynamic add( ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,::hx::Null< bool >  mouseChildren,::hx::Null< bool >  mouseEnabled,::hx::Null< bool >  pixelPerfect,::Array< int > mouseButtons);
		static ::Dynamic add_dyn();

		static  ::Dynamic remove( ::Dynamic object);
		static ::Dynamic remove_dyn();

		static void removeAll();
		static ::Dynamic removeAll_dyn();

		static void reorder();
		static ::Dynamic reorder_dyn();

		static void setMouseDownCallback( ::Dynamic object, ::Dynamic onMouseDown);
		static ::Dynamic setMouseDownCallback_dyn();

		static void setMouseUpCallback( ::Dynamic object, ::Dynamic onMouseUp);
		static ::Dynamic setMouseUpCallback_dyn();

		static void setMouseClickCallback( ::Dynamic object, ::Dynamic onMouseClick);
		static ::Dynamic setMouseClickCallback_dyn();

		static void setMouseDoubleClickCallback( ::Dynamic object, ::Dynamic onMouseDoubleClick);
		static ::Dynamic setMouseDoubleClickCallback_dyn();

		static void setMouseOverCallback( ::Dynamic object, ::Dynamic onMouseOver);
		static ::Dynamic setMouseOverCallback_dyn();

		static void setMouseOutCallback( ::Dynamic object, ::Dynamic onMouseOut);
		static ::Dynamic setMouseOutCallback_dyn();

		static void setMouseMoveCallback( ::Dynamic object, ::Dynamic onMouseMove);
		static ::Dynamic setMouseMoveCallback_dyn();

		static void setMouseWheelCallback( ::Dynamic object, ::Dynamic onMouseWheel);
		static ::Dynamic setMouseWheelCallback_dyn();

		static void setObjectMouseEnabled( ::Dynamic object,bool mouseEnabled);
		static ::Dynamic setObjectMouseEnabled_dyn();

		static bool isObjectMouseEnabled( ::Dynamic object);
		static ::Dynamic isObjectMouseEnabled_dyn();

		static void setObjectMouseChildren( ::Dynamic object,bool mouseChildren);
		static ::Dynamic setObjectMouseChildren_dyn();

		static bool isObjectMouseChildren( ::Dynamic object);
		static ::Dynamic isObjectMouseChildren_dyn();

		static void setObjectMouseButtons( ::Dynamic object,::Array< int > mouseButtons);
		static ::Dynamic setObjectMouseButtons_dyn();

		 ::flixel::FlxObject object;
		 ::Dynamic onMouseDown;
		Dynamic onMouseDown_dyn() { return onMouseDown;}
		 ::Dynamic onMouseUp;
		Dynamic onMouseUp_dyn() { return onMouseUp;}
		 ::Dynamic onMouseClick;
		Dynamic onMouseClick_dyn() { return onMouseClick;}
		 ::Dynamic onMouseDoubleClick;
		Dynamic onMouseDoubleClick_dyn() { return onMouseDoubleClick;}
		 ::Dynamic onMouseOver;
		Dynamic onMouseOver_dyn() { return onMouseOver;}
		 ::Dynamic onMouseOut;
		Dynamic onMouseOut_dyn() { return onMouseOut;}
		 ::Dynamic onMouseMove;
		Dynamic onMouseMove_dyn() { return onMouseMove;}
		 ::Dynamic onMouseWheel;
		Dynamic onMouseWheel_dyn() { return onMouseWheel;}
		bool mouseChildren;
		bool mouseEnabled;
		bool pixelPerfect;
		 ::flixel::FlxSprite sprite;
		::Array< int > mouseButtons;
		 ::Dynamic currentMouseButton;
		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace mouse

#endif /* INCLUDED_flixel_input_mouse_FlxMouseEvent */ 
