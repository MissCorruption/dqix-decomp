#include <globaldefs.h>

extern "C" short func_ov004_02166684(int arg0);

struct Struct_ov004_021666bc {
    short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short unknown_2_2_ : 1;
    unsigned short unknown_2_3_ : 13;
    char unknown_4_[4];
    struct Struct_ov004_021666bc* unknown_8_;
};
extern struct Struct_ov004_021666bc* data_ov004_0217101c;

#if defined(jpn)
enum { Enum_ov004_021666bc_0 = 1 };
#else
enum { Enum_ov004_021666bc_0 = 0 };
#endif

// USA: func_ov004_021666bc
#pragma optimize_for_size off
extern "C" ARM short func_ov004_021666bc(int arg0, char* arg1) {
    short var0 = func_ov004_02166684(arg0);
    struct Struct_ov004_021666bc* var1 = (&data_ov004_0217101c)[Enum_ov004_021666bc_0]->unknown_8_;
    *arg1 = 0;
    while (var1 != 0 && var0 != 0) {
        var0--;
        var1 = var1->unknown_8_;
    }
    if (var1 != 0) {
        *arg1 = var1->unknown_2_2_ != 0;
        return var1->unknown_0_;
    } else {
        return -1;
    }
}
