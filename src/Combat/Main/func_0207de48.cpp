#include <globaldefs.h>

extern "C" void func_020bb700(int* arg0);
extern "C" void func_020bb910(int* arg0);
extern "C" int func_020bb588(unsigned int arg0, int arg1, int arg2);
extern "C" int func_020bb7cc(unsigned int arg0, int arg1, int arg2);

struct Struct_0207de48 { unsigned int unknown_0_[10]; };
struct Struct_0207de48_2 { int unknown_0_[2]; };
struct Struct_0207de48_3 {
    Struct_0207de48 unknown_0_;
    Struct_0207de48 unknown_28_;
    int unknown_50_;
    int unknown_54_;
    Struct_0207de48_2 unknown_58_;
    Struct_0207de48_2 unknown_60_;
    int unknown_68_;
    int unknown_6c_;
};

// USA: func_0207de48
extern "C" ARM void func_0207de48(void* arg0, int arg1, int arg2) {
    struct Struct_0207de48_3* var0 = (struct Struct_0207de48_3*)arg0;
    func_020bb700((int*)&var0->unknown_0_);
    var0->unknown_28_ = var0->unknown_0_;
    func_020bb910(var0->unknown_58_.unknown_0_);
    int var1 = arg1;
    var0->unknown_60_ = var0->unknown_58_;
    var0->unknown_50_ = 0;

    while (var1 > 0) {
        if (var1 > 0x20000) {
            var0->unknown_50_ = func_020bb588(0x20000, 0, 0);
            var1 -= 0x20000;
        } else {
            var0->unknown_50_ = func_020bb588(var1, 0, 0);
            var1 = 0;
        }
    }
    if (arg1 != 0 && var0->unknown_50_ == 0) arg1 = 0;

    var0->unknown_68_ = 0;
    if (arg2 != 0) {
        var0->unknown_68_ = func_020bb7cc(arg2, 0, 0);
    }
    if (arg2 != 0 && var0->unknown_68_ == 0) arg2 = 0;

    var0->unknown_54_ = arg1;
    var0->unknown_6c_ = arg2;
}
