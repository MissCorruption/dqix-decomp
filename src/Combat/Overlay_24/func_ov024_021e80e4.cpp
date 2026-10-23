#include <globaldefs.h>

struct Struct_ov024_021e80e4_6 {
    unsigned char unknown_0_0_ : 1;
    unsigned char unknown_0_1_ : 1;
    unsigned char unknown_0_2_ : 1;
    unsigned char unknown_0_3_ : 1;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 1;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
};

struct Struct_ov024_021e80e4_5 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
};

struct Struct_ov024_021e80e4_7 {
    unsigned int unknown_0_0_ : 5;
    unsigned int unknown_0_5_ : 7;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 16;
};

struct Struct_ov024_021e80e4_8 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct Struct_ov024_021e80e4_9 {
    char unknown_0_[4];
    struct Struct_ov024_021e80e4_5 unknown_4_;
    char unknown_8_[0x10];
    struct Struct_ov024_021e80e4_7 unknown_18_;
    char unknown_1c_[8];
    struct Struct_ov024_021e80e4_8 unknown_24_;
    struct Struct_ov024_021e80e4_8 unknown_28_;
};

struct Struct_ov024_021e80e4_10 {
    unsigned short unknown_0_;
    char unknown_2_[2];
    struct Struct_ov024_021e80e4_10* unknown_4_;
};

struct Struct_ov024_021e80e4_11 {
    char unknown_0_[8];
    struct Struct_ov024_021e80e4_10* unknown_8_;
    short unknown_c_;
    char unknown_e_[0x12];
    struct Struct_ov024_021e80e4_11* unknown_20_;
};

struct Struct_ov024_021e80e4 {
    struct Struct_ov024_021e80e4_11* unknown_0_;
    char unknown_4_[4];
    struct Struct_ov024_021e80e4_11* unknown_8_;
    char unknown_c_[0xc];
    unsigned char unknown_18_;
    char unknown_19_[7];
    struct Struct_ov024_021e80e4* unknown_20_;
};

struct Struct_ov024_021e80e4_2 {
    char unknown_0_[0x20];
    unsigned short unknown_20_;
};

struct Struct_ov024_021e80e4_3 {
    char unknown_0_[6];
    short unknown_6_;
    char unknown_8_;
    unsigned char unknown_9_;
    char unknown_a_[2];
    struct Struct_ov024_021e80e4_6 unknown_c_;
    char unknown_d_[7];
    struct Struct_ov024_021e80e4* unknown_14_;
    char unknown_18_[2];
    unsigned short unknown_1a_;
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned short unknown_20_;
};

struct Struct_ov024_021e80e4_4 {
    int unknown_0_;
    struct Struct_ov024_021e80e4_3* unknown_4_;
    char unknown_8_[8];
    void* unknown_10_;
    int unknown_14_;
    char unknown_18_[0x2c];
    short unknown_44_;
    char unknown_46_[0x31];
    unsigned char unknown_77_;
};

struct Struct_ov024_021fe800 {
    short unknown_0_[16];
};

#define IN_RANGE_021e80e4(x) (((x) >= 0 && (x) <= 3) ? 1 : 0)

extern "C" struct Struct_ov024_021fe800 data_ov024_021fe800;

extern "C" int func_ov000_0215fc60(char*);
struct Struct_ov000_0215440c_2;
extern "C" struct Struct_ov024_021e80e4_2* func_ov000_02160094(Struct_ov000_0215440c_2*, int);
struct Struct_ov000_0215440c;
extern "C" struct Struct_ov024_021e80e4* func_ov000_021600f8(Struct_ov000_0215440c*, int);
extern "C" short func_ov000_0215ffa0(struct Struct_ov024_021e80e4* arg0);
struct Struct_ov000_02159f7c;
extern "C" int func_ov000_02159f7c(void*, Struct_ov000_02159f7c*);
extern "C" int func_ov000_0215fd90(struct Struct_ov024_021e80e4_11* arg0, int arg1);
extern "C" void func_ov000_0215a88c(void*, void*, int);
extern "C" unsigned short func_ov024_021e9b24(struct Struct_ov024_021e80e4_4* arg0, int arg1, struct Struct_ov024_021e80e4_9* arg2, int arg3);

// USA: func_ov024_021e80e4
extern "C" ARM void func_ov024_021e80e4(struct Struct_ov024_021e80e4_4* arg0, struct Struct_ov024_021e80e4_3* arg1, struct Struct_ov024_021e80e4_9* arg2, int arg3, unsigned char arg4, struct Struct_ov024_021e80e4_9* arg5) {
    struct Struct_ov024_021fe800 var0;

    if (func_ov000_0215fc60((char*)arg0->unknown_10_) != 0) {
        struct Struct_ov024_021e80e4_2* var1 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, 0);
        if (var1 != 0) {
            if (var1->unknown_20_ == 0) {
                arg1->unknown_1a_ = 0x260;
                return;
            }
        }
    }
    if (arg2->unknown_4_.unknown_0_0_ == 0x61 && arg4 == 0) return;

    int var2 = 0;
    int var3 = 0;
    int var4 = 0;
    int var5 = 0;
    int var6 = 0;
    int var7 = 0;
    int var8 = 0;
    unsigned char var9 = 1;
    unsigned char var10 = 1;
    int var11 = arg0->unknown_14_;
    int var12 = var11;
    if (arg2->unknown_18_.unknown_0_5_ == 1) {
        var11 = var12 = 0;
    }
    var0 = data_ov024_021fe800;

    for (int var13 = 0; var13 < arg1->unknown_9_; var13++) {
        struct Struct_ov024_021e80e4* var14 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, var13);
        if (var14 == 0) continue;
        int var15 = func_ov000_0215ffa0(var14);
        struct Struct_ov024_021e80e4_11* var16;
        int var17 = 1;
        if (arg2->unknown_18_.unknown_0_5_ == 1) {
            var17 = 0;
            for (var16 = var14->unknown_0_; var16 != 0; var16 = var16->unknown_20_) {
                if (func_ov000_02159f7c(arg0->unknown_10_, (Struct_ov000_02159f7c*)var16) != 0) {
                    if (IN_RANGE_021e80e4(var15)) {
                        var9 = 0;
                        var5++;
                    } else {
                        var10 = 0;
                        var6++;
                    }
                } else if (func_ov000_0215fd90(var16, 0xd) != 0) {
                    if (IN_RANGE_021e80e4(var15)) {
                        var7++;
                    } else {
                        var8 = 0;
                    }
                    continue;
                } else if (func_ov000_0215fd90(var16, 4) != 0) {
                    if (IN_RANGE_021e80e4(var15)) {
                        var5++;
                    } else {
                        var6++;
                    }
                }
                if (var16->unknown_c_ != 0) {
                    if (IN_RANGE_021e80e4(var15)) {
                        var11++;
                    } else {
                        var12++;
                    }
                    var17 = 1;
                }
            }
            for (var16 = var14->unknown_8_; var16 != 0; var16 = var16->unknown_20_) {
                if (func_ov000_0215fd90(var16, 0xd) != 0) {
                    if (IN_RANGE_021e80e4(var15)) {
                        var7++;
                    } else {
                        var8++;
                    }
                }
            }
        }
        if (var17 == 0) continue;
        int var18 = 0;
        for (int var19 = 0; var19 < var2; var19++) {
            if (var15 == var0.unknown_0_[var19]) {
                var18 = 1;
                break;
            }
        }
        if (var18 == 0) {
            var0.unknown_0_[var2++] = var15;
            if (IN_RANGE_021e80e4(var15)) {
                var3++;
            } else {
                var4++;
            }
        }
        if (var13 == 0xf) break;
    }

    unsigned char var20 = 0;
    unsigned char var21 = 0;
    int var22;
    unsigned char var23;
    int var24;
    var24 = var22 = 0;
    var23 = 0;
    int var25 = arg2->unknown_18_.unknown_0_5_;
    if (var25 == 1) {
        if (var3 > 1) {
            var24 = 3;
        } else {
            var24 = var11 > 1 ? 0x261 : 2;
        }
        if (var4 > 1) {
            var22 = 6;
        } else {
            var22 = var12 > 1 ? 0x262 : 5;
        }
        var23 = 1;
        if (var11 + var5 >= 2) {
            var9 = 1;
            var20 = 1;
        }
        if (var12 + var6 >= 2) {
            var10 = 1;
            var21 = 1;
        }
        if (var7 != 0) var9 = 0;
        if (var8 != 0) var10 = 0;
    }
    if (arg2->unknown_4_.unknown_0_0_ == 0x166 || arg2->unknown_4_.unknown_0_0_ == 0x167 || arg2->unknown_4_.unknown_0_0_ == 0x38c || arg2->unknown_4_.unknown_0_0_ == 0x38d || arg2->unknown_4_.unknown_0_0_ == 0x38e || arg2->unknown_4_.unknown_0_0_ == 0x38f) {
        var22 = arg1->unknown_9_ > 1 ? 0x218 : 0x38;
    }
    if (var25 == 0x31) {
        if (arg0->unknown_14_ > 1) {
            var22 = 0xf2;
            var24 = var22;
        } else {
            var22 = 0xf1;
            var24 = var22;
        }
        if (arg0->unknown_14_ == 0) {
            if (arg1->unknown_9_ >= 2) {
                var21 = 1;
                var20 = 1;
            } else {
                struct Struct_ov024_021e80e4* var26 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, 0);
                if (var26 != 0 && var26->unknown_0_ != 0) {
                    if (func_ov000_02159f7c(arg0->unknown_10_, (Struct_ov000_02159f7c*)var26->unknown_0_) != 0) {
                        var10 = 0;
                        var9 = 0;
                    }
                }
            }
        }
        arg1->unknown_6_ = arg0->unknown_44_;
    }
    if (arg2->unknown_4_.unknown_0_0_ == 0x9a) {
        if (arg0->unknown_14_ == 0) {
            var24 = 0x1f;
        } else {
            var24 = arg1->unknown_9_ <= 1 ? 0xcb : 0xcc;
        }
        var22 = var24;
    }
    if (arg2->unknown_4_.unknown_0_0_ == 0x20f) {
        struct Struct_ov024_021e80e4_3* var27;
        int var28 = 0;
        struct Struct_ov024_021e80e4* var29 = 0;
        var27 = arg0->unknown_4_;
        for (int var30 = 0; var30 < var27->unknown_9_; var30++) {
            struct Struct_ov024_021e80e4* var31 = func_ov000_021600f8((Struct_ov000_0215440c*)var27, var30);
            if (var31 == 0) continue;
            if (IN_RANGE_021e80e4(func_ov000_0215ffa0(var31))) continue;
            if (var29 == 0) var29 = var31;
            var28++;
        }
        int var32 = var28 > 1 ? 0x24a : 0x5b;
        if (var29 != 0 && var29->unknown_0_ != 0) {
            func_ov000_0215a88c(arg0->unknown_10_, var29->unknown_0_, (unsigned short)var32);
        }
        return;
    }

    if (var20 != 0 || var21 != 0) {
        for (int var33 = 0; var33 < arg1->unknown_9_; var33++) {
            struct Struct_ov024_021e80e4* var34 = func_ov000_021600f8((Struct_ov000_0215440c*)arg1, var33);
            if (var34 == 0) continue;
            int var35 = func_ov000_0215ffa0(var34);
            if (IN_RANGE_021e80e4(var35) && var20 == 0) continue;
            if (!IN_RANGE_021e80e4(var35) && var21 == 0) continue;
            for (struct Struct_ov024_021e80e4_11* var36 = var34->unknown_0_; var36 != 0; var36 = var36->unknown_20_) {
                for (struct Struct_ov024_021e80e4_10* var37 = var36->unknown_8_; var37 != 0; var37 = var37->unknown_4_) {
                    if (var37->unknown_0_ == 0x96 || var37->unknown_0_ == 0x255 || var37->unknown_0_ == 0x97 || var37->unknown_0_ == 0x1b9 || var37->unknown_0_ == 0x24d || var37->unknown_0_ == 0x2b) {
                        var37->unknown_0_ = 0;
                    }
                }
            }
        }
    }

    struct Struct_ov024_021e80e4_9* var38 = arg2;
    struct Struct_ov024_021e80e4_9* var39 = arg2;
    if (arg2->unknown_18_.unknown_0_5_ == 1 && arg4 != 0) {
        struct Struct_ov024_021e80e4_2* var40 = func_ov000_02160094((Struct_ov000_0215440c_2*)arg1, 0);
        if (var40 != 0) {
            if (IN_RANGE_021e80e4(var40->unknown_20_)) {
                var39 = arg5;
            } else {
                var38 = arg5;
            }
        }
    }

    if (var3 < 1) {
        if (var9 != 0) arg1->unknown_1a_ = var38->unknown_24_.unknown_1_2_;
    } else {
        struct Struct_ov024_021e80e4* var41 = arg1->unknown_14_;
        struct Struct_ov024_021e80e4_11* var42 = var41->unknown_0_;
        if (!(var42 != 0 && var42->unknown_8_ != 0 && var24 == 0)) {
            if (arg1->unknown_9_ > 1) {
                if (var11 > 0) {
                    arg1->unknown_1a_ = var24;
                } else if (var9 != 0) {
                    arg1->unknown_1a_ = func_ov024_021e9b24(arg0, func_ov000_0215ffa0(var41), var38, 1);
                }
            } else if (var11 > 0) {
                if (var41->unknown_18_ > 1) {
                    arg1->unknown_1a_ = var24;
                } else if (var42 == 0 || func_ov000_0215fd90(var42, 0xd) == 0) {
                    arg1->unknown_1a_ = func_ov024_021e9b24(arg0, func_ov000_0215ffa0(arg1->unknown_14_), var38, 0);
                    if (arg1->unknown_1a_ == 0) {
                        if (var23 != 0) arg1->unknown_1a_ = 2;
                    }
                }
            } else if (var9 != 0) {
                arg1->unknown_1a_ = func_ov024_021e9b24(arg0, func_ov000_0215ffa0(var41), var38, 1);
            }
        }
    }

    if (var4 < 1) {
        if (var10 != 0) arg1->unknown_1c_ = var39->unknown_24_.unknown_2_4_;
    } else {
        struct Struct_ov024_021e80e4* var43 = arg1->unknown_14_;
        struct Struct_ov024_021e80e4_11* var44 = var43->unknown_0_;
        if (!(var44 != 0 && var44->unknown_8_ != 0 && var22 == 0)) {
            if (arg1->unknown_9_ > 1) {
                if (var12 > 0) {
                    arg1->unknown_1c_ = var22;
                } else if (var10 != 0) {
                    arg1->unknown_1c_ = func_ov024_021e9b24(arg0, func_ov000_0215ffa0(var43), var39, 1);
                }
            } else if (var12 > 0) {
                if (var43->unknown_18_ > 1) {
                    arg1->unknown_1c_ = var22;
                } else if (var44 == 0 || func_ov000_0215fd90(var44, 0xd) == 0) {
                    arg1->unknown_1c_ = func_ov024_021e9b24(arg0, func_ov000_0215ffa0(arg1->unknown_14_), var39, 0);
                    if (arg1->unknown_1c_ == 0) {
                        if (var23 != 0) arg1->unknown_1c_ = 5;
                    }
                }
            } else if (var10 != 0) {
                arg1->unknown_1c_ = func_ov024_021e9b24(arg0, func_ov000_0215ffa0(var43), var39, 1);
            }
        }
    }

    if (arg2->unknown_18_.unknown_0_5_ == 1) {
        if (arg1->unknown_1a_ == 3 || arg1->unknown_1a_ == 0x261) {
            arg1->unknown_c_.unknown_0_0_ = 1;
            arg1->unknown_c_.unknown_0_1_ = 1;
        } else if (arg1->unknown_1a_ == 2) {
            arg1->unknown_c_.unknown_0_0_ = 1;
            if (var11 + var5 >= 2) arg1->unknown_c_.unknown_0_1_ = 1;
        } else {
            if (var20 != 0) arg1->unknown_c_.unknown_0_1_ = 1;
        }
        if (arg1->unknown_1c_ == 6 || arg1->unknown_1c_ == 0x262) {
            arg1->unknown_c_.unknown_0_3_ = 1;
            arg1->unknown_c_.unknown_0_4_ = 1;
        } else if (arg1->unknown_1c_ == 5) {
            arg1->unknown_c_.unknown_0_3_ = 1;
            if (var12 + var6 >= 2) arg1->unknown_c_.unknown_0_4_ = 1;
        } else {
            if (var21 != 0) arg1->unknown_c_.unknown_0_4_ = 1;
        }
    }

    if (arg3 == 0) return;
    arg1->unknown_1e_ = var38->unknown_28_.unknown_0_0_;
    arg1->unknown_20_ = var39->unknown_28_.unknown_1_2_;
    if (arg4 == 0 && arg0->unknown_77_ == 0) return;
    if (var39->unknown_28_.unknown_0_0_ != 0) {
        if (var39->unknown_28_.unknown_1_2_ == 0) arg1->unknown_20_ = 9;
    }
}
