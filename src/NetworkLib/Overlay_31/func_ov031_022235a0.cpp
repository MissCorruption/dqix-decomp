#include <globaldefs.h>
#include "Resource/UiArrayEntry.h"

extern Struct_ov031_022276b4* data_ov031_02290c4c;

extern "C" void* func_ov031_0223c560(int arg0, int arg1);
extern "C" int func_ov031_022236d0(void);
extern "C" void func_ov031_0223c980(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" void func_ov031_0223caec(void* arg0);

// USA: func_ov031_022235a0
extern "C" ARM void func_ov031_022235a0(void* arg0) {
    void* var0 = func_ov031_0223c560(0, 0);
    int var1 = func_ov031_022276b4(data_ov031_02290c4c, (unsigned int)arg0);
    int var2 = func_ov031_022236d0();
    func_ov031_0223c980(var0, 0xd, 0x28, 0xe6, 0x70, 2, var2, var1);
    func_ov031_0223caec(var0);
}
