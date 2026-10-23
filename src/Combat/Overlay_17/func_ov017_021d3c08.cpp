#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021d3c08_620 = 0xc };
#else
enum { Enum_ov017_021d3c08_620 = 0x26c };
#endif

extern "C" int func_0202c508(void* arg0);
struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" void func_ov017_021d3bbc(int arg0, int arg1, int arg2, int arg3);

struct Struct_ov017_021d3c08 {
    unsigned char unknown_0_[4];
    unsigned char unknown_4_;
    signed char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

struct Struct_ov017_021d3c08_2 {
    unsigned char unknown_0_[8];
    unsigned int unknown_8_0_:7;
    unsigned int unknown_8_7_:25;
    unsigned char unknown_c_[0x1c];
};

struct Struct_ov017_021d3c08_3 {
    unsigned int unknown_0_0_:7;
    unsigned int unknown_0_7_:25;
    unsigned char unknown_4_[0x24];
};

// USA: func_ov017_021d3c08
extern "C" ARM void func_ov017_021d3c08(int arg0, struct Struct_ov017_021d3c08* arg1, int arg2, int arg3, struct Struct_0202c1a4* arg4) {
    struct Struct_ov017_021d3c08_2* var0 = (struct Struct_ov017_021d3c08_2*)((char*)arg2 + Enum_ov017_021d3c08_620 + 0x5c00);
    if (arg1->unknown_4_ == 3 && func_0202c508(arg4)) {
        if (arg1->unknown_6_ <= var0[arg1->unknown_7_].unknown_8_0_) {
            func_ov017_021d3bbc(arg1->unknown_7_, arg1->unknown_6_, 1, arg0);
            struct Struct_ov017_021d3c08_3* var1 = (struct Struct_ov017_021d3c08_3*)((char*)var0 + 8);
            var1[arg1->unknown_7_].unknown_0_0_ = var1[arg1->unknown_7_].unknown_0_0_ - arg1->unknown_6_;
            return;
        }
        func_ov017_021d3bbc(arg1->unknown_7_, arg1->unknown_6_, 2, arg0);
        return;
    }
    if (arg1->unknown_4_ == 1) {
        if (arg1->unknown_5_ == func_0202c1a4(arg4)) {
            unsigned short* var2 = (unsigned short*)((char*)var0 + 0x100 + 0xc);
            *var2 = (*var2 & ~0xe000) | 0x2000;
            return;
        }
        struct Struct_ov017_021d3c08_3* var3 = (struct Struct_ov017_021d3c08_3*)((char*)var0 + 8);
        var3[arg1->unknown_7_].unknown_0_0_ = var3[arg1->unknown_7_].unknown_0_0_ - arg1->unknown_6_;
        return;
    }
    if (arg1->unknown_4_ == 2) {
        if (arg1->unknown_5_ == func_0202c1a4(arg4)) {
            unsigned short* var4 = (unsigned short*)((char*)var0 + 0x100 + 0xc);
            *var4 = (*var4 & ~0xe000) | 0x4000;
        }
    }
}
