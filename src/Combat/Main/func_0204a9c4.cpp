#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/VRAMStaging.h"

extern const int data_020e7b70[];

// USA: func_0204a9c4
extern "C" ARM void func_0204a9c4(int* arg0, int arg1, int arg2, char* arg3) {
    int var0;
    if (arg3 == NULL) return;
    memcpy(&var0, arg3 + 0xc, 4);
    StageMemoryToVRAM((VRAMSubregion)(data_020e7b70[arg1] + arg2 * 2), arg3 + 0x10, *arg0, var0, true, false);
}
