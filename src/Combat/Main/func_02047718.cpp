#include <globaldefs.h>

extern "C" void func_02047888(int arg0, int arg1);

struct Struct_02047718_2 {
    int unknown_0_;
    unsigned short unknown_4_;
    char unknown_6_[0x10 - 0x6];
    unsigned int unknown_10_;
    char unknown_14_[0x80 - 0x14];
    unsigned short unknown_80_;
    short unknown_82_;
};

struct Struct_02047718 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

static inline void inline_020417b0(int arg0, int arg1, int arg2) {
    *(volatile unsigned int*)0x04000470 = arg0;
    *(volatile unsigned int*)0x04000470 = arg1;
    *(volatile unsigned int*)0x04000470 = arg2;
}

static inline void inline_020417b0_2(int arg0, int arg1, int arg2) {
    *(volatile unsigned int*)0x0400046c = arg0;
    *(volatile unsigned int*)0x0400046c = arg1;
    *(volatile unsigned int*)0x0400046c = arg2;
}

static inline void inline_020417b0_3(unsigned short arg0, unsigned short arg1, unsigned short arg2) {
    *(volatile unsigned int*)0x0400048c = (unsigned short)arg0 | ((unsigned short)arg1 << 16);
    *(volatile unsigned int*)0x0400048c = (unsigned short)arg2;
}

// USA: func_02047718
extern "C" ARM void func_02047718(Struct_02047718_2* arg0, Struct_02047718* arg1, int arg2) {
    *(volatile unsigned int*)0x04000444 = 0;
    int var0 = arg1->unknown_4_ & 0xf;
    int var1 = (arg1->unknown_4_ & 0xf0) >> 4;
    int var2 = 8 << (var0 + 12);
    int var3 = 8 << (var1 + 12);
    int var4 = (arg1->unknown_6_ & 0xff) << 12;
    int var5 = ((arg1->unknown_6_ & 0xff00) >> 8) << 12;
    int var6 = arg0->unknown_4_;
    var6 <<= 26;
    *(volatile unsigned int*)0x040004a8 = (arg1->unknown_0_ >> 3) | var6 | (var0 << 20) | (var1 << 23) | (arg2 << 29);
    *(volatile unsigned int*)0x040004ac = arg0->unknown_10_ >> (4 - (arg0->unknown_4_ == 2));
    int var7 = arg0->unknown_82_ & 0x1f;
    var7 <<= 16;
    *(volatile unsigned int*)0x040004a4 = 0x80c0 | (arg0->unknown_0_ << 24) | var7;
    inline_020417b0(var4, var5, 0);
    inline_020417b0_2(var2, var3, 0x1000);

    *(volatile unsigned int*)0x04000500 = 1;
    *(volatile unsigned int*)0x04000480 = arg0->unknown_80_;
    *(volatile unsigned int*)0x04000488 = 0;
    inline_020417b0_3(0, 0x1000, 0);
    func_02047888(var2, 0);
    inline_020417b0_3(0x1000, 0x1000, 0);
    func_02047888(var2, var3);
    inline_020417b0_3(0x1000, 0, 0);
    func_02047888(0, var3);
    inline_020417b0_3(0, 0, 0);
    *(volatile unsigned int*)0x04000504 = 0;
    *(volatile unsigned int*)0x04000448 = 1;
}
