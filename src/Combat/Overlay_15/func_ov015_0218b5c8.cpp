#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c3a4;
struct Struct_0201c1c8;
extern "C" int func_020d2ff0(const char* arg0);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);

struct Struct_ov015_0218b5c8 {
    int unknown_0_;
    int unknown_4_;
    unsigned short unknown_8_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
};
struct Struct_ov015_0218b9d4 {
    Struct_ov015_0218b5c8* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
extern "C" void func_ov015_0218b9d4(struct Struct_ov015_0218b9d4* arg0, struct Struct_ov015_0218b5c8* arg1);

extern AllocatorUnion data_02114e20;
extern struct Struct_ov015_0218b9d4* data_ov015_02194560;

// USA: func_ov015_0218b5c8
extern "C" ARM int func_ov015_0218b5c8(char* arg0) {
    char* var0 = (char*)(void*)((Script::Parameter*)((struct Struct_0201c3a4*)arg0))->ToString();
    char* var1 = (char*)(void*)((Script::Parameter*)((struct Struct_0201c3a4*)(arg0 + 8)))->ToString();
    int var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x10)))->ToInt();
    int var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x18)))->ToInt();
    int var4 = ((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 0x20)))->ToInt();

    struct Struct_ov015_0218b5c8 var5;
    var5.unknown_0_ = 0;
    var5.unknown_4_ = 0;
    var5.unknown_8_ = 0;
    var5.unknown_a_ = 0;
    var5.unknown_b_ = 0;

    if (var0 != 0) {
        int var6 = func_020d2ff0(var0);
        char* var7 = (char*)func_02012d88(&data_02114e20, var6 + 1);
        var5.unknown_0_ = (int)var7;
        if (var7 != 0) {
            strcpy(var7, var0);
        }
    }
    if (var1 != 0) {
        int var8 = func_020d2ff0(var1);
        char* var9 = (char*)func_02012d88(&data_02114e20, var8 + 1);
        var5.unknown_4_ = (int)var9;
        if (var9 != 0) {
            strcpy(var9, var1);
        }
    }

    var5.unknown_8_ = (unsigned short)var2;
    var5.unknown_a_ = (unsigned char)var3;
    var5.unknown_b_ = (unsigned char)var4;
    func_ov015_0218b9d4(data_ov015_02194560, &var5);
    return 1;
}
