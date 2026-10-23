#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
struct Struct_020972e0 { unsigned int unknown_0_0_:12, unknown_1_4_:19, unknown_3_7_:1; };
struct Struct_02097248 { int unknown_0_, unknown_4_, unknown_8_; char unknown_c_[0x14]; };
struct Struct_020972e0_2 { void* unknown_0_; Struct_020972e0 unknown_4_; Struct_02097248* unknown_8_; void* unknown_c_; };
extern "C" int func_02097408(Struct_020972e0*);
extern "C" int func_02097248(void*, Struct_02097248*);
extern "C" void func_02097798(Struct_020972e0_2*);
// USA: func_020972e0
extern "C" ARM void func_020972e0(Struct_020972e0_2* arg0, SafeAllocator* arg1, char* arg2) {
    if (arg1 && arg2) {
        memcpy(&arg0->unknown_4_, arg2, 4);
        int var0 = func_02097408(&arg0->unknown_4_);
        int var1 = arg0->unknown_4_.unknown_1_4_;
        if (var0)
            arg0->unknown_8_ = (Struct_02097248*)arg1->Allocate(var0);
        else
            arg0->unknown_8_ = 0;
        arg0->unknown_c_ = var1 ? arg1->Allocate(var1) : 0;
        if (arg0->unknown_8_) memcpy(arg0->unknown_8_, arg2 + 4, var0);
        if (arg0->unknown_c_) memcpy(arg0->unknown_c_, arg2 + (func_02097408(&arg0->unknown_4_) + 4), var1);
        int (*var2)(void*, Struct_02097248*) = func_02097248;
        if ((unsigned int)var2 && arg0->unknown_8_) {
            Struct_02097248* var3;
            int var4;
            int var5;
            var5 = arg0->unknown_4_.unknown_0_0_;
            if (var5 && var2) {
                var3 = arg0->unknown_8_;
                for (var4 = 0; var4 < var5; var4++, var3++) func_02097248(&arg0->unknown_4_, var3);
            }
        }
        arg0->unknown_4_.unknown_3_7_ = 1;
    }
    arg0->unknown_0_ = arg0->unknown_8_;
    func_02097798(arg0);
}
