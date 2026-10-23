#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "World/Object3D.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void* arg0);
extern "C" void func_ov017_021b621c(void* arg0, SafeAllocator* arg1, void* arg2);
extern SafeAllocator* data_ov001_021658b8[8];

struct Struct_020469f8;
struct Struct_020469f8_2;
extern "C" void func_020469f8(struct Struct_020469f8* arg0, struct Struct_020469f8_2* arg1);

struct Struct_ov001_02163ccc { int unknown_0_; int unknown_4_; int unknown_8_; unsigned char* unknown_c_; };
struct Struct_ov001_02165880 { char unknown_0_[4]; Struct_ov001_02163ccc* unknown_4_; };
extern struct Struct_ov001_02165880 data_ov001_02165880;

// USA: func_ov001_02163ccc
extern "C" ARM int func_ov001_02163ccc(char* arg0, int arg1) {
    SafeAllocator* var0;
    char* var1;
    int var2;
    unsigned char* var3;
    char* var4;
    char* var5;
    int var6;

    var0 = data_ov001_021658b8[0];
    var1 = (char*)GetGameResources();
#if defined(jpn)
    var4 = *(char**)(var1 + 0x3000 + 0x4ec);
    var5 = *(char**)(var1 + 0x3000 + 0x93c);
#else
    var4 = *(char**)(var1 + 0x3000 + 0x6fc);
    var5 = *(char**)(var1 + 0x3000 + 0xb5c);
#endif

    if (arg1 < 1) {
        func_ov017_021b621c(var5, var0, 0);
        func_020469f8((struct Struct_020469f8*)var4, (struct Struct_020469f8_2*)var5);
    } else {
        var6 = func_ov017_021d60f4(arg0);
        var2 = -1;
        if (arg1 >= 2) {
            var2 = func_ov017_021d60f4(arg0 + 0x8);
        }
        var3 = 0;
        if (var6 > 0) {
            if (data_ov001_02165880.unknown_4_[var6].unknown_0_ == 1) {
                var3 = data_ov001_02165880.unknown_4_[var6].unknown_c_;
            }
            if (var3 == 0) return 0;
            ((Object3D*)var3)->MakeVisible();
            ((Object3D*)var3)->EnableFlag(0x40000000);
        }
        func_ov017_021b621c(var5, var0, var3);
        *(short*)(var5 + 0xfe) = (short)var2;
        func_020469f8((struct Struct_020469f8*)var4, (struct Struct_020469f8_2*)var5);
    }
    var5[8] = 0;
#if defined(jpn)
    (*(char**)(var1 + 0x3000 + 0x524))[0x96] = 1;
#else
    (*(char**)(var1 + 0x3000 + 0x734))[0x9a] = 1;
#endif
    return 1;
}
