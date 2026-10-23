#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_ov004_021560b0_14 = 13 };
#define data_ov004_02170360 data_ov004_02170c60
#else
enum { Enum_ov004_021560b0_14 = 14 };
#endif

extern char data_ov004_02170360[Enum_ov004_021560b0_14 * 4];

extern "C" int func_ov011_02184a24(int, void*, int);

// USA: func_ov004_021560b0
extern "C" ARM int func_ov004_021560b0(SafeAllocator* arg0, int arg1) {
    void* var0 = arg0->Allocate(Enum_ov004_021560b0_14 * 4);
    memcpy(var0, data_ov004_02170360, Enum_ov004_021560b0_14 * 4);
    return func_ov011_02184a24(arg1, var0, Enum_ov004_021560b0_14);
}
