#include <hxcpp.h>

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
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandType
#include <openfl/display/_internal/DrawCommandType.h>
#endif
#ifndef INCLUDED_openfl_display__internal_ShaderBuffer
#include <openfl/display/_internal/ShaderBuffer.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fae278bbae08f83e_39_new,"openfl.display._internal.DrawCommandBuffer","new",0xbf07e5fd,"openfl.display._internal.DrawCommandBuffer.new","openfl/display/_internal/DrawCommandBuffer.hx",39,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_59_append,"openfl.display._internal.DrawCommandBuffer","append",0x42e16c5d,"openfl.display._internal.DrawCommandBuffer.append","openfl/display/_internal/DrawCommandBuffer.hx",59,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_152_beginBitmapFill,"openfl.display._internal.DrawCommandBuffer","beginBitmapFill",0xf81456b8,"openfl.display._internal.DrawCommandBuffer.beginBitmapFill","openfl/display/_internal/DrawCommandBuffer.hx",152,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_163_beginFill,"openfl.display._internal.DrawCommandBuffer","beginFill",0x0db156a9,"openfl.display._internal.DrawCommandBuffer.beginFill","openfl/display/_internal/DrawCommandBuffer.hx",163,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_173_beginGradientFill,"openfl.display._internal.DrawCommandBuffer","beginGradientFill",0xc2230ab9,"openfl.display._internal.DrawCommandBuffer.beginGradientFill","openfl/display/_internal/DrawCommandBuffer.hx",173,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_188_beginShaderFill,"openfl.display._internal.DrawCommandBuffer","beginShaderFill",0xf54fd8ee,"openfl.display._internal.DrawCommandBuffer.beginShaderFill","openfl/display/_internal/DrawCommandBuffer.hx",188,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_196_clear,"openfl.display._internal.DrawCommandBuffer","clear",0x2c75e86a,"openfl.display._internal.DrawCommandBuffer.clear","openfl/display/_internal/DrawCommandBuffer.hx",196,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_210_copy,"openfl.display._internal.DrawCommandBuffer","copy",0x60a38f78,"openfl.display._internal.DrawCommandBuffer.copy","openfl/display/_internal/DrawCommandBuffer.hx",210,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_217_cubicCurveTo,"openfl.display._internal.DrawCommandBuffer","cubicCurveTo",0x02dcd6a3,"openfl.display._internal.DrawCommandBuffer.cubicCurveTo","openfl/display/_internal/DrawCommandBuffer.hx",217,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_230_curveTo,"openfl.display._internal.DrawCommandBuffer","curveTo",0xc7540827,"openfl.display._internal.DrawCommandBuffer.curveTo","openfl/display/_internal/DrawCommandBuffer.hx",230,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_241_destroy,"openfl.display._internal.DrawCommandBuffer","destroy",0x1d51d517,"openfl.display._internal.DrawCommandBuffer.destroy","openfl/display/_internal/DrawCommandBuffer.hx",241,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_255_drawCircle,"openfl.display._internal.DrawCommandBuffer","drawCircle",0x0ee97537,"openfl.display._internal.DrawCommandBuffer.drawCircle","openfl/display/_internal/DrawCommandBuffer.hx",255,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_265_drawEllipse,"openfl.display._internal.DrawCommandBuffer","drawEllipse",0x132cffd7,"openfl.display._internal.DrawCommandBuffer.drawEllipse","openfl/display/_internal/DrawCommandBuffer.hx",265,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_276_drawQuads,"openfl.display._internal.DrawCommandBuffer","drawQuads",0xa70e5485,"openfl.display._internal.DrawCommandBuffer.drawQuads","openfl/display/_internal/DrawCommandBuffer.hx",276,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_286_drawRect,"openfl.display._internal.DrawCommandBuffer","drawRect",0x1978688b,"openfl.display._internal.DrawCommandBuffer.drawRect","openfl/display/_internal/DrawCommandBuffer.hx",286,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_297_drawRoundRect,"openfl.display._internal.DrawCommandBuffer","drawRoundRect",0xd192dfcb,"openfl.display._internal.DrawCommandBuffer.drawRoundRect","openfl/display/_internal/DrawCommandBuffer.hx",297,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_310_drawTriangles,"openfl.display._internal.DrawCommandBuffer","drawTriangles",0xcd505fe4,"openfl.display._internal.DrawCommandBuffer.drawTriangles","openfl/display/_internal/DrawCommandBuffer.hx",310,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_321_endFill,"openfl.display._internal.DrawCommandBuffer","endFill",0x1eac301b,"openfl.display._internal.DrawCommandBuffer.endFill","openfl/display/_internal/DrawCommandBuffer.hx",321,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_328_lineBitmapStyle,"openfl.display._internal.DrawCommandBuffer","lineBitmapStyle",0xd32dcc4b,"openfl.display._internal.DrawCommandBuffer.lineBitmapStyle","openfl/display/_internal/DrawCommandBuffer.hx",328,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_340_lineGradientStyle,"openfl.display._internal.DrawCommandBuffer","lineGradientStyle",0x5611f2ea,"openfl.display._internal.DrawCommandBuffer.lineGradientStyle","openfl/display/_internal/DrawCommandBuffer.hx",340,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_356_lineStyle,"openfl.display._internal.DrawCommandBuffer","lineStyle",0x4c3451fa,"openfl.display._internal.DrawCommandBuffer.lineStyle","openfl/display/_internal/DrawCommandBuffer.hx",356,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_371_lineTo,"openfl.display._internal.DrawCommandBuffer","lineTo",0x9fadd112,"openfl.display._internal.DrawCommandBuffer.lineTo","openfl/display/_internal/DrawCommandBuffer.hx",371,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_380_moveTo,"openfl.display._internal.DrawCommandBuffer","moveTo",0x7fba5d6f,"openfl.display._internal.DrawCommandBuffer.moveTo","openfl/display/_internal/DrawCommandBuffer.hx",380,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_390_prepareWrite,"openfl.display._internal.DrawCommandBuffer","prepareWrite",0x1856309b,"openfl.display._internal.DrawCommandBuffer.prepareWrite","openfl/display/_internal/DrawCommandBuffer.hx",390,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_405_overrideBlendMode,"openfl.display._internal.DrawCommandBuffer","overrideBlendMode",0x8e09c6c5,"openfl.display._internal.DrawCommandBuffer.overrideBlendMode","openfl/display/_internal/DrawCommandBuffer.hx",405,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_413_overrideMatrix,"openfl.display._internal.DrawCommandBuffer","overrideMatrix",0xd5d9d330,"openfl.display._internal.DrawCommandBuffer.overrideMatrix","openfl/display/_internal/DrawCommandBuffer.hx",413,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_421_windingEvenOdd,"openfl.display._internal.DrawCommandBuffer","windingEvenOdd",0x273aa23e,"openfl.display._internal.DrawCommandBuffer.windingEvenOdd","openfl/display/_internal/DrawCommandBuffer.hx",421,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_428_windingNonZero,"openfl.display._internal.DrawCommandBuffer","windingNonZero",0xf26ffa5e,"openfl.display._internal.DrawCommandBuffer.windingNonZero","openfl/display/_internal/DrawCommandBuffer.hx",428,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_437_get_length,"openfl.display._internal.DrawCommandBuffer","get_length",0x06a78cb2,"openfl.display._internal.DrawCommandBuffer.get_length","openfl/display/_internal/DrawCommandBuffer.hx",437,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_22_boot,"openfl.display._internal.DrawCommandBuffer","boot",0x5ffa57f5,"openfl.display._internal.DrawCommandBuffer.boot","openfl/display/_internal/DrawCommandBuffer.hx",22,0x2aaa1b16)
HX_LOCAL_STACK_FRAME(_hx_pos_fae278bbae08f83e_24_boot,"openfl.display._internal.DrawCommandBuffer","boot",0x5ffa57f5,"openfl.display._internal.DrawCommandBuffer.boot","openfl/display/_internal/DrawCommandBuffer.hx",24,0x2aaa1b16)
namespace openfl{
namespace display{
namespace _internal{

void DrawCommandBuffer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_39_new)
HXDLIN(  39)		if (::hx::IsNull( ::openfl::display::_internal::DrawCommandBuffer_obj::empty )) {
HXLINE(  41)			this->types = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  43)			this->b = ::Array_obj< bool >::__new(0);
HXLINE(  44)			this->i = ::Array_obj< int >::__new(0);
HXLINE(  45)			this->f = ::Array_obj< Float >::__new(0);
HXLINE(  46)			this->o = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  47)			this->ff = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  48)			this->ii = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  50)			this->copyOnWrite = true;
            		}
            		else {
HXLINE(  54)			this->clear();
            		}
            	}

Dynamic DrawCommandBuffer_obj::__CreateEmpty() { return new DrawCommandBuffer_obj; }

void *DrawCommandBuffer_obj::_hx_vtable = 0;

Dynamic DrawCommandBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DrawCommandBuffer_obj > _hx_result = new DrawCommandBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawCommandBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x04a7ef7d;
}

 ::openfl::display::_internal::DrawCommandBuffer DrawCommandBuffer_obj::append( ::openfl::display::_internal::DrawCommandBuffer other){
            	HX_GC_STACKFRAME(&_hx_pos_fae278bbae08f83e_59_append)
HXLINE(  60)		if ((this->get_length() == 0)) {
HXLINE(  62)			this->types = other->types;
HXLINE(  63)			this->b = other->b;
HXLINE(  64)			this->i = other->i;
HXLINE(  65)			this->f = other->f;
HXLINE(  66)			this->o = other->o;
HXLINE(  67)			this->ff = other->ff;
HXLINE(  68)			this->ii = other->ii;
HXLINE(  69)			this->copyOnWrite = (other->copyOnWrite = true);
HXLINE(  71)			return other;
            		}
HXLINE(  74)		 ::openfl::display::_internal::DrawCommandReader data =  ::openfl::display::_internal::DrawCommandReader_obj::__alloc( HX_CTX ,other);
HXLINE(  76)		{
HXLINE(  76)			int _g = 0;
HXDLIN(  76)			::Array< ::Dynamic> _g1 = other->types;
HXDLIN(  76)			while((_g < _g1->length)){
HXLINE(  76)				 ::openfl::display::_internal::DrawCommandType type = _g1->__get(_g).StaticCast<  ::openfl::display::_internal::DrawCommandType >();
HXDLIN(  76)				_g = (_g + 1);
HXLINE(  78)				switch((int)(type->_hx_getIndex())){
            					case (int)0: {
HXLINE(  81)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->oPos = (data1->oPos + 2);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  81)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->iPos = (data1->iPos + 1);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  81)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->oPos = (data1->oPos + 4);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  81)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  81)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  81)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->fPos = (data1->fPos + 5);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  81)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->oPos = (data1->oPos + 2);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  81)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->oPos = (data1->oPos + 4);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  81)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  81)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  81)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->oPos = (data1->oPos + 4);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  81)								data2->iPos = (data2->iPos + 1);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  81)								data3->fPos = (data3->fPos + 2);
HXDLIN(  81)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  81)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  81)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  81)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  81)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn();
HXDLIN(  81)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  81)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  82)						this->beginBitmapFill(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            					}
            					break;
            					case (int)1: {
HXLINE(  84)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->oPos = (data1->oPos + 2);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  84)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->iPos = (data1->iPos + 1);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  84)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->oPos = (data1->oPos + 4);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  84)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  84)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  84)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->fPos = (data1->fPos + 5);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  84)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->oPos = (data1->oPos + 2);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  84)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->oPos = (data1->oPos + 4);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  84)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  84)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  84)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->oPos = (data1->oPos + 4);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  84)								data2->iPos = (data2->iPos + 1);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  84)								data3->fPos = (data3->fPos + 2);
HXDLIN(  84)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  84)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  84)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  84)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  84)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn();
HXDLIN(  84)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  84)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  85)						this->beginFill(c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos));
            					}
            					break;
            					case (int)2: {
HXLINE(  87)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->oPos = (data1->oPos + 2);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  87)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->iPos = (data1->iPos + 1);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  87)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->oPos = (data1->oPos + 4);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  87)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  87)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  87)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->fPos = (data1->fPos + 5);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  87)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->oPos = (data1->oPos + 2);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  87)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->oPos = (data1->oPos + 4);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  87)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  87)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  87)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->oPos = (data1->oPos + 4);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  87)								data2->iPos = (data2->iPos + 1);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  87)								data3->fPos = (data3->fPos + 2);
HXDLIN(  87)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  87)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  87)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  87)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  87)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn();
HXDLIN(  87)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  87)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  88)						this->beginGradientFill(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            					}
            					break;
            					case (int)3: {
HXLINE(  90)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->oPos = (data1->oPos + 2);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  90)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->iPos = (data1->iPos + 1);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  90)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->oPos = (data1->oPos + 4);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  90)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  90)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  90)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->fPos = (data1->fPos + 5);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  90)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->oPos = (data1->oPos + 2);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  90)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->oPos = (data1->oPos + 4);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  90)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  90)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  90)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->oPos = (data1->oPos + 4);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  90)								data2->iPos = (data2->iPos + 1);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  90)								data3->fPos = (data3->fPos + 2);
HXDLIN(  90)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  90)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  90)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  90)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  90)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn();
HXDLIN(  90)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  90)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  91)						this->beginShaderFill(( ( ::openfl::display::_internal::ShaderBuffer)(c->buffer->o->__get(c->oPos)) ));
            					}
            					break;
            					case (int)4: {
HXLINE(  93)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->oPos = (data1->oPos + 2);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  93)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->iPos = (data1->iPos + 1);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  93)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->oPos = (data1->oPos + 4);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  93)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  93)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  93)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->fPos = (data1->fPos + 5);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  93)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->oPos = (data1->oPos + 2);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  93)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->oPos = (data1->oPos + 4);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  93)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  93)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  93)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->oPos = (data1->oPos + 4);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  93)								data2->iPos = (data2->iPos + 1);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  93)								data3->fPos = (data3->fPos + 2);
HXDLIN(  93)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  93)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  93)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  93)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  93)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn();
HXDLIN(  93)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  93)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  94)						this->cubicCurveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->f->__get((c->fPos + 5)));
            					}
            					break;
            					case (int)5: {
HXLINE(  96)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->oPos = (data1->oPos + 2);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  96)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->iPos = (data1->iPos + 1);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  96)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->oPos = (data1->oPos + 4);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  96)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  96)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  96)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->fPos = (data1->fPos + 5);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  96)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->oPos = (data1->oPos + 2);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  96)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->oPos = (data1->oPos + 4);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  96)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  96)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  96)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->oPos = (data1->oPos + 4);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  96)								data2->iPos = (data2->iPos + 1);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  96)								data3->fPos = (data3->fPos + 2);
HXDLIN(  96)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  96)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  96)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  96)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  96)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn();
HXDLIN(  96)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  96)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE(  97)						this->curveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)6: {
HXLINE(  99)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->oPos = (data1->oPos + 2);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  99)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->iPos = (data1->iPos + 1);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  99)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->oPos = (data1->oPos + 4);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  99)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  99)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  99)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->fPos = (data1->fPos + 5);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  99)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->oPos = (data1->oPos + 2);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  99)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->oPos = (data1->oPos + 4);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  99)								data2->iiPos = (data2->iiPos + 2);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  99)								data3->ffPos = (data3->ffPos + 1);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  99)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->oPos = (data1->oPos + 4);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN(  99)								data2->iPos = (data2->iPos + 1);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN(  99)								data3->fPos = (data3->fPos + 2);
HXDLIN(  99)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN(  99)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE(  99)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN(  99)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE(  99)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn();
HXDLIN(  99)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN(  99)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 100)						this->drawCircle(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)));
            					}
            					break;
            					case (int)7: {
HXLINE( 102)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->oPos = (data1->oPos + 2);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 102)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->iPos = (data1->iPos + 1);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 102)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->oPos = (data1->oPos + 4);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 102)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 102)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 102)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->fPos = (data1->fPos + 5);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 102)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->oPos = (data1->oPos + 2);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 102)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->oPos = (data1->oPos + 4);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 102)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 102)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 102)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->oPos = (data1->oPos + 4);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 102)								data2->iPos = (data2->iPos + 1);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 102)								data3->fPos = (data3->fPos + 2);
HXDLIN( 102)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 102)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 102)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 102)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 102)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn();
HXDLIN( 102)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 102)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 103)						this->drawEllipse(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)8: {
HXLINE( 105)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->oPos = (data1->oPos + 2);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 105)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->iPos = (data1->iPos + 1);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 105)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->oPos = (data1->oPos + 4);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 105)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 105)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 105)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->fPos = (data1->fPos + 5);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 105)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->oPos = (data1->oPos + 2);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 105)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->oPos = (data1->oPos + 4);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 105)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 105)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 105)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->oPos = (data1->oPos + 4);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 105)								data2->iPos = (data2->iPos + 1);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 105)								data3->fPos = (data3->fPos + 2);
HXDLIN( 105)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 105)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 105)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 105)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 105)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn();
HXDLIN( 105)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 105)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 106)						this->drawQuads(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ));
            					}
            					break;
            					case (int)9: {
HXLINE( 108)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->oPos = (data1->oPos + 2);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 108)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->iPos = (data1->iPos + 1);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 108)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->oPos = (data1->oPos + 4);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 108)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 108)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 108)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->fPos = (data1->fPos + 5);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 108)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->oPos = (data1->oPos + 2);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 108)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->oPos = (data1->oPos + 4);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 108)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 108)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 108)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->oPos = (data1->oPos + 4);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 108)								data2->iPos = (data2->iPos + 1);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 108)								data3->fPos = (data3->fPos + 2);
HXDLIN( 108)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 108)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 108)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 108)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 108)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn();
HXDLIN( 108)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 108)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 109)						this->drawRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)));
            					}
            					break;
            					case (int)10: {
HXLINE( 111)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->oPos = (data1->oPos + 2);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 111)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->iPos = (data1->iPos + 1);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 111)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->oPos = (data1->oPos + 4);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 111)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 111)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 111)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->fPos = (data1->fPos + 5);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 111)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->oPos = (data1->oPos + 2);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 111)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->oPos = (data1->oPos + 4);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 111)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 111)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 111)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->oPos = (data1->oPos + 4);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 111)								data2->iPos = (data2->iPos + 1);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 111)								data3->fPos = (data3->fPos + 2);
HXDLIN( 111)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 111)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 111)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 111)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 111)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn();
HXDLIN( 111)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 111)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 112)						this->drawRoundRect(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)),c->buffer->f->__get((c->fPos + 2)),c->buffer->f->__get((c->fPos + 3)),c->buffer->f->__get((c->fPos + 4)),c->buffer->o->__get(c->oPos));
            					}
            					break;
            					case (int)12: {
HXLINE( 114)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->oPos = (data1->oPos + 2);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 114)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->iPos = (data1->iPos + 1);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 114)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->oPos = (data1->oPos + 4);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 114)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 114)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 114)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->fPos = (data1->fPos + 5);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 114)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->oPos = (data1->oPos + 2);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 114)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->oPos = (data1->oPos + 4);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 114)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 114)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 114)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->oPos = (data1->oPos + 4);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 114)								data2->iPos = (data2->iPos + 1);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 114)								data3->fPos = (data3->fPos + 2);
HXDLIN( 114)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 114)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 114)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 114)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 114)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn();
HXDLIN( 114)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 114)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 115)						this->drawTriangles(( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::_Vector::IntVector)(c->buffer->o->__get((c->oPos + 1))) ),( ( ::openfl::_Vector::FloatVector)(c->buffer->o->__get((c->oPos + 2))) ),c->buffer->o->__get((c->oPos + 3)));
            					}
            					break;
            					case (int)13: {
HXLINE( 117)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->oPos = (data1->oPos + 2);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 117)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->iPos = (data1->iPos + 1);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 117)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->oPos = (data1->oPos + 4);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 117)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 117)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 117)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->fPos = (data1->fPos + 5);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 117)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->oPos = (data1->oPos + 2);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 117)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->oPos = (data1->oPos + 4);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 117)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 117)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 117)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->oPos = (data1->oPos + 4);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 117)								data2->iPos = (data2->iPos + 1);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 117)								data3->fPos = (data3->fPos + 2);
HXDLIN( 117)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 117)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 117)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 117)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 117)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn();
HXDLIN( 117)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 117)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 118)						this->endFill();
            					}
            					break;
            					case (int)14: {
HXLINE( 120)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->oPos = (data1->oPos + 2);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 120)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->iPos = (data1->iPos + 1);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 120)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->oPos = (data1->oPos + 4);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 120)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 120)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 120)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->fPos = (data1->fPos + 5);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 120)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->oPos = (data1->oPos + 2);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 120)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->oPos = (data1->oPos + 4);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 120)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 120)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 120)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->oPos = (data1->oPos + 4);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 120)								data2->iPos = (data2->iPos + 1);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 120)								data3->fPos = (data3->fPos + 2);
HXDLIN( 120)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 120)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 120)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 120)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 120)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn();
HXDLIN( 120)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 120)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 121)						this->lineBitmapStyle(( ( ::openfl::display::BitmapData)(c->buffer->o->__get(c->oPos)) ),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->b->__get(c->bPos),c->buffer->b->__get((c->bPos + 1)));
            					}
            					break;
            					case (int)15: {
HXLINE( 123)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->oPos = (data1->oPos + 2);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 123)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->iPos = (data1->iPos + 1);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 123)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->oPos = (data1->oPos + 4);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 123)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 123)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 123)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->fPos = (data1->fPos + 5);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 123)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->oPos = (data1->oPos + 2);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 123)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->oPos = (data1->oPos + 4);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 123)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 123)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 123)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->oPos = (data1->oPos + 4);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 123)								data2->iPos = (data2->iPos + 1);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 123)								data3->fPos = (data3->fPos + 2);
HXDLIN( 123)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 123)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 123)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 123)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 123)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn();
HXDLIN( 123)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 123)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 124)						this->lineGradientStyle(c->buffer->o->__get(c->oPos),c->buffer->ii->__get(c->iiPos).StaticCast< ::Array< int > >(),c->buffer->ff->__get(c->ffPos).StaticCast< ::Array< Float > >(),c->buffer->ii->__get((c->iiPos + 1)).StaticCast< ::Array< int > >(),( ( ::openfl::geom::Matrix)(c->buffer->o->__get((c->oPos + 1))) ),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get(c->fPos));
            					}
            					break;
            					case (int)16: {
HXLINE( 126)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->oPos = (data1->oPos + 2);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 126)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->iPos = (data1->iPos + 1);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 126)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->oPos = (data1->oPos + 4);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 126)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 126)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 126)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->fPos = (data1->fPos + 5);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 126)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->oPos = (data1->oPos + 2);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 126)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->oPos = (data1->oPos + 4);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 126)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 126)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 126)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->oPos = (data1->oPos + 4);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 126)								data2->iPos = (data2->iPos + 1);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 126)								data3->fPos = (data3->fPos + 2);
HXDLIN( 126)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 126)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 126)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 126)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 126)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn();
HXDLIN( 126)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 126)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 127)						this->lineStyle(c->buffer->o->__get(c->oPos),c->buffer->i->__get(c->iPos),c->buffer->f->__get(c->fPos),c->buffer->b->__get(c->bPos),c->buffer->o->__get((c->oPos + 1)),c->buffer->o->__get((c->oPos + 2)),c->buffer->o->__get((c->oPos + 3)),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					case (int)17: {
HXLINE( 129)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->oPos = (data1->oPos + 2);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 129)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->iPos = (data1->iPos + 1);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 129)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->oPos = (data1->oPos + 4);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 129)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 129)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 129)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->fPos = (data1->fPos + 5);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 129)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->oPos = (data1->oPos + 2);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 129)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->oPos = (data1->oPos + 4);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 129)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 129)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 129)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->oPos = (data1->oPos + 4);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 129)								data2->iPos = (data2->iPos + 1);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 129)								data3->fPos = (data3->fPos + 2);
HXDLIN( 129)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 129)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 129)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 129)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 129)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn();
HXDLIN( 129)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 129)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 130)						this->lineTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					case (int)18: {
HXLINE( 132)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->oPos = (data1->oPos + 2);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 132)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->iPos = (data1->iPos + 1);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 132)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->oPos = (data1->oPos + 4);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 132)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 132)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 132)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->fPos = (data1->fPos + 5);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 132)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->oPos = (data1->oPos + 2);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 132)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->oPos = (data1->oPos + 4);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 132)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 132)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 132)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->oPos = (data1->oPos + 4);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 132)								data2->iPos = (data2->iPos + 1);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 132)								data3->fPos = (data3->fPos + 2);
HXDLIN( 132)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 132)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 132)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 132)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 132)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn();
HXDLIN( 132)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 132)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 133)						this->moveTo(c->buffer->f->__get(c->fPos),c->buffer->f->__get((c->fPos + 1)));
            					}
            					break;
            					case (int)20: {
HXLINE( 135)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->oPos = (data1->oPos + 2);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 135)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->iPos = (data1->iPos + 1);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 135)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->oPos = (data1->oPos + 4);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 135)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 135)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 135)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->fPos = (data1->fPos + 5);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 135)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->oPos = (data1->oPos + 2);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 135)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->oPos = (data1->oPos + 4);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 135)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 135)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 135)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->oPos = (data1->oPos + 4);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 135)								data2->iPos = (data2->iPos + 1);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 135)								data3->fPos = (data3->fPos + 2);
HXDLIN( 135)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 135)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 135)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 135)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 135)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_MATRIX_dyn();
HXDLIN( 135)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 135)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 136)						this->overrideMatrix(( ( ::openfl::geom::Matrix)(c->buffer->o->__get(c->oPos)) ));
            					}
            					break;
            					case (int)21: {
HXLINE( 138)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->oPos = (data1->oPos + 2);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 138)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->iPos = (data1->iPos + 1);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 138)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->oPos = (data1->oPos + 4);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 138)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 138)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 138)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->fPos = (data1->fPos + 5);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 138)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->oPos = (data1->oPos + 2);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 138)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->oPos = (data1->oPos + 4);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 138)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 138)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 138)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->oPos = (data1->oPos + 4);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 138)								data2->iPos = (data2->iPos + 1);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 138)								data3->fPos = (data3->fPos + 2);
HXDLIN( 138)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 138)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 138)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 138)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 138)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn();
HXDLIN( 138)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 138)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 139)						this->windingEvenOdd();
            					}
            					break;
            					case (int)22: {
HXLINE( 141)						switch((int)(data->prev->_hx_getIndex())){
            							case (int)0: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->oPos = (data1->oPos + 2);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 141)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)1: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->iPos = (data1->iPos + 1);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 141)								data2->fPos = (data2->fPos + 1);
            							}
            							break;
            							case (int)2: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->oPos = (data1->oPos + 4);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 141)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 141)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 141)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)3: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)4: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->fPos = (data1->fPos + 6);
            							}
            							break;
            							case (int)5: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)6: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->fPos = (data1->fPos + 3);
            							}
            							break;
            							case (int)7: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)8: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->oPos = (data1->oPos + 3);
            							}
            							break;
            							case (int)9: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->fPos = (data1->fPos + 4);
            							}
            							break;
            							case (int)10: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->fPos = (data1->fPos + 5);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 141)								data2->oPos = (data2->oPos + 1);
            							}
            							break;
            							case (int)12: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->oPos = (data1->oPos + 4);
            							}
            							break;
            							case (int)13: {
            							}
            							break;
            							case (int)14: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->oPos = (data1->oPos + 2);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 141)								data2->bPos = (data2->bPos + 2);
            							}
            							break;
            							case (int)15: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->oPos = (data1->oPos + 4);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 141)								data2->iiPos = (data2->iiPos + 2);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 141)								data3->ffPos = (data3->ffPos + 1);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 141)								data4->fPos = (data4->fPos + 1);
            							}
            							break;
            							case (int)16: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->oPos = (data1->oPos + 4);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data2 = data;
HXDLIN( 141)								data2->iPos = (data2->iPos + 1);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data3 = data;
HXDLIN( 141)								data3->fPos = (data3->fPos + 2);
HXDLIN( 141)								 ::openfl::display::_internal::DrawCommandReader data4 = data;
HXDLIN( 141)								data4->bPos = (data4->bPos + 1);
            							}
            							break;
            							case (int)17: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)18: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->fPos = (data1->fPos + 2);
            							}
            							break;
            							case (int)19: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)20: {
HXLINE( 141)								 ::openfl::display::_internal::DrawCommandReader data1 = data;
HXDLIN( 141)								data1->oPos = (data1->oPos + 1);
            							}
            							break;
            							case (int)21: case (int)22: {
            							}
            							break;
            							default:{
            							}
            						}
HXLINE( 141)						data->prev = ::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn();
HXDLIN( 141)						 ::openfl::display::_internal::DrawCommandReader this1 = data;
HXDLIN( 141)						 ::openfl::display::_internal::DrawCommandReader c = this1;
HXLINE( 142)						this->windingNonZero();
            					}
            					break;
            					default:{
            					}
            				}
            			}
            		}
HXLINE( 147)		data->destroy();
HXLINE( 148)		return other;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,append,return )

void DrawCommandBuffer_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_152_beginBitmapFill)
HXLINE( 153)		this->prepareWrite();
HXLINE( 155)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::BEGIN_BITMAP_FILL_dyn());
HXLINE( 156)		this->o->push(bitmap);
HXLINE( 157)		this->o->push(matrix);
HXLINE( 158)		this->b->push(repeat);
HXLINE( 159)		this->b->push(smooth);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,beginBitmapFill,(void))

void DrawCommandBuffer_obj::beginFill(int color,Float alpha){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_163_beginFill)
HXLINE( 164)		this->prepareWrite();
HXLINE( 166)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::BEGIN_FILL_dyn());
HXLINE( 167)		this->i->push(color);
HXLINE( 168)		this->f->push(alpha);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,beginFill,(void))

void DrawCommandBuffer_obj::beginGradientFill( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_173_beginGradientFill)
HXLINE( 174)		this->prepareWrite();
HXLINE( 176)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::BEGIN_GRADIENT_FILL_dyn());
HXLINE( 177)		this->o->push(type);
HXLINE( 178)		this->ii->push(colors);
HXLINE( 179)		this->ff->push(alphas);
HXLINE( 180)		this->ii->push(ratios);
HXLINE( 181)		this->o->push(matrix);
HXLINE( 182)		this->o->push(spreadMethod);
HXLINE( 183)		this->o->push(interpolationMethod);
HXLINE( 184)		this->f->push(focalPointRatio);
            	}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,beginGradientFill,(void))

void DrawCommandBuffer_obj::beginShaderFill( ::openfl::display::_internal::ShaderBuffer shaderBuffer){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_188_beginShaderFill)
HXLINE( 189)		this->prepareWrite();
HXLINE( 191)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::BEGIN_SHADER_FILL_dyn());
HXLINE( 192)		this->o->push(shaderBuffer);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,beginShaderFill,(void))

void DrawCommandBuffer_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_196_clear)
HXLINE( 197)		this->types = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->types;
HXLINE( 199)		this->b = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->b;
HXLINE( 200)		this->i = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->i;
HXLINE( 201)		this->f = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->f;
HXLINE( 202)		this->o = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->o;
HXLINE( 203)		this->ff = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->ff;
HXLINE( 204)		this->ii = ::openfl::display::_internal::DrawCommandBuffer_obj::empty->ii;
HXLINE( 206)		this->copyOnWrite = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,clear,(void))

 ::openfl::display::_internal::DrawCommandBuffer DrawCommandBuffer_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_fae278bbae08f83e_210_copy)
HXLINE( 211)		 ::openfl::display::_internal::DrawCommandBuffer copy =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
HXLINE( 212)		copy->append(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 213)		return copy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,copy,return )

void DrawCommandBuffer_obj::cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_217_cubicCurveTo)
HXLINE( 218)		this->prepareWrite();
HXLINE( 220)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::CUBIC_CURVE_TO_dyn());
HXLINE( 221)		this->f->push(controlX1);
HXLINE( 222)		this->f->push(controlY1);
HXLINE( 223)		this->f->push(controlX2);
HXLINE( 224)		this->f->push(controlY2);
HXLINE( 225)		this->f->push(anchorX);
HXLINE( 226)		this->f->push(anchorY);
            	}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,cubicCurveTo,(void))

void DrawCommandBuffer_obj::curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_230_curveTo)
HXLINE( 231)		this->prepareWrite();
HXLINE( 233)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::CURVE_TO_dyn());
HXLINE( 234)		this->f->push(controlX);
HXLINE( 235)		this->f->push(controlY);
HXLINE( 236)		this->f->push(anchorX);
HXLINE( 237)		this->f->push(anchorY);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,curveTo,(void))

void DrawCommandBuffer_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_241_destroy)
HXLINE( 242)		this->clear();
HXLINE( 244)		this->types = null();
HXLINE( 246)		this->b = null();
HXLINE( 247)		this->i = null();
HXLINE( 248)		this->f = null();
HXLINE( 249)		this->o = null();
HXLINE( 250)		this->ff = null();
HXLINE( 251)		this->ii = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,destroy,(void))

void DrawCommandBuffer_obj::drawCircle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_255_drawCircle)
HXLINE( 256)		this->prepareWrite();
HXLINE( 258)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_CIRCLE_dyn());
HXLINE( 259)		this->f->push(x);
HXLINE( 260)		this->f->push(y);
HXLINE( 261)		this->f->push(radius);
            	}


HX_DEFINE_DYNAMIC_FUNC3(DrawCommandBuffer_obj,drawCircle,(void))

void DrawCommandBuffer_obj::drawEllipse(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_265_drawEllipse)
HXLINE( 266)		this->prepareWrite();
HXLINE( 268)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_ELLIPSE_dyn());
HXLINE( 269)		this->f->push(x);
HXLINE( 270)		this->f->push(y);
HXLINE( 271)		this->f->push(width);
HXLINE( 272)		this->f->push(height);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawEllipse,(void))

void DrawCommandBuffer_obj::drawQuads( ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_276_drawQuads)
HXLINE( 277)		this->prepareWrite();
HXLINE( 279)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_QUADS_dyn());
HXLINE( 280)		this->o->push(rects);
HXLINE( 281)		this->o->push(indices);
HXLINE( 282)		this->o->push(transforms);
            	}


HX_DEFINE_DYNAMIC_FUNC3(DrawCommandBuffer_obj,drawQuads,(void))

void DrawCommandBuffer_obj::drawRect(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_286_drawRect)
HXLINE( 287)		this->prepareWrite();
HXLINE( 289)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_RECT_dyn());
HXLINE( 290)		this->f->push(x);
HXLINE( 291)		this->f->push(y);
HXLINE( 292)		this->f->push(width);
HXLINE( 293)		this->f->push(height);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawRect,(void))

void DrawCommandBuffer_obj::drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_297_drawRoundRect)
HXLINE( 298)		this->prepareWrite();
HXLINE( 300)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_ROUND_RECT_dyn());
HXLINE( 301)		this->f->push(x);
HXLINE( 302)		this->f->push(y);
HXLINE( 303)		this->f->push(width);
HXLINE( 304)		this->f->push(height);
HXLINE( 305)		this->f->push(ellipseWidth);
HXLINE( 306)		this->o->push(ellipseHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC6(DrawCommandBuffer_obj,drawRoundRect,(void))

void DrawCommandBuffer_obj::drawTriangles( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::Dynamic culling){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_310_drawTriangles)
HXLINE( 311)		this->prepareWrite();
HXLINE( 313)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::DRAW_TRIANGLES_dyn());
HXLINE( 314)		this->o->push(vertices);
HXLINE( 315)		this->o->push(indices);
HXLINE( 316)		this->o->push(uvtData);
HXLINE( 317)		this->o->push(culling);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,drawTriangles,(void))

void DrawCommandBuffer_obj::endFill(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_321_endFill)
HXLINE( 322)		this->prepareWrite();
HXLINE( 324)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::END_FILL_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,endFill,(void))

void DrawCommandBuffer_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_328_lineBitmapStyle)
HXLINE( 329)		this->prepareWrite();
HXLINE( 331)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::LINE_BITMAP_STYLE_dyn());
HXLINE( 332)		this->o->push(bitmap);
HXLINE( 333)		this->o->push(matrix);
HXLINE( 334)		this->b->push(repeat);
HXLINE( 335)		this->b->push(smooth);
            	}


HX_DEFINE_DYNAMIC_FUNC4(DrawCommandBuffer_obj,lineBitmapStyle,(void))

void DrawCommandBuffer_obj::lineGradientStyle( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_340_lineGradientStyle)
HXLINE( 341)		this->prepareWrite();
HXLINE( 343)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::LINE_GRADIENT_STYLE_dyn());
HXLINE( 344)		this->o->push(type);
HXLINE( 345)		this->ii->push(colors);
HXLINE( 346)		this->ff->push(alphas);
HXLINE( 347)		this->ii->push(ratios);
HXLINE( 348)		this->o->push(matrix);
HXLINE( 349)		this->o->push(spreadMethod);
HXLINE( 350)		this->o->push(interpolationMethod);
HXLINE( 351)		this->f->push(focalPointRatio);
            	}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineGradientStyle,(void))

void DrawCommandBuffer_obj::lineStyle( ::Dynamic thickness,int color,Float alpha,bool pixelHinting, ::Dynamic scaleMode, ::Dynamic caps, ::Dynamic joints,Float miterLimit){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_356_lineStyle)
HXLINE( 357)		this->prepareWrite();
HXLINE( 359)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::LINE_STYLE_dyn());
HXLINE( 360)		this->o->push(thickness);
HXLINE( 361)		this->i->push(color);
HXLINE( 362)		this->f->push(alpha);
HXLINE( 363)		this->b->push(pixelHinting);
HXLINE( 364)		this->o->push(scaleMode);
HXLINE( 365)		this->o->push(caps);
HXLINE( 366)		this->o->push(joints);
HXLINE( 367)		this->f->push(miterLimit);
            	}


HX_DEFINE_DYNAMIC_FUNC8(DrawCommandBuffer_obj,lineStyle,(void))

void DrawCommandBuffer_obj::lineTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_371_lineTo)
HXLINE( 372)		this->prepareWrite();
HXLINE( 374)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::LINE_TO_dyn());
HXLINE( 375)		this->f->push(x);
HXLINE( 376)		this->f->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,lineTo,(void))

void DrawCommandBuffer_obj::moveTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_380_moveTo)
HXLINE( 381)		this->prepareWrite();
HXLINE( 383)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::MOVE_TO_dyn());
HXLINE( 384)		this->f->push(x);
HXLINE( 385)		this->f->push(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DrawCommandBuffer_obj,moveTo,(void))

void DrawCommandBuffer_obj::prepareWrite(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_390_prepareWrite)
HXDLIN( 390)		if (this->copyOnWrite) {
HXLINE( 392)			this->types = this->types->copy();
HXLINE( 393)			this->b = this->b->copy();
HXLINE( 394)			this->i = this->i->copy();
HXLINE( 395)			this->f = this->f->copy();
HXLINE( 396)			this->o = this->o->copy();
HXLINE( 397)			this->ff = this->ff->copy();
HXLINE( 398)			this->ii = this->ii->copy();
HXLINE( 400)			this->copyOnWrite = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,prepareWrite,(void))

void DrawCommandBuffer_obj::overrideBlendMode( ::Dynamic blendMode){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_405_overrideBlendMode)
HXLINE( 406)		this->prepareWrite();
HXLINE( 408)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_BLEND_MODE_dyn());
HXLINE( 409)		this->o->push(blendMode);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,overrideBlendMode,(void))

void DrawCommandBuffer_obj::overrideMatrix( ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_413_overrideMatrix)
HXLINE( 414)		this->prepareWrite();
HXLINE( 416)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::OVERRIDE_MATRIX_dyn());
HXLINE( 417)		this->o->push(matrix);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DrawCommandBuffer_obj,overrideMatrix,(void))

void DrawCommandBuffer_obj::windingEvenOdd(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_421_windingEvenOdd)
HXLINE( 422)		this->prepareWrite();
HXLINE( 424)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::WINDING_EVEN_ODD_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,windingEvenOdd,(void))

void DrawCommandBuffer_obj::windingNonZero(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_428_windingNonZero)
HXLINE( 429)		this->prepareWrite();
HXLINE( 431)		this->types->push(::openfl::display::_internal::DrawCommandType_obj::WINDING_NON_ZERO_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,windingNonZero,(void))

int DrawCommandBuffer_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_437_get_length)
HXDLIN( 437)		return this->types->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DrawCommandBuffer_obj,get_length,return )

 ::openfl::display::_internal::DrawCommandBuffer DrawCommandBuffer_obj::empty;


::hx::ObjectPtr< DrawCommandBuffer_obj > DrawCommandBuffer_obj::__new() {
	::hx::ObjectPtr< DrawCommandBuffer_obj > __this = new DrawCommandBuffer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DrawCommandBuffer_obj > DrawCommandBuffer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DrawCommandBuffer_obj *__this = (DrawCommandBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DrawCommandBuffer_obj), true, "openfl.display._internal.DrawCommandBuffer"));
	*(void **)__this = DrawCommandBuffer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DrawCommandBuffer_obj::DrawCommandBuffer_obj()
{
}

void DrawCommandBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DrawCommandBuffer);
	HX_MARK_MEMBER_NAME(types,"types");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(copyOnWrite,"copyOnWrite");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(ff,"ff");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(ii,"ii");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_END_CLASS();
}

void DrawCommandBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(types,"types");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(copyOnWrite,"copyOnWrite");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(ff,"ff");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(ii,"ii");
	HX_VISIT_MEMBER_NAME(o,"o");
}

::hx::Val DrawCommandBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"f") ) { return ::hx::Val( f ); }
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		if (HX_FIELD_EQ(inName,"o") ) { return ::hx::Val( o ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { return ::hx::Val( ff ); }
		if (HX_FIELD_EQ(inName,"ii") ) { return ::hx::Val( ii ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { return ::hx::Val( types ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return ::hx::Val( lineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return ::hx::Val( curveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return ::hx::Val( endFill_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawRect") ) { return ::hx::Val( drawRect_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beginFill") ) { return ::hx::Val( beginFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawQuads") ) { return ::hx::Val( drawQuads_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return ::hx::Val( lineStyle_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return ::hx::Val( drawCircle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyOnWrite") ) { return ::hx::Val( copyOnWrite ); }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return ::hx::Val( drawEllipse_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return ::hx::Val( cubicCurveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"prepareWrite") ) { return ::hx::Val( prepareWrite_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return ::hx::Val( drawRoundRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return ::hx::Val( drawTriangles_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overrideMatrix") ) { return ::hx::Val( overrideMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"windingEvenOdd") ) { return ::hx::Val( windingEvenOdd_dyn() ); }
		if (HX_FIELD_EQ(inName,"windingNonZero") ) { return ::hx::Val( windingNonZero_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return ::hx::Val( beginBitmapFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"beginShaderFill") ) { return ::hx::Val( beginShaderFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return ::hx::Val( lineBitmapStyle_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return ::hx::Val( beginGradientFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return ::hx::Val( lineGradientStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"overrideBlendMode") ) { return ::hx::Val( overrideBlendMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DrawCommandBuffer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { outValue = ( empty ); return true; }
	}
	return false;
}

::hx::Val DrawCommandBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< ::Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { ff=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ii") ) { ii=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyOnWrite") ) { copyOnWrite=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DrawCommandBuffer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { empty=ioValue.Cast<  ::openfl::display::_internal::DrawCommandBuffer >(); return true; }
	}
	return false;
}

void DrawCommandBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("types",79,70,cb,1a));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("copyOnWrite",0b,88,ab,bc));
	outFields->push(HX_("f",66,00,00,00));
	outFields->push(HX_("ff",40,59,00,00));
	outFields->push(HX_("i",69,00,00,00));
	outFields->push(HX_("ii",e0,5b,00,00));
	outFields->push(HX_("o",6f,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DrawCommandBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DrawCommandBuffer_obj,types),HX_("types",79,70,cb,1a)},
	{::hx::fsObject /* ::Array< bool > */ ,(int)offsetof(DrawCommandBuffer_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsBool,(int)offsetof(DrawCommandBuffer_obj,copyOnWrite),HX_("copyOnWrite",0b,88,ab,bc)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(DrawCommandBuffer_obj,f),HX_("f",66,00,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DrawCommandBuffer_obj,ff),HX_("ff",40,59,00,00)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(DrawCommandBuffer_obj,i),HX_("i",69,00,00,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DrawCommandBuffer_obj,ii),HX_("ii",e0,5b,00,00)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(DrawCommandBuffer_obj,o),HX_("o",6f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DrawCommandBuffer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::_internal::DrawCommandBuffer */ ,(void *) &DrawCommandBuffer_obj::empty,HX_("empty",8d,3a,da,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DrawCommandBuffer_obj_sMemberFields[] = {
	HX_("types",79,70,cb,1a),
	HX_("b",62,00,00,00),
	HX_("copyOnWrite",0b,88,ab,bc),
	HX_("f",66,00,00,00),
	HX_("ff",40,59,00,00),
	HX_("i",69,00,00,00),
	HX_("ii",e0,5b,00,00),
	HX_("o",6f,00,00,00),
	HX_("append",da,e1,d3,8f),
	HX_("beginBitmapFill",9b,c9,07,6a),
	HX_("beginFill",4c,ad,95,8c),
	HX_("beginGradientFill",5c,3c,03,2e),
	HX_("beginShaderFill",d1,4b,43,67),
	HX_("clear",8d,71,5b,48),
	HX_("copy",b5,bb,c4,41),
	HX_("cubicCurveTo",e0,07,90,2e),
	HX_("curveTo",0a,60,88,ce),
	HX_("destroy",fa,2c,86,24),
	HX_("drawCircle",34,ed,d0,97),
	HX_("drawEllipse",3a,85,ce,54),
	HX_("drawQuads",28,ab,f2,25),
	HX_("drawRect",48,f7,10,60),
	HX_("drawRoundRect",ee,c3,aa,e2),
	HX_("drawTriangles",07,44,68,de),
	HX_("endFill",fe,87,e0,25),
	HX_("lineBitmapStyle",2e,3f,21,45),
	HX_("lineGradientStyle",8d,24,f2,c1),
	HX_("lineStyle",9d,a8,18,cb),
	HX_("lineTo",8f,46,a0,ec),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("prepareWrite",d8,61,09,44),
	HX_("overrideBlendMode",68,f8,e9,f9),
	HX_("overrideMatrix",ad,8d,a9,b9),
	HX_("windingEvenOdd",bb,5c,0a,0b),
	HX_("windingNonZero",db,b4,3f,d6),
	HX_("get_length",af,04,8f,8f),
	::String(null()) };

static void DrawCommandBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCommandBuffer_obj::empty,"empty");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DrawCommandBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCommandBuffer_obj::empty,"empty");
};

#endif

::hx::Class DrawCommandBuffer_obj::__mClass;

static ::String DrawCommandBuffer_obj_sStaticFields[] = {
	HX_("empty",8d,3a,da,6f),
	::String(null())
};

void DrawCommandBuffer_obj::__register()
{
	DrawCommandBuffer_obj _hx_dummy;
	DrawCommandBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DrawCommandBuffer",8b,23,4c,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawCommandBuffer_obj::__GetStatic;
	__mClass->mSetStaticField = &DrawCommandBuffer_obj::__SetStatic;
	__mClass->mMarkFunc = DrawCommandBuffer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DrawCommandBuffer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DrawCommandBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DrawCommandBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DrawCommandBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawCommandBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawCommandBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DrawCommandBuffer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fae278bbae08f83e_22_boot)
HXDLIN(  22)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("o",6f,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c)))))))
            			->setFixed(1,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_fae278bbae08f83e_24_boot)
HXDLIN(  24)		empty =  ::openfl::display::_internal::DrawCommandBuffer_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal