#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void* func_ov001_02159f54(void*);

struct Struct_ov001_0215a480 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};

// USA: func_ov001_0215a480
extern "C" ARM void func_ov001_0215a480(void* arg0, struct Struct_ov001_0215a480 arg1, unsigned int arg2, unsigned int arg3) {
    void* var0 = func_ov001_02159f54(arg0);
    if (var0 != NULL) {
        *(int*)var0 = 8;
        memcpy((char*)var0 + 0x4, &arg1, sizeof(arg1));
        *(unsigned int*)((char*)var0 + 0x10) = arg2;
        *(unsigned int*)((char*)var0 + 0x14) = arg3;
    }
}
