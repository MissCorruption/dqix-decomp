#include <globaldefs.h>

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(Struct_0202c1a4* arg0);
extern "C" int func_0202b7d8(int* arg0);
extern "C" int func_020ac4f8(int arg0);
extern "C" int* func_020936f8(void);
extern "C" void func_02094030(int* arg0, short arg1, short arg2, signed char arg3);
extern "C" void func_ov017_021d1118(int arg0, int arg1, int arg2, int arg3);

struct Struct_ov017_021d1078 {
    char unknown_0_[4];
    unsigned char unknown_4_0_ : 7;
    unsigned char unknown_4_7_ : 1;
    unsigned char unknown_5_;
};

// USA: func_ov017_021d1078
extern "C" ARM void func_ov017_021d1078(int arg0, Struct_ov017_021d1078* arg1, void* arg2, void* arg3, void* arg4) {
    signed char var0 = func_0202c1a4((Struct_0202c1a4*)arg4);
    if (!arg1->unknown_4_7_) {
        if (var0 != arg1->unknown_4_0_) return;
        func_020ac4f8(func_0202b7d8((int*)arg4) != 0);
        func_ov017_021d1118(arg0, 0xff, 0, 0);
        func_02094030(func_020936f8(), 0x4e20, -1, arg0);
        return;
    }
    unsigned char var1 = 1;
    if (arg1->unknown_5_ == 1) var1 |= 4;
    func_ov017_021d1118(arg0, var1, 1, arg1->unknown_5_);
}
