#include <globaldefs.h>

#include "Combat/WorkRecord.h"
#include "Combat/NodeLookup.h"

#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"



struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    void* unknown_10_;
    void* unknown_14_;
};
extern struct Struct_02108cec data_02108cec;

// USA: func_0206c010
extern "C" ARM int func_0206c010(Script::Parameter* arg0, int arg1) {
    struct Struct_0206bf2c* var0;
    Script::Parameter* var1;
    int var2;

    data_02108cec.unknown_a_ = data_02108cec.unknown_a_ + 1;
    var2 = arg0[0].ToInt();
    if (var2 != data_02108cec.unknown_c_) {
        return 1;
    }
    var0 = (struct Struct_0206bf2c*)((SafeAllocator*)data_02108cec.unknown_14_)->Allocate(0x78);
    if (var0 == 0) {
        return 0;
    }
    func_0206bf2c(var0);
    var0->unknown_2_ = (unsigned short)var2;
    var0->unknown_0_ = (unsigned char)arg0[1].ToInt();
    if (arg1 < 3) {
        func_0206dd68(data_02108cec.unknown_10_, var0->unknown_0_);
        return 1;
    }
    var1 = arg0[2].ToVec3fix((Vector3fix*)var0->unknown_10_);
    var0->unknown_1c_ = (unsigned short)(int)(4096.0f * var1->ToFloat());
    if (arg1 > 6) {
        var0->unknown_1e_ = (unsigned char)var1[1].ToInt();
    }
    var0->unknown_44_ = data_02108cec.unknown_a_;
    func_0206db48(data_02108cec.unknown_10_, var0);
    return 1;
}
