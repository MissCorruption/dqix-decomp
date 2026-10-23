#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_020407c4 { unsigned int unknown_0_[3]; };
struct Struct_020407c4_2;
extern "C" void func_020407c4(Struct_020407c4* arg0, Struct_020407c4_2* arg1);

struct Struct_ov001_021644c8 { int unknown_0_; char unknown_4_[8]; void* unknown_c_; };

// USA: func_ov001_021644c8
extern "C" ARM int func_ov001_021644c8(Struct_ov001_021644c8* arg0, int arg1, Vector3i* arg2) {
    Struct_ov001_021644c8* var0;
    void* var1;
    if (arg1 < 0 || arg1 >= 0x20) return 0;
    var0 = &arg0[arg1];
    switch (var0->unknown_0_) {
        case 0:
        case 1:
        case 4:
        case 5:
            var1 = var0->unknown_c_;
            if (var1 == 0) return 0;
            *arg2 = *(Vector3i*)((char*)var1 + 0x50);
            return 1;
        case 2:
        case 6: {
            Struct_020407c4 var2;
            var1 = var0->unknown_c_;
            if (var1 == 0) return 0;
            func_020407c4(&var2, (Struct_020407c4_2*)var1);
            *arg2 = *(Vector3i*)&var2;
            return 1;
        }
        default:
            return 0;
    }
}
