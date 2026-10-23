#include <globaldefs.h>
#include "std_library_functions.h"

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);

struct Struct_0203c108_3;
extern "C" void func_0203c108(struct Struct_0203c108_3* arg0, char* arg1);

extern "C" int func_ov000_021719f8(int* arg0);

// USA: func_ov000_0217f480
extern "C" ARM void func_ov000_0217f480(char* arg0) {
    char* var0 = arg0 + 8;
    memset(var0 + 8, 0, 8);
    *(var0 + 0x10) = 0;
    char var1 = *(arg0 + 0x18);
    *(var0 + 8 + var1) = 0xd;
    char var2 = *(var0 + 0x10);
    var2 = var2 + 1;
    *(var0 + 0x10) = var2;
    char var3 = *(arg0 + 0x18);
    *(var0 + 8 + var3) = 0x64;
    *(var0 + 0x14) = 6;
    *(unsigned short*)(var0 + 0x1e) = 0;
    if (!func_ov000_021719f8((int*)arg0)) {
        int var4 = func_020e0434(*(struct Struct_0201099c_3**)(arg0 + 4), 0x7531);
        func_0203c108((struct Struct_0203c108_3*)(arg0 + 0x50), (char*)var4);
    }
    *(unsigned char*)(arg0 + 0x24) &= ~4;
}
