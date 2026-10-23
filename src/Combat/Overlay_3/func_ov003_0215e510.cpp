#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_0201c3a4 {
    int unknown_0_;
    void* unknown_4_;
};

extern "C" int func_020d2ff0(const char* arg0);

struct Struct_ov003_0215e498 {
    short unknown_0_;
    short unknown_2_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    short unknown_10_;
};
extern "C" void func_ov003_0215e498(struct Struct_ov003_0215e498* arg0);

struct Struct_ov003_0215e510 {
    short unknown_0_;
    short unknown_2_;
    int unknown_4_;
    int unknown_8_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_;
};
struct Struct_ov003_0215e790;
extern "C" void func_ov003_0215e790(struct Struct_ov003_0215e790* arg0, struct Struct_ov003_0215e510* arg1);

struct Struct_ov003_0215e510_2 {
    struct Struct_0201c1c8 unknown_0_;
    struct Struct_0201c1c8 unknown_8_;
    struct Struct_0201c1c8 unknown_10_;
    struct Struct_0201c3a4 unknown_18_;
    struct Struct_0201c3a4 unknown_20_;
    struct Struct_0201c1c8 unknown_28_;
    struct Struct_0201c1c8 unknown_30_;
    struct Struct_0201c1c8 unknown_38_;
};

struct Struct_ov003_02180cb8 {
    void* unknown_0_;
    struct Struct_ov003_0215e790* unknown_4_;
};
extern struct Struct_ov003_02180cb8 data_ov003_02180cb8;

// USA: func_ov003_0215e510
extern "C" ARM int func_ov003_0215e510(struct Struct_ov003_0215e510_2* arg0) {
    struct Struct_ov003_0215e510 var0;
    func_ov003_0215e498((struct Struct_ov003_0215e498*)&var0);

    var0.unknown_10_ = (short)((Script::Parameter*)&arg0->unknown_0_)->ToInt();
    var0.unknown_0_ = (short)((Script::Parameter*)&arg0->unknown_8_)->ToInt();
    var0.unknown_2_ = (short)((Script::Parameter*)&arg0->unknown_10_)->ToInt();

    char* var1 = (char*)(void*)((Script::Parameter*)&arg0->unknown_18_)->ToString();
    if (var1 != NULL) {
        int var2 = func_020d2ff0(var1);
        if (var2 != 0) {
            char* var3 = (char*)((SafeAllocator*)data_ov003_02180cb8.unknown_0_)->Allocate(var2 + 1);
            var0.unknown_4_ = (int)var3;
            sprintf(var3, var1);
        }
    }

    char* var4 = (char*)(void*)((Script::Parameter*)&arg0->unknown_20_)->ToString();
    if (var4 != NULL) {
        int var5 = func_020d2ff0(var4);
        if (var5 != 0) {
            char* var6 = (char*)((SafeAllocator*)data_ov003_02180cb8.unknown_0_)->Allocate(var5 + 1);
            var0.unknown_8_ = (int)var6;
            sprintf(var6, var4);
        }
    }

    var0.unknown_c_ = (unsigned char)((Script::Parameter*)&arg0->unknown_28_)->ToInt();
    var0.unknown_d_ = (unsigned char)((Script::Parameter*)&arg0->unknown_30_)->ToInt();
    var0.unknown_e_ = (unsigned char)((Script::Parameter*)&arg0->unknown_38_)->ToInt();

    func_ov003_0215e790(data_ov003_02180cb8.unknown_4_, &var0);
    return 1;
}
