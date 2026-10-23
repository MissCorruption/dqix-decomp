#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov004_021633ac_96 = 0x5c, Enum_ov004_021633ac_24 = 0x17 };
#else
enum { Enum_ov004_021633ac_96 = 0x60, Enum_ov004_021633ac_24 = 0x18 };
#endif

#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

extern "C" void func_ov011_02184a24(void* arg0, void* arg1, int arg2);
extern unsigned char data_ov004_02170444;

// USA: func_ov004_021633ac
extern "C" ARM void func_ov004_021633ac(SafeAllocator* arg0, void* arg1) {
    void* var0 = arg0->Allocate(Enum_ov004_021633ac_96);
    memcpy(var0, &data_ov004_02170444, Enum_ov004_021633ac_96);
    func_ov011_02184a24(arg1, var0, Enum_ov004_021633ac_24);
}
