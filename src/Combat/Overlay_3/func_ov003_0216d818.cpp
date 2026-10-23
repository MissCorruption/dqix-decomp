// USA: func_ov003_0216d818
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" int func_020421a0();
extern "C" void func_02043204(char* obj);

struct Entry_0205d6a0;
extern "C" void func_0205d6a0(struct Entry_0205d6a0* a, int flag);

extern "C" void func_ov003_0216d77c(void* obj);

extern "C" ARM void func_ov003_0216d818(char* obj) {
    BackgroundLoader::AddLockGlobal();
    BackgroundLoader::FreeAllocationsGlobal();
    func_02043204((char*)func_020421a0());
#if defined(jpn)
    enum { entriesOffset = 0x1150 };
#else
    enum { entriesOffset = 0x12c0 };
#endif
    func_0205d6a0(*(struct Entry_0205d6a0**)(obj + entriesOffset), 0);
    func_ov003_0216d77c(obj);
}
