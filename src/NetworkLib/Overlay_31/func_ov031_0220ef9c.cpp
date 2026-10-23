#include <globaldefs.h>

typedef void (*Type_ov031_0220ef9c)(void*, void*, void*, unsigned short);

struct Struct_ov031_0224e540_2 {
    char unknown_0_[0x28];
    Type_ov031_0220ef9c unknown_28_;
};

extern struct Struct_ov031_0224e540_2 data_ov031_0224e540;

// USA: func_ov031_0220ef9c
extern "C" ARM void func_ov031_0220ef9c(char *arg0) {
    Type_ov031_0220ef9c var0 = data_ov031_0224e540.unknown_28_;
    if (var0 == 0) {
        return;
    }
    unsigned short var1 = *(unsigned short*)(arg0 + 0x6);
    var0(arg0 + 0x1e, arg0 + 0x18, arg0 + 0x2c, var1);
}
