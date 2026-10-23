#include <globaldefs.h>
#include "std_library_functions.h"
#include "Graphics/VRAMStaging.h"

extern const VRAMSubregion data_020e7b60[];

// USA: func_0204ac60
extern "C" ARM void func_0204ac60(int arg0, int arg1, char* arg2) {
    int var0;
    memcpy(&var0, arg2 + 8, 4);
    StageMemoryToVRAM(data_020e7b60[arg1], arg2 + 0xc, 0, var0, 1, 0);
}
