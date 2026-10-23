#include <globaldefs.h>

struct Struct_020de0ec;
extern "C" void func_020de0ec(struct Struct_020de0ec* arg0);

struct Struct_020ddea0_2;
extern "C" void func_020ddfb4(struct Struct_020ddea0_2* arg0);

extern "C" int fix32_Divide(unsigned int arg0, unsigned int arg1);

extern "C" void* func_0203bd08(void);
extern "C" void* func_0203be4c(void* arg0);
extern "C" void* func_0203be40(void* arg0);

struct Struct_020ddea0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_[3];
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
    int unknown_18_;
};

struct Struct_020ddea0_3 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    short unknown_6_;
};

// USA: func_020ddea0
extern "C" ARM void func_020ddea0(Struct_020ddea0* arg0, unsigned short arg1, unsigned int arg2, unsigned int arg3, unsigned char arg4, unsigned char arg5) {
    if (arg0->unknown_4_ == 0) {
        if (arg0->unknown_2_ <= arg1) return;
        if (arg1 < arg0->unknown_0_) return;
        arg0->unknown_4_ = 2;
        func_020de0ec((struct Struct_020de0ec*)arg0);
        return;
    }

    if (arg1 >= arg0->unknown_2_) {
        arg0->unknown_4_ = 4;
    }
    func_020ddfb4((struct Struct_020ddea0_2*)arg0);

    void* var0 = func_0203bd08();
    Struct_020ddea0_3* var1 = (Struct_020ddea0_3*)func_0203be4c(var0);
    if (arg4 == 0) {
        var1 = (Struct_020ddea0_3*)func_0203be40(var0);
    }

    unsigned int var2 = arg0->unknown_8_ + arg0->unknown_10_;
    int var3 = arg0->unknown_c_ + arg0->unknown_14_;
    int var4 = arg0->unknown_18_;
    if (arg0->unknown_18_ <= 1) {
        var4 = 0xa;
        var3 = 0xc0;
        var2 = 0x100;
    }

    int var5 = fix32_Divide(0x1000, var4);

    var1[arg2].unknown_0_ = (var3 & 0xff) | ((arg2 >> 2) << 0x19) | 0x40000000 | ((var2 << 0x17) >> 7) | 0x300;
    var1[arg2].unknown_4_ = arg3 | (arg5 << 0xc);
    Struct_020ddea0_3* var6 = (Struct_020ddea0_3*)((char*)var1 + arg2 * 8);
    var6->unknown_4_ &= ~0xc00;
    var6->unknown_6_ = (short)(var5 >> 4);
    *(unsigned short*)((char*)var6 + 0xe) = 0;
    *(unsigned short*)((char*)var6 + 0x16) = 0;
    *(short*)((char*)var6 + 0x1e) = (short)(var5 >> 4);
}
