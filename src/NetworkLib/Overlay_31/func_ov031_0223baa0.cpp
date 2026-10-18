#include <globaldefs.h>

struct GXOamAttr02226b10 { unsigned int attr01; unsigned short attr2; unsigned short attr3; };
struct ElemArray_02226b10 { int pad0, pad1; GXOamAttr02226b10* arr; };
extern "C" ARM GXOamAttr02226b10* func_ov031_0223baa0(ElemArray_02226b10* obj, int idx);

struct EntityStruct02226b10 { unsigned char pad[0x40]; ElemArray_02226b10* field40; };
extern EntityStruct02226b10* data_ov031_02250c00;
extern "C" void func_ov031_022266b0(int idx, int y);

struct Obj02226b10 { unsigned char pad[8]; int field8; };
extern "C" void func_ov031_0223e2b8(Obj02226b10* obj, int v);
extern "C" void func_ov031_02226b88(void* obj);

static inline void G2_GetOBJPosition(GXOamAttr02226b10* oam, unsigned int* x, unsigned int* y) {
	*x = (oam->attr01 & 0x1ff0000) >> 16;
	*y = oam->attr01 & 0xff;
}

// USA: func_ov031_02226b10  (semantic: CheckElem0AndChain_02226b10)
extern "C" ARM void func_ov031_02226b10(Obj02226b10* obj) {
	int x, y;
	G2_GetOBJPosition(func_ov031_0223baa0(data_ov031_02250c00->field40, 0), (unsigned int*)&x, (unsigned int*)&y);
	y += 0xc;
	func_ov031_022266b0(4, y);
	if (y < 0xc0) return;
	func_ov031_0223e2b8(obj, (int)func_ov031_02226b88);
}
