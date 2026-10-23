#include <globaldefs.h>
#include "Combat/SearchEntry.h"

struct Struct_0205e3ec { unsigned int unknown_0_[4]; };
struct Struct_0205e330_3 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_[2]; struct Struct_0205e3ec unknown_4_; };
extern "C" struct Struct_0205e330_3* func_0205e3ec(struct Struct_0205e330_3* arg0, struct Struct_0205e330_3* arg1);

struct Struct_0205e1e4_2 {
    char unknown_0_[0x18];
    struct Struct_0205e1e4_2* unknown_18_;
};
struct Struct_0205e1e4 {
    struct Struct_0205e1e4_2* unknown_0_;
    struct Struct_0205e1e4_2* unknown_4_;
    int unknown_8_;
};
extern "C" struct Struct_0205e1e4_2* func_0205e1e4(struct Struct_0205e1e4* arg0);

struct Struct_0205e18c_2 {
    char unknown_0_[0x18];
    struct Struct_0205e18c_2* unknown_18_;
};
struct Struct_0205e18c {
    struct Struct_0205e18c_2* unknown_0_;
    struct Struct_0205e18c_2* unknown_4_;
    int unknown_8_;
};
extern "C" void func_0205e18c(struct Struct_0205e18c* arg0, struct Struct_0205e18c_2* arg1);

struct Struct_0205e57c_6;
extern "C" int func_0205e830(struct Struct_0205e57c_6* arg0, int arg1);

struct Struct_0202c1a4;
extern "C" void* func_0202ae18(void);
extern "C" void* func_0202c19c(void* arg0);
extern "C" int func_0202c1c0(Struct_0202b2f0* arg0, int arg1);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

struct Struct_0205e57c {
    unsigned char unknown_0_[0xfc0];
    int unknown_fc0_;
};

struct Struct_0205e57c_2 {
    Struct_0202b2f0_2 unknown_0_;
    struct Struct_0205e330_3 unknown_10_[5];
};

struct Struct_0205e57c_3 {
    struct Struct_0205e330_3 unknown_0_;
    short unknown_14_;
    unsigned short unknown_16_;
    struct Struct_0205e57c_3* unknown_18_;
};

struct Struct_0205e57c_4 {
    struct Struct_0205e57c_3* unknown_0_;
    struct Struct_0205e57c_3* unknown_4_;
    int unknown_8_;
};

struct Struct_0205e57c_5 {
    struct Struct_0205e57c_3 unknown_0_[0xc0];
    struct Struct_0205e57c_4 unknown_1500_;
    struct Struct_0205e57c_4 unknown_150c_;
    struct Struct_0205e57c_4 unknown_1518_;
};

static int data_0210874c;
static int data_02108750;

// USA: func_0205e57c
extern "C" ARM void func_0205e57c(struct Struct_0205e57c_5* arg0) {
    static unsigned char sSeq;

    Struct_0202b2f0* var0 = (Struct_0202b2f0*)func_0202ae18();
    if (sSeq >= 0xfa) {
        sSeq = 0;
    }
    if (((struct Struct_0205e57c*)var0)->unknown_fc0_ != 0) {
        return;
    }

    struct Struct_0205e57c_2* var1 = (struct Struct_0205e57c_2*)func_0202c19c(var0);
    for (int var2 = 0; var2 < 5; var2++) {
        if (var1->unknown_10_[var2].unknown_0_ != 0xff) {
            data_0210874c += 0x10;
        }
        var1->unknown_10_[var2].unknown_0_ = 0xff;
    }

    for (int var3 = 0; var3 < 5; var3++) {
        int var4;
        if (var1->unknown_10_[var3].unknown_0_ != 0xff) continue;
        struct Struct_0205e57c_3* var5 = arg0->unknown_150c_.unknown_0_;
        if (var5 == NULL) continue;
        if (var5->unknown_16_ & 1) {
            var4 = 1;
            struct Struct_0205e57c_2* var6 = (struct Struct_0205e57c_2*)func_0202c19c(func_0202ae18());
            for (int var7 = 0; var7 < 5; var7++) {
                if (var6->unknown_10_[var7].unknown_0_ != 0xff) {
                    var4 = 0;
                    break;
                }
            }
            if (var4) {
                var5->unknown_16_ &= ~1;
            }
        }
        if (var5->unknown_16_ & 1) continue;
        func_0205e1e4((struct Struct_0205e1e4*)&arg0->unknown_150c_);
        func_0205e3ec(&var1->unknown_10_[var3], &var5->unknown_0_);
        var1->unknown_10_[var3].unknown_1_ = ++sSeq;
        func_0205e18c((struct Struct_0205e18c*)&arg0->unknown_1500_, (struct Struct_0205e18c_2*)var5);
    }

    for (int var8 = 0; var8 < 4; var8++) {
        if (!func_0202c1c0(var0, var8)) continue;
        if (var8 == func_0202c1a4((struct Struct_0202c1a4*)var0)) continue;
        struct Struct_0205e57c_2* var9 = (struct Struct_0205e57c_2*)func_0202c178(var0, var8);
        if (var9 == NULL) continue;
        if (var9->unknown_0_.unknown_0_.unknown_0_0_ == 0) continue;
        for (int var10 = 0; var10 < 5; var10++) {
            func_0202c1a4((struct Struct_0202c1a4*)var0);
            if (var9->unknown_10_[var10].unknown_0_ == 0xff) continue;
            if (!func_0205e830((struct Struct_0205e57c_6*)arg0, var9->unknown_10_[var10].unknown_0_)) continue;
            struct Struct_0205e57c_3* var11 = (struct Struct_0205e57c_3*)func_0205e1e4((struct Struct_0205e1e4*)&arg0->unknown_1500_);
            if (var11 == NULL) continue;
            func_0205e3ec(&var11->unknown_0_, &var9->unknown_10_[var10]);
            var11->unknown_14_ = var8;
            func_0205e18c((struct Struct_0205e18c*)&arg0->unknown_1518_, (struct Struct_0205e18c_2*)var11);
            data_02108750 += 0x10;
        }
    }
}
