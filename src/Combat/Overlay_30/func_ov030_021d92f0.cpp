#include <globaldefs.h>
#include "Memory/AllocatorLifecycle.h"

struct AllocatorUnion;
extern "C" void func_02012dbc(struct AllocatorUnion* arg0, void* arg1, int arg2);

#if defined(jpn)
enum { Enum_ov030_021d92f0_14016 = 0x33f8 };
#else
enum { Enum_ov030_021d92f0_14016 = 0x36c0 };
#endif

// USA: func_ov030_021d92f0
extern "C" ARM void func_ov030_021d92f0(void* arg0, struct AllocatorUnion* arg1, void** arg2) {
    if (arg0 != NULL) {
        func_02012dbc(arg1, arg0, 1);
    }
    if (*arg2 != NULL) {
        func_02012dbc(arg1, *arg2, Enum_ov030_021d92f0_14016);
        *arg2 = NULL;
    }
    func_02012de4(arg1);
}
