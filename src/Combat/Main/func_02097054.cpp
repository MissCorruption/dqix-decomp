#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct Struct_02097054 {
    char unknown_0_[0xc];
    unsigned char unknown_c_;
    char unknown_d_[0x1f];
    union {
        char** unknown_2c_;
        unsigned int unknown1_2c_;
    };
};
struct Struct_02097054_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_0_ : 31;
    unsigned int unknown_7_7_ : 1;
    Struct_02097054 unknown_8_[1];
};
struct Struct_02097054_3 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_0_ : 31;
    unsigned int unknown_7_7_ : 1;
    Struct_02097054* unknown_8_;
    unsigned int* unknown_c_;
};
struct Struct_02097054_4 {
    unsigned short unknown_0_;
    char unknown_2_[6];
    Struct_02097054* unknown_8_;
    int unknown_c_;
};
struct Struct_02096fd8;
struct Struct_02097000_2;
struct Struct_02097000;
struct Struct_02097054_5;
struct Struct_02097054_6;
extern "C" int func_02096fd8(Struct_02096fd8*);
extern "C" int func_02097000(Struct_02097000_2*, void (*)(Struct_02097000_2*, Struct_02097000*));
extern "C" Struct_02097054_6* func_020971a8(Struct_02097054_5*, int, int (*)(Struct_02097054_6*));
extern "C" short func_02096f78(unsigned char*);
extern "C" char* func_02096f80(Struct_02097054_3*, unsigned int, int);
extern "C" char* func_020da150(SafeAllocator*, const char*);

// USA: func_02097054
extern "C" ARM void func_02097054(Struct_02097054_4* arg0, SafeAllocator* arg1, Struct_02097054_2* arg2, int arg3, short arg4) {
    Struct_02097054_3 var0;
    memset(arg0, 0, 0x10);
    if (arg4 < 0) return;
    if (arg2 != 0) {
        memcpy(&var0, arg2, 8);
        var0.unknown_8_ = arg2->unknown_8_;
        var0.unknown_c_ = (unsigned int*)((char*)arg2 + (8 + func_02096fd8((Struct_02096fd8*)&var0)));
        if (var0.unknown_7_7_ == 0) {
            func_02097000((Struct_02097000_2*)&var0, 0);
            var0.unknown_7_7_ = 1;
            arg2->unknown_7_7_ = 1;
        }
    }
    Struct_02097054* var1 = (Struct_02097054*)func_020971a8((Struct_02097054_5*)&var0, arg4, (int (*)(Struct_02097054_6*))func_02096f78);
    Struct_02097054* var2 = (Struct_02097054*)arg1->Allocate(0x30);
    if (var1 == 0 || var2 == 0) return;
    memcpy(var2, var1, 0x30);
    short var3 = var2->unknown_c_;
    char** var4 = (char**)arg1->Allocate(var3 * 4);
    unsigned int* var5 = (unsigned int*)(var0.unknown_8_ + var0.unknown_0_) + var1->unknown1_2c_;
    var2->unknown_2c_ = var4;
    for (int var6 = 0; var6 < var3; var6++) {
        unsigned int var7 = *var5;
        var5++;
        char* var8 = func_02096f80(&var0, var7, 0);
        *var4 = func_020da150(arg1, var8);
        var4++;
    }
    arg0->unknown_0_ = 1;
    arg0->unknown_8_ = var2;
}
