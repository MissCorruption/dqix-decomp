#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_01ff91ac_24;

struct Struct_0202c1a4 { char unknown_0_[0x1038]; signed char unknown_1038_[16]; };
extern "C" int* func_0202ae18(void);
extern "C" int func_0202b7d8(int* arg0);
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);

struct Struct_0205faf4;

struct Struct_0201c3a4 { int unknown_0_; void* unknown_4_; };

extern "C" int func_ov017_021b9bcc(int arg0, void* arg1);

struct Struct_ov017_021d8438_4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    unsigned char unknown_8_[8];
    int unknown_10_;
};
extern struct Struct_ov017_021d8438_4 data_ov017_021d8438;

struct Struct_ov017_021d7c54_3 { signed char unknown_0_; signed char unknown_1_; };
extern struct Struct_ov017_021d7c54_3 data_ov017_021d7c54;

// USA: func_ov017_021ba124
extern "C" ARM int func_ov017_021ba124(struct Struct_0201c1c8* arg0, int arg1) {
    if (data_ov017_021d8438.unknown_10_ != 0) return 1;
    if (data_ov017_021d7c54.unknown_0_ > -1) return 1;
    if (data_ov017_021d8438.unknown_1_ != 0) return 1;
    if (data_ov017_021d7c54.unknown_1_ > -1) return 1;

    GameState::GetInstance();
    struct Struct_0202c1a4* var0 = (struct Struct_0202c1a4*)func_0202ae18();
    if (!func_0202b7d8((int*)var0)) return 1;
    if (func_0202c1a4(var0) != 0) return 1;

    int var1 = ((Script::Parameter*)arg0)->ToInt();
    struct Struct_0201c1c8* var2 = (struct Struct_0201c1c8*)((char*)arg0 + 8);
    arg0 = (struct Struct_0201c1c8*)((char*)arg0 + 16);
    int var3 = ((Script::Parameter*)var2)->ToInt();
    if (var1 >= 0 && (data_ov017_021d8438.unknown_4_ < var1 || var3 < data_ov017_021d8438.unknown_4_)) return 1;

    if (arg1 >= 5) {
        int var4 = ((Script::Parameter*)arg0)->ToInt();
        arg0 = (struct Struct_0201c1c8*)((char*)arg0 + 8);
        if (var4 != 0) {
            if (((GameState*)((struct Struct_0205faf4*)GameState::GetInstance()))->IsMorningDayOrEvening()) return 1;
            data_ov017_021d8438.unknown_2_ = 1;
        }
    } else {
        if (data_ov017_021d8438.unknown_2_ != 0) return 1;
    }

    int var5 = ((Script::Parameter*)arg0)->ToInt();
    void* var6 = (void*)((Script::Parameter*)((struct Struct_0201c3a4*)((char*)arg0 + 8)))->ToString();
    if (var6 == 0) return 0;
    if (func_ov017_021b9bcc(var5, var6) != 0) data_ov017_021d8438.unknown_0_ = 1;
    return 1;
}
