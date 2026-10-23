#include <globaldefs.h>

#include "Combat/WorkRecord.h"
#include "Combat/NodeLookup.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0201d530;
struct Vector3i;

struct Struct_0205faf4;

struct Struct_02108cec_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    unsigned short unknown_e_;
    void* unknown_10_;
    void* unknown_14_;
};
extern struct Struct_02108cec_2 data_02108cec;

// USA: func_0206c0f8
extern "C" ARM int func_0206c0f8(void* arg0, int arg1) {
    struct Struct_0206bf2c* var0;
    struct Struct_0201d530* var1;
    int var2;
    int var3;
    int var4;
    int var5;
    int var6;
    int var7;

    data_02108cec.unknown_a_ = data_02108cec.unknown_a_ + 1;

    var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    if (var2 != data_02108cec.unknown_2_) return 1;
    var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    if (var3 != data_02108cec.unknown_1_) return 1;
    var4 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
    if (var4 != data_02108cec.unknown_0_) return 1;
    var5 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x18)))->ToInt();

    {
        struct Struct_0205faf4* var8 = (Struct_0205faf4*)GameState::GetInstance();
        if (var5 == 1) {
            if (((GameState*)var8)->IsMorningDayOrEvening()) return 1;
        } else if (var5 == 0) {
            if (!((GameState*)var8)->IsMorningDayOrEvening()) return 1;
        }
    }

    var6 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x20)))->ToInt();
    var7 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x28)))->ToInt();

    if (var6 != data_02108cec.unknown_c_) {
        func_0206dd68(data_02108cec.unknown_10_, var7);
        return 1;
    }

    var0 = (struct Struct_0206bf2c*)((SafeAllocator*)data_02108cec.unknown_14_)->Allocate(0x78);
    if (var0 == 0) return 0;

    func_0206bf2c(var0);

    var0->unknown_4_ = var2;
    var0->unknown_5_ = var3;
    var0->unknown_6_ = var4;
    var0->unknown_a_0_ = (unsigned char)var5;
    var0->unknown_2_ = var6;
    var0->unknown_0_ = var7;

    if (arg1 < 7) {
        func_0206dd68(data_02108cec.unknown_10_, var7);
        return 1;
    }

    var1 = (Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)((char*)arg0 + 0x30)))->ToVec3fix((Vector3i*)var0->unknown1_10_);
    var0->unknown_1c_ = (int)(4096.0f * ((Script::Parameter*)var1)->ToFloat());

    if (arg1 > 10) {
        var0->unknown_1e_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)var1 + 8)))->ToInt();
    }

    var0->unknown_44_ = data_02108cec.unknown_a_;
    func_0206db48(data_02108cec.unknown_10_, var0);
    return 1;
}
