#include <globaldefs.h>
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

struct Struct_ov031_0221b9b0 {
    unsigned char unknown_0_[0xef];
    unsigned char unknown_ef_;
    unsigned char unknown_f0_[0xe];
    unsigned short unknown_fe_;
};

struct Struct_ov031_0221b9b0_2 {
    Struct_ov031_0221b9b0 unknown_0_[4];
    unsigned char unknown_400_[0x100];
    unsigned short unknown_500_[0x100];
};

extern "C" int func_ov031_0221afb4(void*);
extern "C" int func_ov031_0221aff8(int);
extern "C" void func_020d1ba0(unsigned short*, unsigned short);
extern "C" unsigned short func_020d1cc8(const unsigned short*, const unsigned char*, unsigned int);
extern "C" int func_ov031_0221bcb8(Struct_ov031_0221b9b0*);
extern "C" void func_ov031_0221b140(void*);
extern "C" int func_ov031_0221bdb8(char*);
extern "C" int func_ov031_0221b0ac(void*);
extern "C" void func_ov031_0221be38(Struct_ov031_0221b9b0*, int);
extern "C" void func_020ca390(int, void*, unsigned int);

// USA: func_ov031_0221b9b0
extern "C" ARM int func_ov031_0221b9b0(Struct_ov031_0221b9b0_2* arg0) {
    VectorizedMemset(arg0, 0, 0x700);
    if (!func_ov031_0221afb4(arg0))
        return -10001;
    func_020d1ba0(arg0->unknown_500_, 0xa001);
    if (!func_ov031_0221aff8((int)arg0))
        return -10001;

    int var0[4];
    VectorizedMemset(var0, 0, sizeof(var0));
    int var1 = 0;
    const unsigned char* var2 = (const unsigned char*)arg0->unknown_0_;
    Struct_ov031_0221b9b0* var3 = arg0->unknown_0_;
    do {
        unsigned short var4 = func_020d1cc8(arg0->unknown_500_, var2, 0xfe);
        if (var4 == arg0->unknown_0_[var1].unknown_fe_) {
            if (func_ov031_0221bcb8(var3))
                var0[var1] = 1;
        }
        ++var1;
        var2 += 0x100;
        ++var3;
    } while (var1 < 3);
    unsigned short var5 = func_020d1cc8(arg0->unknown_500_, (const unsigned char*)&arg0->unknown_0_[3], 0xfe);
    if (var5 == arg0->unknown_0_[3].unknown_fe_)
        var0[3] = 1;

    if (var0[0] && var0[1] && var0[2] && var0[3]) {
        func_ov031_0221b140(arg0->unknown_0_[0].unknown_f0_);
        return 0;
    }
    if (!var0[0] && !var0[1] && !var0[2] && !var0[3]) {
        func_ov031_0221bdb8((char*)arg0);
        return func_ov031_0221b0ac(arg0) ? 0 : -10000;
    }
    if (!(var0[0] && var0[1]) && !(var0[2] && var0[3])) {
        func_ov031_0221bdb8((char*)arg0);
        return func_ov031_0221b0ac(arg0) ? 0 : -10000;
    }
    if (!var0[0] && !var0[1]) {
        func_ov031_0221bdb8((char*)arg0);
        return func_ov031_0221b0ac(arg0) ? -10003 : -10000;
    }
    if (!var0[0]) {
        func_ov031_0221be38(arg0->unknown_0_, 0);
        VectorizedInvertedMemcpy(arg0->unknown_0_[1].unknown_f0_, arg0->unknown_0_[0].unknown_f0_, 0xe);
        arg0->unknown_0_[0].unknown_ef_ = arg0->unknown_0_[1].unknown_ef_;
    } else if (!var0[1]) {
        func_ov031_0221be38(arg0->unknown_0_, 1);
        VectorizedInvertedMemcpy(arg0->unknown_0_[0].unknown_f0_, arg0->unknown_0_[1].unknown_f0_, 0xe);
        arg0->unknown_0_[1].unknown_ef_ = arg0->unknown_0_[0].unknown_ef_;
    }
    func_ov031_0221b140(arg0->unknown_0_[0].unknown_f0_);
    if (!var0[2])
        func_ov031_0221be38(arg0->unknown_0_, 2);
    if (!var0[3])
        func_020ca390(0, &arg0->unknown_0_[3], 0x100);

    int var6 = 0;
    var1 = 0;
    do {
        if (!var0[var1] && (arg0->unknown_0_[0].unknown_ef_ & (1 << var1))) {
            arg0->unknown_0_[0].unknown_ef_ &= ~(1 << var1);
            var6 = 1;
            arg0->unknown_0_[1].unknown_ef_ = arg0->unknown_0_[0].unknown_ef_;
        }
        ++var1;
    } while (var1 < 3);
    if (!func_ov031_0221b0ac(arg0))
        return -10000;
    return var6 ? -10002 : 0;
}
