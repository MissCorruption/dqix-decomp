#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

struct Struct_0205d67c;
extern "C" int func_0205d67c(struct Struct_0205d67c*);

// USA: func_ov023_021d8ddc
extern "C" ARM void func_ov023_021d8ddc(void* arg0, int* arg1) {
    GameState::GetInstance();
    unsigned char* var0 = (unsigned char*)arg0 + 0x124;
    unsigned char var1 = *((unsigned char*)arg0 + 0x128);
    memset((char*)arg0 + 0xdc, 0, 0x10);
    for (int var2 = 0; var2 < var1; var2++) {
        *(int*)((char*)arg0 + 0xdc + var2 * 4) = arg1[var0[var2]];
    }
    int var3 = func_0205d67c((struct Struct_0205d67c*)((char*)arg0 + 0x20));
    if (var3 == 0) {
        *((unsigned char*)arg0 + 0x11c) = 0;
    } else {
        *((unsigned char*)arg0 + 0x11c) = 1;
    }
    *((unsigned char*)arg0 + 0x11a) = 1;
}
