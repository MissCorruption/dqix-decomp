#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d22d4 {
    unsigned short unknown_0_0_ : 2;
    unsigned short unknown_0_2_ : 14;
};

// USA: func_ov017_021d22d4
extern "C" ARM void func_ov017_021d22d4(unsigned short arg0, unsigned short arg1, void* arg2) {
    void* var0 = func_0202ae24();
    unsigned char var1[0x14];
    Struct_ov017_021d22d4* var2 = (Struct_ov017_021d22d4*)(var1 + 4);
    var1[0] = 0x9d;
    var2->unknown_0_0_ = arg0;
    var2->unknown_0_2_ = arg1;

    int var3 = 0xe;
    if ((unsigned int)(arg1 + 0xe) > 0x2e0) {
        var3 = 0x2e0 - arg1;
    }
    if (var3 >= 0) {
        memcpy((unsigned char*)var2 + 2, (unsigned char*)arg2 + arg1, var3);
        func_0205e330(var0, var1, 0);
    }
}
