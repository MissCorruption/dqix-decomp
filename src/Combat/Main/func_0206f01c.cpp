#include <globaldefs.h>
#include "Resource/MonsterDefinition.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

// USA: func_0206f01c
extern "C" ARM void func_0206f01c(Struct_0206ef48* arg0, SafeAllocator* arg1,
                                 Struct_0206efd8* arg2, unsigned int arg3) {
    int var0;
    int var1;
    if (arg1 == NULL || arg2 == NULL) return;

    memcpy(&arg0->unknown_0_.unknown_0_, &arg2->unknown_0_, sizeof(Struct_0206f01c));
    var0 = func_0206f0f8(&arg0->unknown_0_.unknown_0_);
    var1 = arg0->unknown_0_.unknown_0_.unknown_1_4_;
    if (var0) {
        arg0->unknown_0_.unknown_4_ = static_cast<Struct_0206ef40*>(arg1->Allocate(var0));
    } else {
        arg0->unknown_0_.unknown_4_ = NULL;
    }
    arg0->unknown_8_ = var1 ? static_cast<char*>(arg1->Allocate(var1)) : NULL;
    if (arg0->unknown_0_.unknown_4_ != NULL) {
        memcpy(arg0->unknown_0_.unknown_4_, arg2 + 1, var0);
    }
    if (arg0->unknown_8_ != NULL) {
        memcpy(arg0->unknown_8_, reinterpret_cast<char*>(arg2) +
               (func_0206f0f8(&arg0->unknown_0_.unknown_0_) + sizeof(Struct_0206f01c)), var1);
    }

    if (reinterpret_cast<void*>(func_0206ef48) != NULL) {
        func_0206f110(arg0, func_0206ef48);
    }
    arg0->unknown_0_.unknown_0_.unknown_3_7_ = 1;
}
