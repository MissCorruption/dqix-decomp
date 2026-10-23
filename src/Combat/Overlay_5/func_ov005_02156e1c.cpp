#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov005_02156e1c_15600 = 0x3c68 };
#else
enum { Enum_ov005_02156e1c_15600 = 0x3cf0 };
#endif

#include <NitroSDK/Matrix.h>
#include <std_library_functions.h>

struct Struct_0203a46c;

struct Struct_ov005_02155d6c_2 {
    char unknown_0_[0x1c];
    Vector3fix unknown_1c_;
    char unknown_28_[0x88 - 0x28];
};

struct Struct_ov005_02153954 {
    char unknown_0_[Enum_ov005_02156e1c_15600];
    Struct_ov005_02155d6c_2 unknown_3cf0_;
    short unknown_3d78_;
};

extern "C" void func_0203a46c(Struct_0203a46c* arg0, int arg1, int arg2, int arg3);

// USA: func_ov005_02156e1c
extern "C" ARM void func_ov005_02156e1c(Struct_ov005_02153954* arg0, int arg1, int arg2) {
    if (arg0->unknown_3d78_ < 0)
        return;
    Vector3fix var0 = arg0->unknown_3cf0_.unknown_1c_;
    int var1 = var0.x >> 12;
    int var2 = var0.y >> 12;
    int var3 = arg1 - 12;
    if (var3 < 1)
        var3 = 1;
    if (var3 > 0xe7)
        var3 = 0xe7;
    int var4 = arg2 - 12;
    if (var4 < 1)
        var4 = 1;
    if (var4 > 0xa7)
        var4 = 0xa7;
    if (abs(var1 - var3) < 3)
        var3 = var1;
    if (abs(var2 - var4) < 3)
        var4 = var2;
    func_0203a46c((Struct_0203a46c*)&arg0->unknown_3cf0_, var3 << 12, var4 << 12, 0x2000);
}
