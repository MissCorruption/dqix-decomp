#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/Timing.h"

struct Struct_ov031_022048a8_3 {
    unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_, unknown_8_, unknown_a_;
    unsigned char unknown_c_[48];
};
struct Struct_ov031_022048a8 {
    unsigned short unknown_0_;
    unsigned char unknown_2_, unknown_3_;
    unsigned char unknown_4_[2];
    unsigned char unknown_6_[6];
};
struct Struct_ov031_022048a8_2 {
    unsigned char unknown_0_[2], unknown_2_[2];
    unsigned char unknown_4_[4];
    unsigned char unknown_8_[2];
};
struct Struct_ov031_0224c980_18 { unsigned char unknown_0_[0x48]; int (*unknown_48_)(); };
extern Struct_ov031_0224c980_18 data_ov031_0224c980;
extern "C" void func_ov031_02203a84(void*, int);
extern "C" int func_ov031_02203b1c();
extern "C" void func_ov031_02200264();
extern "C" Struct_ov031_022048a8* func_ov031_0220357c(unsigned int*);
extern "C" void func_ov031_02203670(unsigned int);
extern "C" char* func_ov031_02204878(char*);

#define CPS_GETUSHORT1(p) ((unsigned short)(((unsigned char*)(p))[0] << 8 | ((unsigned char*)(p))[1]))
#define CPS_GETULONG1(p) (((unsigned long)CPS_GETUSHORT1(p) << 16) | CPS_GETUSHORT1((p) + 2))

// USA: func_ov031_022048a8
extern "C" ARM int func_ov031_022048a8(const unsigned char* arg0, unsigned int arg1, int arg2, void* arg3, unsigned int arg4) {
    Struct_ov031_022048a8_3 var0;
    unsigned int var1;
    var0.unknown_0_ = (arg2 >> 8) | (arg2 << 8);
    if (arg1 != 32) var0.unknown_2_ = 1;
    else var0.unknown_2_ = 0x1001;
    var0.unknown_4_ = 0x100;
    var0.unknown_6_ = 0;
    var0.unknown_8_ = 0;
    var0.unknown_a_ = 0;
    var1 = 0;
    unsigned char var2 = *arg0++;
    unsigned char* var3 = var0.unknown_c_;
    unsigned char* var4 = var3 + 1;
    int var5 = 0;
    if (var2) do {
        if (var2 != '.') {
            var5 = var4 - (unsigned char*)&var0;
            if (var5 >= 60) return -1;
            var5 = ++var1;
            *var4++ = var2;
        } else {
            *var3 = var5;
            var3 = var4;
            var1 = 0;
            var5 = 0;
            ++var4;
        }
        var2 = *arg0++;
    } while (var2);
    *var3 = var1;
    var4[0] = 0;
    var4[1] = arg1 >> 8;
    var4[2] = arg1;
    var4[3] = 0;
    var4[4] = 1;
    func_ov031_02203a84(&var0, var4 + 5 - (unsigned char*)&var0);
    int var6 = 0;
    unsigned int var7 = GetCurrentTimestamp() >> 16;
    while (data_ov031_0224c980.unknown_48_() && !var6 &&
           (int)((unsigned int)(GetCurrentTimestamp() >> 16) - var7) < 15) {
        if (!func_ov031_02203b1c()) func_ov031_02200264();
        else {
            Struct_ov031_022048a8* var8 = func_ov031_0220357c(&var1);
            if (var1 > 12 && arg2 == (unsigned short)((var8->unknown_0_ >> 8) | (var8->unknown_0_ << 8))) {
                int var9 = var8->unknown_3_ & 15;
                if (var9 == 3) var6 = -1;
                else if (var9 == 0) {
                    unsigned char* var10 = (unsigned char*)var8 + var1;
                    char* var11 = (char*)(var8 + 1);
                    int var12 = (unsigned short)(var8->unknown_4_[1] | (var8->unknown_4_[0] << 8));
                    while (var12--) {
                        var11 = func_ov031_02204878(var11) + 4;
                    }
                    if ((unsigned char*)var11 < var10) do {
                        Struct_ov031_022048a8_2* var13 = (Struct_ov031_022048a8_2*)func_ov031_02204878(var11);
                        unsigned short var14 = CPS_GETUSHORT1(var13->unknown_8_);
                        if (arg1 == CPS_GETUSHORT1(var13->unknown_0_)) {
                            if (arg1 != 12) {
                                var6 = CPS_GETULONG1((unsigned char*)var13 + sizeof(*var13) - 4 + var14);
                            } else if (var14 > arg4) var6 = 2;
                            else {
                                VectorizedInvertedMemcpy(var13 + 1, arg3, var14);
                                var6 = 1;
                            }
                            break;
                        }
                        var11 = (char*)var13 + (sizeof(*var13) + var14);
                    } while ((unsigned char*)var11 < var10);
                }
            }
            func_ov031_02203670(var1);
        }
    }
    return var6;
}
