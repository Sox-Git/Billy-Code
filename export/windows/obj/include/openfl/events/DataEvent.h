#ifndef INCLUDED_openfl_events_DataEvent
#define INCLUDED_openfl_events_DataEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
HX_DECLARE_CLASS2(openfl,events,DataEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,TextEvent)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES DataEvent_obj : public  ::openfl::events::TextEvent_obj
{
	public:
		typedef  ::openfl::events::TextEvent_obj super;
		typedef DataEvent_obj OBJ_;
		DataEvent_obj();

	public:
		enum { _hx_ClassId = 0x00daef43 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.DataEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.DataEvent"); }
		static ::hx::ObjectPtr< DataEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_data);
		static ::hx::ObjectPtr< DataEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::String __o_data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DataEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DataEvent",70,29,87,5d); }

		static void __boot();
		static ::String DATA;
		static ::String UPLOAD_COMPLETE_DATA;
		::String data;
		 ::openfl::events::Event clone();

		virtual ::String toString();

		void _hx___init();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_DataEvent */ 
