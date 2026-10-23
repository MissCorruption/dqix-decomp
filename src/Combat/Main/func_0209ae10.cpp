#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };

struct Struct_0209ad40_3;
extern "C" Struct_0209ad40_3* func_0209b9c0(Struct_0209ad40_3* arg0, int arg1);

struct Struct_0209ae10;
extern "C" void func_0209b9a8(Struct_0209ae10* arg0, int arg1, int arg2, unsigned int* arg3);

extern void* data_02109bac;

// USA: func_0209ae10
extern "C" ARM int func_0209ae10(struct Struct_0201c1c8* arg0) {
    char* var0 = (char*)data_02109bac;
    if (*(int*)(var0 + 0x8) == 0) return 1;

    char* var1 = *(char**)(var0 + 0x0);
    int var2 = *(int*)(var1 + 0x1c8);
    int var3 = *(int*)(var1 + 0x1d0);

    unsigned int var4 = (unsigned int)((Script::Parameter*)arg0)->ToInt();

    var1 = *(char**)((char*)data_02109bac + 0x0);
    func_0209b9a8((Struct_0209ae10*)var1, var2, var3, &var4);

    *(int*)(*(char**)(char*)data_02109bac + 0x1d0) = var3 + 1;

    var1 = *(char**)((char*)data_02109bac + 0x0);
    struct Struct_0209ad40_3* var5 = func_0209b9c0((Struct_0209ad40_3*)var1, var2);
    if (var5 != 0) {
        unsigned char* var6 = (unsigned char*)var5 + 3;
        *var6 = *var6 + 1;
    }
    return 1;
}
