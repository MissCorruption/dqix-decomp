#include <globaldefs.h>

extern "C" void func_020d8654();

struct Struct_020db894;
extern "C" void func_020db964(Struct_020db894* arg0);

struct Struct_020db3f4_3;
extern "C" void func_020db844(Struct_020db3f4_3* arg0, int arg1, int arg2, int arg3);

extern "C" void func_020db304(int arg0, int arg1);

struct Struct_02038598_4;
extern "C" Struct_02038598_4* func_020d6c00();
extern "C" void func_020466f4(Struct_02038598_4* arg0, unsigned int arg1);

struct Struct_020dafd4;
extern "C" void func_020db0c4(Struct_020dafd4* arg0);

extern "C" void func_020db814(void* arg0);

extern "C" void func_020d8694();

typedef void (*Type_0200f3a4_2)(int);
typedef int (*Type_01ff8b48_5)(void);
extern Type_0200f3a4_2 data_020f28dc[];
extern Type_01ff8b48_5 data_020f28fc[];
extern Type_0200f3a4_2 data_020f28f4[];

struct Struct_020db894_2 {
    char unknown_0_[0x3c];
    unsigned char unknown_3c_;
    char unknown_3d_[0x51 - 0x3d];
    unsigned char unknown_51_;
    unsigned char unknown_52_;
    unsigned char unknown_53_;
    char unknown_54_[0x5c - 0x54];
    int unknown_5c_;
    int unknown_60_;
    unsigned char unknown_64_;
    char unknown_65_[0x6a - 0x65];
    short unknown_6a_;
};

// USA: func_020db894
extern "C" ARM void func_020db894(Struct_020db894_2* arg0) {
    if (!arg0->unknown_51_) {
        return;
    }
    func_020d8654();
    func_020db964((Struct_020db894*)arg0);
    if (arg0->unknown_53_) {
        func_020db844((Struct_020db3f4_3*)arg0, arg0->unknown_3c_, arg0->unknown_6a_, 0);
        data_020f28dc[6](arg0->unknown_5c_);
        data_020f28dc[7](arg0->unknown_60_);
    } else if (!arg0->unknown_64_) {
        int var0 = data_020f28fc[arg0->unknown_3c_]();
        var0 &= ~0x10;
        data_020f28f4[arg0->unknown_3c_](var0);
    }
    func_020db304((int)arg0, arg0->unknown_3c_);
    func_020466f4(func_020d6c00(), 0x8000);
    func_020db0c4((Struct_020dafd4*)arg0);
    func_020db814(arg0);
    func_020d8694();
}
