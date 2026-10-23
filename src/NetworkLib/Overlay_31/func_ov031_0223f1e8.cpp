#include <globaldefs.h>

extern int data_ov031_02249418;
extern int data_ov031_02290f08;

struct Struct_ov031_0223edb4;
extern "C" int func_ov031_0223ede0(void** arg0, void** arg1, void* arg2, void* arg3, int arg4, int arg5);
extern "C" int func_ov031_0223f188(void* arg0, struct Struct_ov031_0223edb4* arg1);

struct Struct_ov031_0223f1e8 { unsigned char unknown_0_[4]; int unknown_4_; unsigned char unknown_8_[8]; int unknown_10_; };

// USA: func_ov031_0223f1e8
extern "C" ARM int func_ov031_0223f1e8(int arg0) {
    Struct_ov031_0223f1e8* var0;
    struct Struct_ov031_0223edb4* var1;
    int var2 = 0x80;
    int var3 = 0;
    if (func_ov031_0223ede0((void**)&var0, (void**)&var1, &data_ov031_02249418, &data_ov031_02290f08, var2, var3) == 0) {
        return 0;
    }
    var0->unknown_4_ = 1;
    var0->unknown_10_ = arg0;
    int var4 = func_ov031_0223f188((void*)var0, var1);
    return var4 != 0;
}
