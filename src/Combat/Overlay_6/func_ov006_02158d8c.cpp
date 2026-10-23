#if defined(jpn)
#define R(j,u) (j)
#define func_ov006_02154e58 func_ov006_021565b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>

struct Struct_ov006_02158d8c {
    char unknown_0_[0x1c];
    struct Struct_ov006_02158d8c* unknown_1c_;
};

// USA: func_ov006_02158d8c
extern "C" ARM struct Struct_ov006_02158d8c* func_ov006_02158d8c(void* arg0, short arg1) {
    char* var0 = (char*)arg0;
    struct Struct_ov006_02158d8c* var1 = *(struct Struct_ov006_02158d8c**)(var0 + R(0x28, 0x30));
    short var2 = 0;
    while (var1 != NULL && arg1 != 0) {
        if (var1->unknown_1c_ == NULL) {
            var0 = var0 + 0x300;
            *(short*)(var0 + 0x6a) = var2 + 0x29;
            break;
        }
        arg1--;
        var2++;
        var1 = var1->unknown_1c_;
    }
    return var1;
}
