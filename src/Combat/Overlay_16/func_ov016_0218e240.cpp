#include <globaldefs.h>
#include <std_library_functions.h>

struct Struct_ov016_0218e240 {
    int unknown_0_;
    signed char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 2;
    char unknown_6_[2];
};

extern "C" char data_ov016_0219d06d[];
extern "C" char data_ov016_0219d06f[];

extern "C" int func_02042648(int arg0);
extern "C" int func_020424e4(int arg0, int arg1);
extern "C" struct Struct_ov016_0218e240* func_020425b4(int arg0, int arg1);
extern "C" int func_020425e4(int arg0, int arg1, int arg2);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" int func_020420e8(char* arg0, int arg1);
extern "C" int func_02001aec(unsigned char* arg0, unsigned char* arg1, int arg2);
extern "C" void func_ov016_0218e17c(unsigned short* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5);

// USA: func_ov016_0218e240
extern "C" ARM void func_ov016_0218e240(unsigned short* arg0, char* arg1, unsigned short arg2, int arg3, int arg4, unsigned char arg5, unsigned short arg6, int arg7) {
    int var0 = 0;
    int var1 = arg3;
    struct Struct_ov016_0218e240* var2;
    int var3;
    int var4 = arg4;
    short var5 = 0xff;
    int var6 = func_02042648(1) & 0xff;
    int var7;
    int var8[3];
    var8[0] = var1;
    var8[1] = var1;
    var8[2] = var1;

    if (arg5 != 0) {
        int var9 = 1;
        char* var10 = strstr(arg1, data_ov016_0219d06d);
        if (var10 == 0) {
            var10 = strstr(arg1, data_ov016_0219d06f);
            var9 = 2;
        }
        if (var10 != 0) {
                        int var11 = var10 - arg1;
            char var12[0x200];
            __clear(var12, 0x200);
            sprintf(var12, arg1);
            memset(var12 + var11, 0, var9);
            var8[0] = (0x100 - func_020420e8(var12, 1)) >> 1;
            var8[1] = (0x100 - func_020420e8(var12 + (var11 + var9), 1)) >> 1;
            var4 -= 0xe;
        } else {
            var8[0] = (0x100 - func_020420e8(arg1, 1)) >> 1;
        }
    }

    var3 = 0;
    var1 = var8[var3];
    var3++;

    for (;;) {
        if (arg7 <= var0) break;
        if (arg1[0] == 0) break;
        int var13 = 1;
                int var14 = (arg1[0] == '\n') ? var13 : 0;
        if (func_02001aec((unsigned char*)arg1, (unsigned char*)data_ov016_0219d06f, 2) == 0) {
                        var14 = 1; 1;
            var13 = 2;
        }
        if (var14 != 0) {
            var1 = var8[var3];
            arg1 += var13;
            var3++;
            var5 = 0xff;
            var4 += 0xe;
            continue;
        }

                int var15 = var6 + 1;
        var7 = 1;
        unsigned char var16 = func_020424e4((int)arg1, 1);
        if (var16 != 0xff) {
                        var2 = func_020425b4(var16, 1);
            if (arg6 != 0) {
                func_ov016_0218e17c(arg0, var1 - 1, var4, var2, 0, 1);
                func_ov016_0218e17c(arg0, var1 + 1, var4, var2, 0, 1);
                func_ov016_0218e17c(arg0, var1, var4 - 1, var2, 0, 1);
                func_ov016_0218e17c(arg0, var1, var4 + 1, var2, 0, 1);
            }
            var1 += func_020425e4(var5, var16, 1);
            func_ov016_0218e17c(arg0, var1, var4, var2, arg2, 1);
            var5 = var16;
                        var15 = var2->unknown_4_ + 1;
            var7 = var2->unknown_5_0_;
        } else {
            var5 = 0xff;
        }
        var1 += var15;
        arg1 += var7;
        var0++;
    }
}
