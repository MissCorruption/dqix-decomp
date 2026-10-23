#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"

extern "C" void func_ov023_021e61a0(void* arg0);

// USA: func_ov023_021e4f18
extern "C" ARM void func_ov023_021e4f18(void* arg0) {
    func_ov023_021e61a0(arg0);
    for (int var0 = 0; var0 < 10; var0++) {
        ((Object3D*)((char*)arg0 + var0 * 0xac))->Initialize();
        ((SafeAllocator*)((char*)arg0 + 0x6b8 + var0 * 0x14))->Destroy();
    }
    ((SafeAllocator*)((char*)arg0 + 0x780))->Destroy();
}
