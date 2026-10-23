#include <globaldefs.h>
#include "Resource/Script.h"

#if defined(jpn)
enum { Enum_0205e03c_42 = 0x4a };
#else
enum { Enum_0205e03c_42 = 0x2a };
#endif

struct Struct_0201c1c8;

extern void* data_02108740[];

// USA: func_0205e03c
extern "C" ARM int func_0205e03c(Script::Parameter* arg0) {
    const Script::Parameter* var0 = arg0;
    *(short*)((char*)data_02108740[1] + Enum_0205e03c_42) = var0[0].ToInt();
    return 1;
}
