#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov000_0217538c(void* arg0);
extern "C" int func_02083b00(unsigned char* arg0, int arg1);
extern "C" int func_ov000_02175f80(void* arg0);
extern "C" int func_ov000_0217608c(void* arg0);

struct Struct_ov000_02184288 {
    int unknown_0_;
    int unknown_4_;
    void* unknown_8_;
};
extern struct Struct_ov000_02184288 data_ov000_02184288;
extern int data_ov000_02183ff0;

struct Struct_ov000_02171210 {
    char unknown_0_[4];
    unsigned int unknown_4_0_ : 12;
    unsigned int unknown_5_4_ : 20;
    unsigned int unknown_8_0_ : 8;
    unsigned int unknown_9_0_ : 2;
    unsigned int unknown_9_2_ : 22;
    char unknown_c_[0x14 - 0xc];
    unsigned int unknown_14_0_ : 28;
    unsigned int unknown_17_4_ : 4;
};

struct Struct_ov000_02171210_2 {
    char unknown_0_[0x1d];
    signed char unknown_1d_;
    char unknown_1e_[0x21 - 0x1e];
    signed char unknown_21_;
    char unknown_22_[0x2e - 0x22];
    signed char unknown_2e_;
    char unknown_2f_[0x4c - 0x2f];
    int unknown_4c_;
#if defined(jpn)
    char unknown1_50_[0x474 - 0x50];
#else
    char unknown_50_[0x434 - 0x50];
#endif
    int unknown_434_;
};

// USA: func_ov000_02171210
extern "C" ARM int func_ov000_02171210(struct Struct_ov000_02171210* arg0, struct Struct_ov000_02171210_2* arg1) {
    if (arg0->unknown_9_0_ == 1) {
        arg1->unknown_1d_ = 0;
        arg1->unknown_21_ = -1;
        arg1->unknown_2e_ = -1;
        int var0 = arg0->unknown_17_4_;
        if (var0 == 3) {
            return 100;
        }
        if (var0 == 4) {
            if (data_ov000_02184288.unknown_8_ != NULL && func_ov000_0217538c(data_ov000_02184288.unknown_8_) == 1) {
                return 100;
            }
        } else if (data_ov000_02184288.unknown_4_ == 1) {
            return 100;
        }
        arg1->unknown_434_ = 0;
        return 0xe;
    } else if (arg0->unknown_9_0_ == 2) {
        GameState::GetInstance();
        arg1->unknown_1d_ = -1;
        arg1->unknown_21_ = 0;
        int var1 = arg0->unknown_17_4_;
        if (var1 == 6) {
            GameObject* var2 = func_0200ff1c(GameState::GetInstance(), arg1->unknown_4c_);
            if (var2 != NULL) {
#if defined(jpn)
                if (func_02083b00(*(unsigned char**)((char*)var2 + 0x144), 0xe6)) {
                    var1 = 3;
                } else {
                    var1 = 2;
                }
#else
                var1 = 2;
                if (func_02083b00(*(unsigned char**)((char*)var2 + 0x150), 0xe6)) {
                    var1 = 3;
                }
#endif
            }
        }
        int var3 = 1;
        int var4 = 1;
        if (data_ov000_02184288.unknown_8_ != NULL) {
            var3 = func_ov000_02175f80(data_ov000_02184288.unknown_8_);
            var4 = func_ov000_0217608c(data_ov000_02184288.unknown_8_);
        }
        switch (var1) {
        case 3:
        case 4:
            arg1->unknown_2e_ = arg1->unknown_4c_;
            return 100;
        case 8:
            if (data_ov000_02184288.unknown_8_ != NULL) {
                if (data_ov000_02183ff0 == 1 || var3 == 1 || var4 == 1) {
                    return 0x1e;
                }
            }
            return 0x14;
        case 1:
            if ((arg0->unknown_4_0_ == 0xb9 || arg0->unknown_4_0_ == 0xb6) && data_ov000_02184288.unknown_8_ != NULL) {
                if (data_ov000_02183ff0 == 1 || var3 == 1 || var4 == 1) {
                    return 0x1e;
                }
            }
            arg1->unknown_21_ = 0;
            arg1->unknown_2e_ = arg1->unknown_4c_;
            return 100;
        case 7:
            if (var4 != 1) {
                return 0x13;
            }
            arg1->unknown_21_ = 0;
            arg1->unknown_2e_ = arg1->unknown_4c_;
            return 100;
        default:
            if (var4 != 1) {
                return 0x12;
            }
            arg1->unknown_21_ = 0;
            arg1->unknown_2e_ = arg1->unknown_4c_;
            return 100;
        }
    }
    return 100;
}
