#include <globaldefs.h>

struct Struct_02101680 { void* unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };
struct Struct_ov031_0220defc {
    short unknown_0_; unsigned short unknown_2_; int unknown_4_;
    unsigned short unknown_8_, unknown_a_, unknown_c_;
    unsigned short unknown_e_;
    int unknown_10_[16]; unsigned short unknown_50_[16];
};
struct Struct_ov031_0220defc_2 {
    unsigned char unknown_0_[0x2260]; int unknown_2260_; unsigned int unknown_2264_;
    unsigned char unknown_2268_[0x18]; short unknown_2280_;
    unsigned short unknown_2282_; unsigned int unknown_2284_;
    Struct_02101680 unknown_2288_;
};
extern Struct_ov031_0220defc_2* data_ov031_0224e53c;
extern "C" void func_ov031_0220da1c(int);
extern "C" int func_ov031_0220d984(int, int, int, int);
extern "C" void InvalidateDataCacheRange(const void*, unsigned int);
extern "C" void func_ov031_0220ec5c(int, unsigned short);
extern "C" void func_ov031_0220d9c8(short, short, int, int, int);
extern "C" unsigned int func_ov031_0220db38(unsigned int);
extern "C" unsigned int func_ov031_0220db64(unsigned int);
extern "C" int func_ov031_0220d8f4(unsigned short);
extern "C" int func_020d5340(int, Struct_02101680*);
extern "C" int func_020d5490(int);
extern "C" int func_ov031_0220db6c();
extern "C" void func_ov031_0220e1e0(Struct_ov031_0220defc*);

// USA: func_ov031_0220defc
extern "C" ARM void func_ov031_0220defc(Struct_ov031_0220defc* arg0) {
    int var0 = 20;
    switch (arg0->unknown_2_) {
    case 0:
        if (data_ov031_0224e53c->unknown_2260_ == 5) {
            func_ov031_0220da1c(6);
            func_ov031_0220d984(0, 0, 0, 0x704);
        }
        switch (data_ov031_0224e53c->unknown_2260_) {
        case 6:
            data_ov031_0224e53c->unknown_2280_ = 7;
            if (arg0->unknown_8_ == 5) {
                InvalidateDataCacheRange(data_ov031_0224e53c->unknown_2288_.unknown_0_,
                                        data_ov031_0224e53c->unknown_2288_.unknown_4_);
                int var1 = 0;
                if ((int)arg0->unknown_e_ > 0) {
                    do {
                        func_ov031_0220ec5c(arg0->unknown_10_[var1], arg0->unknown_50_[var1]);
                        func_ov031_0220d9c8(7, 0, arg0->unknown_10_[var1], (int)arg0, 0x71a);
                        ++var1;
                    } while (var1 < arg0->unknown_e_);
                }
            }
            {
                unsigned int var2 = data_ov031_0224e53c->unknown_2264_;
                if ((var2 & 0xc00000) == 0xc00000) {
                    unsigned int var3 = func_ov031_0220db38(var2 & 0x3ffe);
                    if (var3 != 0) {
                        unsigned int var4 = data_ov031_0224e53c->unknown_2284_;
                        if (var4 % var3 == 0)
                            func_ov031_0220d9c8(8, 0, var4, 0, 0x728);
                    }
                }
                int var5 = func_ov031_0220d8f4(32 - func_ov031_0220db64(arg0->unknown_a_));
                data_ov031_0224e53c->unknown_2288_.unknown_6_ = (1 << var5) >> 1;
            }
            InvalidateDataCacheRange(data_ov031_0224e53c->unknown_2288_.unknown_0_,
                                    data_ov031_0224e53c->unknown_2288_.unknown_4_);
            ++data_ov031_0224e53c->unknown_2284_;
            var0 = func_020d5340((int)func_ov031_0220defc, &data_ov031_0224e53c->unknown_2288_);
            break;
        case 7:
            var0 = func_020d5490((int)func_ov031_0220e1e0);
            break;
        case 13:
            func_ov031_0220db6c();
            return;
        }
        switch (var0) {
        case 2:
            return;
        case 8:
            func_ov031_0220da1c(12);
            func_ov031_0220d984(1, 0, 0, 0x753);
            return;
        case 3:
        default:
            func_ov031_0220da1c(11);
            func_ov031_0220d984(7, 0, 0, 0x75c);
            return;
        }
        break;
    case 1:
        func_ov031_0220db6c();
        return;
    case 2:
    case 3:
    case 4:
    default:
        func_ov031_0220da1c(11);
        func_ov031_0220d984(7, 0, 0, 0x76d);
        return;
    }
}
