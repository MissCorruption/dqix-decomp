#include <globaldefs.h>

struct Struct_02064490_3 {
    char unknown_0_[0xc];
    struct Struct_02064490_3* unknown_c_;  // 0xc
};

extern "C" int func_0205faf4(void*, struct Struct_02064490_3*, void*);

// USA: func_02064704
extern "C" ARM int func_02064704(void* arg0, struct Struct_02064490_3* arg1, void* arg2) {
    while (arg1 != NULL) {
        if (func_0205faf4(arg0, arg1, arg2) == 0) break;
        arg1 = arg1->unknown_c_;
    }
    return arg1 == NULL;
}
