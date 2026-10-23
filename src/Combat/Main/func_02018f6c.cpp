#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02018f6c_1092 = 0x464 };
#else
enum { Enum_02018f6c_1092 = 0x444 };
#endif

struct Struct_02018f6c { unsigned int unknown_0_[12]; };
struct Struct_02018f6c RotationMatrixY(int angle);

struct Struct_02018f6c_2 {
    char unknown_0_[Enum_02018f6c_1092];
    unsigned int unknown_444_[12];
    short unknown_474_;
};

// USA: func_02018f6c
extern "C" ARM void func_02018f6c(struct Struct_02018f6c_2* arg0, short arg1) {
    struct Struct_02018f6c var0;
    short var1;
    arg0->unknown_474_ = arg1;
    var1 = arg0->unknown_474_;
    if (var1 != 0) {
        var0 = RotationMatrixY(var1);
        *(struct Struct_02018f6c*)arg0->unknown_444_ = var0;
    }
}
