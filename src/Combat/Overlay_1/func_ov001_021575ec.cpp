#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov001_02156ba0;
extern "C" void func_ov001_02156ba0(struct Struct_ov001_02156ba0* arg0);

// USA: func_ov001_021575ec
extern "C" ARM void func_ov001_021575ec(void* arg0) {
    char* var0 = (char*)arg0;
    for (int var1 = 0; var1 < 0x10; var1++) {
        memset(var0 + var1 * 0xc, 0, 0xc);
        memset(var0 + 0xc0 + var1 * 0xc, 0, 0xc);
    }
    *(int*)(var0 + 0x180) = 0;
    *(int*)(var0 + 0x8c0) = 0;
    *(int*)(var0 + 0x184) = 0;
    func_ov001_02156ba0((struct Struct_ov001_02156ba0*)(var0 + 0x188));
    func_ov001_02156ba0((struct Struct_ov001_02156ba0*)(var0 + 0x524));
}
