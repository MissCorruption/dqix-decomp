#include <globaldefs.h>

struct Struct_0202ba08_2;
extern "C" ARM struct Struct_0202ba08_2* func_0202ba08(struct Struct_0202ba08_2* arg0, struct Struct_0202ba08_2* arg1);

struct Struct_0202baf4 { unsigned char unknown_0_[6]; };
struct Struct_0202ae4c_2 { char unknown_0_[0x20]; };
struct Struct_0202ae4c_3 { unsigned int unknown_0_[0x20]; };

struct Struct_020feffc {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    struct Struct_0202baf4 unknown_4_;
    unsigned short unknown_a_;
    struct Struct_0202ae4c_2 unknown_c_;
    unsigned short unknown_2c_;
    unsigned short unknown_2e_;
    unsigned short unknown_30_;
    unsigned short unknown_32_;
    unsigned short unknown_34_;
    unsigned short unknown_36_;
    unsigned short unknown_38_;
    unsigned short unknown_3a_;
    unsigned short unknown_3c_;
    unsigned short unknown_3e_;
    struct Struct_0202ae4c_3 unknown_40_;
};

struct Struct_020fefec {
    char unknown_0_[0xc];
    int unknown_c_;
    struct Struct_020feffc unknown_10_[10];
    int unknown_790_[10];
};

extern struct Struct_020feffc data_020feffc[];

// USA: func_0202baf4
extern "C" ARM void func_0202baf4(struct Struct_020fefec* arg0, struct Struct_020feffc* arg1) {
    signed char var0 = *(signed char*)((char*)arg1 + 0x50);
    if (var0 == 0) {
        return;
    }
    unsigned char var1 = *(unsigned char*)((char*)arg1 + 0x4a);
    if (var1 == 0) {
        return;
    }

    int var2 = arg0->unknown_c_;
    if (var2 > 0) {
        int var3;
        for (var3 = 0; var3 < var2; var3++) {
            struct Struct_020feffc* var4 = (struct Struct_020feffc*)((char*)data_020feffc + var3 * 0xc0);
            int var5 = var4->unknown_4_.unknown_0_[0] == arg1->unknown_4_.unknown_0_[0] && var4->unknown_4_.unknown_0_[1] == arg1->unknown_4_.unknown_0_[1] &&
                        var4->unknown_4_.unknown_0_[2] == arg1->unknown_4_.unknown_0_[2] && var4->unknown_4_.unknown_0_[3] == arg1->unknown_4_.unknown_0_[3] &&
                        var4->unknown_4_.unknown_0_[4] == arg1->unknown_4_.unknown_0_[4] && var4->unknown_4_.unknown_0_[5] == arg1->unknown_4_.unknown_0_[5];
            if (var5) {
                break;
            }
        }
        if (var3 != var2) {
            func_0202ba08((struct Struct_0202ba08_2*)&arg0->unknown_10_[var3], (struct Struct_0202ba08_2*)arg1);
            arg0->unknown_790_[var3] = 0xfa0;
            return;
        }
    }

    if (var2 >= 0xa) {
        return;
    }
    func_0202ba08((struct Struct_0202ba08_2*)&arg0->unknown_10_[var2], (struct Struct_0202ba08_2*)arg1);
    arg0->unknown_790_[arg0->unknown_c_] = 0xfa0;
    arg0->unknown_c_ = arg0->unknown_c_ + 1;
}
