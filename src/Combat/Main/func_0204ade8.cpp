#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/VRAMStaging.h"

extern const int data_020e7b68[];

// USA: func_0204ade8
extern "C" ARM void func_0204ade8(void* arg0, int arg1, int arg2, unsigned char* arg3) {
    int var0;
    memcpy((char*)arg0 + 8, arg3 + 0xc, 4);
    var0 = *(int*)((char*)arg0 + 8);
    StageMemoryToVRAM((VRAMSubregion)(data_020e7b68[arg1] + arg2 * 2), arg3 + 0x10, 0, var0, 1, 0);
}
