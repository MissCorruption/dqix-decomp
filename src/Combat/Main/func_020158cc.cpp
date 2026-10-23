#include <globaldefs.h>
#include "World/LootableContainer.h"
#include "World/Zone3D.h"
#include "NitroSDK/Matrix.h"

extern "C" void func_020c52e8();
extern "C" void func_020c5414();
extern "C" void func_020c57d4(int, int, int, int, void*);
extern "C" void func_020c5770(int, int, int, int, int, int, int, int, void*);
extern "C" int func_02015ef4(Zone3D*, int);
extern const Vector3fix data_020e6e08;
extern const Vector3fix data_020e6e14;

// USA: func_020158cc
extern "C" ARM void func_020158cc(Zone3D* arg0) {
    if (LootableContainerManager::GetMainInstance() != NULL &&
        arg0->pUnknownStruct_8_ != NULL) {
        Vector3fix var0 = data_020e6e08;
        Vector3fix var1 = {0};
        Vector3fix var2 = data_020e6e14;
        func_020c52e8();
        func_020c5414();
        *(volatile unsigned int*)0x04000440 = 0;
        func_020c57d4((int)&var1, (int)&var2, (int)&var0, 1, NULL);
        func_020c5770(0, 0xc0000, 0, 0x100000,
            -0x400000, 0x400000, 0x400000, 1, NULL);
        *(volatile unsigned int*)0x04000440 = 2;
        for (int var3 = 0; var3 < arg0->numChests_; ++var3)
            func_02015ef4(arg0, var3);
    }
}
