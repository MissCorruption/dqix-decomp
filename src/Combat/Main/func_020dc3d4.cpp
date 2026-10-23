#include <globaldefs.h>

#include "Resource/GameResources.h"
#include "Combat/MapDisplay.h"
extern "C" int func_02012fe4(void);
extern "C" int sprintf(char* arg0, const char* arg1, ...);

struct Struct_020dc3d4;
extern "C" void func_020e063c(Struct_020dc3d4* arg0, int arg1, int arg2);

extern char data_020f2948[];
extern char data_020f294f[];

// USA: func_020dc3d4
extern "C" ARM void func_020dc3d4(void) {
    char var0[0x18];
    GameResources* var1 = GetGameResources();
    Struct_02020554* var2 = var1->unknown_ptr_36d0;
    func_02020720(var2);
    sprintf(var0, data_020f2948, func_02012fe4() + 0x26);
    func_020e063c((Struct_020dc3d4*)var2, (int)data_020f294f, (int)var0);
}
