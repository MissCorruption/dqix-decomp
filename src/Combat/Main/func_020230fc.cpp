#include <globaldefs.h>
#include "World/Zone3D.h"
#include "Combat/MapDisplay.h"

struct Struct_020200c0_3 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
};

struct Struct_020200c0_4 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
};

extern "C" void* func_02012fe4(void);
extern "C" int func_020d2ff0(const char* arg0);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" void func_02023064(struct Struct_020200c0_3* arg0, unsigned int arg1, short* arg2, short* arg3, short* arg4, short* arg5);
extern "C" void func_0205b20c(struct Struct_020200c0_4* arg0);
extern "C" void func_0205b220(void* arg0, int arg1);
extern "C" void func_0205b228(void* arg0, int arg1, unsigned char arg2);
extern "C" int func_0205b234(void* arg0, short arg1, int arg2, char* arg3, int arg4, int arg5);

// USA: func_020230fc
extern "C" ARM void func_020230fc(Struct_02020554* arg0, char* arg1, int arg2) {
    short var0[18];
    short var1[18];
    short var2[18];
    short var3[18];
    struct Struct_020200c0_3 var4[18];
    struct Struct_020200c0_4 var5;
    int var6;
    int var7;
    int var8;
    int var9;

#if defined(jpn)
    Zone3D* var10 = (Zone3D*)func_02012fe4();
#else
    func_02012fe4();
    __clear(var1, 0x24);
#endif
    for (var6 = 0; var6 < 0x12; var6++) {
        var0[var6] = var6 * 8;
#if defined(jpn)
        var1[var6] = 0;
#endif
        var2[var6] = 8;
        var3[var6] = 0x10;
    }

    arg0->unknown_5a8_ = 0;
#if defined(jpn)
    if (var10->substruct_c_.unknown1_2a_[0] != 0) {
#else
    if (arg0->unknown_ba2_[0] != 0) {
#endif
        arg0->unknown_5a8_ = 1;
        func_02023064(var4, 0x12, var0, var1, var2, var3);

#if defined(jpn)
        int var11 = (func_020d2ff0(var10->substruct_c_.unknown1_2a_) / 2 * 10) / 8 + 1;
        var7 = var11 * 8 - func_020d2ff0(var10->substruct_c_.unknown1_2a_) / 2 * 10;
        var7 /= 2;
#else
        var8 = arg0->unknown_be4_;
        var9 = (var8 + 7) & ~7;
        if (var8 > 0x90) {
            var7 = -arg0->unknown_be8_;
        } else {
            var7 = (var9 - var8) >> 1;
        }
#endif

        func_0205b20c(&var5);
        func_0205b220(&var5, (int)(arg1 + arg2));
        func_0205b228(&var5, (int)var4, 0x12);

#if defined(jpn)
        func_0205b234(&var5, (short)var7, 3, var10->substruct_c_.unknown1_2a_, 10, 15);
#else
        func_0205b234(&var5, (short)var7, 3, arg0->unknown_ba2_, 0xf, 0);
#endif
    }
}
