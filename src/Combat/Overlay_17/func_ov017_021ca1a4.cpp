#if defined(jpn)
enum { Enum_ov017_021ca1a4_14104 = 0x3508, Enum_ov017_021ca1a4_21748 = 0x56e8 };
#else
enum { Enum_ov017_021ca1a4_14104 = 0x3718, Enum_ov017_021ca1a4_21748 = 0x54f4 };
#endif

#include <globaldefs.h>

extern "C" int func_020a1eb0(void);
extern "C" void* func_ov017_021b8478(void* arg0);
extern "C" void* func_ov017_021b8468(void* arg0);

struct Struct_020a36a8;
extern "C" int func_020a36a8(struct Struct_020a36a8* arg0);

extern "C" int func_020a35e0(unsigned char* arg0, unsigned char arg1);

struct Struct_ov017_021c6814 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    signed char unknown_4_;
    unsigned char unknown_5_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
};
extern "C" void func_ov017_021c6814(unsigned short arg0, unsigned short arg1, struct Struct_ov017_021c6814* arg2, unsigned char arg3, signed char arg4, unsigned char arg5);

extern "C" void func_ov000_02162c14(void* arg0, int arg1, struct Struct_ov017_021c6814* arg2);

extern "C" void func_ov000_02160fa8(void* arg0, int arg1);

struct Struct_ov017_021ca1a4 { char unknown_0_[4]; unsigned short unknown_4_; };
struct Struct_ov017_021ca1a4_2 { char unknown_0_[8]; unsigned short unknown_8_; };

// USA: func_ov017_021ca1a4
extern "C" ARM void func_ov017_021ca1a4(int arg0, struct Struct_ov017_021ca1a4* arg1, void* arg2, char* arg3) {
    if (func_020a1eb0() != 0) return;

    void* var0 = *(void**)(arg3 + Enum_ov017_021ca1a4_14104);
    void* var1 = func_ov017_021b8478(var0);
    void* var2 = func_ov017_021b8468(var0);
    if (!var1 || !var2) return;

    if (((struct Struct_ov017_021ca1a4_2*)var1)->unknown_8_ != arg1->unknown_4_) return;

    if (func_020a36a8((struct Struct_020a36a8*)var1)) {
        int var3;
        struct Struct_ov017_021c6814 var4;
        for (var3 = 0; var3 < 4; var3++) {
            if (func_020a35e0((unsigned char*)var1, var3 & 0xff) && arg0 != var3) {
                func_ov000_02162c14(var2, var3, &var4);
                int var5 = *(int*)((char*)var2 + var3 * 4 + Enum_ov017_021ca1a4_21748);
                func_ov017_021c6814(((struct Struct_ov017_021ca1a4_2*)var1)->unknown_8_, (unsigned short)var3, &var4, (unsigned char)(var5 & 0xff), (signed char)arg0, 0);
            }
        }
    } else {
        func_ov000_02160fa8(var2, 0x40000000);
    }
}
