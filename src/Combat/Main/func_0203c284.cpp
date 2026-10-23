#include <globaldefs.h>

#if defined(jpn)
struct Struct_0203bdf4_2 {
    short unknown_0_;
    short unknown_2_;
    char unknown_4_[10];
    unsigned char unknown_e_;
    unsigned char unknown_f_;
};
struct Struct_0201099c_21 {
    unsigned int unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};

struct Struct_0203bdf4 {
    Struct_0201099c_21* unknown_0_;
    Struct_0203bdf4_2 unknown_4_[96];
    unsigned char unknown_604_[8];
    unsigned int unknown_60c_;
    unsigned short unknown_610_;
};
struct Struct_0203c1c8 {
#if defined(jpn)
    short unknown_0_[10];
#endif
    int unknown_14_;
    int unknown_18_;
#if defined(jpn)
    int unknown_1c_;
    int unknown_20_;
#endif
    int unknown_24_;
    int unknown_28_;
    int unknown_2c_;
#if defined(jpn)
    signed int unknown_30_0_ : 16;
    unsigned int unknown_32_0_ : 8;
    unsigned int unknown_33_0_ : 8;
    int unknown_34_;
#else
    short entryIndex;
#endif
};
extern Struct_0203bdf4* data_02105244;
extern "C" int func_020d2ff0(const char* arg0);

extern "C" ARM int func_0203c284(const Struct_0203c1c8* arg0) {
    Struct_0203bdf4* var0 = data_02105244;
    if (var0 == NULL) return 0;
    Struct_0203bdf4_2* var1;
    int var2 = 0;
    var1 = var0->unknown_4_;
    for (int var3 = 0; var3 < 10; ++var3) {
        short var4 = arg0->unknown_0_[var3];
        if (var4 >= 0) ++var2;
        int var5 = func_020d2ff0(var1[var4].unknown_4_);
        switch (var5) {
            case 2: ++var3; break;
            case 4: ++var3; ++var2; break;
            case 6: ++var3; var2 += 2; break;
        }
    }
    return var2 * arg0->unknown_20_;
}
#else

extern void* data_02105244;

struct Struct_0203c284 {
    char unknown_0_[0x21];
    unsigned char unknown_21_;
    char unknown_22_[6];
};

// USA: func_0203c284
extern "C" ARM unsigned char func_0203c284(char* arg0) {
    char* var6 = (char*)data_02105244;
    if (var6 == NULL) return 0;
    {
        struct Struct_0203c284* var7 = (struct Struct_0203c284*)(var6 + 4);
        short var8 = *(short*)(arg0 + 0x14);
        if (var8 < 0) return 0;
        return var7[var8].unknown_21_;
    }
}

#endif
