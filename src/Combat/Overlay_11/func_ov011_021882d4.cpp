#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct Struct_ov011_02184c30;
extern "C" int func_ov011_02184c30(struct Struct_ov011_02184c30* arg0);

extern "C" void* func_ov017_021b2164(void);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void func_ov023_021f6e90(char* arg0, int arg1, const void* arg2);

struct Struct_ov011_021882d4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_[8];
    short unknown_12_;
    short unknown_14_;
};

// USA: func_ov011_021882d4
extern "C" ARM int func_ov011_021882d4(struct Struct_ov011_02184c30* arg0, int arg1) {
    Struct_ov011_021882d4 var0;
    int var1;
    VectorizedMemset(&var0, 0, sizeof(var0));
    var0.unknown_12_ = -1;
    var0.unknown_14_ = -1;

    int var2 = func_ov011_02184c30(arg0);
    var0.unknown_12_ = (unsigned short)func_ov011_02184c30((struct Struct_ov011_02184c30*)((char*)arg0 + 8));
    {
        struct Struct_ov011_02184c30* var3 = (struct Struct_ov011_02184c30*)((char*)arg0 + 0x10);
        arg0 = (struct Struct_ov011_02184c30*)((char*)arg0 + 0x18);
        var0.unknown_14_ = (unsigned short)func_ov011_02184c30(var3);
    }

    var0.unknown_0_ = (unsigned char)(arg1 - 3);
    for (var1 = 0; var1 < var0.unknown_0_; var1++) {
        int var4 = func_ov011_02184c30(arg0);
        arg0 = (struct Struct_ov011_02184c30*)((char*)arg0 + 8);
        if (var1 < 8) var0.unknown_2_[var1] = (unsigned short)var4;
    }

    func_ov023_021f6e90((char*)func_ov011_021849c8(func_ov017_021b2164()), var2, &var0);
    return 1;
}
