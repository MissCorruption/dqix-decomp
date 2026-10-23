#include <globaldefs.h>

typedef void (*Type_020cf294)(int result, void* arg);
typedef void (*Type_020cf020)(void);

struct Struct_020cf294 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_;
};
struct Struct_020cf294_2 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};
struct Struct_020cf294_8 {
    int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
};

struct Struct_020cf294_9 {
    unsigned int unknown_0_0_ : 8;
    unsigned int unknown_1_0_ : 5;
    unsigned int unknown_1_5_ : 3;
    unsigned int unknown_2_0_ : 6;
    unsigned int unknown_2_6_ : 2;
    unsigned int unknown_3_0_ : 3;
    unsigned int unknown_3_3_ : 5;
};
struct Struct_020cf294_10 {
    unsigned int unknown_0_0_ : 6;
    unsigned int unknown_0_6_ : 1;
    unsigned int unknown_0_7_ : 1;
    unsigned int unknown_1_0_ : 7;
    unsigned int unknown_1_7_ : 1;
    unsigned int unknown_2_0_ : 7;
    unsigned int unknown_2_7_ : 9;
};
struct Struct_020cf020 {
    unsigned short unknown_0_0_ : 1;
    unsigned short unknown_0_1_ : 1;
    unsigned short unknown_0_2_ : 2;
    unsigned short unknown_0_4_ : 1;
    unsigned short unknown_0_5_ : 1;
    unsigned short unknown_0_6_ : 1;
    unsigned short unknown_0_7_ : 1;
    unsigned short unknown_1_0_ : 8;
};
struct Struct_020cf294_3 {
    unsigned short unknown_0_0_ : 4;
    unsigned short unknown_0_4_ : 2;
    unsigned short unknown_0_6_ : 1;
    unsigned short unknown_0_7_ : 1;
    unsigned short unknown_1_0_ : 8;
};
struct Struct_020cf294_4 {
    unsigned int unknown_0_0_ : 3;
    unsigned int unknown_0_3_ : 4;
    unsigned int unknown_0_7_ : 1;
    unsigned int unknown_1_0_ : 6;
    unsigned int unknown_1_6_ : 1;
    unsigned int unknown_1_7_ : 1;
    unsigned int unknown_2_0_ : 7;
    unsigned int unknown_2_7_ : 1;
    unsigned int unknown_3_0_ : 8;
};
union Struct_020cf294_5 {
    struct {
        Struct_020cf294_9 unknown_0_;
        Struct_020cf294_10 unknown_4_;
    } unknown_0_;
    struct {
        Struct_020cf020 unknown_0_;
        Struct_020cf294_3 unknown_2_;
        Struct_020cf294_4 unknown_4_;
    } unknown1_0_;
};

union Struct_020cf294_6 {
    Struct_020cf294* unknown_0_;
    Struct_020cf294_2* unknown1_0_;
    Struct_020cf294_8* unknown2_0_;
    int* unknown3_0_;
};

struct Struct_020cf294_7 {
    unsigned int unknown_0_;
    Type_020cf294 unknown_4_;
    Struct_020cf294_6 unknown_8_[2];
    void* unknown_10_;
    unsigned int unknown_14_;
    unsigned int unknown_18_;
    Type_020cf020 unknown_1c_;
    int unknown_20_;
};

struct Struct_02111818_4 {
    unsigned char unknown_0_[0xc];
    Struct_020cf294_7 unknown_c_;
};
extern Struct_02111818_4 data_02111818;

extern "C" int func_020cf7e4(unsigned int arg0);
extern "C" int func_020cfc00(Struct_020cf294* arg0);
extern "C" int func_020cf8ac(void);

#define RTC_BUF ((Struct_020cf294_5*)0x027ffde8)

// USA: func_020cf294
extern "C" ARM void func_020cf294(int arg0, unsigned int arg1, int arg2) {
    int var0;
    int var1;
    unsigned char var2;
    Type_020cf294 var3;

    if (arg2) {
        if (data_02111818.unknown_c_.unknown_18_) {
            data_02111818.unknown_c_.unknown_18_ = 0;
        }
        if (data_02111818.unknown_c_.unknown_0_ != 0) {
            data_02111818.unknown_c_.unknown_0_ = 0;
        }
        if (data_02111818.unknown_c_.unknown_4_) {
            var3 = data_02111818.unknown_c_.unknown_4_;
            data_02111818.unknown_c_.unknown_4_ = 0;
            var3(6, data_02111818.unknown_c_.unknown_10_);
        }
        return;
    }

    var2 = (unsigned char)((arg1 & 0x7f00) >> 8);
    var1 = (int)(arg1 & 0xff);

    if (var2 == 0x30) {
        if (data_02111818.unknown_c_.unknown_1c_) {
            data_02111818.unknown_c_.unknown_1c_();
        }
        return;
    }

    if (var1 == 0) {
        var0 = 0;
        switch (data_02111818.unknown_c_.unknown_14_) {
        case 0: {
            Struct_020cf294* var4 = data_02111818.unknown_c_.unknown_8_[0].unknown_0_;
            Struct_020cf294_9* var5 = &RTC_BUF->unknown_0_.unknown_0_;

            var4->unknown_0_ = func_020cf7e4(var5->unknown_0_0_);
            var4->unknown_4_ = func_020cf7e4(var5->unknown_1_0_);
            var4->unknown_8_ = func_020cf7e4(var5->unknown_2_0_);
            var4->unknown_c_ = func_020cfc00(var4);
        } break;
        case 1: {
            Struct_020cf294_2* var6 = data_02111818.unknown_c_.unknown_8_[0].unknown1_0_;
            Struct_020cf294_10* var7 = &RTC_BUF->unknown_0_.unknown_4_;

            var6->unknown_0_ = func_020cf7e4(var7->unknown_0_0_);
            var6->unknown_4_ = func_020cf7e4(var7->unknown_1_0_);
            var6->unknown_8_ = func_020cf7e4(var7->unknown_2_0_);
        } break;
        case 2: {
            Struct_020cf294* var8 = data_02111818.unknown_c_.unknown_8_[0].unknown_0_;
            Struct_020cf294_9* var9 = &RTC_BUF->unknown_0_.unknown_0_;

            var8->unknown_0_ = func_020cf7e4(*(unsigned int*)var9 & 0xff);
            var8->unknown_4_ = func_020cf7e4(var9->unknown_1_0_);
            var8->unknown_8_ = func_020cf7e4(var9->unknown_2_0_);
            var8->unknown_c_ = func_020cfc00(var8);
        }
            {
                Struct_020cf294_2* var10 = data_02111818.unknown_c_.unknown_8_[1].unknown1_0_;
                Struct_020cf294_10* var11 = &RTC_BUF->unknown_0_.unknown_4_;

                var10->unknown_0_ = func_020cf7e4(var11->unknown_0_0_);
                var10->unknown_4_ = func_020cf7e4(var11->unknown_1_0_);
                var10->unknown_8_ = func_020cf7e4(var11->unknown_2_0_);
            }
            break;
        case 3:
        case 4:
        case 5:
            break;
        case 6: {
            int* var12 = data_02111818.unknown_c_.unknown_8_[0].unknown3_0_;
            Struct_020cf294_3* var13 = &RTC_BUF->unknown1_0_.unknown_2_;

            switch (var13->unknown_0_0_) {
            case 4:
                *var12 = 1;
                break;
            default:
                *var12 = 0;
            }
        } break;
        case 7: {
            int* var14 = data_02111818.unknown_c_.unknown_8_[0].unknown3_0_;
            Struct_020cf294_3* var15 = &RTC_BUF->unknown1_0_.unknown_2_;

            if (var15->unknown_0_6_) {
                *var14 = 1;
            } else {
                *var14 = 0;
            }
        } break;
        case 8: {
            Struct_020cf294_8* var16 = data_02111818.unknown_c_.unknown_8_[0].unknown2_0_;
            Struct_020cf294_4* var17 = &RTC_BUF->unknown1_0_.unknown_4_;

            var16->unknown_0_ = (int)var17->unknown_0_0_;
            var16->unknown_4_ = func_020cf7e4(var17->unknown_1_0_);
            var16->unknown_8_ = func_020cf7e4(var17->unknown_2_0_);
            var16->unknown_c_ = 0;
            if (var17->unknown_0_7_)
                var16->unknown_c_ += 1;
            if (var17->unknown_1_7_)
                var16->unknown_c_ += 2;
            if (var17->unknown_2_7_)
                var16->unknown_c_ += 4;
        } break;
        case 9:
            if (data_02111818.unknown_c_.unknown_18_ == 0) {
                Struct_020cf294_3* var18 = &RTC_BUF->unknown1_0_.unknown_2_;

                if (*data_02111818.unknown_c_.unknown_8_[0].unknown3_0_ == 1) {
                    if (var18->unknown_0_0_ != 4) {
                        data_02111818.unknown_c_.unknown_18_++;
                        var18->unknown_0_0_ = 4;
                        if (!func_020cf8ac()) {
                            data_02111818.unknown_c_.unknown_18_ = 0;
                            var0 = 3;
                        }
                    }
                } else {
                    if (var18->unknown_0_0_ != 0) {
                        data_02111818.unknown_c_.unknown_18_++;
                        var18->unknown_0_0_ = 0;
                        if (!func_020cf8ac()) {
                            data_02111818.unknown_c_.unknown_18_ = 0;
                            var0 = 3;
                        }
                    }
                }
            } else {
                data_02111818.unknown_c_.unknown_18_ = 0;
            }
            break;
        case 10:
            if (data_02111818.unknown_c_.unknown_18_ == 0) {
                Struct_020cf294_3* var19 = &RTC_BUF->unknown1_0_.unknown_2_;

                if (*data_02111818.unknown_c_.unknown_8_[0].unknown3_0_ == 1) {
                    if (!var19->unknown_0_6_) {
                        data_02111818.unknown_c_.unknown_18_++;
                        var19->unknown_0_6_ = 1;
                        if (!func_020cf8ac()) {
                            data_02111818.unknown_c_.unknown_18_ = 0;
                            var0 = 3;
                        }
                    }
                } else {
                    if (var19->unknown_0_6_) {
                        data_02111818.unknown_c_.unknown_18_++;
                        var19->unknown_0_6_ = 0;
                        if (!func_020cf8ac()) {
                            data_02111818.unknown_c_.unknown_18_ = 0;
                            var0 = 3;
                        }
                    }
                }
            } else {
                data_02111818.unknown_c_.unknown_18_ = 0;
            }
            break;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            break;
        default:
            var0 = 4;
            data_02111818.unknown_c_.unknown_18_ = 0;
        }
    } else {
        data_02111818.unknown_c_.unknown_18_ = 0;

        switch (var1) {
        case 1:
            var0 = 4;
            break;
        case 2:
            var0 = 5;
            break;
        case 3:
            var0 = 1;
            break;
        case 4:
        default:
            var0 = 6;
        }
    }

    if (data_02111818.unknown_c_.unknown_18_ == 0) {
        if (data_02111818.unknown_c_.unknown_0_ != 0) {
            data_02111818.unknown_c_.unknown_0_ = 0;
        }
        if (data_02111818.unknown_c_.unknown_4_) {
            var3 = data_02111818.unknown_c_.unknown_4_;
            data_02111818.unknown_c_.unknown_4_ = 0;
            var3(var0, data_02111818.unknown_c_.unknown_10_);
        }
    }
}
