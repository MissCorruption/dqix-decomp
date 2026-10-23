#include <globaldefs.h>

struct Struct_02064530 {
    char unknown_0_[0x14];
    struct Struct_02064530* unknown_14_;  // 0x14
};

extern "C" int func_02061c04(void*, struct Struct_02064530*, void*);

// USA: func_02064530
extern "C" ARM int func_02064530(void* arg0, struct Struct_02064530* arg1, void* arg2) {
    while (arg1 != NULL) {
        if (func_02061c04(arg0, arg1, arg2) == 0) return 0;
        arg1 = arg1->unknown_14_;
    }
    return 1;
}
