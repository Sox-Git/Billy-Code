#ifndef INCLUDED_flixel_FlxObject
#define INCLUDED_flixel_FlxObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,path,FlxPath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{


class HXCPP_CLASS_ATTRIBUTES FlxObject_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxObject_obj OBJ_;
		FlxObject_obj();

	public:
		enum { _hx_ClassId = 0x7dab0655 };

		void __construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.FlxObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.FlxObject"); }
		static ::hx::ObjectPtr< FlxObject_obj > __new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static ::hx::ObjectPtr< FlxObject_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxObject_obj();

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
		::String __ToString() const { return HX_("FlxObject",b1,78,2e,97); }

		static void __boot();
		static bool defaultPixelPerfectPosition;
		static Float SEPARATE_BIAS;
		static bool defaultMoves;
		static int LEFT;
		static int RIGHT;
		static int UP;
		static int DOWN;
		static int NONE;
		static int CEILING;
		static int FLOOR;
		static int WALL;
		static int ANY;
		static  ::flixel::math::FlxRect _firstSeparateFlxRect;
		static  ::flixel::math::FlxRect _secondSeparateFlxRect;
		static bool separate( ::flixel::FlxObject object1, ::flixel::FlxObject object2);
		static ::Dynamic separate_dyn();

		static bool updateTouchingFlags( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2);
		static ::Dynamic updateTouchingFlags_dyn();

		static bool allowCollisionDrag(int type, ::flixel::FlxObject object1, ::flixel::FlxObject object2);
		static ::Dynamic allowCollisionDrag_dyn();

		static Float computeOverlapX( ::flixel::FlxObject object1, ::flixel::FlxObject object2,::hx::Null< bool >  checkMaxOverlap);
		static ::Dynamic computeOverlapX_dyn();

		static bool separateX( ::flixel::FlxObject object1, ::flixel::FlxObject object2);
		static ::Dynamic separateX_dyn();

		static bool updateTouchingFlagsX( ::flixel::FlxObject object1, ::flixel::FlxObject object2);
		static ::Dynamic updateTouchingFlagsX_dyn();

		static Float computeOverlapY( ::flixel::FlxObject object1, ::flixel::FlxObject object2,::hx::Null< bool >  checkMaxOverlap);
		static ::Dynamic computeOverlapY_dyn();

		static bool separateY( ::flixel::FlxObject object1, ::flixel::FlxObject object2);
		static ::Dynamic separateY_dyn();

		static bool updateTouchingFlagsY( ::flixel::FlxObject object1, ::flixel::FlxObject object2);
		static ::Dynamic updateTouchingFlagsY_dyn();

		Float x;
		Float y;
		Float width;
		Float height;
		 ::Dynamic pixelPerfectRender;
		bool pixelPerfectPosition;
		Float angle;
		bool moves;
		bool immovable;
		 ::flixel::math::FlxBasePoint scrollFactor;
		 ::flixel::math::FlxBasePoint velocity;
		 ::flixel::math::FlxBasePoint acceleration;
		 ::flixel::math::FlxBasePoint drag;
		 ::flixel::math::FlxBasePoint maxVelocity;
		 ::flixel::math::FlxBasePoint last;
		Float mass;
		Float elasticity;
		Float angularVelocity;
		Float angularAcceleration;
		Float angularDrag;
		Float maxAngular;
		int touching;
		int wasTouching;
		int allowCollisions;
		int collisionXDrag;
		int collisionYDrag;
		 ::flixel::path::FlxPath path;
		 ::flixel::math::FlxBasePoint _point;
		 ::flixel::math::FlxRect _rect;
		virtual void initVars();
		::Dynamic initVars_dyn();

		void initMotionVars();
		::Dynamic initMotionVars_dyn();

		virtual void destroy();

		virtual void update(Float elapsed);

		void updateMotion(Float elapsed);
		::Dynamic updateMotion_dyn();

		virtual void draw();

		virtual bool overlaps( ::flixel::FlxBasic objectOrGroup,::hx::Null< bool >  inScreenSpace, ::flixel::FlxCamera camera);
		::Dynamic overlaps_dyn();

		bool overlapsCallback( ::flixel::FlxBasic objectOrGroup,Float x,Float y,bool inScreenSpace, ::flixel::FlxCamera camera);
		::Dynamic overlapsCallback_dyn();

		virtual bool overlapsAt(Float x,Float y, ::flixel::FlxBasic objectOrGroup,::hx::Null< bool >  inScreenSpace, ::flixel::FlxCamera camera);
		::Dynamic overlapsAt_dyn();

		bool overlapsAtCallback( ::flixel::FlxBasic objectOrGroup,Float x,Float y,bool inScreenSpace, ::flixel::FlxCamera camera);
		::Dynamic overlapsAtCallback_dyn();

		virtual bool overlapsPoint( ::flixel::math::FlxBasePoint point,::hx::Null< bool >  inScreenSpace, ::flixel::FlxCamera camera);
		::Dynamic overlapsPoint_dyn();

		bool inWorldBounds();
		::Dynamic inWorldBounds_dyn();

		 ::flixel::math::FlxBasePoint getScreenPosition( ::flixel::math::FlxBasePoint result, ::flixel::FlxCamera camera);
		::Dynamic getScreenPosition_dyn();

		 ::flixel::math::FlxBasePoint getPosition( ::flixel::math::FlxBasePoint result);
		::Dynamic getPosition_dyn();

		 ::flixel::math::FlxBasePoint getMidpoint( ::flixel::math::FlxBasePoint point);
		::Dynamic getMidpoint_dyn();

		 ::flixel::math::FlxRect getHitbox( ::flixel::math::FlxRect rect);
		::Dynamic getHitbox_dyn();

		virtual void reset(Float x,Float y);
		::Dynamic reset_dyn();

		virtual bool isOnScreen( ::flixel::FlxCamera camera);
		::Dynamic isOnScreen_dyn();

		bool isPixelPerfectRender( ::flixel::FlxCamera camera);
		::Dynamic isPixelPerfectRender_dyn();

		bool isTouching(int direction);
		::Dynamic isTouching_dyn();

		bool justTouched(int direction);
		::Dynamic justTouched_dyn();

		 ::flixel::FlxObject screenCenter(::hx::Null< int >  axes);
		::Dynamic screenCenter_dyn();

		virtual void setPosition(::hx::Null< Float >  x,::hx::Null< Float >  y);
		::Dynamic setPosition_dyn();

		void setSize(Float width,Float height);
		::Dynamic setSize_dyn();

		 ::flixel::math::FlxRect getBoundingBox( ::flixel::FlxCamera camera);
		::Dynamic getBoundingBox_dyn();

		virtual  ::flixel::math::FlxRect getRotatedBounds( ::flixel::math::FlxRect newRect);
		::Dynamic getRotatedBounds_dyn();

		virtual ::String toString();

		virtual Float set_x(Float value);
		::Dynamic set_x_dyn();

		virtual Float set_y(Float value);
		::Dynamic set_y_dyn();

		virtual Float set_width(Float value);
		::Dynamic set_width_dyn();

		virtual Float set_height(Float value);
		::Dynamic set_height_dyn();

		virtual Float get_width();
		::Dynamic get_width_dyn();

		virtual Float get_height();
		::Dynamic get_height_dyn();

		bool get_solid();
		::Dynamic get_solid_dyn();

		virtual bool set_solid(bool value);
		::Dynamic set_solid_dyn();

		virtual Float set_angle(Float value);
		::Dynamic set_angle_dyn();

		virtual bool set_moves(bool value);
		::Dynamic set_moves_dyn();

		virtual bool set_immovable(bool value);
		::Dynamic set_immovable_dyn();

		virtual bool set_pixelPerfectRender(bool value);
		::Dynamic set_pixelPerfectRender_dyn();

		int set_allowCollisions(int value);
		::Dynamic set_allowCollisions_dyn();

		bool get_collisonXDrag();
		::Dynamic get_collisonXDrag_dyn();

		bool set_collisonXDrag(bool value);
		::Dynamic set_collisonXDrag_dyn();

		 ::flixel::path::FlxPath set_path( ::flixel::path::FlxPath path);
		::Dynamic set_path_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxObject */ 
