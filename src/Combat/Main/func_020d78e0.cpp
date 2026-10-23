#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_0214e33c {
    short unknown_0_;
    short unknown_2_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
};
extern struct Struct_0214e33c data_0214e33c;

struct Struct_020d78e0 {
    short unknown_0_;
    short unknown_2_;
    int unknown_4_;
    void* unknown_8_;
};

// USA: func_020d78e0
extern "C" ARM void func_020d78e0(void** arg0, void* arg1) {
    void** var0 = arg0;
    while (*var0 != NULL) {
        var0 = (void**)((char*)*var0 + 8);
    }
    struct Struct_020d78e0* var1 = (struct Struct_020d78e0*)((SafeAllocator*)data_0214e33c.unknown_8_)->Allocate(0xc);
    *var0 = var1;
    if (var1 == NULL) return;
    var1->unknown_0_ = -1;
    var1->unknown_2_ = -1;
    var1->unknown_4_ = 0;
    var1->unknown_8_ = NULL;
    memcpy(*var0, arg1, 8);
}
