#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0204a120_2;
extern "C" void func_020a2cf0(struct Struct_0204a120_2* arg0);
extern "C" void func_0202e08c(unsigned int* arg0, unsigned int arg1);
extern "C" void func_020a0d58(void* arg0);
extern "C" void func_020a2ca0(unsigned char* arg0);
extern "C" void func_020a2718(char* arg0);

// USA: func_020a2010
extern "C" ARM void func_020a2010(void* arg0) {
    char* var0 = (char*)arg0;

    func_020a2cf0((struct Struct_0204a120_2*)arg0);
    func_0202e08c((unsigned int*)arg0, 4);

    *(int*)(var0 + 0x220) = 0;
    *(int*)(var0 + 0x224) = 0x6000;
    *(int*)(var0 + 0x228) = 0xb000;
    *(short*)(var0 + 0x21c) = -1;
    *(int*)(var0 + 0x22c) = 0;
    *(int*)(var0 + 0x230) = 0;
    *(int*)(var0 + 0x234) = 0;
    *(int*)(var0 + 0x238) = 1;
    *(int*)(var0 + 0x23c) = 1;
    *(int*)(var0 + 0x240) = 1;
    var0[0x244] = 0;
    var0[0x245] = 0;
    *(short*)(var0 + 0x246) = 0;

    func_020a0d58(var0 + 0x248);

    var0[0x270] = (char)0xff;
    *(int*)(var0 + 0x274) = 0;
    *(int*)(var0 + 0x278) = 0;
    *(int*)(var0 + 0x27c) = 0;
    *(int*)(var0 + 0x280) = 0;
    *(int*)(var0 + 0x284) = 0;
    *(int*)(var0 + 0x288) = 0;
    *(int*)(var0 + 0x28c) = 0;
    *(int*)(var0 + 0x290) = 0;
    *(int*)(var0 + 0x294) = 0;

    memset(var0 + 0x298, 0, 0x2c);

    *(short*)(var0 + 0x21e) = 0;

    func_020a2ca0((unsigned char*)var0);
    func_020a2718(var0);
}
