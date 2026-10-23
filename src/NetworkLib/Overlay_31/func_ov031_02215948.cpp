#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov031_02249ad4_2 {
    const signed char* unknown_0_;
    const signed char* unknown_4_;
    const signed char* unknown_8_;
    const signed char* unknown_c_;
};

extern Struct_ov031_02249ad4_2 data_ov031_02249ad4;
extern const unsigned char data_ov031_0224609c[13];
extern const unsigned char data_ov031_022460ac[16];

// USA: func_ov031_02215948
extern "C" ARM void func_ov031_02215948(const unsigned char* arg0, unsigned char* arg1) {
    {
        int var0 = 0;
        do {
            arg1[var0] = arg0[var0] ^ (arg0 + var0 % 7)[13];
            var0++;
        } while (var0 < 13);
    }
    {
        int var1 = 0;
        do {
            unsigned char* var2 = arg1 + var1;
            const unsigned char* var3 = arg0 + var1;
            var2[3] = var2[3] ^ var3[13];
            var1++;
        } while (var1 < 7);
    }
    {
        int var4 = 0;
        do {
            arg1[var4] ^= data_ov031_02249ad4.unknown_4_[var4];
            var4++;
        } while (var4 < 13);
    }
    unsigned char var5[13];
    VectorizedInvertedMemcpy(arg1, var5, 13);
    {
        unsigned char* var6 = var5;
        const unsigned char* var7 = data_ov031_0224609c;
        int var8 = 0;
        do {
            unsigned char var9 = *var6;
            unsigned char var10 = *var7;
            arg1[var10] = var9;
            var7++;
            var6++;
            var8++;
        } while (var8 < 13);
    }
    {
        int var11 = 0;
        do {
            arg1[var11] ^= data_ov031_02249ad4.unknown_c_[var11];
            var11++;
        } while (var11 < 13);
    }
    {
        int var12 = 0;
        do {
            int var13 = (arg1[var12] >> 4) & 15;
            int var14 = arg1[var12] & 15;
            arg1[var12] = (data_ov031_022460ac[var13] << 4) | data_ov031_022460ac[var14];
            var12++;
        } while (var12 < 13);
    }
    {
        int var15 = 0;
        do {
            unsigned char* var16 = arg1 + var15;
            arg1[var15] ^= var16[6];
            var16[3] ^= var16[9];
            var16[6] ^= var16[3];
            var16[9] ^= arg1[var15];
            arg1[12] ^= arg1[var15];
            var15++;
        } while (var15 < 3);
    }
}
