#include <globaldefs.h>
#include <std_library_functions.h>
#include "Resource/MessageSystem.h"

struct Struct_0203d028 {
    unsigned int unknown_0_[10];
    unsigned int unknown_28_[10];
    unsigned int unknown_50_;
};

struct Struct_02107800_4 {
    unsigned char* unknown_0_;
};

extern Struct_02107800_4 data_02107800;
extern const unsigned char data_020e7a8c[];
extern const short data_020e7aa6[];
extern const short data_020e7ab0[];

extern "C" void func_020416e0(Struct_0204166c*, unsigned char, int, int, int, int, unsigned char);
extern "C" void func_02045864(int arg0, int arg1, Struct_020420e8* arg2, unsigned char* arg3, int arg4, int arg5,
                              unsigned char arg6, unsigned char arg7);

static inline unsigned int inline_020459b8(Struct_0203d028* arg0) {
    return (arg0->unknown_50_ << 16) >> 13;
}

// USA: func_020459b8
extern "C" ARM int func_020459b8(Struct_02021b84* arg0, unsigned char arg1, Struct_020420e8* arg2,
                                 unsigned char arg3) {
    if (arg2 == NULL) {
        return 0;
    }
    unsigned char* var0 = data_02107800.unknown_0_;
    unsigned char* var1 = arg0->unknown_17b8_;
    Struct_0204166c* var2 = arg0->unknown_9b8_;
    int var3 = arg0->func_02042a90(arg0->unknown_2cc_, 4);
    if (var3 < 0) {
        return 0;
    }
    for (int var4 = 0; var4 < 0x80; var4++) {
        if (var1[var4] == 0) {
            if (arg0->unknown_1e28_ != NULL) {
                unsigned char* var5 = var0 + (var3 << 7);
                Struct_0204166c* var6 = &var2[var4];
                bool var7 = false;
                bool var8 = false;
                if (arg0->unknown_19cc_ == 0) {
                    memset(var5, 0, 0x80);
                    if (arg0->unknown_195b_ & 0x80) {
                        var8 = true;
                        for (unsigned char var9 = 0; var9 < 5; var9++) {
                            func_02045864(data_020e7aa6[var9], data_020e7ab0[var9], arg2, var5, 16, 16,
                                          data_020e7a8c[var9], arg3);
                        }
                    } else if (arg0->unknown_195b_ & 2) {
                        var7 = true;
                        func_02045864(2, 2, arg2, var5, 16, 16, 1, arg3);
                        func_02045864(1, 1, arg2, var5, 16, 16, 0xf, arg3);
                    } else {
                        func_02045864(1, 1, arg2, var5, 16, 16, 0xf, arg3);
                    }
                }
                func_020416e0(var6, arg1, (int)arg2, (int)var5, var3,
                                          (var4 << 7) + inline_020459b8(arg0->unknown_1e28_), arg3);
                if (var8) {
                    var6->unknown_16_2_ = 1;
                }
                if (var7) {
                    var6->unknown_16_1_ = 1;
                }
            }
            var1[var4] = 1;
            return var4;
        }
    }
    return 0;
}
