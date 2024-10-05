#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Int_Void
#include <lime/app/_Event_Float_Float_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_Void
#include <lime/app/_Event_Float_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_lime_ui_MouseButton_Void
#include <lime/app/_Event_Float_Float_lime_ui_MouseButton_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Float_Float_lime_ui_MouseWheelMode_Void
#include <lime/app/_Event_Float_Float_lime_ui_MouseWheelMode_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Int_Int_Void
#include <lime/app/_Event_String_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_graphics_RenderContext_Void
#include <lime/app/_Event_lime_graphics_RenderContext_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Window_Void
#include <lime/app/_Event_lime_ui_Window_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_ui_MouseWheelMode
#include <lime/ui/MouseWheelMode.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_desktop_NativeApplication
#include <openfl/desktop/NativeApplication.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_NativeWindow
#include <openfl/display/NativeWindow.h>
#endif
#ifndef INCLUDED_openfl_display_NativeWindowInitOptions
#include <openfl/display/NativeWindowInitOptions.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_InvokeEvent
#include <openfl/events/InvokeEvent.h>
#endif
#ifndef INCLUDED_openfl_filesystem_File
#include <openfl/filesystem/File.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_Lib
#include <openfl/utils/_internal/Lib.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_548c78caa19a1a14_42_new,"openfl.display.Application","new",0x436ec718,"openfl.display.Application.new","openfl/display/Application.hx",42,0xe1d30bda)
HX_LOCAL_STACK_FRAME(_hx_pos_548c78caa19a1a14_67_createWindow,"openfl.display.Application","createWindow",0xc33e4654,"openfl.display.Application.createWindow","openfl/display/Application.hx",67,0xe1d30bda)
HX_LOCAL_STACK_FRAME(_hx_pos_548c78caa19a1a14_61_createWindow,"openfl.display.Application","createWindow",0xc33e4654,"openfl.display.Application.createWindow","openfl/display/Application.hx",61,0xe1d30bda)
HX_LOCAL_STACK_FRAME(_hx_pos_548c78caa19a1a14_120_exec,"openfl.display.Application","exec",0xb79addd9,"openfl.display.Application.exec","openfl/display/Application.hx",120,0xe1d30bda)
HX_LOCAL_STACK_FRAME(_hx_pos_548c78caa19a1a14_114_exec,"openfl.display.Application","exec",0xb79addd9,"openfl.display.Application.exec","openfl/display/Application.hx",114,0xe1d30bda)
HX_LOCAL_STACK_FRAME(_hx_pos_548c78caa19a1a14_136___checkForAllWindowsClosed,"openfl.display.Application","__checkForAllWindowsClosed",0xa974cb57,"openfl.display.Application.__checkForAllWindowsClosed","openfl/display/Application.hx",136,0xe1d30bda)
HX_LOCAL_STACK_FRAME(_hx_pos_548c78caa19a1a14_159___onModuleExit,"openfl.display.Application","__onModuleExit",0x2077d751,"openfl.display.Application.__onModuleExit","openfl/display/Application.hx",159,0xe1d30bda)
HX_LOCAL_STACK_FRAME(_hx_pos_548c78caa19a1a14_33_boot,"openfl.display.Application","boot",0xb5986e7a,"openfl.display.Application.boot","openfl/display/Application.hx",33,0xe1d30bda)
namespace openfl{
namespace display{

void Application_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_548c78caa19a1a14_42_new)
HXLINE(  44)		super::__construct();
HXLINE(  47)		if (::hx::IsNull( ::openfl::utils::_internal::Lib_obj::application )) {
HXLINE(  49)			::openfl::utils::_internal::Lib_obj::application = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  53)		if (::hx::IsNull( ::openfl::utils::_internal::Lib_obj::current )) {
HXLINE(  53)			::openfl::utils::_internal::Lib_obj::current =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            		}
HXLINE(  54)		::openfl::utils::_internal::Lib_obj::current->_hx___loaderInfo = ::openfl::display::LoaderInfo_obj::create(null());
HXLINE(  55)		::openfl::utils::_internal::Lib_obj::current->_hx___loaderInfo->content = ::openfl::utils::_internal::Lib_obj::current;
            	}

Dynamic Application_obj::__CreateEmpty() { return new Application_obj; }

void *Application_obj::_hx_vtable = 0;

Dynamic Application_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Application_obj > _hx_result = new Application_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Application_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x431bf104) {
		if (inClassId<=(int)0x169c11fe) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x169c11fe;
		} else {
			return inClassId==(int)0x431bf104;
		}
	} else {
		return inClassId==(int)0x7f8386d8;
	}
}

 ::lime::ui::Window Application_obj::createWindow( ::Dynamic attributes){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::lime::ui::Window,window1, ::Dynamic,_g) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_548c78caa19a1a14_67_createWindow)
HXLINE(  67)			_g(window1);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_548c78caa19a1a14_61_createWindow)
HXLINE(  62)		 ::openfl::display::Window window =  ::openfl::display::Window_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),attributes);
HXLINE(  64)		this->_hx___windows->push(window);
HXLINE(  65)		this->_hx___windowByID->set(window->id,( ( ::lime::ui::Window)(window) ));
HXLINE(  67)		 ::Dynamic _g = this->_hx___onWindowClose_dyn();
HXDLIN(  67)		 ::lime::ui::Window window1 = window;
HXDLIN(  67)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(window1,_g));
HXDLIN(  67)		window->onClose->add(_hx_tmp,false,-10000);
HXLINE(  69)		if (::hx::IsNull( this->_hx___window )) {
HXLINE(  71)			this->_hx___window = window;
HXLINE(  73)			window->onActivate->add(this->onWindowActivate_dyn(),null(),null());
HXLINE(  74)			window->onRenderContextLost->add(this->onRenderContextLost_dyn(),null(),null());
HXLINE(  75)			window->onRenderContextRestored->add(this->onRenderContextRestored_dyn(),null(),null());
HXLINE(  76)			window->onDeactivate->add(this->onWindowDeactivate_dyn(),null(),null());
HXLINE(  77)			window->onDropFile->add(this->onWindowDropFile_dyn(),null(),null());
HXLINE(  78)			window->onEnter->add(this->onWindowEnter_dyn(),null(),null());
HXLINE(  79)			window->onExpose->add(this->onWindowExpose_dyn(),null(),null());
HXLINE(  80)			window->onFocusIn->add(this->onWindowFocusIn_dyn(),null(),null());
HXLINE(  81)			window->onFocusOut->add(this->onWindowFocusOut_dyn(),null(),null());
HXLINE(  82)			window->onFullscreen->add(this->onWindowFullscreen_dyn(),null(),null());
HXLINE(  83)			window->onKeyDown->add(this->onKeyDown_dyn(),null(),null());
HXLINE(  84)			window->onKeyUp->add(this->onKeyUp_dyn(),null(),null());
HXLINE(  85)			window->onLeave->add(this->onWindowLeave_dyn(),null(),null());
HXLINE(  86)			window->onMinimize->add(this->onWindowMinimize_dyn(),null(),null());
HXLINE(  87)			window->onMouseDown->add(this->onMouseDown_dyn(),null(),null());
HXLINE(  88)			window->onMouseMove->add(this->onMouseMove_dyn(),null(),null());
HXLINE(  89)			window->onMouseMoveRelative->add(this->onMouseMoveRelative_dyn(),null(),null());
HXLINE(  90)			window->onMouseUp->add(this->onMouseUp_dyn(),null(),null());
HXLINE(  91)			window->onMouseWheel->add(this->onMouseWheel_dyn(),null(),null());
HXLINE(  92)			window->onMove->add(this->onWindowMove_dyn(),null(),null());
HXLINE(  93)			window->onRender->add(this->render_dyn(),null(),null());
HXLINE(  94)			window->onResize->add(this->onWindowResize_dyn(),null(),null());
HXLINE(  95)			window->onRestore->add(this->onWindowRestore_dyn(),null(),null());
HXLINE(  96)			window->onTextEdit->add(this->onTextEdit_dyn(),null(),null());
HXLINE(  97)			window->onTextInput->add(this->onTextInput_dyn(),null(),null());
HXLINE(  99)			this->onWindowCreate();
HXLINE( 102)			 ::openfl::display::NativeWindowInitOptions initOptions =  ::openfl::display::NativeWindowInitOptions_obj::__alloc( HX_CTX );
HXLINE( 103)			initOptions->_hx___window = ( ( ::openfl::display::Window)(this->_hx___window) );
HXLINE( 104)			 ::openfl::display::NativeWindow_obj::__alloc( HX_CTX ,initOptions);
            		}
HXLINE( 108)		this->onCreateWindow->dispatch(window);
HXLINE( 110)		return window;
            	}


int Application_obj::exec(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run(int delta){
            			HX_GC_STACKFRAME(&_hx_pos_548c78caa19a1a14_120_exec)
HXLINE( 120)			if (::openfl::desktop::NativeApplication_obj::get_nativeApplication()->hasEventListener(HX_("invoke",78,77,e0,9f))) {
HXLINE( 122)				::Array< ::String > args = ::Sys_obj::args();
HXLINE( 123)				 ::openfl::filesystem::File cwd =  ::openfl::filesystem::File_obj::__alloc( HX_CTX ,::Sys_obj::getCwd());
HXLINE( 124)				 ::openfl::events::InvokeEvent invokeEvent =  ::openfl::events::InvokeEvent_obj::__alloc( HX_CTX ,HX_("invoke",78,77,e0,9f),false,false,cwd,args,null());
HXLINE( 125)				::openfl::desktop::NativeApplication_obj::get_nativeApplication()->dispatchEvent(invokeEvent);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_548c78caa19a1a14_114_exec)
HXLINE( 118)		this->onUpdate->add( ::Dynamic(new _hx_Closure_0()),true,null());
HXLINE( 130)		return this->super::exec();
            	}


void Application_obj::_hx___checkForAllWindowsClosed(){
            	HX_GC_STACKFRAME(&_hx_pos_548c78caa19a1a14_136___checkForAllWindowsClosed)
HXLINE( 137)		if ((this->_hx___windows->length > 0)) {
HXLINE( 139)			return;
            		}
HXLINE( 142)		if (!(::openfl::desktop::NativeApplication_obj::get_nativeApplication()->autoExit)) {
HXLINE( 144)			return;
            		}
HXLINE( 148)		 ::openfl::events::Event exitingEvent =  ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("exiting",84,dc,da,24),false,true);
HXLINE( 149)		bool result = ::openfl::desktop::NativeApplication_obj::get_nativeApplication()->dispatchEvent(exitingEvent);
HXLINE( 150)		if (!(result)) {
HXLINE( 152)			return;
            		}
HXLINE( 155)		this->super::_hx___checkForAllWindowsClosed();
            	}


void Application_obj::_hx___onModuleExit(int code){
            	HX_STACKFRAME(&_hx_pos_548c78caa19a1a14_159___onModuleExit)
HXLINE( 160)		if (this->onExit->canceled) {
HXLINE( 162)			return;
            		}
HXLINE( 164)		if (::hx::IsInstanceEq( ::openfl::utils::_internal::Lib_obj::application,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 166)			::openfl::utils::_internal::Lib_obj::application = null();
            		}
HXLINE( 168)		this->super::_hx___onModuleExit(code);
            	}



::hx::ObjectPtr< Application_obj > Application_obj::__new() {
	::hx::ObjectPtr< Application_obj > __this = new Application_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Application_obj > Application_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Application_obj *__this = (Application_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Application_obj), true, "openfl.display.Application"));
	*(void **)__this = Application_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Application_obj::Application_obj()
{
}

::hx::Val Application_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { return ::hx::Val( exec_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { return ::hx::Val( createWindow_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__onModuleExit") ) { return ::hx::Val( _hx___onModuleExit_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__checkForAllWindowsClosed") ) { return ::hx::Val( _hx___checkForAllWindowsClosed_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Application_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Application_obj_sStaticStorageInfo = 0;
#endif

static ::String Application_obj_sMemberFields[] = {
	HX_("createWindow",0c,d4,e1,74),
	HX_("exec",91,f3,1d,43),
	HX_("__checkForAllWindowsClosed",0f,eb,2f,7e),
	HX_("__onModuleExit",09,43,64,2c),
	::String(null()) };

::hx::Class Application_obj::__mClass;

void Application_obj::__register()
{
	Application_obj _hx_dummy;
	Application_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Application",26,9b,0f,74);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Application_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Application_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Application_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Application_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Application_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_548c78caa19a1a14_33_boot)
HXDLIN(  33)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
