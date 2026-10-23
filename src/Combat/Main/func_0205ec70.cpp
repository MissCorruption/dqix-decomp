#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0205ec70_3 {
    unsigned short unknown_0_;
    short unknown_2_;
    union {
        short unknown_0_[4];
        unsigned char unknown1_0_[4];
        int unknown2_0_;
        char* unknown3_0_;
    } unknown_4_;
    Struct_0205ec70_3* unknown_c_;
};

struct Struct_0205ec70 {
    unsigned short unknown_0_;
    union {
        short unknown_0_;
        unsigned char unknown1_0_;
    } unknown_2_;
    union {
        int unknown_0_[4];
        short unknown1_0_[8];
        unsigned char unknown2_0_[16];
    } unknown_4_;
    Struct_0205ec70* unknown_14_;
    int unknown_18_;
};

struct Struct_0205ec70_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_0205ec70
extern "C" ARM void func_0205ec70(SafeAllocator* arg0, int arg1, const Script::Parameter* arg2, Struct_0205ec70_3** arg3, Struct_0205ec70** arg4) {
    Struct_0205ec70_3* var0 = 0;
    Struct_0205ec70* var1 = 0;
    Struct_0205ec70_2 var2;
    var2.unknown_0_ = 0;

    while (var2.unknown_0_ < arg1) {
        var2.unknown_4_ = arg2->ToInt();
        arg2++;
        var2.unknown_8_ = var2.unknown_4_ >> 16;

        if (var2.unknown_8_ < 100 || var2.unknown_8_ >= 500) {
            Struct_0205ec70_3* var3 = (Struct_0205ec70_3*)arg0->Allocate(sizeof(Struct_0205ec70_3));
            if (var3 == 0) return;
            if (*arg3 == 0) *arg3 = var3;
            else var0->unknown_c_ = var3;

            switch (var2.unknown_8_) {
            case 29: {
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_4_.unknown_0_[0] = var2.unknown_4_;
                var3->unknown_4_.unknown_0_[1] = (arg2++)->ToInt();
                int var4 = (arg2++)->ToInt();
                float var5 = 3.14159274f * var4 / 180.0f;
                if (var5 > 3.14159274f * 2.0f) var5 -= 3.14159274f * 2.0f;
                else if (var5 < 0.0f) var5 += 3.14159274f * 2.0f;
                var3->unknown_2_ = (int)(4096.0f * var5);
                var2.unknown_0_ += 2;
                break;
            }
            case 32:
            case 33: {
                int var6 = (arg2++)->ToInt();
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_4_.unknown1_0_[0] = (unsigned int)var6 >> 24;
                var3->unknown_4_.unknown1_0_[1] = (unsigned int)var6 >> 16;
                var3->unknown_4_.unknown1_0_[2] = (unsigned int)var6 >> 8;
                var3->unknown_4_.unknown1_0_[3] = var6;
                var2.unknown_0_ += 1;
                break;
            }
            case 44: case 47: case 48: case 49: case 70: case 73: case 75: case 76: case 83: case 90: case 500:
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_2_ = var2.unknown_4_;
                var3->unknown_4_.unknown_0_[0] = (arg2++)->ToInt();
                var2.unknown_0_ += 1;
                break;
            case 85:
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_2_ = var2.unknown_4_;
                var3->unknown_4_.unknown2_0_ = (arg2++)->ToInt();
                var2.unknown_0_ += 1;
                break;
            case 46: {
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_2_ = var2.unknown_4_;
                int var7 = (arg2++)->ToInt();
                var3->unknown_4_.unknown_0_[0] = var7 >> 16;
                var3->unknown_4_.unknown_0_[1] = var7;
                var2.unknown_0_ += 1;
                break;
            }
            case 66: {
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_2_ = var2.unknown_4_;
                int var8 = (arg2++)->ToInt();
                var3->unknown_4_.unknown_0_[0] = var8 >> 16;
                var3->unknown_4_.unknown_0_[1] = var8;
                var2.unknown_0_ += 1;
                break;
            }
            case 50:
            case 82: {
                unsigned short var9 = var2.unknown_8_;
                int var10 = (arg2++)->ToInt();
                int var11 = (arg2++)->ToInt();
                int var12 = (arg2++)->ToInt();
                int var13 = (arg2++)->ToInt();
                var3->unknown_0_ = var9;
                var3->unknown_2_ = 1;
                var3->unknown_4_.unknown_0_[0] = var2.unknown_4_;
                var3->unknown_4_.unknown_0_[1] = var10 >> 16;
                var3->unknown_4_.unknown_0_[2] = var10;
                var3->unknown_4_.unknown_0_[3] = var11 >> 16;
                var2.unknown_0_ += 4;
                Struct_0205ec70_3* var14 = (Struct_0205ec70_3*)arg0->Allocate(sizeof(Struct_0205ec70_3));
                var14->unknown_0_ = var9;
                var14->unknown_2_ = 2;
                var14->unknown_4_.unknown_0_[0] = var11;
                var14->unknown_4_.unknown_0_[1] = var12 >> 16;
                var14->unknown_4_.unknown_0_[2] = var12;
                var14->unknown_4_.unknown_0_[3] = var13;
                var3->unknown_c_ = var14;
                var3 = var14;
                break;
            }
            case 69:
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_2_ = var2.unknown_4_;
                var3->unknown_4_.unknown3_0_ = (char*)arg0->Allocate(11);
                memcpy(var3->unknown_4_.unknown3_0_, (arg2++)->ToString(), 11);
                var2.unknown_0_ += 1;
                break;
            case 52: case 55: case 62: case 63: {
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_2_ = var2.unknown_4_;
                int var15 = (arg2++)->ToInt();
                var3->unknown_4_.unknown_0_[0] = var15 >> 16;
                var3->unknown_4_.unknown_0_[1] = var15;
                var2.unknown_0_ += 1;
                break;
            }
            case 53: case 54: case 56: case 57: case 58: case 59: case 60: case 61: {
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_2_ = var2.unknown_4_;
                int var16 = (arg2++)->ToInt();
                var3->unknown_4_.unknown_0_[0] = var16 >> 16;
                var3->unknown_4_.unknown_0_[1] = var16;
                int var17 = (arg2++)->ToInt();
                var3->unknown_4_.unknown_0_[2] = var17 >> 16;
                var3->unknown_4_.unknown_0_[3] = var17;
                var2.unknown_0_ += 2;
                break;
            }
            case 64:
            case 65: {
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_4_.unknown_0_[0] = var2.unknown_4_;
                int var18 = (arg2++)->ToInt();
                var3->unknown_4_.unknown_0_[1] = var18 >> 16;
                var3->unknown_4_.unknown_0_[2] = var18;
                int var19 = (arg2++)->ToInt();
                var3->unknown_4_.unknown_0_[3] = var19 >> 16;
                var2.unknown_0_ += 2;
                break;
            }
            case 74:
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_2_ = (arg2++)->ToInt();
                var2.unknown_0_ += 1;
                break;
            case 78: {
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_2_ = var2.unknown_4_;
                int var20 = (arg2++)->ToInt();
                var3->unknown_4_.unknown_0_[0] = var20 >> 16;
                var3->unknown_4_.unknown_0_[1] = var20;
                int var21 = (arg2++)->ToInt();
                var3->unknown_4_.unknown_0_[2] = var21;
                var2.unknown_0_ += 2;
                break;
            }
            case 79:
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_4_.unknown1_0_[0] = var2.unknown_4_;
                var3->unknown_2_ = (arg2++)->ToInt();
                var2.unknown_0_ += 1;
                break;
            case 91:
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_4_.unknown1_0_[0] = var2.unknown_4_;
                var3->unknown_2_ = (arg2++)->ToInt();
                var2.unknown_0_ += 1;
                break;
            default:
                var3->unknown_0_ = var2.unknown_8_;
                var3->unknown_2_ = var2.unknown_4_;
                break;
            }

            var3->unknown_c_ = 0;
            var0 = var3;
        } else {
            Struct_0205ec70* var22 = (Struct_0205ec70*)arg0->Allocate(sizeof(Struct_0205ec70));
            if (var22 == 0) return;
            if (*arg4 == 0) *arg4 = var22;
            else var1->unknown_14_ = var22;

            switch (var2.unknown_8_) {
            case 116: case 117: case 118: case 130: case 131: case 133: case 134: case 135: case 138:
            case 144: case 149: case 150: case 155: case 158: case 159: case 176: case 177: case 179:
            case 180: case 226: case 230: case 232:
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown_0_ = var2.unknown_4_;
                var22->unknown_4_.unknown1_0_[0] = (arg2++)->ToInt() >> 16;
                var2.unknown_0_ += 1;
                break;
            case 122: {
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown_0_ = var2.unknown_4_;
                float var23 = (arg2++)->ToFloat();
                float var24 = (arg2++)->ToFloat();
                float var25 = (arg2++)->ToFloat();
                var22->unknown_4_.unknown_0_[0] = (int)(var23 > 0 ? var23 * 4096.0f + 0.5f : var23 * 4096.0f - 0.5f);
                var22->unknown_4_.unknown_0_[1] = (int)(var24 > 0 ? var24 * 4096.0f + 0.5f : var24 * 4096.0f - 0.5f);
                var22->unknown_4_.unknown_0_[2] = (int)(var25 > 0 ? var25 * 4096.0f + 0.5f : var25 * 4096.0f - 0.5f);
                var2.unknown_0_ += 3;
                break;
            }
            case 132: case 148: case 214:
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown_0_ = var2.unknown_4_;
                var22->unknown_4_.unknown1_0_[0] = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[1] = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[2] = (arg2++)->ToInt();
                var2.unknown_0_ += 3;
                break;
            case 123: {
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown_0_ = var2.unknown_4_;
                float var26 = (arg2++)->ToFloat();
                var22->unknown_4_.unknown1_0_[0] = (short)(var26 > 0 ? (short)(var26 * 4096.0f + 0.5f) : (short)(var26 * 4096.0f - 0.5f));
                var2.unknown_0_ += 1;
                break;
            }
            case 108: case 109: case 136: case 152: case 153: case 154: {
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_4_.unknown1_0_[0] = var2.unknown_4_;
                var22->unknown_4_.unknown1_0_[1] = (arg2++)->ToInt();
                int var27 = (arg2++)->ToInt();
                float var28 = 3.14159274f * var27 / 180.0f;
                if (var28 > 3.14159274f * 2.0f) var28 -= 3.14159274f * 2.0f;
                else if (var28 < 0.0f) var28 += 3.14159274f * 2.0f;
                var22->unknown_2_.unknown_0_ = (int)(4096.0f * var28);
                var2.unknown_0_ += 2;
                break;
            }
            case 139:
            case 140:
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_4_.unknown_0_[0] = (arg2++)->ToInt();
                var2.unknown_0_ += 1;
                break;
            case 143: {
                var22->unknown_0_ = var2.unknown_8_;
                int var29 = (int)((arg2++)->ToFloat() * 4096.0f);
                int var30 = (int)((arg2++)->ToFloat() * 4096.0f);
                int var31 = (int)((arg2++)->ToFloat() * 4096.0f);
                int var32 = (int)((arg2++)->ToFloat() * 4096.0f);
                int var33 = (int)((arg2++)->ToFloat() * 4096.0f);
                int var34 = (int)((arg2++)->ToFloat() * 4096.0f);
                int var35 = (arg2++)->ToInt();
                var22->unknown_2_.unknown_0_ = 1;
                var22->unknown_4_.unknown_0_[0] = (unsigned short)var2.unknown_4_;
                var22->unknown_4_.unknown_0_[1] = var29;
                var22->unknown_4_.unknown_0_[2] = var30;
                var22->unknown_4_.unknown_0_[3] = var31;
                Struct_0205ec70* var36 = (Struct_0205ec70*)arg0->Allocate(sizeof(Struct_0205ec70));
                var36->unknown_0_ = var22->unknown_0_;
                var36->unknown_2_.unknown_0_ = 2;
                var36->unknown_4_.unknown_0_[3] = var35;
                var36->unknown_4_.unknown_0_[0] = var32;
                var36->unknown_4_.unknown_0_[1] = var33;
                var36->unknown_4_.unknown_0_[2] = var34;
                var22->unknown_14_ = var36;
                var22->unknown_18_ = 0;
                var22 = var36;
                var2.unknown_0_ += 7;
                break;
            }
            case 156:
            case 157: {
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown_0_ = var2.unknown_4_;
                int var37 = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[0] = var37 >> 16;
                var22->unknown_4_.unknown1_0_[1] = var37;
                var2.unknown_0_ += 1;
                break;
            }
            case 167: case 168: case 169: case 171: case 172: case 174: case 196: case 200: case 201:
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown1_0_ = var2.unknown_4_;
                var22->unknown_4_.unknown2_0_[0] = (arg2++)->ToInt() >> 16;
                var2.unknown_0_ += 1;
                break;
            case 178: {
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown1_0_ = var2.unknown_4_;
                int var38 = (arg2++)->ToInt();
                var22->unknown_4_.unknown2_0_[0] = var38 >> 16;
                var22->unknown_4_.unknown2_0_[1] = var38;
                var22->unknown_4_.unknown1_0_[1] = (arg2++)->ToInt();
                int var39 = (arg2++)->ToInt();
                var22->unknown_4_.unknown2_0_[4] = var39 >> 16;
                var2.unknown_0_ += 3;
                break;
            }
            case 188: {
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown_0_ = var2.unknown_4_;
                int var40 = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[0] = var40 >> 16;
                var22->unknown_4_.unknown1_0_[1] = var40;
                int var41 = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[2] = var41;
                var2.unknown_0_ += 2;
                break;
            }
            case 189:
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown1_0_ = (unsigned short)var2.unknown_4_ != 0;
                break;
            case 190: {
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown_0_ = var2.unknown_4_;
                int var42 = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[0] = var42 >> 16;
                var22->unknown_4_.unknown1_0_[1] = var42;
                int var43 = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[2] = var43;
                var2.unknown_0_ += 2;
                break;
            }
            case 195:
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown1_0_ = var2.unknown_4_;
                var22->unknown_4_.unknown2_0_[0] = (arg2++)->ToInt() >> 16;
                var2.unknown_0_ += 1;
                break;
            case 207: {
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown_0_ = var2.unknown_4_;
                int var44 = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[0] = var44 >> 16;
                var22->unknown_4_.unknown1_0_[1] = var44;
                int var45 = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[2] = var45 >> 16;
                var22->unknown_4_.unknown1_0_[3] = var45;
                var2.unknown_0_ += 2;
                break;
            }
            case 213: {
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_4_.unknown1_0_[0] = var2.unknown_4_;
                int var46 = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[1] = var46 >> 16;
                var22->unknown_4_.unknown1_0_[2] = var46;
                int var47 = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[3] = var47;
                var2.unknown_0_ += 2;
                break;
            }
            case 215: {
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown_0_ = var2.unknown_4_;
                int var48 = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[0] = var48 >> 16;
                var22->unknown_4_.unknown1_0_[1] = var48;
                int var49 = (arg2++)->ToInt();
                var22->unknown_4_.unknown1_0_[2] = var49 >> 16;
                var22->unknown_4_.unknown1_0_[3] = var49;
                var2.unknown_0_ += 2;
                break;
            }
            case 220:
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown_0_ = (var2.unknown_4_ & 0xff00) >> 8;
                var22->unknown_4_.unknown2_0_[0] = var2.unknown_4_;
                break;
            default:
                var22->unknown_0_ = var2.unknown_8_;
                var22->unknown_2_.unknown_0_ = var2.unknown_4_;
                break;
            }

            var22->unknown_14_ = 0;
            var22->unknown_18_ = 0;
            var1 = var22;
        }

        var2.unknown_0_++;
    }
}
