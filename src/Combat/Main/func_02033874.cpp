#include <globaldefs.h>

struct Struct_02033874 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

struct Struct_02033834 {
    char unknown_0_[0x50];
    struct Struct_02033874 unknown_50_;
    char unknown_5c_[0x52];
    short unknown_ae_;
};

short fix32ReduceAngle0To2Pi(int);

// USA: func_02033874
extern "C" ARM void func_02033874(struct Struct_02033834* arg0, int arg1) {
    struct Struct_02033874* var0 = (struct Struct_02033874*)((char*)arg0 + 0x50);
    struct Struct_02033874* var1 = (struct Struct_02033874*)((char*)arg0 + 0x50);
    int var2, var3, var4;
    arg0->unknown_ae_ = fix32ReduceAngle0To2Pi(arg1);
    var4 = var1->unknown_8_;
    var3 = arg0->unknown_ae_;
    var2 = var1->unknown_0_;
    var0->unknown_0_ = var2;
    var0->unknown_4_ = var3;
    var0->unknown_8_ = var4;
    *(unsigned short*)((char*)arg0 + 0xc4) &= ~0x8000;
}
