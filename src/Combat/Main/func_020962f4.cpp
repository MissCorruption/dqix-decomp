#include <globaldefs.h>
#include <std_library_functions.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0205faf4_3;
struct Struct_020962f4 {
    unsigned int unknown_0_0_ : 9;
    unsigned int unknown_1_1_ : 23;
    unsigned int unknown_4_[3];
};
struct Struct_020962f4_2 { unsigned char unknown_0_; char unknown_1_[3]; Struct_020962f4 unknown_4_[8]; };
extern "C" Struct_0205faf4_3* func_0205ec34();
extern "C" void func_0206e164(Struct_0205faf4_3*, int, int);

// USA: func_020962f4
extern "C" ARM int func_020962f4(Struct_020962f4_2* arg0, Struct_020962f4 arg1) {
    Struct_020962f4 var0[8];
    if (arg0->unknown_0_ >= 8) return 0;
    if (!arg0->unknown_0_) memcpy(arg0->unknown_4_, &arg1, 16);
    else {
        memcpy(var0, arg0->unknown_4_, 128);
        unsigned char var1 = 0;
        unsigned char var2 = arg0->unknown_0_ - 1;
        while (var2 - var1 > 1) {
            unsigned char var3 = (var2 + var1) / 2;
            if (arg1.unknown_0_0_ == arg0->unknown_4_[var3].unknown_0_0_) return 0;
            if (arg0->unknown_4_[var3].unknown_0_0_ < arg1.unknown_0_0_) var1 = var3;
            else if (arg0->unknown_4_[var3].unknown_0_0_ > arg1.unknown_0_0_) var2 = var3;
        }
        if (arg0->unknown_4_[var1].unknown_0_0_ <= arg1.unknown_0_0_) {
            if (arg0->unknown_4_[var2].unknown_0_0_ < arg1.unknown_0_0_) var1 = var2 + 1;
            else var1 = var2;
        }
        if (var1 < arg0->unknown_0_) memcpy(&arg0->unknown_4_[var1 + 1], &var0[var1], (arg0->unknown_0_ - var1) * 16);
        memcpy(&arg0->unknown_4_[var1], &arg1, 16);
    }
    func_0206e164(func_0205ec34(), arg1.unknown_0_0_, 2);
    ++arg0->unknown_0_;
    return 1;
}
