#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

struct Struct_ov003_0215e4c8 {
    unsigned char unknown_0_;
    signed char unknown_1_;
    signed char unknown_2_;
    signed char unknown_3_;
    short* unknown_4_;
};
extern "C" void func_ov003_0215e4c8(struct Struct_ov003_0215e4c8* arg0);

struct Struct_02000c9c_84;
extern "C" void func_ov003_0215e898(struct Struct_02000c9c_84* arg0, struct Struct_ov003_0215e4c8* arg1);

struct Struct_ov003_02180cb8 {
    void* unknown_0_;
    struct Struct_02000c9c_84* unknown_4_;
};
extern struct Struct_ov003_02180cb8 data_ov003_02180cb8;

// USA: func_ov003_0215e628
extern "C" ARM int func_ov003_0215e628(struct Struct_0201c1c8* arg0) {
    struct Struct_ov003_0215e4c8 var0;
    func_ov003_0215e4c8(&var0);
    var0.unknown_0_ = ((Script::Parameter*)&arg0[0])->ToInt();
    var0.unknown_1_ = ((Script::Parameter*)&arg0[1])->ToInt();
    struct Struct_0201c1c8* var1 = &arg0[2];
    arg0 += 3;
    var0.unknown_2_ = ((Script::Parameter*)var1)->ToInt();
    var0.unknown_3_ = var0.unknown_1_ * var0.unknown_2_;
    signed char var2 = var0.unknown_3_;
    short* var3 = (short*)((SafeAllocator*)data_ov003_02180cb8.unknown_0_)->Allocate(var2 * 2);
    var0.unknown_4_ = var3;
    if (var3 != NULL) {
        for (int var4 = 0; var4 < var2; var4++) {
            *var3 = ((Script::Parameter*)(arg0++))->ToInt();
            var3++;
        }
    }
    func_ov003_0215e898(data_ov003_02180cb8.unknown_4_, &var0);
    return 1;
}
