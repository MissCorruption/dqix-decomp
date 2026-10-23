#include <globaldefs.h>

extern "C" char* func_0204673c(char* arg0, char* arg1);

struct Struct_020467c0 {
    char unknown_0_[0x40];
    unsigned int unknown_40_;
    unsigned int unknown_44_;
    unsigned int unknown_48_;
};

// USA: func_020467c0
extern "C" ARM char* func_020467c0(void* arg0, char* arg1, unsigned int* arg2) {
    Struct_020467c0* var0 = (Struct_020467c0*)func_0204673c((char*)arg0, arg1);
    if (var0 == NULL) return NULL;
    if (arg2 != NULL) *arg2 = var0->unknown_44_;
    return (char*)var0 + var0->unknown_40_;
}
