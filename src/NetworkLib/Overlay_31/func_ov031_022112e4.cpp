#include <globaldefs.h>

struct Struct_ov031_0224e590 {
    int* unknown_0_;
};

extern Struct_ov031_0224e590 data_ov031_0224e590;

// USA: func_ov031_022112e4
extern "C" ARM void* func_ov031_022112e4(void) {
    int* var0 = data_ov031_0224e590.unknown_0_;
    if (var0 != NULL) {
        if (*(int*)((char*)var0 + 0x30) == 0) {
            return *(void**)((char*)var0 + 0x2c);
        }
    }
    return NULL;
}
