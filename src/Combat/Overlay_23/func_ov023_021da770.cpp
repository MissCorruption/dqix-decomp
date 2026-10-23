#include <globaldefs.h>

#if defined(jpn)
#include "Resource/CharacterCreationUI.h"
#include "Graphics/SpriteAffineTransform.h"

extern "C" void func_0205ac40(Struct_0205ac40*, Struct_0205ac40_2*);
extern "C" void func_ov023_021dab5c(Struct_ov009_021842a0*, int, int, int, int);

extern "C" ARM void func_ov023_021da770(Struct_ov009_021842a0* arg0) {
    if (!(arg0->unknown_d9c_ & 0x1000000)) {
        if ((arg0->unknown_c58_ != 9 || arg0->unknown_c59_ < 1) && arg0->unknown_c58_ != 11 &&
            !(arg0->unknown_d9c_ & 0x400000)) {
            fix32_t* var0 = arg0->unknown_7e8_[7].unknown_14_;
            var0[0] = 0xe000;
            var0[1] = 0xa9000;
            func_0205ac40(arg0->unknown_7e4_, &arg0->unknown_7e8_[7]);
            var0 = arg0->unknown_7e8_[6].unknown_14_;
            var0[0] = 0x19000;
            var0[1] = 0xa9000;
            func_0205ac40(arg0->unknown_7e4_, &arg0->unknown_7e8_[6]);
            var0 = arg0->unknown_7e8_[8].unknown_14_;
            var0[0] = 0x3b000;
            var0[1] = 0xa9000;
            func_0205ac40(arg0->unknown_7e4_, &arg0->unknown_7e8_[8]);
            var0 = arg0->unknown_7e8_[9].unknown_14_;
            var0[0] = 0x98000;
            var0[1] = 0xa9000;
            func_0205ac40(arg0->unknown_7e4_, &arg0->unknown_7e8_[9]);
            var0 = arg0->unknown_7e8_[10].unknown_14_;
            var0[0] = 0xd2000;
            var0[1] = 0xa9000;
            func_0205ac40(arg0->unknown_7e4_, &arg0->unknown_7e8_[10]);
        }
    }
    for (int var1 = 0; var1 < 8; ++var1) {
        if (var1 > arg0->unknown_da0_[arg0->unknown_da3_] - 1) break;
        int var2 = (var1 * 16 + 0x78) << 12;
        if (arg0->unknown_c58_ == 9) {
            if (arg0->unknown_c59_ >= 1 && arg0->unknown_c59_ != 0xff)
                arg0->unknown_7e8_[var1 + 11].unknown_25_ = 11;
        } else if (arg0->unknown_c58_ == 11) {
            arg0->unknown_7e8_[var1 + 11].unknown_25_ = 11;
        } else if (var1 == arg0->unknown_c58_ - 1) {
            arg0->unknown_7e8_[var1 + 11].unknown_25_ = 9;
        } else {
            arg0->unknown_7e8_[var1 + 11].unknown_25_ = 10;
        }
        fix32_t* var3 = arg0->unknown_7e8_[var1 + 11].unknown_14_;
        var3[0] = var2;
        var3[1] = 0x8000;
        func_0205ac40(arg0->unknown_7e4_, &arg0->unknown_7e8_[var1 + 11]);
    }
    if (arg0->unknown_d94_ == 1) return;
    int var4 = -1;
    bool var5 = false;
    switch (arg0->unknown_c58_) {
    case 2: case 3: case 4: case 5: case 6: case 7:
        var4 = 20;
        if (arg0->unknown_c58_ == 2) var4 = 19;
    case 1: case 8:
        var5 = true;
        break;
    }
    if (var4 >= 0) {
        short var6 = arg0->unknown_c54_;
        short var7 = arg0->unknown_c56_;
        fix32_t* var8 = arg0->unknown_7e8_[var4].unknown_14_;
        var8[0] = var6 << 12;
        var8[1] = var7 << 12;
        func_0205ac40(arg0->unknown_7e4_, &arg0->unknown_7e8_[var4]);
    }
    if (!var5 || (arg0->unknown_d9c_ & 0x400000)) return;
    func_ov023_021dab5c(arg0, arg0->unknown_c4c_, arg0->unknown_c4e_,
                      arg0->unknown_c50_, arg0->unknown_c52_);
}
#else
extern "C" int func_0205ac40(void*, void*);
extern "C" void func_ov023_021dab5c(void*, int, int, int, int);

// USA: func_ov023_021da770
extern "C" ARM void func_ov023_021da770(void* arg0) {
    char* var9 = (char*)arg0;
    char* var10 = *(char**)(var9 + 0x7e4);
    int var11 = *(int*)(var9 + 0xd9c);
    char* var12 = *(char**)(var9 + 0x7e8);
    if (!(var11 & 0x1000000)) {
        int var13 = *(signed char*)(var9 + 0xc00 + 0x58);
        int var14 = *(int*)(var9 + 0xd9c);
        if ((var13 != 9 || *(unsigned char*)(var9 + 0xc59) < 1) &&
            var13 != 0xb && !(var14 & 0x400000)) {
            char* var15;
            var15 = var12 + 0x118;
            *(int*)(var15 + 0x14) = 0xe000;
            *(int*)(var15 + 0x18) = 0xa9000;
            func_0205ac40(var10, var15);

            var15 = var12 + 0xf0;
            *(int*)(var15 + 0x14) = 0x15000;
            *(int*)(var15 + 0x18) = 0xa9000;
            func_0205ac40(var10, var15);

            var15 = var12 + 0x140;
            *(int*)(var15 + 0x14) = 0x3b000;
            *(int*)(var15 + 0x18) = 0xa9000;
            func_0205ac40(var10, var15);

            var15 = var12 + 0x168;
            *(int*)(var15 + 0x14) = 0x8e000;
            *(int*)(var15 + 0x18) = 0xa9000;
            func_0205ac40(var10, var15);

            var15 = var12 + 0x190;
            *(int*)(var15 + 0x14) = 0xc8000;
            *(int*)(var15 + 0x18) = 0xa9000;
            func_0205ac40(var10, var15);
        }
    }

    int var16;
    for (var16 = 0; var16 < 8; var16++) {
        unsigned char var17 = *(unsigned char*)(var9 + 0xda3);
        int var18 = *(signed char*)(var9 + var17 + 0xd00 + 0xa0);
        if (var16 > var18 - 1) break;

        int var19 = (var16 * 0x10 + 0x78) << 12;
        char* var20 = var12 + (var16 + 11) * 0x28;
        int var21 = *(signed char*)(var9 + 0xc00 + 0x58);
        int var22 = 10;
        if (var21 == 9) {
            unsigned char var23 = *(unsigned char*)(var9 + 0xc59);
            if (var23 >= 1 && var23 != 0xff) var22 = 11;
        } else if (var21 == 0xb) {
            var22 = 11;
        } else if (var16 == var21 - 1) {
            var22 = 9;
        }
        *(unsigned char*)(var20 + 0x25) = (unsigned char)var22;
        *(int*)(var20 + 0x14) = var19;
        *(int*)(var20 + 0x18) = 0x8000;
        func_0205ac40(var10, var20);
    }

    if (*(unsigned char*)(var9 + 0xd94) == 1) return;

    int var24 = *(signed char*)(var9 + 0xc00 + 0x58);
    int var25 = -1;
    int var26 = 0;
    switch (var24) {
    case 2: case 3: case 4: case 5: case 6: case 7:
        var25 = 0x14;
        if (var24 == 2) var25 = 0x13;
    case 1: case 8:
        var26 = 1;
        break;
    default:
        break;
    }

    if (var25 >= 0) {
        char* var27 = var12 + var25 * 0x28;
        short var28 = *(short*)(var9 + 0xc00 + 0x54);
        short var29 = *(short*)(var9 + 0xc00 + 0x56);
        *(int*)(var27 + 0x14) = var28 << 12;
        *(int*)(var27 + 0x18) = var29 << 12;
        func_0205ac40(var10, var27);
    }

    if (!var26) return;
    if (*(int*)(var9 + 0xd9c) & 0x400000) return;

    short var30 = *(short*)(var9 + 0xc00 + 0x52);
    short var31 = *(short*)(var9 + 0xc00 + 0x4c);
    short var32 = *(short*)(var9 + 0xc00 + 0x4e);
    short var33 = *(short*)(var9 + 0xc00 + 0x50);
    func_ov023_021dab5c(arg0, var31, var32, var33, var30);
}
#endif
