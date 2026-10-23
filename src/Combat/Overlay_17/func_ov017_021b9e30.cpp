#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Script.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

struct Struct_ov017_021d8438_3 {
    unsigned char unknown_0_, unknown_1_, unknown_2_, unknown_3_;
    int unknown_4_, unknown_8_, unknown_c_, unknown_10_;
    void* unknown_14_;
    int unknown_18_, unknown_1c_, unknown_20_;
};
struct Struct_ov017_021d7c54_2 { signed char unknown_0_; signed char unknown_1_; };
extern Struct_ov017_021d8438_3 data_ov017_021d8438;
extern Struct_ov017_021d7c54_2 data_ov017_021d7c54;
struct Struct_0205faf4_3;
struct Struct_0205faf4_4;
struct Struct_0205faf4_13;
extern "C" Struct_0205faf4_3* func_0205ec34(GameState*);
extern "C" int func_0206e31c(int, int);
extern "C" int func_0206e120(Struct_0205faf4_3*, int);
extern "C" int func_0206e260(Struct_0205faf4_4*, int);
extern "C" int func_0206e2dc(Struct_0205faf4_13*, int);
extern "C" int func_ov017_021b9bcc(int, const void*);
static inline int inline_ov017_021b9e30(Struct_0205faf4_3* arg0, int arg1, int arg2) {
    return func_0206e120(arg0, arg1) == arg2;
}

// USA: func_ov017_021b9e30
extern "C" ARM int func_ov017_021b9e30(Script::Parameter* arg0, int arg1) {
    if (data_ov017_021d8438.unknown_10_) return 1;
    if (data_ov017_021d8438.unknown_1_) return 1;
    if (data_ov017_021d7c54.unknown_1_ > -1) return 1;
    Struct_0205faf4_3* var0 = func_0205ec34(GameState::GetInstance());
    int var1 = arg0->ToInt();
    if (!func_0206e31c((int)var0, var1)) return 1;
    if (data_ov017_021d7c54.unknown_0_ != var1 && data_ov017_021d7c54.unknown_0_ > -1 && !inline_ov017_021b9e30(var0, var1, 1) && !inline_ov017_021b9e30(var0, var1, 2)) {
        if (!inline_ov017_021b9e30(var0, data_ov017_021d7c54.unknown_0_, 3) || !inline_ov017_021b9e30(var0, var1, 3) || data_ov017_021d7c54.unknown_0_ > var1) return 1;
    }
    Script::Parameter* var2 = arg0 + 1;
    arg0 += 2;
    switch (var2->ToInt()) {
    case -1:
        if (!inline_ov017_021b9e30(var0, var1, 0)) return 1;
        break;
    case 0:
        if (!inline_ov017_021b9e30(var0, var1, 2)) return 1;
        break;
    case 1:
        if (!func_0206e260((Struct_0205faf4_4*)var0, var1)) return 1;
        break;
    case 2:
        if (!inline_ov017_021b9e30(var0, var1, 3)) return 1;
        break;
    case 3:
        if (!inline_ov017_021b9e30(var0, var1, 1)) return 1;
        break;
    case 4:
        if (!func_0206e2dc((Struct_0205faf4_13*)var0, var1) || !inline_ov017_021b9e30(var0, var1, 0)) return 1;
        break;
    }
    if (arg1 >= 5) {
        int var3 = arg0->ToInt();
        arg0++;
        if (var3) {
            if (GameState::GetInstance()->IsMorningDayOrEvening()) return 1;
            data_ov017_021d8438.unknown_2_ = 1;
        }
    } else if (data_ov017_021d8438.unknown_2_) return 0;
    int var4 = arg0->ToInt();
    const char* var5 = arg0[1].ToString();
    if (!var5) return 0;
    if (func_ov017_021b9bcc(var4, var5)) data_ov017_021d7c54.unknown_0_ = var1;
    return 1;
}
