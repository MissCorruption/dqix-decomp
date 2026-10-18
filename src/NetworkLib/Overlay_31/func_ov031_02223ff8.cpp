#include <globaldefs.h>

struct GXOamAttr02223ff8 { unsigned int attr01; unsigned short attr2; unsigned short attr3; };

struct Entity02223ff8 {
    unsigned char pad0[0x30];
    GXOamAttr02223ff8* field30;
    unsigned char pad1[0x11d - 0x34];
    unsigned char field11d;
};

extern Entity02223ff8* data_ov031_02250bfc;
extern "C" void func_ov031_02224ca4(int a, int idx, int y);
extern "C" void func_ov031_0223e2b8(void* obj, int v);
extern "C" void func_ov031_0222408c(void* obj);

static inline void G2_GetOBJPosition(const GXOamAttr02223ff8* oam, unsigned int* x, unsigned int* y) {
    *x = (oam->attr01 & 0x1ff0000) >> 16;
    *y = oam->attr01 & 0xff;
}

// USA: func_ov031_02223ff8
extern "C" ARM void func_ov031_02223ff8(void* obj) {
    int x, y;
    G2_GetOBJPosition(data_ov031_02250bfc->field30, (unsigned int*)&x, (unsigned int*)&y);
    y -= 0xc;
    if (y > 0x51) {
        func_ov031_02224ca4(data_ov031_02250bfc->field11d, 0, y);
        return;
    }
    func_ov031_02224ca4(data_ov031_02250bfc->field11d, 0, 0x51);
    func_ov031_02224ca4(data_ov031_02250bfc->field11d, 1, 0xc0);
    func_ov031_0223e2b8(obj, (int)func_ov031_0222408c);
}
