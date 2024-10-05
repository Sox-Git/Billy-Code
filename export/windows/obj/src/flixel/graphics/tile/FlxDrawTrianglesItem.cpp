#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#include <flixel/graphics/tile/FlxDrawTrianglesItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a928be64e2bd594d_21_new,"flixel.graphics.tile.FlxDrawTrianglesItem","new",0x8669d929,"flixel.graphics.tile.FlxDrawTrianglesItem.new","flixel/graphics/tile/FlxDrawTrianglesItem.hx",21,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_54_render,"flixel.graphics.tile.FlxDrawTrianglesItem","render",0xbf64462d,"flixel.graphics.tile.FlxDrawTrianglesItem.render","flixel/graphics/tile/FlxDrawTrianglesItem.hx",54,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_102_reset,"flixel.graphics.tile.FlxDrawTrianglesItem","reset",0xa508d6d8,"flixel.graphics.tile.FlxDrawTrianglesItem.reset","flixel/graphics/tile/FlxDrawTrianglesItem.hx",102,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_122_dispose,"flixel.graphics.tile.FlxDrawTrianglesItem","dispose",0xf49121e8,"flixel.graphics.tile.FlxDrawTrianglesItem.dispose","flixel/graphics/tile/FlxDrawTrianglesItem.hx",122,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_139_addTriangles,"flixel.graphics.tile.FlxDrawTrianglesItem","addTriangles",0xd3f66861,"flixel.graphics.tile.FlxDrawTrianglesItem.addTriangles","flixel/graphics/tile/FlxDrawTrianglesItem.hx",139,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_261_setParameterValue,"flixel.graphics.tile.FlxDrawTrianglesItem","setParameterValue",0xa7ab92d3,"flixel.graphics.tile.FlxDrawTrianglesItem.setParameterValue","flixel/graphics/tile/FlxDrawTrianglesItem.hx",261,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_295_addQuad,"flixel.graphics.tile.FlxDrawTrianglesItem","addQuad",0xc08c1cd1,"flixel.graphics.tile.FlxDrawTrianglesItem.addQuad","flixel/graphics/tile/FlxDrawTrianglesItem.hx",295,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_380_get_numVertices,"flixel.graphics.tile.FlxDrawTrianglesItem","get_numVertices",0x2e325a3f,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numVertices","flixel/graphics/tile/FlxDrawTrianglesItem.hx",380,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_385_get_numTriangles,"flixel.graphics.tile.FlxDrawTrianglesItem","get_numTriangles",0x542b93a5,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numTriangles","flixel/graphics/tile/FlxDrawTrianglesItem.hx",385,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_268_inflateBounds,"flixel.graphics.tile.FlxDrawTrianglesItem","inflateBounds",0x8ece7465,"flixel.graphics.tile.FlxDrawTrianglesItem.inflateBounds","flixel/graphics/tile/FlxDrawTrianglesItem.hx",268,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_23_boot,"flixel.graphics.tile.FlxDrawTrianglesItem","boot",0x0e4d2b49,"flixel.graphics.tile.FlxDrawTrianglesItem.boot","flixel/graphics/tile/FlxDrawTrianglesItem.hx",23,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_24_boot,"flixel.graphics.tile.FlxDrawTrianglesItem","boot",0x0e4d2b49,"flixel.graphics.tile.FlxDrawTrianglesItem.boot","flixel/graphics/tile/FlxDrawTrianglesItem.hx",24,0x6492a666)
namespace flixel{
namespace graphics{
namespace tile{

void FlxDrawTrianglesItem_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a928be64e2bd594d_21_new)
HXLINE(  42)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(  42)		_this->x = ( (Float)(0) );
HXDLIN(  42)		_this->y = ( (Float)(0) );
HXDLIN(  42)		_this->width = ( (Float)(0) );
HXDLIN(  42)		_this->height = ( (Float)(0) );
HXDLIN(  42)		 ::flixel::math::FlxRect rect = _this;
HXDLIN(  42)		rect->_inPool = false;
HXDLIN(  42)		this->bounds = rect;
HXLINE(  40)		this->colorsPosition = 0;
HXLINE(  39)		this->indicesPosition = 0;
HXLINE(  38)		this->verticesPosition = 0;
HXLINE(  36)		int length = null();
HXDLIN(  36)		bool fixed = null();
HXDLIN(  36)		::Array< int > array = null();
HXDLIN(  36)		this->colors =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
HXLINE(  35)		int length1 = null();
HXDLIN(  35)		bool fixed1 = null();
HXDLIN(  35)		::Array< Float > array1 = null();
HXDLIN(  35)		this->uvtData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,array1,true);
HXLINE(  34)		int length2 = null();
HXDLIN(  34)		bool fixed2 = null();
HXDLIN(  34)		::Array< int > array2 = null();
HXDLIN(  34)		this->indices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length2,fixed2,array2);
HXLINE(  33)		int length3 = null();
HXDLIN(  33)		bool fixed3 = null();
HXDLIN(  33)		::Array< Float > array3 = null();
HXDLIN(  33)		this->vertices =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length3,fixed3,array3,true);
HXLINE(  46)		super::__construct();
HXLINE(  47)		this->type = ::flixel::graphics::tile::FlxDrawItemType_obj::TRIANGLES_dyn();
HXLINE(  49)		this->alphas = ::Array_obj< Float >::__new(0);
            	}

Dynamic FlxDrawTrianglesItem_obj::__CreateEmpty() { return new FlxDrawTrianglesItem_obj; }

void *FlxDrawTrianglesItem_obj::_hx_vtable = 0;

Dynamic FlxDrawTrianglesItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxDrawTrianglesItem_obj > _hx_result = new FlxDrawTrianglesItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDrawTrianglesItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01f7e225) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01f7e225;
	} else {
		return inClassId==(int)0x1a0ba75d;
	}
}

void FlxDrawTrianglesItem_obj::render( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_54_render)
HXLINE(  55)		if (!(::flixel::FlxG_obj::renderTile)) {
HXLINE(  56)			return;
            		}
HXLINE(  58)		if ((this->get_numTriangles() <= 0)) {
HXLINE(  59)			return;
            		}
HXLINE(  62)		 ::flixel::graphics::tile::FlxGraphicsShader shader;
HXDLIN(  62)		if (::hx::IsNotNull( this->shader )) {
HXLINE(  62)			shader = this->shader;
            		}
            		else {
HXLINE(  62)			shader = this->graphics->shader;
            		}
HXLINE(  63)		shader->bitmap->input = this->graphics->bitmap;
HXLINE(  64)		 ::Dynamic _hx_tmp;
HXDLIN(  64)		bool _hx_tmp1;
HXDLIN(  64)		if (!(camera->antialiasing)) {
HXLINE(  64)			_hx_tmp1 = this->antialiasing;
            		}
            		else {
HXLINE(  64)			_hx_tmp1 = true;
            		}
HXDLIN(  64)		if (_hx_tmp1) {
HXLINE(  64)			_hx_tmp = 4;
            		}
            		else {
HXLINE(  64)			_hx_tmp = 5;
            		}
HXDLIN(  64)		shader->bitmap->filter = _hx_tmp;
HXLINE(  65)		shader->bitmap->wrap = 2;
HXLINE(  66)		shader->alpha->value = this->alphas;
HXLINE(  68)		bool _hx_tmp2;
HXDLIN(  68)		if (!(this->colored)) {
HXLINE(  68)			_hx_tmp2 = this->hasColorOffsets;
            		}
            		else {
HXLINE(  68)			_hx_tmp2 = true;
            		}
HXDLIN(  68)		if (_hx_tmp2) {
HXLINE(  70)			shader->colorMultiplier->value = this->colorMultipliers;
HXLINE(  71)			shader->colorOffset->value = this->colorOffsets;
            		}
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::display::ShaderParameter_Bool parameter = shader->hasTransform;
HXDLIN(  74)			if (::hx::IsNull( parameter->value )) {
HXLINE(  74)				parameter->value = ::Array_obj< bool >::__new(0);
            			}
HXDLIN(  74)			parameter->value[0] = true;
            		}
HXLINE(  75)		{
HXLINE(  75)			 ::openfl::display::ShaderParameter_Bool parameter1 = shader->hasColorTransform;
HXDLIN(  75)			bool value;
HXDLIN(  75)			if (!(this->colored)) {
HXLINE(  75)				value = this->hasColorOffsets;
            			}
            			else {
HXLINE(  75)				value = true;
            			}
HXDLIN(  75)			if (::hx::IsNull( parameter1->value )) {
HXLINE(  75)				parameter1->value = ::Array_obj< bool >::__new(0);
            			}
HXDLIN(  75)			parameter1->value[0] = value;
            		}
HXLINE(  78)		camera->canvas->get_graphics()->overrideBlendMode(this->blend);
HXLINE(  81)		camera->canvas->get_graphics()->beginShaderFill(shader,null());
HXLINE(  86)		camera->canvas->get_graphics()->drawTriangles(this->vertices,this->indices,this->uvtData,1);
HXLINE(  87)		camera->canvas->get_graphics()->endFill();
HXLINE(  98)		this->super::render(camera);
            	}


void FlxDrawTrianglesItem_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_102_reset)
HXLINE( 103)		this->super::reset();
HXLINE( 104)		{
HXLINE( 104)			::Dynamic this1 = this->vertices;
HXDLIN( 104)			int deleteCount = this->vertices->get_length();
HXDLIN( 104)			::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 104)			this1->__SetField(HX_("__tempIndex",3e,e8,54,22),0,::hx::paccDynamic);
HXDLIN( 104)			{
HXLINE( 104)				int _g_current = 0;
HXDLIN( 104)				::cpp::VirtualArray _g_args = this2;
HXDLIN( 104)				while((_g_current < _g_args->get_length())){
HXLINE( 104)					_g_current = (_g_current + 1);
HXDLIN( 104)					 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 104)					( ( ::openfl::_Vector::FloatVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (Float)(item) ));
HXDLIN( 104)					::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN( 104)			( ( ::openfl::_Vector::FloatVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),deleteCount);
            		}
HXLINE( 105)		{
HXLINE( 105)			::Dynamic this3 = this->indices;
HXDLIN( 105)			int deleteCount1 = this->indices->get_length();
HXDLIN( 105)			::cpp::VirtualArray this4 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 105)			this3->__SetField(HX_("__tempIndex",3e,e8,54,22),0,::hx::paccDynamic);
HXDLIN( 105)			{
HXLINE( 105)				int _g_current1 = 0;
HXDLIN( 105)				::cpp::VirtualArray _g_args1 = this4;
HXDLIN( 105)				while((_g_current1 < _g_args1->get_length())){
HXLINE( 105)					_g_current1 = (_g_current1 + 1);
HXDLIN( 105)					 ::Dynamic item = _g_args1->__get((_g_current1 - 1));
HXDLIN( 105)					( ( ::openfl::_Vector::IntVector)(this3) )->insertAt(( (int)(this3->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (int)(item) ));
HXDLIN( 105)					::hx::FieldRef((this3).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN( 105)			( ( ::openfl::_Vector::IntVector)(this3) )->splice(( (int)(this3->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),deleteCount1);
            		}
HXLINE( 106)		{
HXLINE( 106)			::Dynamic this5 = this->uvtData;
HXDLIN( 106)			int deleteCount2 = this->uvtData->get_length();
HXDLIN( 106)			::cpp::VirtualArray this6 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 106)			this5->__SetField(HX_("__tempIndex",3e,e8,54,22),0,::hx::paccDynamic);
HXDLIN( 106)			{
HXLINE( 106)				int _g_current2 = 0;
HXDLIN( 106)				::cpp::VirtualArray _g_args2 = this6;
HXDLIN( 106)				while((_g_current2 < _g_args2->get_length())){
HXLINE( 106)					_g_current2 = (_g_current2 + 1);
HXDLIN( 106)					 ::Dynamic item = _g_args2->__get((_g_current2 - 1));
HXDLIN( 106)					( ( ::openfl::_Vector::FloatVector)(this5) )->insertAt(( (int)(this5->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (Float)(item) ));
HXDLIN( 106)					::hx::FieldRef((this5).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN( 106)			( ( ::openfl::_Vector::FloatVector)(this5) )->splice(( (int)(this5->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),deleteCount2);
            		}
HXLINE( 107)		{
HXLINE( 107)			::Dynamic this7 = this->colors;
HXDLIN( 107)			int deleteCount3 = this->colors->get_length();
HXDLIN( 107)			::cpp::VirtualArray this8 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 107)			this7->__SetField(HX_("__tempIndex",3e,e8,54,22),0,::hx::paccDynamic);
HXDLIN( 107)			{
HXLINE( 107)				int _g_current3 = 0;
HXDLIN( 107)				::cpp::VirtualArray _g_args3 = this8;
HXDLIN( 107)				while((_g_current3 < _g_args3->get_length())){
HXLINE( 107)					_g_current3 = (_g_current3 + 1);
HXDLIN( 107)					 ::Dynamic item = _g_args3->__get((_g_current3 - 1));
HXDLIN( 107)					( ( ::openfl::_Vector::IntVector)(this7) )->insertAt(( (int)(this7->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (int)(item) ));
HXDLIN( 107)					::hx::FieldRef((this7).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN( 107)			( ( ::openfl::_Vector::IntVector)(this7) )->splice(( (int)(this7->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),deleteCount3);
            		}
HXLINE( 109)		this->verticesPosition = 0;
HXLINE( 110)		this->indicesPosition = 0;
HXLINE( 111)		this->colorsPosition = 0;
HXLINE( 113)		this->alphas->removeRange(0,this->alphas->length);
HXLINE( 114)		if (::hx::IsNotNull( this->colorMultipliers )) {
HXLINE( 115)			this->colorMultipliers->removeRange(0,this->colorMultipliers->length);
            		}
HXLINE( 116)		if (::hx::IsNotNull( this->colorOffsets )) {
HXLINE( 117)			this->colorOffsets->removeRange(0,this->colorOffsets->length);
            		}
            	}


void FlxDrawTrianglesItem_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_122_dispose)
HXLINE( 123)		this->super::dispose();
HXLINE( 125)		this->vertices = null();
HXLINE( 126)		this->indices = null();
HXLINE( 127)		this->uvtData = null();
HXLINE( 128)		this->colors = null();
HXLINE( 129)		this->bounds = null();
HXLINE( 131)		this->alphas = null();
HXLINE( 132)		this->colorMultipliers = null();
HXLINE( 133)		this->colorOffsets = null();
            	}


void FlxDrawTrianglesItem_obj::addTriangles( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::openfl::_Vector::IntVector colors, ::flixel::math::FlxBasePoint position, ::flixel::math::FlxRect cameraBounds, ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_139_addTriangles)
HXLINE( 140)		if (::hx::IsNull( position )) {
HXLINE( 141)			 ::flixel::math::FlxBasePoint this1 = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::point;
HXDLIN( 141)			this1->set_x(( (Float)(0) ));
HXDLIN( 141)			this1->set_y(( (Float)(0) ));
HXDLIN( 141)			position = this1;
            		}
HXLINE( 143)		if (::hx::IsNull( cameraBounds )) {
HXLINE( 144)			 ::flixel::math::FlxRect _this = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::rect;
HXDLIN( 144)			_this->x = ( (Float)(0) );
HXDLIN( 144)			_this->y = ( (Float)(0) );
HXDLIN( 144)			_this->width = ( (Float)(::flixel::FlxG_obj::width) );
HXDLIN( 144)			_this->height = ( (Float)(::flixel::FlxG_obj::height) );
HXDLIN( 144)			cameraBounds = _this;
            		}
HXLINE( 146)		int verticesLength = vertices->get_length();
HXLINE( 147)		int prevVerticesLength = this->vertices->get_length();
HXLINE( 148)		int numberOfVertices = ::Std_obj::_hx_int((( (Float)(verticesLength) ) / ( (Float)(2) )));
HXLINE( 149)		int prevIndicesLength = this->indices->get_length();
HXLINE( 150)		int prevUVTDataLength = this->uvtData->get_length();
HXLINE( 151)		int prevColorsLength = this->colors->get_length();
HXLINE( 152)		int prevNumberOfVertices = this->get_numVertices();
HXLINE( 154)		Float tempX;
HXDLIN( 154)		Float tempY;
HXLINE( 155)		int i = 0;
HXLINE( 156)		int currentVertexPosition = prevVerticesLength;
HXLINE( 158)		while((i < verticesLength)){
HXLINE( 160)			Float position1 = position->x;
HXDLIN( 160)			tempX = (position1 + vertices->get(i));
HXLINE( 161)			Float position2 = position->y;
HXDLIN( 161)			tempY = (position2 + vertices->get((i + 1)));
HXLINE( 163)			{
HXLINE( 163)				currentVertexPosition = (currentVertexPosition + 1);
HXDLIN( 163)				this->vertices->set((currentVertexPosition - 1),tempX);
            			}
HXLINE( 164)			{
HXLINE( 164)				currentVertexPosition = (currentVertexPosition + 1);
HXDLIN( 164)				this->vertices->set((currentVertexPosition - 1),tempY);
            			}
HXLINE( 166)			if ((i == 0)) {
HXLINE( 168)				 ::flixel::math::FlxRect _this = this->bounds;
HXDLIN( 168)				_this->x = tempX;
HXDLIN( 168)				_this->y = tempY;
HXDLIN( 168)				_this->width = ( (Float)(0) );
HXDLIN( 168)				_this->height = ( (Float)(0) );
            			}
            			else {
HXLINE( 172)				 ::flixel::math::FlxRect bounds = this->bounds;
HXDLIN( 172)				if ((tempX < bounds->x)) {
HXLINE( 172)					 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 172)					bounds1->width = (bounds1->width + (bounds->x - tempX));
HXDLIN( 172)					bounds->x = tempX;
            				}
HXDLIN( 172)				if ((tempY < bounds->y)) {
HXLINE( 172)					 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 172)					bounds1->height = (bounds1->height + (bounds->y - tempY));
HXDLIN( 172)					bounds->y = tempY;
            				}
HXDLIN( 172)				if ((tempX > (bounds->x + bounds->width))) {
HXLINE( 172)					bounds->width = (tempX - bounds->x);
            				}
HXDLIN( 172)				if ((tempY > (bounds->y + bounds->height))) {
HXLINE( 172)					bounds->height = (tempY - bounds->y);
            				}
            			}
HXLINE( 175)			i = (i + 2);
            		}
HXLINE( 178)		 ::flixel::math::FlxRect Rect = this->bounds;
HXDLIN( 178)		bool result;
HXDLIN( 178)		bool result1;
HXDLIN( 178)		bool result2;
HXDLIN( 178)		if (((Rect->x + Rect->width) > cameraBounds->x)) {
HXLINE( 178)			result2 = (Rect->x < (cameraBounds->x + cameraBounds->width));
            		}
            		else {
HXLINE( 178)			result2 = false;
            		}
HXDLIN( 178)		if (result2) {
HXLINE( 178)			result1 = ((Rect->y + Rect->height) > cameraBounds->y);
            		}
            		else {
HXLINE( 178)			result1 = false;
            		}
HXDLIN( 178)		if (result1) {
HXLINE( 178)			result = (Rect->y < (cameraBounds->y + cameraBounds->height));
            		}
            		else {
HXLINE( 178)			result = false;
            		}
HXDLIN( 178)		if (Rect->_weak) {
HXLINE( 178)			if (!(Rect->_inPool)) {
HXLINE( 178)				Rect->_inPool = true;
HXDLIN( 178)				Rect->_weak = false;
HXDLIN( 178)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXDLIN( 178)		if (!(result)) {
HXLINE( 180)			::Dynamic this1 = this->vertices;
HXDLIN( 180)			::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 180)			this1->__SetField(HX_("__tempIndex",3e,e8,54,22),(this->vertices->get_length() - verticesLength),::hx::paccDynamic);
HXDLIN( 180)			{
HXLINE( 180)				int _g_current = 0;
HXDLIN( 180)				::cpp::VirtualArray _g_args = this2;
HXDLIN( 180)				while((_g_current < _g_args->get_length())){
HXLINE( 180)					_g_current = (_g_current + 1);
HXDLIN( 180)					 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 180)					( ( ::openfl::_Vector::FloatVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (Float)(item) ));
HXDLIN( 180)					::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN( 180)			( ( ::openfl::_Vector::FloatVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),verticesLength);
            		}
            		else {
HXLINE( 184)			int uvtDataLength = uvtData->get_length();
HXLINE( 185)			{
HXLINE( 185)				int _g = 0;
HXDLIN( 185)				int _g1 = uvtDataLength;
HXDLIN( 185)				while((_g < _g1)){
HXLINE( 185)					_g = (_g + 1);
HXDLIN( 185)					int i = (_g - 1);
HXLINE( 187)					{
HXLINE( 187)						::Dynamic this1 = this->uvtData;
HXDLIN( 187)						( ( ::openfl::_Vector::FloatVector)(this1) )->set((prevUVTDataLength + i),uvtData->get(i));
            					}
            				}
            			}
HXLINE( 190)			int indicesLength = indices->get_length();
HXLINE( 191)			{
HXLINE( 191)				int _g2 = 0;
HXDLIN( 191)				int _g3 = indicesLength;
HXDLIN( 191)				while((_g2 < _g3)){
HXLINE( 191)					_g2 = (_g2 + 1);
HXDLIN( 191)					int i = (_g2 - 1);
HXLINE( 193)					{
HXLINE( 193)						::Dynamic this1 = this->indices;
HXDLIN( 193)						( ( ::openfl::_Vector::IntVector)(this1) )->set((prevIndicesLength + i),(indices->get(i) + prevNumberOfVertices));
            					}
            				}
            			}
HXLINE( 196)			if (this->colored) {
HXLINE( 198)				{
HXLINE( 198)					int _g = 0;
HXDLIN( 198)					int _g1 = numberOfVertices;
HXDLIN( 198)					while((_g < _g1)){
HXLINE( 198)						_g = (_g + 1);
HXDLIN( 198)						int i = (_g - 1);
HXLINE( 200)						{
HXLINE( 200)							::Dynamic this1 = this->colors;
HXDLIN( 200)							( ( ::openfl::_Vector::IntVector)(this1) )->set((prevColorsLength + i),colors->get(i));
            						}
            					}
            				}
HXLINE( 203)				 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)				_hx_tmp->colorsPosition = (_hx_tmp->colorsPosition + numberOfVertices);
            			}
HXLINE( 206)			 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 206)			_hx_tmp->verticesPosition = (_hx_tmp->verticesPosition + verticesLength);
HXLINE( 207)			 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 207)			_hx_tmp1->indicesPosition = (_hx_tmp1->indicesPosition + indicesLength);
            		}
HXLINE( 210)		if (position->_weak) {
HXLINE( 210)			position->put();
            		}
HXLINE( 211)		if (cameraBounds->_weak) {
HXLINE( 211)			if (!(cameraBounds->_inPool)) {
HXLINE( 211)				cameraBounds->_inPool = true;
HXDLIN( 211)				cameraBounds->_weak = false;
HXDLIN( 211)				::flixel::math::FlxRect_obj::_pool->putUnsafe(cameraBounds);
            			}
            		}
HXLINE( 214)		{
HXLINE( 214)			int _g = 0;
HXDLIN( 214)			int _g1 = this->get_numTriangles();
HXDLIN( 214)			while((_g < _g1)){
HXLINE( 214)				_g = (_g + 1);
HXDLIN( 214)				int _ = (_g - 1);
HXLINE( 216)				Float _hx_tmp;
HXDLIN( 216)				if (::hx::IsNotNull( transform )) {
HXLINE( 216)					_hx_tmp = transform->alphaMultiplier;
            				}
            				else {
HXLINE( 216)					_hx_tmp = ((Float)1.0);
            				}
HXDLIN( 216)				this->alphas->push(_hx_tmp);
HXLINE( 217)				Float _hx_tmp1;
HXDLIN( 217)				if (::hx::IsNotNull( transform )) {
HXLINE( 217)					_hx_tmp1 = transform->alphaMultiplier;
            				}
            				else {
HXLINE( 217)					_hx_tmp1 = ((Float)1.0);
            				}
HXDLIN( 217)				this->alphas->push(_hx_tmp1);
HXLINE( 218)				Float _hx_tmp2;
HXDLIN( 218)				if (::hx::IsNotNull( transform )) {
HXLINE( 218)					_hx_tmp2 = transform->alphaMultiplier;
            				}
            				else {
HXLINE( 218)					_hx_tmp2 = ((Float)1.0);
            				}
HXDLIN( 218)				this->alphas->push(_hx_tmp2);
            			}
            		}
HXLINE( 221)		bool _hx_tmp;
HXDLIN( 221)		if (!(this->colored)) {
HXLINE( 221)			_hx_tmp = this->hasColorOffsets;
            		}
            		else {
HXLINE( 221)			_hx_tmp = true;
            		}
HXDLIN( 221)		if (_hx_tmp) {
HXLINE( 223)			if (::hx::IsNull( this->colorMultipliers )) {
HXLINE( 224)				this->colorMultipliers = ::Array_obj< Float >::__new(0);
            			}
HXLINE( 226)			if (::hx::IsNull( this->colorOffsets )) {
HXLINE( 227)				this->colorOffsets = ::Array_obj< Float >::__new(0);
            			}
HXLINE( 229)			{
HXLINE( 229)				int _g = 0;
HXDLIN( 229)				int _g1 = (this->get_numTriangles() * 3);
HXDLIN( 229)				while((_g < _g1)){
HXLINE( 229)					_g = (_g + 1);
HXDLIN( 229)					int _ = (_g - 1);
HXLINE( 231)					if (::hx::IsNotNull( transform )) {
HXLINE( 233)						this->colorMultipliers->push(transform->redMultiplier);
HXLINE( 234)						this->colorMultipliers->push(transform->greenMultiplier);
HXLINE( 235)						this->colorMultipliers->push(transform->blueMultiplier);
HXLINE( 237)						this->colorOffsets->push(transform->redOffset);
HXLINE( 238)						this->colorOffsets->push(transform->greenOffset);
HXLINE( 239)						this->colorOffsets->push(transform->blueOffset);
HXLINE( 240)						this->colorOffsets->push(transform->alphaOffset);
            					}
            					else {
HXLINE( 244)						this->colorMultipliers->push(1);
HXLINE( 245)						this->colorMultipliers->push(1);
HXLINE( 246)						this->colorMultipliers->push(1);
HXLINE( 248)						this->colorOffsets->push(0);
HXLINE( 249)						this->colorOffsets->push(0);
HXLINE( 250)						this->colorOffsets->push(0);
HXLINE( 251)						this->colorOffsets->push(0);
            					}
HXLINE( 254)					this->colorMultipliers->push(1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxDrawTrianglesItem_obj,addTriangles,(void))

void FlxDrawTrianglesItem_obj::setParameterValue( ::openfl::display::ShaderParameter_Bool parameter,bool value){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_261_setParameterValue)
HXLINE( 262)		if (::hx::IsNull( parameter->value )) {
HXLINE( 263)			parameter->value = ::Array_obj< bool >::__new(0);
            		}
HXLINE( 264)		parameter->value[0] = value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxDrawTrianglesItem_obj,setParameterValue,(void))

void FlxDrawTrianglesItem_obj::addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_295_addQuad)
HXLINE( 296)		int prevVerticesPos = this->verticesPosition;
HXLINE( 297)		int prevIndicesPos = this->indicesPosition;
HXLINE( 298)		int prevColorsPos = this->colorsPosition;
HXLINE( 299)		int prevNumberOfVertices = this->get_numVertices();
HXLINE( 301)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 301)		point->_inPool = false;
HXDLIN( 301)		 ::flixel::math::FlxBasePoint point1 = point;
HXLINE( 302)		{
HXLINE( 302)			Float x1 = (((point1->x * matrix->a) + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 302)			Float y1 = (((point1->x * matrix->b) + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 302)			{
HXLINE( 302)				point1->set_x(x1);
HXDLIN( 302)				point1->set_y(y1);
            			}
            		}
HXLINE( 304)		this->vertices->set(prevVerticesPos,point1->x);
HXLINE( 305)		this->vertices->set((prevVerticesPos + 1),point1->y);
HXLINE( 307)		this->uvtData->set(prevVerticesPos,frame->uv->x);
HXLINE( 308)		this->uvtData->set((prevVerticesPos + 1),frame->uv->y);
HXLINE( 310)		{
HXLINE( 310)			point1->set_x(frame->frame->width);
HXDLIN( 310)			point1->set_y(( (Float)(0) ));
            		}
HXLINE( 311)		{
HXLINE( 311)			Float x11 = (((point1->x * matrix->a) + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 311)			Float y11 = (((point1->x * matrix->b) + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 311)			{
HXLINE( 311)				point1->set_x(x11);
HXDLIN( 311)				point1->set_y(y11);
            			}
            		}
HXLINE( 313)		this->vertices->set((prevVerticesPos + 2),point1->x);
HXLINE( 314)		this->vertices->set((prevVerticesPos + 3),point1->y);
HXLINE( 316)		this->uvtData->set((prevVerticesPos + 2),frame->uv->width);
HXLINE( 317)		this->uvtData->set((prevVerticesPos + 3),frame->uv->y);
HXLINE( 319)		{
HXLINE( 319)			Float y = frame->frame->height;
HXDLIN( 319)			point1->set_x(frame->frame->width);
HXDLIN( 319)			point1->set_y(y);
            		}
HXLINE( 320)		{
HXLINE( 320)			Float x12 = (((point1->x * matrix->a) + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 320)			Float y12 = (((point1->x * matrix->b) + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 320)			{
HXLINE( 320)				point1->set_x(x12);
HXDLIN( 320)				point1->set_y(y12);
            			}
            		}
HXLINE( 322)		this->vertices->set((prevVerticesPos + 4),point1->x);
HXLINE( 323)		this->vertices->set((prevVerticesPos + 5),point1->y);
HXLINE( 325)		this->uvtData->set((prevVerticesPos + 4),frame->uv->width);
HXLINE( 326)		this->uvtData->set((prevVerticesPos + 5),frame->uv->height);
HXLINE( 328)		{
HXLINE( 328)			Float y2 = frame->frame->height;
HXDLIN( 328)			point1->set_x(( (Float)(0) ));
HXDLIN( 328)			point1->set_y(y2);
            		}
HXLINE( 329)		{
HXLINE( 329)			Float x13 = (((point1->x * matrix->a) + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 329)			Float y13 = (((point1->x * matrix->b) + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 329)			{
HXLINE( 329)				point1->set_x(x13);
HXDLIN( 329)				point1->set_y(y13);
            			}
            		}
HXLINE( 331)		this->vertices->set((prevVerticesPos + 6),point1->x);
HXLINE( 332)		this->vertices->set((prevVerticesPos + 7),point1->y);
HXLINE( 334)		point1->put();
HXLINE( 336)		this->uvtData->set((prevVerticesPos + 6),frame->uv->x);
HXLINE( 337)		this->uvtData->set((prevVerticesPos + 7),frame->uv->height);
HXLINE( 339)		this->indices->set(prevIndicesPos,prevNumberOfVertices);
HXLINE( 340)		this->indices->set((prevIndicesPos + 1),(prevNumberOfVertices + 1));
HXLINE( 341)		this->indices->set((prevIndicesPos + 2),(prevNumberOfVertices + 2));
HXLINE( 342)		this->indices->set((prevIndicesPos + 3),(prevNumberOfVertices + 2));
HXLINE( 343)		this->indices->set((prevIndicesPos + 4),(prevNumberOfVertices + 3));
HXLINE( 344)		this->indices->set((prevIndicesPos + 5),prevNumberOfVertices);
HXLINE( 346)		if (this->colored) {
HXLINE( 348)			Float red = ((Float)1.0);
HXLINE( 349)			Float green = ((Float)1.0);
HXLINE( 350)			Float blue = ((Float)1.0);
HXLINE( 351)			Float alpha = ((Float)1.0);
HXLINE( 353)			if (::hx::IsNotNull( transform )) {
HXLINE( 355)				red = transform->redMultiplier;
HXLINE( 356)				green = transform->greenMultiplier;
HXLINE( 357)				blue = transform->blueMultiplier;
HXLINE( 360)				alpha = transform->alphaMultiplier;
            			}
HXLINE( 364)			int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 364)			{
HXLINE( 364)				int Value = ::Math_obj::round((red * ( (Float)(255) )));
HXDLIN( 364)				color = (color & -16711681);
HXDLIN( 364)				int color1;
HXDLIN( 364)				if ((Value > 255)) {
HXLINE( 364)					color1 = 255;
            				}
            				else {
HXLINE( 364)					if ((Value < 0)) {
HXLINE( 364)						color1 = 0;
            					}
            					else {
HXLINE( 364)						color1 = Value;
            					}
            				}
HXDLIN( 364)				color = (color | (color1 << 16));
            			}
HXDLIN( 364)			{
HXLINE( 364)				int Value1 = ::Math_obj::round((green * ( (Float)(255) )));
HXDLIN( 364)				color = (color & -65281);
HXDLIN( 364)				int color2;
HXDLIN( 364)				if ((Value1 > 255)) {
HXLINE( 364)					color2 = 255;
            				}
            				else {
HXLINE( 364)					if ((Value1 < 0)) {
HXLINE( 364)						color2 = 0;
            					}
            					else {
HXLINE( 364)						color2 = Value1;
            					}
            				}
HXDLIN( 364)				color = (color | (color2 << 8));
            			}
HXDLIN( 364)			{
HXLINE( 364)				int Value2 = ::Math_obj::round((blue * ( (Float)(255) )));
HXDLIN( 364)				color = (color & -256);
HXDLIN( 364)				int color3;
HXDLIN( 364)				if ((Value2 > 255)) {
HXLINE( 364)					color3 = 255;
            				}
            				else {
HXLINE( 364)					if ((Value2 < 0)) {
HXLINE( 364)						color3 = 0;
            					}
            					else {
HXLINE( 364)						color3 = Value2;
            					}
            				}
HXDLIN( 364)				color = (color | color3);
            			}
HXDLIN( 364)			{
HXLINE( 364)				int Value3 = ::Math_obj::round((alpha * ( (Float)(255) )));
HXDLIN( 364)				color = (color & 16777215);
HXDLIN( 364)				int color4;
HXDLIN( 364)				if ((Value3 > 255)) {
HXLINE( 364)					color4 = 255;
            				}
            				else {
HXLINE( 364)					if ((Value3 < 0)) {
HXLINE( 364)						color4 = 0;
            					}
            					else {
HXLINE( 364)						color4 = Value3;
            					}
            				}
HXDLIN( 364)				color = (color | (color4 << 24));
            			}
HXDLIN( 364)			int color5 = color;
HXLINE( 366)			this->colors->set(prevColorsPos,color5);
HXLINE( 367)			this->colors->set((prevColorsPos + 1),color5);
HXLINE( 368)			this->colors->set((prevColorsPos + 2),color5);
HXLINE( 369)			this->colors->set((prevColorsPos + 3),color5);
HXLINE( 371)			 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 371)			_hx_tmp->colorsPosition = (_hx_tmp->colorsPosition + 4);
            		}
HXLINE( 374)		 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 374)		_hx_tmp->verticesPosition = (_hx_tmp->verticesPosition + 8);
HXLINE( 375)		 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 375)		_hx_tmp1->indicesPosition = (_hx_tmp1->indicesPosition + 6);
            	}


int FlxDrawTrianglesItem_obj::get_numVertices(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_380_get_numVertices)
HXDLIN( 380)		return ::Std_obj::_hx_int((( (Float)(this->vertices->get_length()) ) / ( (Float)(2) )));
            	}


int FlxDrawTrianglesItem_obj::get_numTriangles(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_385_get_numTriangles)
HXDLIN( 385)		return ::Std_obj::_hx_int((( (Float)(this->indices->get_length()) ) / ( (Float)(3) )));
            	}


 ::flixel::math::FlxBasePoint FlxDrawTrianglesItem_obj::point;

 ::flixel::math::FlxRect FlxDrawTrianglesItem_obj::rect;

 ::flixel::math::FlxRect FlxDrawTrianglesItem_obj::inflateBounds( ::flixel::math::FlxRect bounds,Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_268_inflateBounds)
HXLINE( 269)		if ((x < bounds->x)) {
HXLINE( 271)			 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 271)			bounds1->width = (bounds1->width + (bounds->x - x));
HXLINE( 272)			bounds->x = x;
            		}
HXLINE( 275)		if ((y < bounds->y)) {
HXLINE( 277)			 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 277)			bounds1->height = (bounds1->height + (bounds->y - y));
HXLINE( 278)			bounds->y = y;
            		}
HXLINE( 281)		if ((x > (bounds->x + bounds->width))) {
HXLINE( 283)			bounds->width = (x - bounds->x);
            		}
HXLINE( 286)		if ((y > (bounds->y + bounds->height))) {
HXLINE( 288)			bounds->height = (y - bounds->y);
            		}
HXLINE( 291)		return bounds;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxDrawTrianglesItem_obj,inflateBounds,return )


::hx::ObjectPtr< FlxDrawTrianglesItem_obj > FlxDrawTrianglesItem_obj::__new() {
	::hx::ObjectPtr< FlxDrawTrianglesItem_obj > __this = new FlxDrawTrianglesItem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxDrawTrianglesItem_obj > FlxDrawTrianglesItem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxDrawTrianglesItem_obj *__this = (FlxDrawTrianglesItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxDrawTrianglesItem_obj), true, "flixel.graphics.tile.FlxDrawTrianglesItem"));
	*(void **)__this = FlxDrawTrianglesItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxDrawTrianglesItem_obj::FlxDrawTrianglesItem_obj()
{
}

void FlxDrawTrianglesItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawTrianglesItem);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(alphas,"alphas");
	HX_MARK_MEMBER_NAME(colorMultipliers,"colorMultipliers");
	HX_MARK_MEMBER_NAME(colorOffsets,"colorOffsets");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(uvtData,"uvtData");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(verticesPosition,"verticesPosition");
	HX_MARK_MEMBER_NAME(indicesPosition,"indicesPosition");
	HX_MARK_MEMBER_NAME(colorsPosition,"colorsPosition");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDrawTrianglesItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(alphas,"alphas");
	HX_VISIT_MEMBER_NAME(colorMultipliers,"colorMultipliers");
	HX_VISIT_MEMBER_NAME(colorOffsets,"colorOffsets");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(uvtData,"uvtData");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(verticesPosition,"verticesPosition");
	HX_VISIT_MEMBER_NAME(indicesPosition,"indicesPosition");
	HX_VISIT_MEMBER_NAME(colorsPosition,"colorsPosition");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxDrawTrianglesItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"alphas") ) { return ::hx::Val( alphas ); }
		if (HX_FIELD_EQ(inName,"colors") ) { return ::hx::Val( colors ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return ::hx::Val( indices ); }
		if (HX_FIELD_EQ(inName,"uvtData") ) { return ::hx::Val( uvtData ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"addQuad") ) { return ::hx::Val( addQuad_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return ::hx::Val( vertices ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorOffsets") ) { return ::hx::Val( colorOffsets ); }
		if (HX_FIELD_EQ(inName,"addTriangles") ) { return ::hx::Val( addTriangles_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorsPosition") ) { return ::hx::Val( colorsPosition ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indicesPosition") ) { return ::hx::Val( indicesPosition ); }
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return ::hx::Val( get_numVertices_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"colorMultipliers") ) { return ::hx::Val( colorMultipliers ); }
		if (HX_FIELD_EQ(inName,"verticesPosition") ) { return ::hx::Val( verticesPosition ); }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return ::hx::Val( get_numTriangles_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setParameterValue") ) { return ::hx::Val( setParameterValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxDrawTrianglesItem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { outValue = ( rect ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = ( point ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inflateBounds") ) { outValue = inflateBounds_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxDrawTrianglesItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::flixel::graphics::tile::FlxGraphicsShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphas") ) { alphas=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvtData") ) { uvtData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorOffsets") ) { colorOffsets=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorsPosition") ) { colorsPosition=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indicesPosition") ) { indicesPosition=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"colorMultipliers") ) { colorMultipliers=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verticesPosition") ) { verticesPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxDrawTrianglesItem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=ioValue.Cast<  ::flixel::math::FlxBasePoint >(); return true; }
	}
	return false;
}

void FlxDrawTrianglesItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("alphas",55,cb,3b,42));
	outFields->push(HX_("colorMultipliers",2f,d5,72,20));
	outFields->push(HX_("colorOffsets",5d,02,bc,00));
	outFields->push(HX_("vertices",f9,bf,15,6a));
	outFields->push(HX_("indices",27,47,54,e3));
	outFields->push(HX_("uvtData",bd,a6,23,27));
	outFields->push(HX_("colors",b0,c5,86,c6));
	outFields->push(HX_("verticesPosition",c2,3d,e8,f5));
	outFields->push(HX_("indicesPosition",f0,a2,e6,12));
	outFields->push(HX_("colorsPosition",79,52,f8,2c));
	outFields->push(HX_("bounds",75,86,1d,66));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxDrawTrianglesItem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxGraphicsShader */ ,(int)offsetof(FlxDrawTrianglesItem_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxDrawTrianglesItem_obj,alphas),HX_("alphas",55,cb,3b,42)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxDrawTrianglesItem_obj,colorMultipliers),HX_("colorMultipliers",2f,d5,72,20)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxDrawTrianglesItem_obj,colorOffsets),HX_("colorOffsets",5d,02,bc,00)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(FlxDrawTrianglesItem_obj,vertices),HX_("vertices",f9,bf,15,6a)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(FlxDrawTrianglesItem_obj,indices),HX_("indices",27,47,54,e3)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(FlxDrawTrianglesItem_obj,uvtData),HX_("uvtData",bd,a6,23,27)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(FlxDrawTrianglesItem_obj,colors),HX_("colors",b0,c5,86,c6)},
	{::hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,verticesPosition),HX_("verticesPosition",c2,3d,e8,f5)},
	{::hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,indicesPosition),HX_("indicesPosition",f0,a2,e6,12)},
	{::hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,colorsPosition),HX_("colorsPosition",79,52,f8,2c)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxDrawTrianglesItem_obj,bounds),HX_("bounds",75,86,1d,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxDrawTrianglesItem_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(void *) &FlxDrawTrianglesItem_obj::point,HX_("point",50,b4,8f,c6)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxDrawTrianglesItem_obj::rect,HX_("rect",24,4d,a7,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxDrawTrianglesItem_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("alphas",55,cb,3b,42),
	HX_("colorMultipliers",2f,d5,72,20),
	HX_("colorOffsets",5d,02,bc,00),
	HX_("vertices",f9,bf,15,6a),
	HX_("indices",27,47,54,e3),
	HX_("uvtData",bd,a6,23,27),
	HX_("colors",b0,c5,86,c6),
	HX_("verticesPosition",c2,3d,e8,f5),
	HX_("indicesPosition",f0,a2,e6,12),
	HX_("colorsPosition",79,52,f8,2c),
	HX_("bounds",75,86,1d,66),
	HX_("render",56,6b,29,05),
	HX_("reset",cf,49,c8,e6),
	HX_("dispose",9f,80,4c,bb),
	HX_("addTriangles",4a,52,95,7e),
	HX_("setParameterValue",4a,1c,87,10),
	HX_("addQuad",88,7b,47,87),
	HX_("get_numVertices",f6,c7,0d,17),
	HX_("get_numTriangles",0e,26,50,2b),
	::String(null()) };

static void FlxDrawTrianglesItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::point,"point");
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::rect,"rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDrawTrianglesItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::point,"point");
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::rect,"rect");
};

#endif

::hx::Class FlxDrawTrianglesItem_obj::__mClass;

static ::String FlxDrawTrianglesItem_obj_sStaticFields[] = {
	HX_("point",50,b4,8f,c6),
	HX_("rect",24,4d,a7,4b),
	HX_("inflateBounds",5c,36,3c,2f),
	::String(null())
};

void FlxDrawTrianglesItem_obj::__register()
{
	FlxDrawTrianglesItem_obj _hx_dummy;
	FlxDrawTrianglesItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.tile.FlxDrawTrianglesItem",b7,10,12,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDrawTrianglesItem_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxDrawTrianglesItem_obj::__SetStatic;
	__mClass->mMarkFunc = FlxDrawTrianglesItem_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxDrawTrianglesItem_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxDrawTrianglesItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxDrawTrianglesItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDrawTrianglesItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDrawTrianglesItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDrawTrianglesItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxDrawTrianglesItem_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxBasePoint _hx_run(){
            			HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_23_boot)
HXDLIN(  23)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  23)			point->_inPool = false;
HXDLIN(  23)			return point;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_23_boot)
HXDLIN(  23)		point = ( ( ::flixel::math::FlxBasePoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_24_boot)
HXDLIN(  24)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN(  24)			_this->x = ( (Float)(0) );
HXDLIN(  24)			_this->y = ( (Float)(0) );
HXDLIN(  24)			_this->width = ( (Float)(0) );
HXDLIN(  24)			_this->height = ( (Float)(0) );
HXDLIN(  24)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  24)			rect->_inPool = false;
HXDLIN(  24)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_24_boot)
HXDLIN(  24)		rect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
