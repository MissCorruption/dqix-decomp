#include "Combat/TryApplyElemFields.h"
#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0205d5d0;
#if defined(jpn)
#define func_ov013_02185be0 func_ov013_02186db0
#else
#endif
extern "C" void func_ov013_02185be0(void*, void*);

// USA: func_ov013_02186c1c
extern "C" ARM void func_ov013_02186c1c(void* arg0) {
#if defined(jpn)
    memset(*(void**)((char*)arg0 + 0x5e0), 0, 0x800);
    func_ov013_02185be0(arg0, *(void**)((char*)arg0 + 0x5e0));
    func_0205d5d0((Struct_0205d5d0*)((char*)arg0 + 0x34), 3, *(int*)((char*)arg0 + 0x5e0), 1);
#else
    memset(*(void**)((char*)arg0 + 0x658), 0, 0x960);
    func_ov013_02185be0(arg0, *(void**)((char*)arg0 + 0x658));
    func_0205d5d0((Struct_0205d5d0*)((char*)arg0 + 0x38), 3, *(int*)((char*)arg0 + 0x658), 1, 1);
#endif
}
