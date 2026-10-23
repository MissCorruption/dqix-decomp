#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/ActionDataTables.h"

struct Struct_02079a58_2 {
    unsigned int unknown_0_0_ : 12;
};

extern "C" int func_02079b94(struct Struct_02079a58_2* arg0);

extern "C" void* memcpy(void* arg0, const void* arg1, unsigned int arg2);

// USA: func_02079a58
extern "C" ARM int func_02079a58(Struct_02079a58* arg0, SafeAllocator* arg1, void* arg2,
                                 Type_02079900 arg3,
                                 void (*arg4)(Struct_02079a58*)
#if !defined(jpn)
    , SafeAllocator* arg5
#endif
) {
#if defined(jpn)
    SafeAllocator* arg5 = arg1;
#endif
    if (arg1 == NULL || arg2 == NULL) {
        return 0;
    }

#if !defined(jpn)
    if (arg5 == NULL) {
        arg5 = arg1;
    }
#endif

    memcpy(arg0, arg2, 4);

    unsigned int var0 = (unsigned int)func_02079b94((struct Struct_02079a58_2*)arg0);
    unsigned int var1 = arg0->unknown_1_4_;

    arg0->unknown_4_ = (var0 != 0) ? arg1->Allocate(var0) : NULL;
    arg0->unknown_8_ = (var1 != 0) ? arg5->Allocate(var1) : NULL;

    if (arg0->unknown_4_ != NULL) {
        memcpy(arg0->unknown_4_, (unsigned char*)arg2 + 4, var0);
    }

    if (arg0->unknown_8_ != NULL) {
        memcpy(arg0->unknown_8_,
               (unsigned char*)arg2 + (func_02079b94((struct Struct_02079a58_2*)arg0) + 4),
               var1);
    }

    int var2;
    void* var3;
    int var4;
    if (arg3 != NULL && (var3 = arg0->unknown_4_) != NULL) {
        var4 = (int)arg0->unknown_0_0_;
        if (var4 != 0 && arg3 != NULL) {
            var2 = 0;
            while (var2 < var4) {
                arg3(arg0, (Struct_02079808*)var3);
                var2++;
                #if defined(jpn)
                var3 = (void*)((unsigned char*)var3 + 0x34);
#else
                var3 = (void*)((unsigned char*)var3 + 0x3c);
#endif
            }
        }
    }

    if (arg4 != NULL) {
        arg4(arg0);
    }

    arg0->unknown_3_7_ = 1;
    return 1;
}
