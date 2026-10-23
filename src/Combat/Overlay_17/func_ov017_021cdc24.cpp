#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0202ae24(void);
extern "C" void* func_0205ec34(void* arg0);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021cdc24 {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 14;
};

// USA: func_ov017_021cdc24
extern "C" ARM void func_ov017_021cdc24(int arg0, int arg1) {
    void* var0 = func_0202ae24();
    unsigned char var1[0x14];
    Struct_ov017_021cdc24* var2 = (Struct_ov017_021cdc24*)(var1 + 4);
    var2->unknown_0_0_ = arg0;
    var1[0] = 0x92;
    var2->unknown_0_2_ = arg1;

    unsigned char* var3 = (unsigned char*)func_0205ec34(var0);
    int var4 = 0xe;
    if ((unsigned int)(arg1 + 0xe) > 0xfd) {
        var4 = 0xfd - arg1;
    }
    if (var4 >= 0) {
        memcpy((unsigned char*)var2 + 2, var3 + arg1, var4);
        func_0205e330(var0, var1, 0);
    }
}
