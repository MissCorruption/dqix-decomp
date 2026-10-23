#include <globaldefs.h>

struct Struct_ov031_02222b0c_4 {
    union {
        unsigned long unknown1_0_;
        struct { unsigned short unknown_0_; unsigned short unknown_2_; };
        struct {
            unsigned long unknown_0_0_ : 8;
            unsigned long unknown_1_0_ : 2;
            unsigned long unknown_1_2_ : 2;
            unsigned long unknown_1_4_ : 1;
            unsigned long unknown_1_5_ : 1;
            unsigned long unknown_1_6_ : 2;
            unsigned long unknown_2_0_ : 9;
            unsigned long unknown_3_1_ : 5;
            unsigned long unknown_3_6_ : 2;
        };
        struct {
            unsigned long unknown1_0_0_ : 28;
            unsigned long unknown_3_4_ : 1;
            unsigned long unknown_3_5_ : 1;
            unsigned long unknown1_3_6_ : 2;
        };
    };
    union {
        struct { unsigned short unknown_4_; unsigned short unknown_6_; };
        unsigned long unknown1_4_;
        struct {
            unsigned long unknown_4_0_ : 10;
            unsigned long unknown_5_2_ : 2;
            unsigned long unknown_5_4_ : 4;
            unsigned long unknown_6_0_ : 16;
        };
    };
};
enum Enum_ov031_02223c08 {
    Enum_ov031_02223c08_0 = 0,
    Enum_ov031_02223c08_268435456 = 0x10000000,
    Enum_ov031_02223c08_536870912 = 0x20000000,
    Enum_ov031_02223c08_805306368 = 0x30000000,
    Enum_ov031_02223c08_256 = 0x100,
    Enum_ov031_02223c08_512 = 0x200,
    Enum_ov031_02223c08_768 = 0x300
};
static inline void inline_ov031_02223c08(Struct_ov031_02222b0c_4* arg0, Enum_ov031_02223c08 arg1, int arg2) {
    if (arg1 != Enum_ov031_02223c08_256 && arg1 != Enum_ov031_02223c08_768) {
        arg0->unknown1_0_ = (arg0->unknown1_0_ & 0xc1fffcff) | arg1;
    } else {
        arg0->unknown1_0_ = (arg0->unknown1_0_ & 0xc1fffcff) | arg1 | (arg2 << 25);
    }
}
static inline void inline_ov031_02223c08_2(Struct_ov031_02222b0c_4* arg0, int arg1) {
    arg0->unknown_4_ = (unsigned short)((arg0->unknown_4_ & ~0xc00) | (arg1 << 10));
}
struct Struct_ov031_02222ce4;
struct Struct_ov031_02222b0c_3;
struct Struct_ov031_02223c08 { unsigned short unknown_0_, unknown_2_, unknown_4_, unknown_6_; };
struct Struct_ov031_02223c08_2 {
    Struct_ov031_02222b0c_3* unknown_0_[3][4];
    Struct_ov031_02222b0c_4* unknown_30_[47];
    Struct_ov031_02222b0c_4* unknown_ec_[4];
    Struct_ov031_02222ce4* unknown_fc_[2];
    Struct_ov031_02222ce4* unknown_104_[4];
    Struct_ov031_02222ce4* unknown_114_;
    void* unknown_118_;
    unsigned char unknown_11c_;
    unsigned char unknown_11d_;
    signed char unknown_11e_;
    signed char unknown_11f_;
    signed char unknown_120_;
    signed char unknown_121_;
    unsigned char unknown_122_;
    bool unknown_123_;
    bool unknown_124_;
    bool unknown_125_;
};
extern Struct_ov031_02223c08_2* data_ov031_02250bfc;
extern const unsigned char data_ov031_022489bc[4];
extern const unsigned char data_ov031_022489b4[2];
extern unsigned short* data_ov031_0224b430[3];
extern "C" void* func_ov031_0223cf4c(unsigned int, int);
extern "C" Struct_ov031_02222b0c_4* func_ov031_0223be44(int, int);
extern "C" Struct_ov031_02222ce4* func_ov031_0223be70(int, int, int);
extern "C" void func_ov031_0223bab4(Struct_ov031_02222ce4*, int, int, int);
extern "C" void func_ov031_0223bcc8(Struct_ov031_02222ce4*, int, int);
extern "C" Struct_ov031_02222b0c_3* func_ov031_0223c458(int, int, int, int, int*, int);
extern "C" void func_ov031_0223c980(Struct_ov031_02222b0c_3*, int, int, int, int, int, unsigned long, const unsigned short*);
extern "C" Struct_ov031_02222ce4* func_ov031_0223b8c4(int, int, int);
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_02224ca4(int, int, int);
extern "C" void func_ov031_02223ff8(void*);

// USA: func_ov031_02223c08
extern "C" ARM void func_ov031_02223c08() {
    Struct_ov031_02223c08 var0 = {};
    int var1;
    int var2;
    int var3, var4, var5;
    unsigned short var6[2];
    var0.unknown_4_ = 17;
    var0.unknown_6_ = 18;
    data_ov031_02250bfc = (Struct_ov031_02223c08_2*)func_ov031_0223cf4c(sizeof(Struct_ov031_02223c08_2), 4);
    data_ov031_02250bfc->unknown_11c_ = 0xff;
    data_ov031_02250bfc->unknown_121_ = 0;
    data_ov031_02250bfc->unknown_123_ = 1;
    data_ov031_02250bfc->unknown_124_ = 1;
    for (var3 = 0; var3 < 47; ++var3) {
        data_ov031_02250bfc->unknown_30_[var3] = func_ov031_0223be44(0, 0x34);
        inline_ov031_02223c08(data_ov031_02250bfc->unknown_30_[var3], Enum_ov031_02223c08_512, 0);
        inline_ov031_02223c08_2(data_ov031_02250bfc->unknown_30_[var3], 3);
    }
    for (var3 = 0; var3 < 4; ++var3) {
        data_ov031_02250bfc->unknown_ec_[var3] = func_ov031_0223be44(0, data_ov031_022489bc[var3]);
        inline_ov031_02223c08(data_ov031_02250bfc->unknown_ec_[var3], Enum_ov031_02223c08_512, 0);
        inline_ov031_02223c08_2(data_ov031_02250bfc->unknown_ec_[var3], 3);
    }
    for (var3 = 0; var3 < 2; ++var3) {
        data_ov031_02250bfc->unknown_fc_[var3] = func_ov031_0223be70(0, data_ov031_022489b4[var3], 1);
        func_ov031_0223bab4(data_ov031_02250bfc->unknown_fc_[var3], -1, 0x200, 0);
        func_ov031_0223bcc8(data_ov031_02250bfc->unknown_fc_[var3], -1, 3);
    }
    var6[1] = 0;
    for (var3 = 0; var3 < 3; ++var3) {
        for (var4 = 0; var4 < 4; ++var4) {
            data_ov031_02250bfc->unknown_0_[var3][var4] = func_ov031_0223c458(0, 28, 2, 0, &var1, 0);
            var2 = var4 * 12;
            var0.unknown_0_ = 0;
            for (var5 = 0; var5 < 12;) {
                var6[0] = data_ov031_0224b430[var3][var2];
                func_ov031_0223c980(data_ov031_02250bfc->unknown_0_[var3][var4], var0.unknown_0_,
                    var0.unknown_2_, var0.unknown_4_, var0.unknown_6_, 2, 0x480, var6);
                ++var5;
                var0.unknown_0_ += 18;
                ++var2;
            }
            if (var3 == 0)
                data_ov031_02250bfc->unknown_104_[var4] = func_ov031_0223b8c4(0, var1, 1);
        }
    }
    data_ov031_02250bfc->unknown_114_ = func_ov031_0223be70(0, 0x40, 1);
    func_ov031_0223bab4(data_ov031_02250bfc->unknown_114_, -1, 0x200, 0);
    func_ov031_0223bcc8(data_ov031_02250bfc->unknown_114_, -1, 2);
    data_ov031_02250bfc->unknown_118_ = func_ov031_0223e218(0, (void*)func_ov031_02223ff8, 0, 0x78);
    func_ov031_02224ca4(data_ov031_02250bfc->unknown_11d_, 0, 0xc0);
}
