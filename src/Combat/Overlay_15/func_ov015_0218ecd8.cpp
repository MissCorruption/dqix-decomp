#include <globaldefs.h>
#include "NitroSDK/NSBXX/RenderConfig.h"

struct Struct_0208b5b4 { int unknown_0_, unknown_4_, unknown_8_; };

extern "C" void func_0208b5b4(struct Struct_0208b5b4 arg0, struct Struct_0208b5b4 arg1, short arg2, unsigned short arg3);
extern "C" void _ZN8Object3D4DrawEb(void* arg0);

// USA: func_ov015_0218ecd8
extern "C" ARM void func_ov015_0218ecd8(void* arg0) {
    if (*(void**)((char*)arg0 + 0x10) != 0 && *(unsigned char*)((char*)*(void**)arg0 + 0x19e) != 0) {
        struct Struct_0208b5b4 var0 = *(struct Struct_0208b5b4*)((char*)*(void**)((char*)arg0 + 0x24) + 0x44);
        struct Struct_0208b5b4 var1;
        var1.unknown_0_ = *(short*)((char*)*(void**)((char*)arg0 + 0x10) + 0xc) * 4;
        var1.unknown_4_ = *(short*)((char*)*(void**)((char*)arg0 + 0x10) + 0xe);
        var1.unknown_8_ = var1.unknown_0_;
        RenderConfig::SubmitToFifo();
        func_0208b5b4(var0, var1, 0, 0x7fff);
    }
    *(volatile unsigned int*)0x04000444 = 0;
    _ZN8Object3D4DrawEb(*(void**)((char*)arg0 + 0x24));
    RenderConfig::SubmitToFifo();
    *(volatile unsigned int*)0x04000448 = 1;
    *(unsigned short*)((char*)arg0 + 0x34) = *(unsigned short*)((char*)arg0 + 0x36) = 0;
    void* var2 = *(void**)((char*)arg0 + 0x24);
    var2 = *(void**)((char*)var2 + 8);
    var2 = *(void**)((char*)var2 + 0x54);
    *(unsigned short*)((char*)arg0 + 0x34) = *(unsigned short*)((char*)var2 + 0x28);
    void* var3 = *(void**)((char*)arg0 + 0x24);
    var3 = *(void**)((char*)var3 + 8);
    var3 = *(void**)((char*)var3 + 0x54);
    *(unsigned short*)((char*)arg0 + 0x36) = *(unsigned short*)((char*)var3 + 0x2a);
}
