#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov003_0216039c_804 = 0x20c };
enum { Enum_ov003_0216039c_820 = 0x21c };
enum { Enum_ov003_0216039c_808 = 0x210 };
enum { Enum_ov003_0216039c_908 = 0x274 };
enum { Enum_ov003_0216039c_1120 = 0x288 };
enum { Enum_ov003_0216039c_916 = 0x27c };
enum { Enum_ov003_0216039c_1136 = 0x298 };
enum { Enum_ov003_0216039c_1124 = 0x28c };
enum { Enum_ov003_0216039c_1160 = 0x2b0 };
enum { Enum_ov003_0216039c_1140 = 0x29c };
#else
enum { Enum_ov003_0216039c_804 = 0x324 };
enum { Enum_ov003_0216039c_820 = 0x334 };
enum { Enum_ov003_0216039c_808 = 0x328 };
enum { Enum_ov003_0216039c_908 = 0x38c };
enum { Enum_ov003_0216039c_1120 = 0x460 };
enum { Enum_ov003_0216039c_916 = 0x394 };
enum { Enum_ov003_0216039c_1136 = 0x470 };
enum { Enum_ov003_0216039c_1124 = 0x464 };
enum { Enum_ov003_0216039c_1160 = 0x488 };
enum { Enum_ov003_0216039c_1140 = 0x474 };
#endif

struct Struct_0207fdcc_2;
struct Struct_020e28dc;
struct Struct_0205a254;
struct Struct_0205a330;
struct Struct_0205a254_2 {
    char unknown_0_[0x15];
    unsigned char unknown_15_;
};

extern "C" unsigned char* func_02081da8(Struct_0207fdcc_2* arg0, int arg1);
extern "C" int func_020e28dc(Struct_020e28dc* arg0);
extern "C" void func_0205a42c(Struct_0205a254* arg0, int arg1, int arg2);
extern "C" void func_0205ae8c(void* arg0);
extern "C" int func_0204c7e0(unsigned char* arg0);
extern "C" void func_020809c4(void* arg0, int arg1, int arg2, short* arg3, short* arg4);
extern "C" void func_0205a370(Struct_0205a254* arg0, int arg1);
extern "C" Struct_0205a254_2* func_0205a3d0(Struct_0205a254* arg0, int arg1);
extern "C" void func_0205a330(Struct_0205a330* arg0, int arg1);
extern "C" void func_020e27ec(Struct_0205a254* arg0, int arg1, short arg2, short arg3);

struct Struct_ov003_0216039c {
    char unknown_0_[Enum_ov003_0216039c_804];
    Struct_0207fdcc_2* unknown_324_;
    char unknown_328_[Enum_ov003_0216039c_820 - Enum_ov003_0216039c_808];
    char unknown_334_[Enum_ov003_0216039c_908 - Enum_ov003_0216039c_820];
    Struct_0205a254* unknown_38c_;
    Struct_020e28dc* unknown_390_;
    char unknown_394_[Enum_ov003_0216039c_1120 - Enum_ov003_0216039c_916];
    int unknown_460_;
    char unknown_464_[Enum_ov003_0216039c_1136 - Enum_ov003_0216039c_1124];
    short* unknown_470_;
    char unknown_474_[Enum_ov003_0216039c_1160 - Enum_ov003_0216039c_1140];
    short unknown_488_;
};

// USA: func_ov003_0216039c
extern "C" ARM void func_ov003_0216039c(Struct_ov003_0216039c* arg0) {
    if (arg0->unknown_470_ == NULL || arg0->unknown_488_ < 0 || arg0->unknown_324_ == NULL) {
        return;
    }
    unsigned char* var0 = func_02081da8(arg0->unknown_324_, arg0->unknown_488_);
    if (var0 == NULL) {
        return;
    }
    if (arg0->unknown_390_ != NULL && func_020e28dc(arg0->unknown_390_) != 0) {
        func_0205a42c(arg0->unknown_38c_, 0, 0);
        func_0205ae8c(arg0->unknown_334_);
        return;
    }
    if (func_0204c7e0(var0) == 0) {
        return;
    }
    short var1;
    short var2;
    func_020809c4(arg0->unknown_324_, arg0->unknown_488_, *arg0->unknown_470_, &var1, &var2);
    var1 -= 0x10;
    var2 -= 3;
    func_0205a370(arg0->unknown_38c_, 0);
    Struct_0205a254_2* var3 = func_0205a3d0(arg0->unknown_38c_, 0);
    if (var3 != NULL) {
        var3->unknown_15_ |= 8;
    }
    var3 = func_0205a3d0(arg0->unknown_38c_, 1);
    if (var3 != NULL) {
        var3->unknown_15_ &= ~8;
    }
    func_0205a330((Struct_0205a330*)arg0->unknown_38c_, arg0->unknown_460_);
    func_020e27ec(arg0->unknown_38c_, 0, var1, var2);
    func_0205ae8c(arg0->unknown_334_);
}
