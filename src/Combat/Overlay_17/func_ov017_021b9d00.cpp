#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; union { int unknown_0_; float unknown1_0_; } unknown_4_; };

struct Struct_02000c9c_60;

struct Struct_0205faf4;

struct Struct_0201c3a4 { int unknown_0_; void* unknown_4_; };

extern "C" int func_ov017_021b9bcc(int arg0, void* arg1);

struct Struct_ov017_021d8438_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    int unknown_4_;
    unsigned char unknown_8_[8];
    int unknown_10_;
};
extern struct Struct_ov017_021d8438_2 data_ov017_021d8438;

struct Struct_ov017_021d7c54 { signed char unknown_0_; signed char unknown_1_; };
extern struct Struct_ov017_021d7c54 data_ov017_021d7c54;

// USA: func_ov017_021b9d00
extern "C" ARM int func_ov017_021b9d00(struct Struct_0201c1c8* arg0, int arg1) {
    if (data_ov017_021d8438.unknown_10_ != 0) return 1;
    if (data_ov017_021d8438.unknown_0_ != 0) return 1;
    if (data_ov017_021d7c54.unknown_0_ > -1) return 1;
    if (data_ov017_021d8438.unknown_1_ != 0) return 1;
    if (data_ov017_021d7c54.unknown_1_ > -1) return 1;

    GameState::GetInstance();
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    struct Struct_0201c1c8* var1 = (struct Struct_0201c1c8*)((char*)arg0 + 8);
    arg0 = (struct Struct_0201c1c8*)((char*)arg0 + 16);
    int var2 = ((Script::Parameter*)var1)->ToInt();
    if (var0 >= 0 && (data_ov017_021d8438.unknown_4_ < var0 || var2 < data_ov017_021d8438.unknown_4_)) return 1;

    if (arg1 >= 5) {
        int var3 = ((Script::Parameter*)arg0)->ToInt();
        arg0 = (struct Struct_0201c1c8*)((char*)arg0 + 8);
        if (var3 != 0) {
            if (((GameState*)((struct Struct_0205faf4*)GameState::GetInstance()))->IsMorningDayOrEvening()) return 1;
            data_ov017_021d8438.unknown_2_ = 1;
        }
    } else {
        if (data_ov017_021d8438.unknown_2_ != 0) return 1;
    }

    int var4 = ((Script::Parameter*)arg0)->ToInt();
    void* var5 = (void*)((Script::Parameter*)((struct Struct_0201c3a4*)((char*)arg0 + 8)))->ToString();
    if (var5 == 0) return 0;
    func_ov017_021b9bcc(var4, var5);
    return 1;
}
