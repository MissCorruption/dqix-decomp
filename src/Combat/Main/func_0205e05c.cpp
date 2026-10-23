#include <globaldefs.h>
#include "Resource/Script.h"

#if defined(jpn)
enum { Enum_0205e05c_48 = 0x50 };
#else
enum { Enum_0205e05c_48 = 0x30 };
#endif

struct Struct_0201c1c8;

extern void* data_02108740[];

// USA: func_0205e05c
extern "C" ARM int func_0205e05c(Script::Parameter* arg0, int) {
    const Script::Parameter* var0 = arg0;
    *(int*)((char*)data_02108740[1] + Enum_0205e05c_48) = var0[0].ToInt();
    return 1;
}
