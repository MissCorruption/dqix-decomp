#include <globaldefs.h>

struct GXOamAttr02226c68 { unsigned int attr01; unsigned short attr2; unsigned short attr3; };

struct EntityStruct02226c68 { unsigned char pad[0x1c]; GXOamAttr02226c68* field1c; };
extern EntityStruct02226c68* data_ov031_02250c00;
extern "C" void func_ov031_022266b0(int idx, int y);

struct Obj02226c68 { unsigned char pad[8]; int field8; };
extern "C" void func_ov031_0223e2b8(Obj02226c68* obj, int v);
extern "C" void func_ov031_02226cd8(void* obj);

static inline void G2_GetOBJPosition(GXOamAttr02226c68* oam, unsigned int* x, unsigned int* y) {
    *x = (oam->attr01 & 0x1ff0000) >> 16;
    *y = oam->attr01 & 0xff;
}

// USA: func_ov031_02226c68  (semantic: CheckField1cAndChain_02226c68)
extern "C" ARM void func_ov031_02226c68(Obj02226c68* obj) {
    int x, y;
    G2_GetOBJPosition(data_ov031_02250c00->field1c, (unsigned int*)&x, (unsigned int*)&y);
    y += 0xc;
    func_ov031_022266b0(1, y);
    if (y < 0xc0) return;
    func_ov031_0223e2b8(obj, (int)func_ov031_02226cd8);
}
