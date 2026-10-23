#include <globaldefs.h>

struct Struct_ov031_0220e258_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
};
struct Struct_ov031_0220e258 {
    char unknown_0_[0x1500];
    char unknown_1500_[0x620];
    char unknown_1b20_[0x620];
    char unknown_2140_[0xc0];
    char unknown_2200_[0x60];
    int unknown_2260_;
    char unknown_2264_[0x1c];
    unsigned short unknown_2280_;
    unsigned short unknown_2282_;
    char unknown_2284_[0x74];
    unsigned short unknown_22f8_;
};
extern Struct_ov031_0220e258* data_ov031_0224e53c;
extern "C" void func_ov031_0220da1c(int);
extern "C" void func_ov031_0220db6c();
extern "C" int func_ov031_0220e584(void*);
extern "C" int func_020d5b5c(int (*)(void*), void*, unsigned int);
extern "C" void func_ov031_0220d984(int, void*, int, int);

// USA: func_ov031_0220e258
extern "C" ARM void func_ov031_0220e258(Struct_ov031_0220e258_2* arg0) {
    switch (arg0->unknown_2_) {
    case 0: {
        int var0 = arg0->unknown_8_;
        switch (var0) {
        case 6:
            break;
        case 26:
            break;
        case 8:
        case 9:
            switch (data_ov031_0224e53c->unknown_2260_) {
            case 10:
                data_ov031_0224e53c->unknown_2282_ = 0;
            case 8:
                func_ov031_0220da1c(12);
                return;
            case 9:
                data_ov031_0224e53c->unknown_2282_ = 0;
                data_ov031_0224e53c->unknown_2280_ = 6;
            case 12:
                func_ov031_0220db6c();
                return;
            default:
                break;
            }
            break;
        case 7:
            if (data_ov031_0224e53c->unknown_2260_ == 12) {
                func_ov031_0220da1c(8);
                func_ov031_0220db6c();
                return;
            }
            if (arg0->unknown_a_ >= 1 && arg0->unknown_a_ <= 0x7d7) {
                data_ov031_0224e53c->unknown_2282_ = arg0->unknown_a_;
                int var1 = func_020d5b5c(func_ov031_0220e584, data_ov031_0224e53c->unknown_1500_, 0x620);
                if (var1 == 2) return;
                if (var1 != 3 && var1 == 8) {
                    func_ov031_0220da1c(12);
                    func_ov031_0220d984(1, data_ov031_0224e53c->unknown_2140_, 0, 0x7ed);
                    return;
                }
                func_ov031_0220da1c(11);
                func_ov031_0220d984(7, data_ov031_0224e53c->unknown_2140_, 0, 0x7f6);
                return;
            }
            func_ov031_0220db6c();
            return;
        case 0:
        default:
            func_ov031_0220da1c(11);
            func_ov031_0220d984(7, data_ov031_0224e53c->unknown_2140_, arg0->unknown_8_, 0x804);
            return;
        }
        break;
    }
    case 1:
        data_ov031_0224e53c->unknown_22f8_ = arg0->unknown_e_;
    case 6:
    case 11:
    case 12:
        func_ov031_0220da1c(8);
        func_ov031_0220db6c();
        return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    default:
        func_ov031_0220da1c(11);
        func_ov031_0220d984(7, data_ov031_0224e53c->unknown_2140_, 0, 0x81b);
        return;
    }
}
