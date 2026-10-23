#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0201d530;
struct Vector3i;

struct Struct_0206c938;

struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
    void* unknown_14_;
};
extern struct Struct_02108cec data_02108cec;

struct Struct_0206c938_2 {
    int unknown_0_[3];
    int unknown_c_;
    struct Struct_0206c938_2* unknown_10_;
};

struct Struct_0206c938 {
    unsigned char unknown_0_[0x1f];
    unsigned char unknown_1f_;
    unsigned char unknown_20_[0x34 - 0x20];
    struct Struct_0206c938_2* unknown_34_;
    unsigned char unknown_38_[0x44 - 0x38];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x70 - 0x46];
    struct Struct_0206c938* unknown_70_;
};

// USA: func_0206c938
extern "C" ARM int func_0206c938(void* arg0, int arg1) {
    struct Struct_0206c938* var0;
    int var1;
    struct Struct_0206c938_2* var2;
    int var3;
    struct Struct_0206c938_2* var4;
    void* var5 = arg0;
    int var6;

    arg0 = (char*)arg0 + 8;
    var6 = ((Script::Parameter*)((struct Struct_0201c1c8*)var5))->ToInt();
    var0 = (Struct_0206c938*)func_0206db20(data_02108cec.unknown_10_, var6);
    if (var0 == 0) {
        return 0;
    }
    if ((arg1 - 1) % 3 != 0) {
        return 0;
    }
    while (var0 != 0) {
        if (var0->unknown_44_ == data_02108cec.unknown_a_) break;
        var0 = var0->unknown_70_;
    }
    if (var0 == 0) {
        return 0;
    }
    var0->unknown_1f_ = 10;
    var1 = (arg1 - 1) / 3;
    var2 = 0;
    for (var3 = 0; var3 < var1; var3++) {
        var4 = (struct Struct_0206c938_2*)((SafeAllocator*)data_02108cec.unknown_14_)->Allocate(0x14);
        if (var4 == 0) {
            return 0;
        }
        arg0 = (void*)(Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)arg0))->ToVec3fix((Vector3i*)var4->unknown_0_);
        var4->unknown_c_ = 0;
        if (var2 == 0) {
            var0->unknown_34_ = var4;
        } else {
            var2->unknown_10_ = var4;
        }
        var2 = var4;
    }
    var2->unknown_10_ = var0->unknown_34_;
    var2->unknown_c_ = 1;
    return 1;
}
