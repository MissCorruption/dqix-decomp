#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/ActionDataTables.h"

struct Struct_02079bac_3 {
    unsigned int unknown_0_0_ : 12;
};

struct Struct_02079bac {
    unsigned char unknown_0_[8];
};

extern "C" int func_02079ce8(struct Struct_02079bac_3* arg0);

// USA: func_02079bac
extern "C" ARM int func_02079bac(struct Struct_02079bac_2* arg0, SafeAllocator* arg1, void* arg2, Type_02079bac arg3, Type_02079bac_2 arg4
#if !defined(jpn)
    , SafeAllocator* arg5
#endif
) {
#if defined(jpn)
    SafeAllocator* arg5 = arg1;
#endif
    int var0;
    unsigned int var1;
    int var2;
    struct Struct_02079bac* var3;
    int var4;

    if (arg1 == 0 || arg2 == 0) {
        return 0;
    }
#if !defined(jpn)
    if (arg5 == 0) {
        arg5 = arg1;
    }
#endif
    memcpy(arg0, arg2, 4);
    var0 = func_02079ce8((struct Struct_02079bac_3*)arg0);
    var1 = arg0->unknown_1_4_;
    arg0->unknown_4_ = var0 ? (struct Struct_02079bac*)arg1->Allocate(var0) : 0;
    arg0->unknown_8_ = var1 ? (unsigned char*)arg5->Allocate(var1) : 0;
    if (arg0->unknown_4_ != 0) {
        memcpy(arg0->unknown_4_, (char*)arg2 + 4, var0);
    }
    if (arg0->unknown_8_ != 0) {
        memcpy(arg0->unknown_8_, (char*)arg2 + (func_02079ce8((struct Struct_02079bac_3*)arg0) + 4), var1);
    }
    if (arg3 != 0) {
        if (arg0->unknown_4_ != 0) {
            var4 = (short)arg0->unknown_0_0_;
            if (var4 != 0 && arg3 != 0) {
                for (var2 = 0, var3 = arg0->unknown_4_; var2 < var4; var2++, var3++) {
                    arg3(arg0, var3);
                }
            }
        }
    }
    if (arg4 != 0) {
        arg4(arg0);
    }
    arg0->unknown_3_7_ = 1;
    return 1;
}
