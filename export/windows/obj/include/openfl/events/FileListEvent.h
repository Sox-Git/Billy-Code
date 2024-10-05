#ifndef INCLUDED_openfl_events_FileListEvent
#define INCLUDED_openfl_events_FileListEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FileListEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filesystem,File)
HX_DECLARE_CLASS2(openfl,net,FileReference)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES FileListEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef FileListEvent_obj OBJ_;
		FileListEvent_obj();

	public:
		enum { _hx_ClassId = 0x2b40dbd7 };

		void __construct(::String type,::Array< ::Dynamic> files,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.FileListEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.FileListEvent"); }
		static ::hx::ObjectPtr< FileListEvent_obj > __new(::String type,::Array< ::Dynamic> files,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< FileListEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::Array< ::Dynamic> files,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FileListEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FileListEvent",a0,38,35,73); }

		static void __boot();
		static ::String DIRECTORY_LISTING;
		static ::String SELECT_MULTIPLE;
		::Array< ::Dynamic> files;
		 ::openfl::events::Event clone();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_FileListEvent */ 
