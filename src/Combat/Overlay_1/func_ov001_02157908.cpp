#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_ov001_02156ba0;
extern "C" void func_ov001_02156ba0(Struct_ov001_02156ba0* arg0);

// USA: func_ov001_02157908
extern "C" ARM void func_ov001_02157908(void* arg0) {
    int var0;
    for (var0 = 0; var0 < 0x10; var0++) {
        memset((char*)arg0 + var0 * 0xc, 0, 0xc);
    }
    *(int*)((char*)arg0 + 0xc0) = 0;
    *(int*)((char*)arg0 + 0xc4) = 0;
    func_ov001_02156ba0((Struct_ov001_02156ba0*)((char*)arg0 + 0xc8));
    *(int*)((char*)arg0 + 0x464) = 0;
    *(int*)((char*)arg0 + 0x468) = 0;
}
