#include <globaldefs.h>

#if defined(jpn)
#define func_020d2d00 func_020d47cc
#endif

struct Struct_020be604_2 {
    int unknown_0_;
    int unknown_4_;
};
extern "C" struct Struct_020be604_2 func_020d2ce0();

extern "C" int func_020d2d00(void* arg0, void* arg1, void* arg2);
extern "C" int func_020be53c(void* arg0, int arg1, int arg2, int arg3);

struct Struct_020be604 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    char unknown_6_[6];
};

// USA: func_020be604
extern "C" ARM int func_020be604(void* arg0, void* arg1, int arg2, int arg3, int arg4) {
    struct Struct_020be604_2 var0 = func_020d2ce0();
    struct Struct_020be604 var1;
    int var2;
    if (arg1 == NULL) return 0;
    var2 = func_020d2d00(arg1, &var1, &var0);
    if (var2) {
        do {
            if (var1.unknown_0_ == 1 && arg2 == var1.unknown_4_) {
                if (!func_020be53c(arg0, var1.unknown_2_, arg3, arg4)) return 0;
            }
            var2 = func_020d2d00(arg1, &var1, &var0);
        } while (var2);
    }
    return 1;
}
