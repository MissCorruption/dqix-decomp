#include <globaldefs.h>

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

extern "C" void func_020ca3b8(void* src, void* dst, unsigned int len);

struct Struct_020c99c8 { unsigned short unknown_0_0_ : 3; };
struct Struct_020c99c8_2 { unsigned char unknown_0_0_ : 4; };

// USA: func_020c99c8
extern "C" ARM void func_020c99c8(void* arg0) {
    char* var0 = (char*)arg0;
    unsigned char* var1 = (unsigned char*)0x27ffc80;
    var0[0] = ((struct Struct_020c99c8*)(var1 + 0x64))->unknown_0_0_;
    var0[1] = ((struct Struct_020c99c8_2*)(var1 + 2))->unknown_0_0_;
    var0[2] = var1[3];
    var0[3] = var1[4];
    *(unsigned short*)(var0 + 0x1a) = (unsigned char)var1[0x1a];
    *(unsigned short*)(var0 + 0x52) = (unsigned char)var1[0x50];
    func_020ca3b8(var1 + 6, var0 + 4, 0x14);
    func_020ca3b8(var1 + 0x1c, var0 + 0x1c, 0x34);
    *(unsigned short*)(var0 + 0x18) = 0;
    *(unsigned short*)(var0 + 0x50) = 0;
}
