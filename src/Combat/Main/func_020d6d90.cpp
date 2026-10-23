#include <globaldefs.h>
#include "Filesystem/FileIO.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);

struct Struct_020553ac;
extern "C" void func_020553ac(struct Struct_020553ac* arg0);
extern "C" int func_020553ec(void* arg0, int arg1, void* arg2, void* arg3, unsigned int arg4);

struct Struct_020d6d90 {
    unsigned char unknown_0_[0x1ec];
    struct Struct_020d6d90* unknown_1ec_;
};

struct Struct_020d6d90_2 { char unknown_0_[12]; };
struct Struct_020ee230 { Struct_020d6d90_2 unknown_0_[6]; };
extern const Struct_020ee230 data_020ee230;

struct Struct_020ee218 { int unknown_0_[6]; };
extern const Struct_020ee218 data_020ee218;

struct Struct_020d6d90_3 {
    char unknown_0_[0xa20];
    Struct_020d6d90* unknown_a20_;
    char unknown_a24_[0xa3c - 0xa24];
    unsigned char unknown_a3c_;
};

// USA: func_020d6d90
extern "C" ARM int func_020d6d90(Struct_020d6d90_3* arg0, const void* arg1, SafeAllocator* arg2, char* arg3) {
    Struct_020ee218 var0;
    Struct_020ee230 var1;
    Struct_020d6d90_2* var2;
    int* var3;
    Struct_020d6d90* var4;

    arg0->unknown_a3c_ = 0;
    arg0->unknown_a20_ = NULL;

    func_0207df90(arg3);

    var1 = data_020ee230;
    var0 = data_020ee218;

    var2 = &var1.unknown_0_[0];
    var3 = &var0.unknown_0_[0];
    var4 = NULL;

    while (var2->unknown_0_[0] != 0) {
        unsigned int var5;
        const void* var6;
        if (GetFileInNarc(arg1, var2->unknown_0_, &var6, &var5, 0)) {
            Struct_020d6d90* var7 = (Struct_020d6d90*)arg2->Allocate(0x1f0);
            void* var8 = arg2->Allocate(var5);
            if (var7 != NULL && var8 != NULL) {
                memcpy(var8, (void*)var6, var5);
                func_020553ac((struct Struct_020553ac*)var7);
                if (func_020553ec(var7, *var3, arg2, var8, var5) != 0) {
                    if (var4 != NULL) {
                        var4->unknown_1ec_ = var7;
                    } else {
                        arg0->unknown_a20_ = var7;
                    }
                    var4 = var7;
                }
            }
        }
        var2++;
        var3++;
    }

    func_0207dfac(arg3);
    return 1;
}
