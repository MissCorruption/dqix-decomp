#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c3a4 { int unknown_0_; void* unknown_4_; };
struct Struct_0201c1c8 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };
extern "C" int func_020d2ff0(const char* arg0);
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);

struct Struct_ov015_0218b6e4 { int unknown_0_; int unknown_4_; };
struct Struct_ov015_0218ba1c { void* unknown_0_; Struct_ov015_0218b6e4* unknown_4_; void* unknown_8_; int unknown_c_; };
extern "C" void func_ov015_0218ba1c(struct Struct_ov015_0218ba1c* arg0, struct Struct_ov015_0218b6e4* arg1);

struct Struct_ov015_0218b6e4_2 {
    char* unknown_0_;
    unsigned short unknown_4_;
    unsigned char unknown_6_;
    Struct_ov015_0218b6e4_2* unknown_8_;
};

extern AllocatorUnion data_02114e20;
extern struct Struct_ov015_0218ba1c* data_ov015_02194560;

// USA: func_ov015_0218b6e4
extern "C" ARM int func_ov015_0218b6e4(char* arg0, int arg1) {
    char* var0 = arg0;
    arg0 = arg0 + 8;
    char* var1 = (char*)(void*)((Script::Parameter*)((struct Struct_0201c3a4*)var0))->ToString();
    struct Struct_ov015_0218b6e4 var2;
    var2.unknown_0_ = 0;
    var2.unknown_4_ = 0;
    if (var1 != 0) {
        int var3 = func_020d2ff0(var1);
        char* var4 = (char*)func_02012d88(&data_02114e20, var3 + 1);
        var2.unknown_0_ = (int)var4;
        if (var4 != 0) {
            strcpy(var4, var1);
        }
    }

    int var5 = 1;
    while (var5 < arg1) {
        struct Struct_ov015_0218b6e4_2* var6;
        char* var7 = (char*)(void*)((Script::Parameter*)((struct Struct_0201c3a4*)arg0))->ToString();
        int var8 = ((Script::Parameter*)((struct Struct_0201c1c8*)(arg0 + 8)))->ToInt();
        char* var9 = arg0 + 0x10;
        arg0 = arg0 + 0x18;
        int var10 = ((Script::Parameter*)((struct Struct_0201c1c8*)var9))->ToInt();

        var6 = (struct Struct_ov015_0218b6e4_2*)func_02012d88(&data_02114e20, 0xc);
        var6->unknown_0_ = 0;
        var6->unknown_4_ = 0;
        var6->unknown_6_ = 0;
        var6->unknown_8_ = 0;
        if (var7 != 0) {
            int var11 = func_020d2ff0(var7);
            char* var12 = (char*)func_02012d88(&data_02114e20, var11 + 1);
            var6->unknown_0_ = var12;
            if (var12 != 0) {
                strcpy(var12, var7);
            }
        }
        var6->unknown_4_ = (unsigned short)var8;
        var6->unknown_6_ = (unsigned char)var10;

        struct Struct_ov015_0218b6e4_2** var13 = (struct Struct_ov015_0218b6e4_2**)&var2.unknown_4_;
        while (*var13 != 0) {
            var13 = &(*var13)->unknown_8_;
        }
        *var13 = var6;

        var5 += 3;
    }

    func_ov015_0218ba1c(data_ov015_02194560, &var2);
    return 1;
}
