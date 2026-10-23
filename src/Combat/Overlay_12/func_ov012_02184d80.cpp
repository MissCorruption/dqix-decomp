#include <globaldefs.h>
#include <std_library_functions.h>
extern unsigned char data_0211e33c[0x30000] __attribute__((aligned(4)));
#include "Filesystem/FileIO.h"

struct Struct_ov009_02189a4c_2;
struct Struct_ov009_02189a4c_3;
extern "C" int func_ov012_0218558c(Struct_ov009_02189a4c_2*, Struct_ov009_02189a4c_3*);

struct Struct_ov009_02189a4c_3 {
    char* unknown_0_[5];
    signed char unknown_14_[5];
    unsigned char unknown_19_[5];
    unsigned char unknown_1e_;
    char unknown_1f_;
};
struct Struct_ov009_02189a4c_4 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 19;
    unsigned int unknown_3_7_ : 1;
};
static inline unsigned int inline_ov009_02189a4c_4(unsigned int arg0, unsigned int arg1) {
    unsigned int var0 = arg1 - 1;
    return (arg0 + var0) & ~var0;
}
struct Struct_ov009_02189a4c_2 {
    Struct_ov009_02189a4c_4 unknown_0_;
    Struct_ov009_02189a4c_3* unknown_4_;
    char* unknown_8_;
};
struct Struct_ov009_02186e00 {
    char* unknown_0_;
    signed char unknown_4_;
    signed char unknown_5_0_ : 6;
    signed char unknown_5_6_ : 1;
    signed char unknown_5_7_ : 1;
    char unknown_6_[2];
};
struct Struct_ov012_02184d80 {
    char unknown_0_[0x18];
    Struct_ov009_02189a4c_2 unknown_18_;
    void* unknown_24_;
    unsigned short unknown_28_;
    char unknown_2a_[4];
    unsigned char unknown_2e_, unknown_2f_, unknown_30_, unknown_31_, unknown_32_;
    unsigned char unknown_33_, unknown_34_, unknown_35_, unknown_36_, unknown_37_, unknown_38_;
    unsigned char unknown_39_[3];
    inline Struct_ov009_02189a4c_2* inline_ov012_02184d80() { return &unknown_18_; }
};
struct Struct_ov009_02189a4c {
    short unknown_0_;
    short unknown_2_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
};
struct Struct_ov012_02184d80_2 {
    unsigned int unknown_0_;
    char unknown_4_[64];
    char unknown_44_[12];
    char unknown_50_[12];
};
extern const char* data_020f285c;
extern char data_ov012_0218b220[];
extern "C" void __clear(void*, unsigned int);
extern "C" void func_ov012_021855f0(void*, char*, char*);
extern "C" int func_020424e4(int, int);
extern "C" Struct_ov009_02186e00* func_020425b4(int, int);
extern "C" int func_020426bc(const char*, unsigned char*, int);
extern "C" int func_ov012_02185634(void*, void*, int, int, int);
extern "C" int func_ov012_02185684(void*, unsigned char*, unsigned char*, int, int);

static inline Struct_ov009_02189a4c_3* inline_ov009_02189a4c(const Struct_ov009_02189a4c_2* arg0) { return arg0->unknown_4_; }
static inline int inline_ov009_02189a4c_2(const Struct_ov009_02189a4c_2* arg0) { return arg0->unknown_0_.unknown_0_0_; }

static inline unsigned int inline_ov009_02189a4c_3(unsigned int arg0, unsigned int arg1, unsigned int arg2, unsigned int arg3) {
    unsigned int var0 = inline_ov009_02189a4c_4(arg2, arg3);
    unsigned int var1 = arg1 * var0;
    return arg0 + var1;
}

// USA: func_ov012_02184d80
extern "C" ARM int func_ov012_02184d80(Struct_ov012_02184d80* arg0, char* arg1, char* arg2) {
    int var0;
    int var1;
    unsigned char var2;
    unsigned char var3;
    unsigned char var4;
    unsigned char var5;
    int var6;
    int var7;
    int var8;
    Struct_ov009_02189a4c* var9;
    int var10;
    int var11;
    Struct_ov009_02189a4c_3* var12;
    int var13;
    unsigned char var14[5][64];
    unsigned char var15[128];
    char var16[512];
    Struct_ov009_02189a4c var17[30];
    Struct_ov012_02184d80_2 var18;
    unsigned short var19 = 0;
    var18.unknown_0_ = 0;
    LoadFileIntoMemory(data_020f285c, data_0211e33c, &var18.unknown_0_);
    memset(&arg0->unknown_18_, 0, 12);
    unsigned char* var20 = data_0211e33c;
    if (var20) {
        memcpy(&arg0->unknown_18_, data_0211e33c, 4);
        unsigned int var21 = inline_ov009_02189a4c_4(sizeof(Struct_ov009_02189a4c_4), 4);
        unsigned char* var22 = data_0211e33c;
        arg0->unknown_18_.unknown_4_ = (Struct_ov009_02189a4c_3*)(var22 + var21);
        unsigned int var23 = inline_ov009_02189a4c_3(0, arg0->unknown_18_.unknown_0_.unknown_0_0_, sizeof(Struct_ov009_02189a4c_3), 4);
        arg0->unknown_18_.unknown_8_ = (char*)(var22 + (var21 + var23));
        unsigned int var24 = arg0->unknown_18_.unknown_0_.unknown_3_7_;
        if (!var24) {
            const Struct_ov009_02189a4c_2* var25 = &arg0->unknown_18_;
            var12 = inline_ov009_02189a4c(var25);
            if (var12) {
                var13 = inline_ov009_02189a4c_2(var25);
                int (*var26)(Struct_ov009_02189a4c_2*, Struct_ov009_02189a4c_3*);
                if (var13 && (var26 = func_ov012_0218558c) != 0) {
                    for (var11 = 0; var11 < var13; ++var11, ++var12) func_ov012_0218558c(arg0->inline_ov012_02184d80(), var12);
                }
            }
            arg0->unknown_18_.unknown_0_.unknown_3_7_ = 1;
            ((Struct_ov009_02189a4c_4*)data_0211e33c)->unknown_3_7_ = 1;
        }
    }
    arg0->unknown_24_ = 0;
    arg0->unknown_28_ = 0;
    if (var19) {
        arg0->unknown_24_ = data_0211e33c + var19;
        arg0->unknown_28_ = var19;
    }
    __clear(var17, 180);
    __clear(var16, 512);
    __clear(var15, 128);
    {
    var2 = arg0->unknown_32_;
    var3 = arg0->unknown_33_;
    var4 = arg0->unknown_34_;
    var5 = arg0->unknown_35_;
    var6 = arg0->unknown_38_;
    var7 = arg0->unknown_37_;
    arg2 = var16;
    for (;;) {
        if (!*arg1) break;
        Struct_ov009_02186e00* var27;
        int var28 = func_020424e4((int)arg1, 1);
        var27 = func_020425b4(var28, 1);
        if (!var27) goto fallback_character;
        if (((var28 >= 8 && var28 <= 69) || var28 == 77 || var28 == 83 ||
                      (var28 >= 120 && var28 <= 169) || var28 == var2 || var28 == var4 ||
                      var28 == var5 || var28 == 107 || var28 == var6)) {
            int var29 = var27->unknown_5_0_;
            if (var28 == 107) var27 = func_020425b4(var3, 1);
            __clear(var18.unknown_50_, 12);
            int var30 = var27->unknown_5_0_;
            char* var31 = var27->unknown_0_;
            if (var27->unknown_5_7_) {
                func_ov012_021855f0(arg0, var31, var18.unknown_50_);
                var31 = var18.unknown_50_;
            }
            if (var28 >= 120 && var28 <= 169) {
                int var32 = var31[1];
                if ((var32 >= 'A' && var32 <= 'Z') || (var32 >= 'a' && var32 <= 'z')) {
                    if (var32 != 's') goto copy_character;
                }
                var32 = var31[2];
                if (var32 >= 'a' && var32 <= 'z') var32 = (char)(var32 - 32);
                memset(var18.unknown_50_, 0, 12);
                var18.unknown_50_[0] = var32;
                var31 = var18.unknown_50_;
                var30 = 1;
            }
        copy_character:
            memcpy(arg2, var31, var30);
            arg1 += var29;
            arg2 += var30;
        } else if (var28 == var7) {
            int var33 = var27->unknown_5_0_;
            memcpy(arg2, data_ov012_0218b220, 1);
            arg1 += var33;
            arg2++;
        } else {
        fallback_character:
            int var34 = 1;
            if (var27) {
                var34 = var27->unknown_5_0_;
                *arg2 = ',';
            } else *arg2 = ' ';
            arg1 += var34;
            ++arg2;
        }
    }
    }
    int var35;
    int var36;
    int var37;
    int var38;
    unsigned char* var39;
    int var40;
    int var41;
    int var42;
    Struct_ov009_02189a4c* var43;
    int var44;
    int var45;
    int var46;
    unsigned char* var47;
    Struct_ov009_02189a4c* var48;
    int var49;
    Struct_ov009_02189a4c* var50;
    Struct_ov009_02189a4c_3* var51;
    short var52;
    int var53;
    unsigned int var54;
    func_020426bc(var16, var15, 1);
    var49 = 0;
    var48 = var17;
    var45 = arg0->unknown_36_;
    var47 = var15;
    var46 = var49;
    var53 = var49;
    for (;;) {
        var54 = *var47;
        if (var48->unknown_5_) {
            if (var54 == 0 || var54 == 255 || var54 == var45) {
                var53++;
                var48->unknown_2_ = var46 - var48->unknown_0_;
                var48->unknown_4_ = var54 == 255 ? 1 : 0;
                var48->unknown_5_ = 0;
                var48++;
            }
        } else {
            if (var54 != 0 && var54 < 255 && var54 != var45) {
                var48->unknown_0_ = var46;
                var48->unknown_5_ = 1;
            }
            if (var54 == var45 && var53 != 0) (var17 + (var53 - 1))->unknown_4_ = 0;
        }
        if (var48->unknown_5_ && var49 == 18) {
            var53++;
            var48->unknown_2_ = var46 - var48->unknown_0_ + 1;
            var48->unknown_4_ = 1;
            var48++;
        }
        if (!var54) break;
        var49++;
        var47++;
        var46++;
        if (var49 == 19) var49 = 0;
    }
    var43 = var17;
    var44 = arg0->unknown_36_;
    for (var41 = 0; var41 < var53 - 1; ++var41, ++var43) {
        var35 = var43->unknown_0_ + var43->unknown_2_;
        var40 = var43[1].unknown_0_;
        var43->unknown_4_ = 1;
        var39 = var15 + var35;
        while (var35 < var40) {
            if (var44 == *var39) { var43->unknown_4_ = 0; break; }
            ++var35;
            ++var39;
        }
    }
    var42 = (signed char)arg0->unknown_36_;
    for (var38 = 0; var38 < 128; ++var38) {
        if (var42 == (signed char)var15[var38]) ((char*)var15)[var38] = -1;
    }
    var10 = (short)arg0->unknown_18_.unknown_0_.unknown_0_0_;
    for (var52 = 0; var52 < var10; ++var52) {
        var51 = arg0->unknown_18_.unknown_4_ + var52;
        var9 = var17;
        __clear(var14, 320);
        for (var37 = 0; var37 < var51->unknown_1e_; ++var37) {
            func_020426bc(var51->unknown_0_[var37], var14[var37], 1);
            var51->unknown_0_[var37] = (char*)var14[var37];
        }
        var8 = var53 - var51->unknown_1e_ + 1;
        for (var36 = 0; var36 < var8; ++var36, ++var9) {
            int var55;
            {
                var50 = var9;
                unsigned char* var56 = var15;
                var1 = var51->unknown_1e_;
                var0 = var1 - 1;
                for (var49 = 0; var49 < var1; ++var49, ++var50) {
                    if (var49 < var0 && !var50->unknown_4_) { var55 = 0; goto match_done; }
                    int var57;
                    int var58 = var51->unknown_14_[var49];
                    int var59 = var50->unknown_2_;
                    int var60 = var59 - var58 + 1;
                    var57 = var51->unknown_19_[var49];
                    int var61 = (int)var51->unknown_0_[var49];
                    switch (var57) {
                    case 0:
                        if (var58 != var59) { var55 = 0; goto match_done; }
                        if (!func_ov012_02185634(arg0, (void*)var61, (int)(var56 + var50->unknown_0_), var58, 1)) { var55 = 0; goto match_done; }
                        break;
                    case 3:
                        if (var59 < var58) { var55 = 0; goto match_done; }
                        if (!func_ov012_02185634(arg0, (void*)var61, (int)(var56 + var50->unknown_0_), var58, 1)) { var55 = 0; goto match_done; }
                        break;
                    case 2:
                        if (var59 < var58) { var55 = 0; goto match_done; }
                        if (!func_ov012_02185634(arg0, (void*)var61, (int)(var56 + (var50->unknown_0_ + var50->unknown_2_ - var58)), var58, 1)) { var55 = 0; goto match_done; }
                        break;
                    case 1:
                        if (var59 < var58) { var55 = 0; goto match_done; }
                        if (!func_ov012_02185634(arg0, (void*)var61, (int)(var56 + var50->unknown_0_), var58, var60)) { var55 = 0; goto match_done; }
                        break;
                    case 4:
                        if (var58 != var59) { var55 = 0; goto match_done; }
                        if (!func_ov012_02185684(arg0, (unsigned char*)var61, var56 + var50->unknown_0_, var58, 1)) { var55 = 0; goto match_done; }
                        break;
                    case 7:
                        if (var59 < var58) { var55 = 0; goto match_done; }
                        if (!func_ov012_02185684(arg0, (unsigned char*)var61, var56 + var50->unknown_0_, var58, 1)) { var55 = 0; goto match_done; }
                        break;
                    case 6:
                        if (var59 < var58) { var55 = 0; goto match_done; }
                        if (!func_ov012_02185684(arg0, (unsigned char*)var61, var56 + (var50->unknown_0_ + var50->unknown_2_ - var58), var58, 1)) { var55 = 0; goto match_done; }
                        break;
                    case 5:
                        if (var59 < var58) { var55 = 0; goto match_done; }
                        if (!func_ov012_02185684(arg0, (unsigned char*)var61, var56 + var50->unknown_0_, var58, var60)) { var55 = 0; goto match_done; }
                        break;
                    }
                }
                var55 = 1;
            }
match_done:
            if (var55) {
                return 1;
            }
        }
    }
    return 0;
}
