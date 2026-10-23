#include <globaldefs.h>

#if defined(jpn)
#define func_020d2d00 func_020d47cc
#endif

struct Struct_020be604_3 {
    unsigned short unknown_0_[2];
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
};

struct Struct_020d2d00_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    Struct_020be604_3 unknown_2_;
};

struct Struct_020d2d00_3 {
    unsigned long unknown_0_;
    unsigned long unknown_4_;
};

struct Struct_020d2d00_4 {
    unsigned char unknown_0_[0x38];
    unsigned long unknown_38_;
    unsigned long unknown_3c_[1];
};

struct Struct_020d2d00_5 {
    unsigned short unknown_0_[sizeof(Struct_020be604_3) / sizeof(unsigned short)];
};

struct Struct_020d2d00_6 {
    unsigned short unknown_0_[sizeof(Struct_020d2d00_2) / sizeof(unsigned short)];
};

struct Struct_020d2d00_7 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    Struct_020d2d00_2 unknown_2_[1];
};

struct Struct_020d2d00 {
    unsigned char unknown_0_[8];
    Struct_020d2d00_2 unknown_8_[8];
};

// USA: func_020d2d00
extern "C" ARM int func_020d2d00(const Struct_020d2d00_4* arg0, Struct_020d2d00_2* arg1,
    Struct_020d2d00_3* arg2) {
    if (arg2->unknown_0_ < arg0->unknown_38_) {
        do {
            unsigned long var0 = arg0->unknown_3c_[arg2->unknown_0_];
            arg1->unknown_0_ = var0;
            var0 >>= 8;
            switch (arg1->unknown_0_) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                *(Struct_020d2d00_5*)&arg1->unknown_2_ =
                    *(const Struct_020d2d00_5*)((const unsigned char*)arg0 + var0);
                arg2->unknown_0_++;
                return true;
            case 16: {
                const Struct_020d2d00_7* const var1 = (const Struct_020d2d00_7*)((const unsigned char*)arg0 + var0);
                while (arg2->unknown_4_ < var1->unknown_1_ - var1->unknown_0_ + 1) {
                    *(Struct_020d2d00_6*)arg1 =
                        *(const Struct_020d2d00_6*)&var1->unknown_2_[arg2->unknown_4_];
                    arg2->unknown_4_++;
                    return true;
                }
                break;
            }
            case 17: {
                const Struct_020d2d00* const var2 = (const Struct_020d2d00*)((const unsigned char*)arg0 + var0);
                while (arg2->unknown_4_ < 8) {
                    if (var2->unknown_0_[arg2->unknown_4_] == 0)
                        break;
                    *(Struct_020d2d00_6*)arg1 =
                        *(const Struct_020d2d00_6*)&var2->unknown_8_[arg2->unknown_4_];
                    arg2->unknown_4_++;
                    return true;
                }
                break;
            }
            }
            arg2->unknown_0_++;
            arg2->unknown_4_ = 0;
        } while (arg2->unknown_0_ < arg0->unknown_38_);
    }
    return false;
}
