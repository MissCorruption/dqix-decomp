#include <globaldefs.h>

#include "Combat/DistanceSort.h"

struct Struct_020577cc;
extern "C" ARM void func_020577cc(struct Struct_020577cc* arg0, unsigned short* arg1, unsigned short* arg2);
extern "C" void _ZN8Object3D4DrawEb(void* arg0);

// USA: func_ov015_0218ee38
extern "C" ARM void func_ov015_0218ee38(void* arg0) {
    *(unsigned short*)((char*)arg0 + 0x34) = *(unsigned short*)((char*)arg0 + 0x36) = 0;
    if (*(int*)((char*)*(void**)((char*)arg0 + 0x28) + 0xc) != 0) {
        *(volatile unsigned int*)0x04000444 = 0;
        func_0205578c((int*)*(void**)((char*)arg0 + 0x28));
        *(volatile unsigned int*)0x04000448 = 1;
        void* var0 = *(void**)((char*)*(void**)((char*)arg0 + 0x28) + 4);
        if (var0 == 0) {
            *(unsigned short*)((char*)arg0 + 0x34) = 0;
            *(unsigned short*)((char*)arg0 + 0x36) = 0;
            return;
        }
        func_020577cc((struct Struct_020577cc*)var0, (unsigned short*)((char*)arg0 + 0x34), (unsigned short*)((char*)arg0 + 0x36));
        return;
    }
    *(volatile unsigned int*)0x04000444 = 0;
    _ZN8Object3D4DrawEb(*(void**)((char*)arg0 + 0x24));
    *(volatile unsigned int*)0x04000448 = 1;
    void* var1 = *(void**)((char*)arg0 + 0x24);
    var1 = *(void**)((char*)var1 + 8);
    var1 = *(void**)((char*)var1 + 0x54);
    *(unsigned short*)((char*)arg0 + 0x34) = *(unsigned short*)((char*)var1 + 0x28);
    void* var2 = *(void**)((char*)arg0 + 0x24);
    var2 = *(void**)((char*)var2 + 8);
    var2 = *(void**)((char*)var2 + 0x54);
    *(unsigned short*)((char*)arg0 + 0x36) = *(unsigned short*)((char*)var2 + 0x2a);
}
