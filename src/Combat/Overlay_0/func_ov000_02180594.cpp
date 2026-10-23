#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

#if defined(jpn)
#define REGION_BASE 0x1f38
#else
#define REGION_BASE 0x1d00
#endif

extern "C" ARM int func_ov000_02180528(char* arg0);

struct Struct_ov000_02180594 {
    short unknown_0_;
    short unknown_2_;
    unsigned short unknown_4_;
};

struct Struct_ov000_021836b0 {
    int unknown_0_[7];
};

extern Struct_ov000_021836b0 data_ov000_021836b0;

struct Struct_ov000_02180594_2 {
    char unknown_0_[0x910];
    int unknown_910_;
    int unknown_914_;
    int unknown_918_;
    int unknown_91c_;
    int unknown_920_;
    int unknown_924_;
    int unknown_928_;
    int unknown_92c_;
    char unknown_930_[REGION_BASE + 0x5e - 0x930];
    short unknown_1d5e_;
    char unknown_1d60_[0x72 - 0x60];
    unsigned short unknown_1d72_;
    char unknown_1d74_[0x7c - 0x74];
    Struct_ov000_02180594* unknown_1d7c_;
};

// USA: func_ov000_02180594
extern "C" ARM int func_ov000_02180594(Struct_ov000_02180594_2* arg0, int arg1, SafeAllocator* arg2) {
    Struct_ov000_021836b0 var0 = data_ov000_021836b0;
    int var1;
    int var2;
    int var3;

    if (arg1 <= 0) {
        arg1 = 1;
    }
    if (arg0->unknown_910_ < 5 && arg2 != 0 && arg0->unknown_1d7c_ == 0) {
        arg0->unknown_1d7c_ = (Struct_ov000_02180594*)arg2->Allocate(sizeof(Struct_ov000_02180594) * 7);
        for (var1 = 0; var1 < 7; var1++) {
            arg0->unknown_1d7c_[var1].unknown_0_ = var0.unknown_0_[var1] + 0x100;
            arg0->unknown_1d7c_[var1].unknown_2_ = 8;
            arg0->unknown_1d7c_[var1].unknown_4_ = var1 * 2;
        }
        arg0->unknown_1d72_ |= 8;
    }

    if (arg0->unknown_910_ == 0) {
        arg0->unknown_914_ = 0;
        arg0->unknown_918_ = 0;
        arg0->unknown_91c_ = 0;
        arg0->unknown_910_++;
        func_ov000_02180528((char*)arg0);
        arg0->unknown_1d72_ |= 8;
        return 1;
    } else if (arg0->unknown_910_ == 1) {
        arg0->unknown_914_ = 0;
        arg0->unknown_1d5e_ -= arg1 * 2;
        if (arg0->unknown_1d5e_ < 0) {
            arg0->unknown_1d5e_ = 0;
            arg0->unknown_910_++;
        }
        return 1;
    } else if (arg0->unknown_910_ == 2) {
        if (arg0->unknown_1d72_ & 0x20) {
            arg0->unknown_928_ -= arg1 * 16;
            if (arg0->unknown_928_ <= 0x56) {
                arg0->unknown_928_ = 0x56;
                arg0->unknown_91c_ = (arg0->unknown_91c_ + arg1) & 0x3f;
                arg0->unknown_910_ = 5;
            }
        } else if (arg0->unknown_1d72_ & 0x10) {
            arg0->unknown_924_ -= arg1 * 16;
            if (arg0->unknown_924_ <= 0x5c) {
                arg0->unknown_924_ = 0x5c;
                arg0->unknown_918_ = (arg0->unknown_918_ + arg1) & 0x3f;
                arg0->unknown_910_ = 5;
            }
        } else if ((arg0->unknown_1d72_ & 8) && arg0->unknown_1d7c_ != 0) {
            int var4 = 0.0f - 1.5f * (float)(arg1 * 16);
            for (var2 = 0; var2 < 7; var2++) {
                arg0->unknown_1d7c_[var2].unknown_0_ += var4;
            }
            if (arg0->unknown_1d7c_[0].unknown_0_ <= 0x48) {
                for (var3 = 0; var3 < 7; var3++) {
                    arg0->unknown_1d7c_[var3].unknown_0_ = var0.unknown_0_[var3] + 0x48;
                }
                arg0->unknown_914_ = 0;
                arg0->unknown_910_++;
            }
        }
        return 1;
    } else if (arg0->unknown_910_ == 3) {
        if (arg0->unknown_914_ >= 10) {
            arg0->unknown_910_++;
        }
        return 1;
    } else if (arg0->unknown_910_ == 4) {
        Struct_ov000_02180594* var5 = arg0->unknown_1d7c_;
        if (var5 == 0) {
            arg0->unknown_92c_ = (float)arg0->unknown_92c_ - 1.5f * (float)(arg1 * 4);
            if (arg0->unknown_92c_ < -0x20) {
                arg0->unknown_910_++;
            }
        } else {
            int var6 = 0;
            int var7 = 0.0f - 1.5f * (float)(arg1 * 4);
            for (var1 = 0; var1 < 7; var1++) {
                if (arg1 < arg0->unknown_1d7c_[var1].unknown_4_) {
                    arg0->unknown_1d7c_[var1].unknown_4_ -= arg1;
                } else {
                    arg0->unknown_1d7c_[var1].unknown_4_ = 0;
                    arg0->unknown_1d7c_[var1].unknown_2_ += var7;
                }
                if (arg0->unknown_1d7c_[var1].unknown_2_ < -0x20) {
                    var6++;
                }
            }
            if (var6 == 7) {
                arg0->unknown_1d7c_ = 0;
                arg0->unknown_910_++;
            }
            if (var6 > 0) {
                return 0;
            }
        }
        return 1;
    }
    arg0->unknown_1d7c_ = 0;
    return 0;
}
