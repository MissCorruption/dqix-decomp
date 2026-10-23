#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

extern "C" void* func_ov017_021b2164(void);
extern "C" int func_ov011_021849d8(void* arg0);
extern "C" unsigned int func_ov011_02184c68(unsigned int, unsigned int);

// USA: func_ov011_02185600
extern "C" ARM int func_ov011_02185600(unsigned int arg0) {
    int var0 = func_ov011_021849d8(func_ov017_021b2164());
    int var1 = (int)BackgroundLoader::GetInstance();
    int var2 = ((BackgroundLoader*)(var1))->GetTaskStatus((int)(var0));
    func_ov011_02184c68(arg0, var2 == 0);
    return 1;
}
