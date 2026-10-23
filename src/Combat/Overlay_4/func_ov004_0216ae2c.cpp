#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
enum { Enum_ov004_0216ae2c_7 = 6 };
#define data_ov004_02170154 data_ov004_0217088c
#else
enum { Enum_ov004_0216ae2c_7 = 7 };
#endif

struct Struct_ov004_02170154 { unsigned int unknown_0_[Enum_ov004_0216ae2c_7]; };
extern struct Struct_ov004_02170154 data_ov004_02170154;
extern "C" void func_ov011_02184a24(void*, void*, int);
extern "C" void func_ov011_02184c28(void*, void*);
extern "C" void func_ov004_0216acf8(void);

// USA: func_ov004_0216ae2c
extern "C" ARM void func_ov004_0216ae2c(SafeAllocator* arg0, void* arg1) {
    struct Struct_ov004_02170154 var0 = data_ov004_02170154;
    void* var1 = arg0->Allocate(sizeof(Struct_ov004_02170154));
    memcpy(var1, &var0, sizeof(Struct_ov004_02170154));
    func_ov011_02184a24(arg1, var1, Enum_ov004_0216ae2c_7);
#if !defined(jpn)
    func_ov011_02184c28(arg1, (void*)func_ov004_0216acf8);
#endif
}
