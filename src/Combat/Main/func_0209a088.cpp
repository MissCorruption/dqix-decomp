#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0209a088_2 {
    unsigned int unknown_0_0_ : 12;
    unsigned int : 19;
    unsigned int unknown_3_7_ : 1;
};

struct Struct_0209a088 {
    struct Struct_0209a088_2 unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
};

// USA: func_0209a088
extern "C" ARM void func_0209a088(struct Struct_0209a088* arg0, struct Struct_0209a088_2* arg1) {
    if (arg1 == NULL) return;
    memcpy(&arg0->unknown_0_, arg1, 4);
    arg0->unknown_4_ = (void*)(arg1 + 1);
    arg0->unknown_8_ = (char*)arg1 + (arg0->unknown_0_.unknown_0_0_ * 0x2c + 4);
    if (arg0->unknown_0_.unknown_3_7_) return;
    arg0->unknown_0_.unknown_3_7_ = 1;
    arg1->unknown_3_7_ = 1;
}
