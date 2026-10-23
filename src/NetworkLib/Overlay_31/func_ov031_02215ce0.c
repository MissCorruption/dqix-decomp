#include <globaldefs.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Struct_ov031_02215ce0_6 Struct_ov031_02215ce0_6;
typedef struct Struct_ov031_02215ce0 Struct_ov031_02215ce0;
typedef struct Struct_ov031_02215ce0_2 Struct_ov031_02215ce0_2;
typedef struct Struct_ov031_02215ce0_3 Struct_ov031_02215ce0_3;
typedef struct Struct_ov031_02215ce0_4 Struct_ov031_02215ce0_4;
typedef struct Struct_0200f3a4_16 Struct_0200f3a4_16;
typedef struct Struct_0200f3a4_17 Struct_0200f3a4_17;
typedef struct Struct_ov031_02215ce0_5 Struct_ov031_02215ce0_5;

void VectorizedMemset(void*, int, unsigned int);
void VectorizedInvertedMemcpy(const void*, void*, unsigned int);
void InvalidateDataCacheRange(const void*, unsigned int);

struct Struct_ov031_02215ce0_6 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned long unknown_4_;
    unsigned short unknown_8_;
    unsigned char unknown_a_;
    union {
        unsigned char unknown_b_;
        unsigned char unknown1_b_;
    };
    unsigned short unknown_c_;
    unsigned short unknown_e_;
    union {
        unsigned short unknown_10_[56];
        struct {
            unsigned short unknown_0_[4];
            unsigned short unknown_8_[8];
            unsigned short unknown_18_[44];
        } unknown1_10_;
    };
};
struct Struct_ov031_02215ce0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[6];
    unsigned short unknown_a_;
    unsigned char unknown_c_[32];
    unsigned short unknown_2c_;
    struct {
        unsigned short unknown_0_;
        unsigned short unknown_2_;
    } unknown_2e_;
    unsigned short unknown_32_;
    unsigned short unknown_34_;
    unsigned short unknown_36_;
    unsigned short unknown_38_;
    unsigned short unknown_3a_;
    unsigned short unknown_3c_;
    unsigned short unknown_3e_;
    Struct_ov031_02215ce0_6 unknown_40_;
};
struct Struct_ov031_02215ce0_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_[2];
    unsigned short unknown_e_;
    Struct_ov031_02215ce0* unknown_10_[16];
    unsigned short unknown_50_[16];
};

struct Struct_ov031_02215ce0_3 {
    unsigned char unknown_0_[32];
    unsigned char unknown_20_[10];
    unsigned short unknown_2a_;
    unsigned char unknown_2c_[24];
    unsigned char unknown_44_[32];
    unsigned char unknown_64_;
    unsigned char unknown_65_;
    unsigned char unknown_66_;
    unsigned char unknown_67_[5];
    unsigned short unknown_6c_;
    unsigned short unknown_6e_;
};

struct Struct_ov031_02215ce0_4 {
    unsigned short unknown_0_[256];
};

struct Struct_0200f3a4_16 {
    Struct_ov031_02215ce0* unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned char unknown_a_[6];
    unsigned short unknown_10_;
    unsigned short unknown_12_;
    unsigned char unknown_14_[32];
    unsigned short unknown_34_;
    unsigned short unknown_36_[7];
};

struct Struct_0200f3a4_17 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_[2];
    unsigned char unknown_4_[256];
};

struct Struct_ov031_02215ce0_5 {
    unsigned char unknown_0_[0xf00] __attribute__((aligned(32)));
    unsigned char unknown_f00_[0x400];
    Struct_0200f3a4_16 unknown_1300_;
    void (*unknown_1344_)(void*);
    Struct_ov031_02215ce0_3 unknown_1348_[16];
    unsigned short unknown_1a48_[16];
    unsigned short unknown_1a68_[16];
    long unknown_1a88_;
    long unknown_1a8c_;
    unsigned long unknown_1a90_;
    unsigned short unknown_1a94_;
    Struct_ov031_02215ce0_4 unknown_1a96_;
    Struct_0200f3a4_17 unknown_1c96_;
};

extern Struct_ov031_02215ce0_5* data_ov031_0224e5d8;
void func_ov031_022118a8(Struct_0200f3a4_17*, const void*, unsigned long);
void func_ov031_02211938(Struct_0200f3a4_17*, const void*, unsigned long, void*);
void func_020d1be4(const unsigned short*, unsigned short*, const unsigned char*, unsigned int);
unsigned short func_020d1cc8(const unsigned short*, const unsigned char*, unsigned int);
int func_ov031_02215ccc(int);

#ifdef __cplusplus
}
#endif

// USA: func_ov031_02215ce0
#ifdef __cplusplus
extern "C"
#endif
ARM void func_ov031_02215ce0(void* arg0) {
    Struct_ov031_02215ce0_2* var0 = (Struct_ov031_02215ce0_2*)arg0;
    static const unsigned long magic = 0x57445321;
    InvalidateDataCacheRange(data_ov031_0224e5d8->unknown_f00_, 0x400);
    if (var0->unknown_2_ == 0 && var0->unknown_8_ == 5) {
        unsigned long var1 = 0;
        if (var1 < var0->unknown_e_) {
            do {
                if (var0->unknown_10_[var1]->unknown_40_.unknown_0_ == 1 && var0->unknown_10_[var1]->unknown_40_.unknown_4_ == 0x857) {
                    unsigned long var2;
                    int var3 = 0;
                    var2 = 0;
                    if (var2 < data_ov031_0224e5d8->unknown_1a88_) {
                        unsigned short var4 = var0->unknown_10_[var1]->unknown_40_.unknown_8_;
                        do {
                            unsigned short var5 = data_ov031_0224e5d8->unknown_1a68_[var2];
                            if (var5 == var4) {
                                var3 = 1;
                                break;
                            }
                            ++var2;
                        } while (var2 < data_ov031_0224e5d8->unknown_1a88_);
                    }
                    if (var3 != 1) {
                        unsigned char var6[8];
                        unsigned char* var7;
                        unsigned short var8;
                        Struct_ov031_02215ce0_5* var9;
                        unsigned short var10;
                        VectorizedInvertedMemcpy(var0->unknown_10_[var1]->unknown_40_.unknown_10_,
                            &data_ov031_0224e5d8->unknown_1348_[data_ov031_0224e5d8->unknown_1a8c_], 0x70);
                        VectorizedInvertedMemcpy(&magic, var6, 4);
                        VectorizedInvertedMemcpy(var0->unknown_10_[var1]->unknown_4_ + 2, var6 + 4, 4);
                        func_ov031_022118a8(&data_ov031_0224e5d8->unknown_1c96_, var6, 8);
                        func_ov031_02211938(&data_ov031_0224e5d8->unknown_1c96_,
                            &data_ov031_0224e5d8->unknown_1348_[data_ov031_0224e5d8->unknown_1a8c_], 0x70,
                            &data_ov031_0224e5d8->unknown_1348_[data_ov031_0224e5d8->unknown_1a8c_]);
                        var7 = (unsigned char*)&data_ov031_0224e5d8->unknown_1348_[data_ov031_0224e5d8->unknown_1a8c_];
                        func_020d1be4(data_ov031_0224e5d8->unknown_1a96_.unknown_0_, &data_ov031_0224e5d8->unknown_1a94_, var7, 0x6e);
                        var8 = func_020d1cc8(data_ov031_0224e5d8->unknown_1a96_.unknown_0_, var7, 0x6e);
                        var9 = data_ov031_0224e5d8;
                        var10 = var9->unknown_1348_[var9->unknown_1a8c_].unknown_6e_;
                        if (var8 != var10 && var10 != 0) {
                            VectorizedMemset(&var9->unknown_1348_[var9->unknown_1a8c_], 0, 0x70);
                        } else {
                            var9->unknown_1a48_[var9->unknown_1a8c_] = func_ov031_02215ccc((unsigned char)var0->unknown_10_[var1]->unknown_2_);
                            data_ov031_0224e5d8->unknown_1a68_[data_ov031_0224e5d8->unknown_1a8c_] = var0->unknown_10_[var1]->unknown_40_.unknown_8_;
                            data_ov031_0224e5d8->unknown_1a8c_ = (data_ov031_0224e5d8->unknown_1a8c_ + 1) % 16;
                            ++data_ov031_0224e5d8->unknown_1a88_;
                            var9 = data_ov031_0224e5d8;
                            if (var9->unknown_1a88_ > 16)
                                var9->unknown_1a88_ = 16;
                        }
                    }
                }
                ++var1;
            } while (var1 < var0->unknown_e_);
        }
    }
    data_ov031_0224e5d8->unknown_1a90_ = 2;
    if (data_ov031_0224e5d8->unknown_1344_)
        data_ov031_0224e5d8->unknown_1344_(var0);
}
