#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0205de24_2;

extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);
extern "C" void func_ov002_0215be00(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov002_021607cc(void* arg0, void* arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205d304(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
#else
extern "C" void func_0205d304(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
#endif

// USA: func_ov002_02160734
#if defined(jpn)
extern "C" ARM void func_ov002_02160734(unsigned char* arg0) {
    func_0205de24((struct Struct_0205de24_2*)(arg0 + 0xe20), 0, 2);

    func_ov002_0215be00(arg0, (*(int*)(arg0 + 0x1a80)) & 0xff, 1, 1);

    memset(*(void**)(arg0 + 0x1a98), 0, 0x800);

    func_ov002_021607cc(arg0, *(void**)(arg0 + 0x1a98), 0);

    func_0205d304(arg0 + 0xe20, *(int*)(arg0 + 0x1a98), 0, 0, 0, 1, 0);
}
#else
extern "C" ARM void func_ov002_02160734(unsigned char* arg0) {
    func_0205de24((struct Struct_0205de24_2*)(arg0 + 0x2c8 + 0xc00), 0, 2);

    func_ov002_0215be00(arg0, (*(int*)(arg0 + 0x1000 + 0xbb8)) & 0xff, 1, 1);

    memset(*(void**)(arg0 + 0x1000 + 0xbd0), 0, 0x960);

    func_ov002_021607cc(arg0, *(void**)(arg0 + 0x1000 + 0xbd0), 0);

    func_0205d304(arg0 + 0x2c8 + 0xc00, *(int*)(arg0 + 0x1000 + 0xbd0), 0, 0, 0, 1, 0, 0);
}
#endif
