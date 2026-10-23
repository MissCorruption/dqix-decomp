#include <globaldefs.h>

struct Struct_ov031_0224f9c4 {
    unsigned int unknown_0_[8];
};
struct Struct_ov031_0224fac0 {
    char unknown_0_[0x40];
    int unknown_40_;
    int unknown_44_;
};
struct Struct_ov031_0224f9f0 {
    int unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_[0x28];
    int unknown_30_;
    int unknown_34_;
};
extern unsigned char data_ov031_0224f8c4[];
extern Struct_ov031_0224f9c4 data_ov031_0224f9c4;
extern Struct_ov031_0224f9f0 data_ov031_0224f9f0;
extern char data_ov031_0224fa28[4][0x28];
extern Struct_ov031_0224fac0 data_ov031_0224fac0;
extern "C" unsigned char* func_ov031_02220248(unsigned char** arg0, unsigned char* arg1, int* arg2, int* arg3);
extern "C" void* memcpy(void* arg0, const void* arg1, unsigned int arg2);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" int func_ov031_022228c0(char* arg0, int arg1);

#define SWAP16(v) ((unsigned short)((unsigned char)((v) >> 8) | (((v) << 8) & 0xff00)))

// USA: func_ov031_022206e0
extern "C" THUMB int func_ov031_022206e0(unsigned char* arg0) {
    unsigned short* var0;
    int var1;
    unsigned int var2;
    unsigned char* var3;
    int var4;
    int var5;
    unsigned char* var6;
    var0 = (unsigned short*)arg0;
    arg0 += 8;
    var3 = arg0;
    var1 = 0;
    var2 = SWAP16(*var0);
    var6 = func_ov031_02220248(&var3, arg0 + var2, &var4, &var5);
    if (var6 != 0) {
        do {
            switch (var4) {
            case 0x201:
                __builtin__clear(&data_ov031_0224f9c4, sizeof(data_ov031_0224f9c4));
                memcpy(&data_ov031_0224f9c4, var6, var5);
                var1 = 1;
                break;
            case 0x202:
                data_ov031_0224f9f0.unknown_0_ = SWAP16(*(unsigned short*)var6);
                break;
            case 0x203: {
                int var7 = 0;
                unsigned char* var8 = data_ov031_0224f8c4;
                unsigned int var9 = SWAP16(*(unsigned short*)var6);
                do {
                    *(unsigned int*)(var8 + 0x15c) = var9;
                    var7++;
                    var8 += 0x28;
                } while (var7 < 4);
                break;
            }
            case 0x204: {
                unsigned char* var10 = data_ov031_0224f8c4;
                int var11 = 0;
                unsigned int var12 = SWAP16(*(unsigned short*)var6);
                do {
                    *(unsigned int*)(var10 + 0x160) = var12;
                    var11++;
                    var10 += 0x28;
                } while (var11 < 4);
                break;
            }
            case 0x205:
                data_ov031_0224f9f0.unknown_4_ = SWAP16(*(unsigned short*)var6);
                break;
            case 0x206:
            case 0x207:
            case 0x208:
            case 0x209:
                memset(data_ov031_0224fa28[var4 - 0x206], 0, 0x20);
                if (data_ov031_0224f9f0.unknown_30_ == 1) {
                    char* var13 = data_ov031_0224fa28[var4 - 0x206];
                    int var14 = 0;
                    if (var14 < var5) {
                        do {
                            var13 += func_ov031_022228c0(var13, *(char*)var6++);
                            var14++;
                        } while (var14 < var5);
                    }
                } else {
                    memcpy(data_ov031_0224fa28[var4 - 0x206], var6, var5);
                }
                break;
            case 0x20a:
                __builtin__clear(&data_ov031_0224fac0, sizeof(data_ov031_0224fac0));
                memcpy(&data_ov031_0224fac0, var6, var5);
                break;
            }
            var6 = func_ov031_02220248(&var3, arg0 + var2, &var4, &var5);
        } while (var6 != 0);
    }
    return var1;
}
