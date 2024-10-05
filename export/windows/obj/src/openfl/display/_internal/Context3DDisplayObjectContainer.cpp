#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
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
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DDisplayObject
#include <openfl/display/_internal/Context3DDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DDisplayObjectContainer
#include <openfl/display/_internal/Context3DDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_Context3DShape
#include <openfl/display/_internal/Context3DShape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_97d149fcd101654e_13_renderDrawable,"openfl.display._internal.Context3DDisplayObjectContainer","renderDrawable",0x3be7c2de,"openfl.display._internal.Context3DDisplayObjectContainer.renderDrawable","openfl/display/_internal/Context3DDisplayObjectContainer.hx",13,0x63da501d)
HX_LOCAL_STACK_FRAME(_hx_pos_97d149fcd101654e_54_renderDrawableMask,"openfl.display._internal.Context3DDisplayObjectContainer","renderDrawableMask",0x7e14f6ea,"openfl.display._internal.Context3DDisplayObjectContainer.renderDrawableMask","openfl/display/_internal/Context3DDisplayObjectContainer.hx",54,0x63da501d)
namespace openfl{
namespace display{
namespace _internal{

void Context3DDisplayObjectContainer_obj::__construct() { }

Dynamic Context3DDisplayObjectContainer_obj::__CreateEmpty() { return new Context3DDisplayObjectContainer_obj; }

void *Context3DDisplayObjectContainer_obj::_hx_vtable = 0;

Dynamic Context3DDisplayObjectContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DDisplayObjectContainer_obj > _hx_result = new Context3DDisplayObjectContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DDisplayObjectContainer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x583fcad6;
}

void Context3DDisplayObjectContainer_obj::renderDrawable( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_97d149fcd101654e_13_renderDrawable)
HXLINE(  14)		{
HXLINE(  14)			{
HXLINE(  14)				 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  14)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  14)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  14)					if (::hx::IsNull( orphan1->stage )) {
HXLINE(  14)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  14)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  16)		bool _hx_tmp;
HXDLIN(  16)		if (displayObjectContainer->_hx___renderable) {
HXLINE(  16)			_hx_tmp = (displayObjectContainer->_hx___worldAlpha <= 0);
            		}
            		else {
HXLINE(  16)			_hx_tmp = true;
            		}
HXDLIN(  16)		if (_hx_tmp) {
HXLINE(  16)			return;
            		}
HXLINE(  18)		::openfl::display::_internal::Context3DDisplayObject_obj::renderDrawable(displayObjectContainer,renderer);
HXLINE(  20)		bool _hx_tmp1;
HXDLIN(  20)		if (::hx::IsNotNull( displayObjectContainer->_hx___cacheBitmap )) {
HXLINE(  20)			_hx_tmp1 = !(displayObjectContainer->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  20)			_hx_tmp1 = false;
            		}
HXDLIN(  20)		if (_hx_tmp1) {
HXLINE(  20)			return;
            		}
HXLINE(  22)		if ((displayObjectContainer->_hx___children->length > 0)) {
HXLINE(  24)			renderer->_hx___pushMaskObject(displayObjectContainer,null());
HXLINE(  27)			if (::hx::IsNotNull( renderer->_hx___stage )) {
HXLINE(  29)				{
HXLINE(  29)					int _g = 0;
HXDLIN(  29)					::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  29)					while((_g < _g1->length)){
HXLINE(  29)						 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  29)						_g = (_g + 1);
HXLINE(  31)						renderer->_hx___renderDrawable(child);
HXLINE(  32)						child->_hx___renderDirty = false;
            					}
            				}
HXLINE(  35)				displayObjectContainer->_hx___renderDirty = false;
            			}
            			else {
HXLINE(  39)				int _g = 0;
HXDLIN(  39)				::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  39)				while((_g < _g1->length)){
HXLINE(  39)					 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  39)					_g = (_g + 1);
HXLINE(  41)					renderer->_hx___renderDrawable(child);
            				}
            			}
            		}
HXLINE(  46)		if ((displayObjectContainer->_hx___children->length > 0)) {
HXLINE(  49)			renderer->_hx___popMaskObject(displayObjectContainer,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DDisplayObjectContainer_obj,renderDrawable,(void))

void Context3DDisplayObjectContainer_obj::renderDrawableMask( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_97d149fcd101654e_54_renderDrawableMask)
HXLINE(  55)		{
HXLINE(  55)			{
HXLINE(  55)				 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  55)				while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  55)					 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  55)					if (::hx::IsNull( orphan1->stage )) {
HXLINE(  55)						orphan1->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  55)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  57)		if (::hx::IsNotNull( displayObjectContainer->_hx___graphics )) {
HXLINE(  60)			::openfl::display::_internal::Context3DShape_obj::renderMask(displayObjectContainer,renderer);
            		}
HXLINE(  63)		{
HXLINE(  63)			int _g = 0;
HXDLIN(  63)			::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  63)			while((_g < _g1->length)){
HXLINE(  63)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  63)				_g = (_g + 1);
HXLINE(  65)				renderer->_hx___renderDrawableMask(child);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DDisplayObjectContainer_obj,renderDrawableMask,(void))


Context3DDisplayObjectContainer_obj::Context3DDisplayObjectContainer_obj()
{
}

bool Context3DDisplayObjectContainer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DDisplayObjectContainer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Context3DDisplayObjectContainer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Context3DDisplayObjectContainer_obj::__mClass;

static ::String Context3DDisplayObjectContainer_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void Context3DDisplayObjectContainer_obj::__register()
{
	Context3DDisplayObjectContainer_obj _hx_dummy;
	Context3DDisplayObjectContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.Context3DDisplayObjectContainer",64,bb,19,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DDisplayObjectContainer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DDisplayObjectContainer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DDisplayObjectContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DDisplayObjectContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DDisplayObjectContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
