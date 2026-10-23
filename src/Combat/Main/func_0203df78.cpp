#include <globaldefs.h>
extern "C" unsigned short* func_02040528(int*);

struct Struct_0203df78 { char unknown_0_[0xc]; void* unknown_c_[0x20]; };

// USA: func_0203df78
extern "C" ARM void* func_0203df78(void* arg0, int arg1) {
    int var0;
    for (var0 = 0; var0 < 0x20; var0++) {
        void* var1 = ((struct Struct_0203df78*)arg0)->unknown_c_[var0];
        if (var1 == NULL) continue;
        if (*(int*)var1 & 0x8000) continue;
        {
            unsigned short* var2 = func_02040528((int*)(var1));
            if (var2 == NULL) continue;
            if (*var2 == arg1) return ((struct Struct_0203df78*)arg0)->unknown_c_[var0];
        }
    }
    return NULL;
}
