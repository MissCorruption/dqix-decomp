#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_ov001_02157668(void* arg0);

struct Struct_ov001_02157570 { int unknown_0_, unknown_4_, unknown_8_; };
extern "C" void func_ov001_02157890(char* arg0, struct Struct_ov001_02157570* arg1, struct Struct_ov001_02157570* arg2);

struct Struct_ov009_0218aa28 { int unknown_0_, unknown_4_, unknown_8_; };
extern "C" void Vector3fix_Subtract(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2);

// USA: func_ov001_02158384
extern "C" ARM int func_ov001_02158384(int arg0, char* arg1) {
    if (*(int*)(arg1 + 0x38) <= 0) {
        func_ov001_02157668(arg1 + 0x15c);
        *(int*)(arg1 + 0xa1c) = 1;
        *(int*)(arg1 + 0x38) = 1;
    }

    struct Struct_ov001_02157570 var0, var1;
    func_ov001_02157890(arg1 + 0x15c, &var0, &var1);

    struct Struct_ov009_0218aa28 var2;
    var2.unknown_0_ = *(int*)(arg1 + 0x64);
    var2.unknown_4_ = *(int*)(arg1 + 0x68);
    var2.unknown_8_ = *(int*)(arg1 + 0x6c);

    Vector3fix_Subtract((struct Struct_ov009_0218aa28*)&var0, &var2, (struct Struct_ov009_0218aa28*)(arg1 + 0x128));
    Vector3fix_Subtract((struct Struct_ov009_0218aa28*)&var1, (struct Struct_ov009_0218aa28*)(arg1 + 0x58), (struct Struct_ov009_0218aa28*)(arg1 + 0x11c));

    memcpy(&var2, &var0, 0xc);
    memcpy(arg1 + 0x58, &var1, 0xc);

    if (var2.unknown_0_ >= 0x647a) {
        var2.unknown_0_ -= 0x647a;
    }

    *(int*)(arg1 + 0x64) = var2.unknown_0_;
    *(int*)(arg1 + 0x68) = var2.unknown_4_;
    *(int*)(arg1 + 0x6c) = var2.unknown_8_;

    int var3 = (*(int*)(arg1 + 0xa1c) == 0) ? 1 : 0;
    if (var3) {
        var3 = 0;
        *(int*)(arg1 + 0x38) = var3;
    } else {
        var3 = 1;
    }
    return var3;
}
