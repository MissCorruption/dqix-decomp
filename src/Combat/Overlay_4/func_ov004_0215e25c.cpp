#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
enum { Enum_ov004_0215e25c_100 = 99 };
#define data_ov004_0216fc40 data_ov004_021703c8
#else
enum { Enum_ov004_0215e25c_100 = 100 };
#endif

struct Struct_ov004_0216fc40 { unsigned int unknown_0_[Enum_ov004_0215e25c_100]; };
extern Struct_ov004_0216fc40 data_ov004_0216fc40;

extern "C" void func_ov011_02184a24(void* arg0, void* arg1, int arg2);
extern "C" void func_ov011_02184c28(void* arg0, void* arg1);
extern "C" void func_ov004_0215e148(void);

// USA: func_ov004_0215e25c
extern "C" ARM void func_ov004_0215e25c(void* arg0, void* arg1) {
    Struct_ov004_0216fc40 var0 = data_ov004_0216fc40;
    void* var1 = ((SafeAllocator*)arg0)->Allocate(sizeof(Struct_ov004_0216fc40));
    memcpy(var1, &var0, sizeof(Struct_ov004_0216fc40));
    func_ov011_02184a24(arg1, var1, Enum_ov004_0215e25c_100);
    func_ov011_02184c28(arg1, (void*)func_ov004_0215e148);
}
