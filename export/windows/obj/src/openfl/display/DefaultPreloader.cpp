#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DefaultPreloader
#include <openfl/display/DefaultPreloader.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a3b7e47404dab77a_117_new,"openfl.display.DefaultPreloader","new",0xd9ecb051,"openfl.display.DefaultPreloader.new","openfl/display/Preloader.hx",117,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_163_getBackgroundColor,"openfl.display.DefaultPreloader","getBackgroundColor",0xe99da5ce,"openfl.display.DefaultPreloader.getBackgroundColor","openfl/display/Preloader.hx",163,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_177_getHeight,"openfl.display.DefaultPreloader","getHeight",0xf2617bce,"openfl.display.DefaultPreloader.getHeight","openfl/display/Preloader.hx",177,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_191_getWidth,"openfl.display.DefaultPreloader","getWidth",0x7b1a7bff,"openfl.display.DefaultPreloader.getWidth","openfl/display/Preloader.hx",191,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_206_onInit,"openfl.display.DefaultPreloader","onInit",0x238e307e,"openfl.display.DefaultPreloader.onInit","openfl/display/Preloader.hx",206,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_210_onLoaded,"openfl.display.DefaultPreloader","onLoaded",0x88fcf4f3,"openfl.display.DefaultPreloader.onLoaded","openfl/display/Preloader.hx",210,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_217_onUpdate,"openfl.display.DefaultPreloader","onUpdate",0xb79332f7,"openfl.display.DefaultPreloader.onUpdate","openfl/display/Preloader.hx",217,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_235_this_onAddedToStage,"openfl.display.DefaultPreloader","this_onAddedToStage",0xa7de3014,"openfl.display.DefaultPreloader.this_onAddedToStage","openfl/display/Preloader.hx",235,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_246_this_onComplete,"openfl.display.DefaultPreloader","this_onComplete",0x228a21ea,"openfl.display.DefaultPreloader.this_onComplete","openfl/display/Preloader.hx",246,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_256_this_onEnterFrame,"openfl.display.DefaultPreloader","this_onEnterFrame",0x72c19366,"openfl.display.DefaultPreloader.this_onEnterFrame","openfl/display/Preloader.hx",256,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_270_this_onProgress,"openfl.display.DefaultPreloader","this_onProgress",0x28ed18de,"openfl.display.DefaultPreloader.this_onProgress","openfl/display/Preloader.hx",270,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_109_boot,"openfl.display.DefaultPreloader","boot",0xcd469721,"openfl.display.DefaultPreloader.boot","openfl/display/Preloader.hx",109,0xc399db74)
namespace openfl{
namespace display{

void DefaultPreloader_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a3b7e47404dab77a_117_new)
HXLINE( 118)		super::__construct();
HXLINE( 120)		int backgroundColor = this->getBackgroundColor();
HXLINE( 121)		int r = ((backgroundColor >> 16) & 255);
HXLINE( 122)		int g = ((backgroundColor >> 8) & 255);
HXLINE( 123)		int b = (backgroundColor & 255);
HXLINE( 124)		Float perceivedLuminosity = (((((Float)0.299) * ( (Float)(r) )) + (((Float)0.587) * ( (Float)(g) ))) + (((Float)0.114) * ( (Float)(b) )));
HXLINE( 125)		int color = 0;
HXLINE( 127)		if ((perceivedLuminosity < 70)) {
HXLINE( 129)			color = 16777215;
            		}
HXLINE( 132)		int x = 30;
HXLINE( 133)		int height = 7;
HXLINE( 134)		Float y = ((this->getHeight() / ( (Float)(2) )) - (( (Float)(height) ) / ( (Float)(2) )));
HXLINE( 135)		Float width = (this->getWidth() - ( (Float)((x * 2)) ));
HXLINE( 137)		int padding = 2;
HXLINE( 139)		this->outline =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE( 140)		this->outline->get_graphics()->beginFill(color,((Float)0.07));
HXLINE( 141)		this->outline->get_graphics()->drawRect(( (Float)(0) ),( (Float)(0) ),width,( (Float)(height) ));
HXLINE( 142)		this->outline->set_x(( (Float)(x) ));
HXLINE( 143)		this->outline->set_y(y);
HXLINE( 144)		this->outline->set_alpha(( (Float)(0) ));
HXLINE( 145)		this->addChild(this->outline);
HXLINE( 147)		this->progress =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE( 148)		this->progress->get_graphics()->beginFill(color,((Float)0.35));
HXLINE( 149)		this->progress->get_graphics()->drawRect(( (Float)(0) ),( (Float)(0) ),(width - ( (Float)((padding * 2)) )),( (Float)((height - (padding * 2))) ));
HXLINE( 150)		this->progress->set_x(( (Float)((x + padding)) ));
HXLINE( 151)		this->progress->set_y((y + padding));
HXLINE( 152)		this->progress->set_scaleX(( (Float)(0) ));
HXLINE( 153)		this->progress->set_alpha(( (Float)(0) ));
HXLINE( 154)		this->addChild(this->progress);
HXLINE( 156)		this->startAnimation = (::openfl::Lib_obj::getTimer() + 100);
HXLINE( 157)		this->endAnimation = (this->startAnimation + 1000);
HXLINE( 159)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->this_onAddedToStage_dyn(),null(),null(),null());
            	}

Dynamic DefaultPreloader_obj::__CreateEmpty() { return new DefaultPreloader_obj; }

void *DefaultPreloader_obj::_hx_vtable = 0;

Dynamic DefaultPreloader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultPreloader_obj > _hx_result = new DefaultPreloader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DefaultPreloader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x60ddee07) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x60ddee07;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

int DefaultPreloader_obj::getBackgroundColor(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_163_getBackgroundColor)
HXLINE( 164)		 ::Dynamic attributes = ::openfl::Lib_obj::get_current()->stage->window->context->attributes;
HXLINE( 166)		bool _hx_tmp;
HXDLIN( 166)		if (::Reflect_obj::hasField(attributes,HX_("background",ee,93,1d,26))) {
HXLINE( 166)			_hx_tmp = ::hx::IsNotNull( attributes->__Field(HX_("background",ee,93,1d,26),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 166)			_hx_tmp = false;
            		}
HXDLIN( 166)		if (_hx_tmp) {
HXLINE( 168)			return ( (int)(attributes->__Field(HX_("background",ee,93,1d,26),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 172)			return 0;
            		}
HXLINE( 166)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getBackgroundColor,return )

Float DefaultPreloader_obj::getHeight(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_177_getHeight)
HXLINE( 178)		int height = ::openfl::Lib_obj::get_current()->stage->window->_hx___height;
HXLINE( 180)		if ((height > 0)) {
HXLINE( 182)			return ( (Float)(height) );
            		}
            		else {
HXLINE( 186)			return ( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) );
            		}
HXLINE( 180)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getHeight,return )

Float DefaultPreloader_obj::getWidth(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_191_getWidth)
HXLINE( 192)		int width = ::openfl::Lib_obj::get_current()->stage->window->_hx___width;
HXLINE( 194)		if ((width > 0)) {
HXLINE( 196)			return ( (Float)(width) );
            		}
            		else {
HXLINE( 200)			return ( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) );
            		}
HXLINE( 194)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getWidth,return )

void DefaultPreloader_obj::onInit(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_206_onInit)
HXDLIN( 206)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,onInit,(void))

void DefaultPreloader_obj::onLoaded(){
            	HX_GC_STACKFRAME(&_hx_pos_a3b7e47404dab77a_210_onLoaded)
HXLINE( 211)		this->removeEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null());
HXLINE( 213)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("unload",ff,a0,8c,65),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,onLoaded,(void))

void DefaultPreloader_obj::onUpdate(int bytesLoaded,int bytesTotal){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_217_onUpdate)
HXLINE( 218)		Float percentLoaded = ((Float)0.0);
HXLINE( 220)		if ((bytesTotal > 0)) {
HXLINE( 222)			percentLoaded = (( (Float)(bytesLoaded) ) / ( (Float)(bytesTotal) ));
HXLINE( 224)			if ((percentLoaded > 1)) {
HXLINE( 226)				percentLoaded = ( (Float)(1) );
            			}
            		}
HXLINE( 230)		this->progress->set_scaleX(percentLoaded);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DefaultPreloader_obj,onUpdate,(void))

void DefaultPreloader_obj::this_onAddedToStage( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_235_this_onAddedToStage)
HXLINE( 236)		this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->this_onAddedToStage_dyn(),null());
HXLINE( 238)		this->onInit();
HXLINE( 239)		int _hx_tmp = this->get_loaderInfo()->bytesLoaded;
HXDLIN( 239)		this->onUpdate(_hx_tmp,this->get_loaderInfo()->bytesTotal);
HXLINE( 241)		this->addEventListener(HX_("progress",ad,f7,2a,86),this->this_onProgress_dyn(),null(),null(),null());
HXLINE( 242)		this->addEventListener(HX_("complete",b9,00,c8,7f),this->this_onComplete_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onAddedToStage,(void))

void DefaultPreloader_obj::this_onComplete( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_246_this_onComplete)
HXLINE( 247)		event->preventDefault();
HXLINE( 249)		this->removeEventListener(HX_("progress",ad,f7,2a,86),this->this_onProgress_dyn(),null());
HXLINE( 250)		this->removeEventListener(HX_("complete",b9,00,c8,7f),this->this_onComplete_dyn(),null());
HXLINE( 252)		this->onLoaded();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onComplete,(void))

void DefaultPreloader_obj::this_onEnterFrame( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_256_this_onEnterFrame)
HXLINE( 257)		int elapsed = ::openfl::Lib_obj::getTimer();
HXDLIN( 257)		int elapsed1 = (elapsed - this->startAnimation);
HXLINE( 258)		int total = (this->endAnimation - this->startAnimation);
HXLINE( 260)		Float percent = (( (Float)(elapsed1) ) / ( (Float)(total) ));
HXLINE( 262)		if ((percent < 0)) {
HXLINE( 262)			percent = ( (Float)(0) );
            		}
HXLINE( 263)		if ((percent > 1)) {
HXLINE( 263)			percent = ( (Float)(1) );
            		}
HXLINE( 265)		 ::openfl::display::Shape _hx_tmp = this->outline;
HXDLIN( 265)		_hx_tmp->set_alpha(this->progress->set_alpha(percent));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onEnterFrame,(void))

void DefaultPreloader_obj::this_onProgress( ::openfl::events::ProgressEvent event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_270_this_onProgress)
HXDLIN( 270)		int _hx_tmp = ::Std_obj::_hx_int(event->bytesLoaded);
HXDLIN( 270)		this->onUpdate(_hx_tmp,::Std_obj::_hx_int(event->bytesTotal));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onProgress,(void))


::hx::ObjectPtr< DefaultPreloader_obj > DefaultPreloader_obj::__new() {
	::hx::ObjectPtr< DefaultPreloader_obj > __this = new DefaultPreloader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DefaultPreloader_obj > DefaultPreloader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DefaultPreloader_obj *__this = (DefaultPreloader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultPreloader_obj), true, "openfl.display.DefaultPreloader"));
	*(void **)__this = DefaultPreloader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DefaultPreloader_obj::DefaultPreloader_obj()
{
}

void DefaultPreloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultPreloader);
	HX_MARK_MEMBER_NAME(endAnimation,"endAnimation");
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_MEMBER_NAME(progress,"progress");
	HX_MARK_MEMBER_NAME(startAnimation,"startAnimation");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultPreloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(endAnimation,"endAnimation");
	HX_VISIT_MEMBER_NAME(outline,"outline");
	HX_VISIT_MEMBER_NAME(progress,"progress");
	HX_VISIT_MEMBER_NAME(startAnimation,"startAnimation");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DefaultPreloader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onInit") ) { return ::hx::Val( onInit_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return ::hx::Val( outline ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress ); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return ::hx::Val( getWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoaded") ) { return ::hx::Val( onLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return ::hx::Val( getHeight_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endAnimation") ) { return ::hx::Val( endAnimation ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startAnimation") ) { return ::hx::Val( startAnimation ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"this_onComplete") ) { return ::hx::Val( this_onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onProgress") ) { return ::hx::Val( this_onProgress_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"this_onEnterFrame") ) { return ::hx::Val( this_onEnterFrame_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBackgroundColor") ) { return ::hx::Val( getBackgroundColor_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"this_onAddedToStage") ) { return ::hx::Val( this_onAddedToStage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DefaultPreloader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { outline=inValue.Cast<  ::openfl::display::Shape >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast<  ::openfl::display::Shape >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endAnimation") ) { endAnimation=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startAnimation") ) { startAnimation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultPreloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("endAnimation",a9,f7,36,5a));
	outFields->push(HX_("outline",82,17,be,e1));
	outFields->push(HX_("progress",ad,f7,2a,86));
	outFields->push(HX_("startAnimation",42,be,6f,6a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DefaultPreloader_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(DefaultPreloader_obj,endAnimation),HX_("endAnimation",a9,f7,36,5a)},
	{::hx::fsObject /*  ::openfl::display::Shape */ ,(int)offsetof(DefaultPreloader_obj,outline),HX_("outline",82,17,be,e1)},
	{::hx::fsObject /*  ::openfl::display::Shape */ ,(int)offsetof(DefaultPreloader_obj,progress),HX_("progress",ad,f7,2a,86)},
	{::hx::fsInt,(int)offsetof(DefaultPreloader_obj,startAnimation),HX_("startAnimation",42,be,6f,6a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DefaultPreloader_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultPreloader_obj_sMemberFields[] = {
	HX_("endAnimation",a9,f7,36,5a),
	HX_("outline",82,17,be,e1),
	HX_("progress",ad,f7,2a,86),
	HX_("startAnimation",42,be,6f,6a),
	HX_("getBackgroundColor",9f,ee,0c,c0),
	HX_("getHeight",1d,91,a2,7e),
	HX_("getWidth",90,c5,39,2a),
	HX_("onInit",cf,43,45,e8),
	HX_("onLoaded",84,3e,1c,38),
	HX_("onUpdate",88,7c,b2,66),
	HX_("this_onAddedToStage",23,9e,ce,72),
	HX_("this_onComplete",79,9c,68,ed),
	HX_("this_onEnterFrame",b5,0f,1f,8e),
	HX_("this_onProgress",6d,93,cb,f3),
	::String(null()) };

::hx::Class DefaultPreloader_obj::__mClass;

void DefaultPreloader_obj::__register()
{
	DefaultPreloader_obj _hx_dummy;
	DefaultPreloader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.DefaultPreloader",df,33,40,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DefaultPreloader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DefaultPreloader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultPreloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultPreloader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DefaultPreloader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_109_boot)
HXDLIN( 109)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
