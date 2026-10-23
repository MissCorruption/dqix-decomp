#include <globaldefs.h>

extern "C" void func_020d21f8(void);
extern "C" void func_020d220c(void);

struct Struct_020d2eec { char unknown_0_[0x3c]; int unknown_3c_[1]; };

// USA: func_020d2eec
extern "C" ARM void* func_020d2eec(void* arg0, int arg1) {
    void* var0;
    int var1;
    func_020d21f8();
    var1 = ((struct Struct_020d2eec*)arg0)->unknown_3c_[arg1];
    if (var1 != 0) {
        if ((unsigned int)var1 < 0x2000000) {
            var0 = (char*)arg0 + var1;
        } else {
            var0 = (void*)var1;
        }
    } else {
        var0 = NULL;
    }
    func_020d220c();
    return var0;
}
