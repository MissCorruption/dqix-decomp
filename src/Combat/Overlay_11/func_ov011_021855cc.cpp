#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" void* func_ov017_021b2164(void);
extern "C" int func_ov011_021849d8(void* arg0);
extern "C" void func_ov011_021849d0(void* arg0, int arg1);

// USA: func_ov011_021855cc
extern "C" ARM int func_ov011_021855cc(void) {
    void* var0 = func_ov017_021b2164();
    int var1 = func_ov011_021849d8(var0);
    int var2 = (int)BackgroundLoader::GetInstance();
    ((BackgroundLoader*)(var2))->RemoveTask((int)(var1));
    func_ov011_021849d0(var0, -1);
    return 1;
}
