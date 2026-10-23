#include <globaldefs.h>

#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"
#include "Resource/Script.h"
#include "Combat/WorkRecord.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_0201c1c8;
struct Struct_0201d530;
struct Vector3i;

struct GameState;

extern "C" char* func_0205ec34();
extern "C" int func_0206dfb0(int, unsigned char*, int);
extern "C" int func_0206eb98(unsigned char*, int);
extern "C" void func_0206dd68(void*, int);

struct Struct_02108cec {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned short unknown_c_;
    void* unknown_10_;
    void* unknown_14_;
};
extern struct Struct_02108cec data_02108cec;

// USA: func_0206d4e0
extern "C" ARM int func_0206d4e0(void* arg0, int arg1) {
    if (arg1 < 9) {
        return 0;
    }
    data_02108cec.unknown_a_++;
    bool var0 = false;
    if (arg1 % 2 == 0) {
        var0 = true;
    }
    int var1;
    int var2;
    int var3 = (var0 ? arg1 - 8 : arg1 - 7) / 2;
    char* var4 = func_0205ec34();
    struct Struct_0201c1c8* var5 = (struct Struct_0201c1c8*)arg0;
    for (var1 = var3; var1 > 0; var1--) {
        int var6 = ((Script::Parameter*)var5)->ToInt();
        struct Struct_0201c1c8* var7 = (struct Struct_0201c1c8*)((char*)var5 + 8);
        var5 = (struct Struct_0201c1c8*)((char*)var5 + 0x10);
        var2 = ((Script::Parameter*)var7)->ToInt();
        int var8 = var6 >> 16;
        if (var8 == 1) {
            int var9 = func_0206dfb0((int)var4, (unsigned char*)(var4 + 0x8c), (unsigned short)var6);
            if ((var2 != 0 && var9 == 0) || (var2 == 0 && var9 != 0)) {
                return 1;
            }
        } else if (var8 == 2) {
            int var10 = func_0206eb98((unsigned char*)var4, (unsigned short)var6);
            if ((var2 != 0 && var10 == 0) || (var2 == 0 && var10 != 0)) {
                return 1;
            }
        } else {
            return 1;
        }
    }

    int var11 = ((Script::Parameter*)var5)->ToInt();
    struct GameState* var12 = GameState::GetInstance();
    if (var11 == 1) {
        if (var12->IsMorningDayOrEvening()) {
            return 1;
        }
    } else if (var11 == 0) {
        if (!var12->IsMorningDayOrEvening()) {
            return 1;
        }
    }

    int var13 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)var5 + 8)))->ToInt();
    int var14 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)var5 + 0x10)))->ToInt();
    if (var13 != data_02108cec.unknown_c_) {
        func_0206dd68(data_02108cec.unknown_10_, var14);
        return 1;
    }

    struct Struct_0206bf2c* var15 = (struct Struct_0206bf2c*)((SafeAllocator*)data_02108cec.unknown_14_)->Allocate(0x78);
    if (var15 == 0) {
        return 0;
    }
    func_0206bf2c(var15);
    var15->unknown_2_ = (unsigned short)var13;
    int var16 = arg1 - var3 * 2 - var0;
    var15->unknown_0_ = (unsigned char)var14;
    if (var16 < 4) {
        func_0206dd68(data_02108cec.unknown_10_, var15->unknown_0_);
        return 1;
    }

    struct Struct_0201d530* var17 = (Struct_0201d530*)((Script::Parameter*)((struct Struct_0201d530*)((char*)var5 + 0x18)))->ToVec3fix((Vector3i*)var15->unknown1_10_);
    var15->unknown_1c_ = (short)(4096.0f * ((Script::Parameter*)var17)->ToFloat());
    if (var0) {
        var15->unknown_1e_ = (unsigned char)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)var17 + 8)))->ToInt();
    }
    var15->unknown_44_ = data_02108cec.unknown_a_;
    var15->unknown_a_2_ = 1;
    func_0206db48(data_02108cec.unknown_10_, var15);
    return 1;
}
