#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02154e58 func_ov006_021565b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov006_02158d50 {
    char unknown_0_[0x1c];
    struct Struct_ov006_02158d50* unknown_1c_;
};

struct Struct_ov006_02158d50_2 {
    char unknown_0_[R(0x24, 0x2c)];
    struct Struct_ov006_02158d50* unknown_2c_;
};

// USA: func_ov006_02158d50
extern "C" ARM struct Struct_ov006_02158d50* func_ov006_02158d50(struct Struct_ov006_02158d50_2* arg0, short arg1) {
    struct Struct_ov006_02158d50* var0 = arg0->unknown_2c_;
    struct Struct_ov006_02158d50* var1 = var0;
    short var2 = arg1 << 4;
    short var3 = 0;
    while (var0) {
        if (var3 == var2) {
            var1 = var0;
            break;
        }
        var3++;
        var0 = var0->unknown_1c_;
    }
    return var1;
}
