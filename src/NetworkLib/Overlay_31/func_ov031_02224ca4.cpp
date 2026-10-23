#include <globaldefs.h>

struct Struct_020b0a1c {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};
struct Struct_ov031_022489c0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};
struct Struct_ov031_022489cc {
    unsigned char unknown_0_[5];
};
struct Struct_ov031_02224ca4 {
    void* unknown_0_[3][4];
    Struct_020b0a1c* unknown_30_[47];
    Struct_020b0a1c* unknown_ec_[4];
    void* unknown_fc_[2];
    void* unknown_104_[4];
};

extern Struct_ov031_02224ca4* data_ov031_02250bfc;
extern const Struct_ov031_022489c0 data_ov031_022489c0 = {0x1c, 2};
extern const Struct_ov031_022489c0 data_ov031_022489c4 = {0x78, 0x12};
extern const Struct_ov031_022489c0 data_ov031_022489c8 = {0x11, 0x12};
extern const Struct_ov031_022489cc data_ov031_022489cc = {{0, 0, 0, 0, 2}};
extern const Struct_ov031_022489cc data_ov031_022489d1 = {{12, 12, 12, 11, 0}};
extern const Struct_ov031_022489cc data_ov031_022489d6 = {{1, 1, 1, 1, 0}};
extern const Struct_ov031_022489c0 data_ov031_02248a0c[47];
extern const Struct_ov031_022489c0 data_ov031_022489e4[4];
extern const Struct_ov031_022489c0 data_ov031_022489dc[2];

extern "C" void func_ov031_0223ca54(void* arg0, int arg1, int arg2, void* arg3, int arg4);
extern "C" int FastIntModulus(int arg0, int arg1);
extern "C" void func_ov031_0223bab4(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov031_0223bbd8(void* arg0, int arg1, int arg2, int arg3);

static inline void inline_020b0a1c(Struct_020b0a1c* arg0) {
    arg0->unknown_0_ &= 0xc1fffcff;
}

static inline void inline_ov031_02224ca4(Struct_020b0a1c* arg0, unsigned int arg1, unsigned int arg2) {
    arg0->unknown_0_ = (arg0->unknown_0_ & 0xfe00ff00) | arg2 | arg1;
}

// USA: func_ov031_02224ca4
extern "C" ARM void func_ov031_02224ca4(int arg0, int arg1, int arg2) {
    Struct_ov031_022489cc var0 = data_ov031_022489d1;
    Struct_ov031_022489cc var1 = data_ov031_022489d6;
    Struct_ov031_022489cc var2 = data_ov031_022489cc;
    int var3 = arg1 * 12;
    int var4;
    int var5;
    int var6;
    int var7;

    {
        const unsigned char* var8 = &var0.unknown_0_[arg1];
        var5 = var3;
        var6 = 0;
        if (var6 < *var8) {
            unsigned char var9 = arg2;
            do {
                inline_020b0a1c(data_ov031_02250bfc->unknown_30_[var5]);
                inline_ov031_02224ca4(data_ov031_02250bfc->unknown_30_[var5], (unsigned int)data_ov031_02248a0c[var5].unknown_0_ << 23 >> 7, var9);
                var6++;
                var5++;
            } while (var6 < *var8);
        }
    }
    if (arg1 < 4) {
        Struct_ov031_02224ca4* var10 = data_ov031_02250bfc;
        func_ov031_0223ca54(var10->unknown_0_[arg0][arg1], data_ov031_02248a0c[var3].unknown_0_, arg2, var10->unknown_104_[arg1], 2);
    }
    var4 = FastIntModulus(arg1 + 3, 4);
    {
        const unsigned char* var11 = &var1.unknown_0_[arg1];
        var6 = 0;
        if (var6 < *var11) {
            unsigned char var12 = arg2;
            do {
                inline_020b0a1c(data_ov031_02250bfc->unknown_ec_[var4]);
                inline_ov031_02224ca4(data_ov031_02250bfc->unknown_ec_[var4], (unsigned int)data_ov031_022489e4[var4].unknown_0_ << 23 >> 7, var12);
                var6++;
            } while (var6 < *var11);
        }
    }
    {
        const unsigned char* var13 = &var2.unknown_0_[arg1];
        var7 = 0;
        if (var7 < *var13) {
            do {
                func_ov031_0223bab4(data_ov031_02250bfc->unknown_fc_[var7], -1, 0, 0);
                func_ov031_0223bbd8(data_ov031_02250bfc->unknown_fc_[var7], -1, data_ov031_022489dc[var7].unknown_0_, arg2);
                var7++;
            } while (var7 < *var13);
        }
    }
}
