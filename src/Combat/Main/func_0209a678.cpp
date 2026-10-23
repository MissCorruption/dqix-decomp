#include <globaldefs.h>

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" void func_02083acc(unsigned char* arg0, int arg1);

struct Struct_0209a678 {
#if defined(jpn)
    unsigned short unknown_0_0_ : 12;
    unsigned short unknown_1_4_ : 4;
#else
    unsigned short unknown1_0_0_ : 11;
    unsigned short unknown_1_3_ : 5;
#endif
    union {
        unsigned int unknown_0_0_ : 5;
        unsigned int unknown_0_;
    } unknown_4_;
    unsigned int unknown_8_;
};

struct Struct_0209a678_2 {
    unsigned char unknown_0_[0x464];
    unsigned char unknown_464_[0x20];
};

// USA: func_0209a678
extern "C" ARM int func_0209a678(char* arg0, void* arg1, unsigned short* arg2) {
    unsigned char* var0 = (unsigned char*)func_02053c6c((unsigned char*)arg1);
    int var1 = 0;
    int var2 = 0;
    int var3;
    int var4;
    for (var3 = 0; var3 < 0x1a; var3++) {
        unsigned char var5 = ((Struct_0209a678_2*)var0)->unknown_464_[(*(Struct_0209a678**)arg0)[var1].unknown_4_.unknown_0_0_];
        int var6 = 0;
        for (;;) {
            unsigned int var7 = ((*(Struct_0209a678**)arg0)[var1 + var6].unknown_4_.unknown_0_ << 20) >> 25;
            if (var7 >= var5) {
                if (var5 == var7) {
                    var6++;
                }
                break;
            }
            var6++;
        }
        int var8 = var1 + var6;
        for (var4 = var1; var4 < var8; var4++) {
#if defined(jpn)
            Struct_0209a678* var9 = &(*(Struct_0209a678**)arg0)[var4];
            unsigned int var10 = var9->unknown_4_.unknown_0_;
            unsigned int var11 = (var10 << 15) >> 27;
            if (var11 != 0 &&
                ((Struct_0209a678_2*)var0)->unknown_464_[var11] < ((var10 << 8) >> 25)) {
                continue;
            }
            unsigned short var12 = var9->unknown_0_0_;
#else
            unsigned short var12 = (*(Struct_0209a678**)arg0)[var4].unknown1_0_0_;
#endif
            if (func_02083b00(var0, var12) == 0) {
                func_02083acc(var0, var12);
                arg2[var2] = var12;
                var2++;
            }
        }
        var1 += 0xb;
    }
    return var2;
}
