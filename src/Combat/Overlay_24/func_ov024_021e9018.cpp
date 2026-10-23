#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" unsigned short func_ov024_021da644(int arg0, int arg1, int arg2);
struct Struct_ov024_021da670_7;
extern "C" int func_ov024_021da9b0(struct Struct_ov024_021da670_7* arg0);
extern "C" int func_020882f8(unsigned char* arg0);

struct Struct_ov024_021e9018 { char unknown_0_[0x10]; void* unknown_10_; };
struct Struct_ov024_021e9018_2 { unsigned short unknown_0_0_ : 2; unsigned short unknown_0_2_ : 4; unsigned short unknown_0_6_ : 10; };

struct Struct_ov024_021fe7c4 { short unknown_0_; unsigned short unknown_2_; };
struct Struct_ov024_021fe7c6 { unsigned short unknown_0_; unsigned short unknown_2_; };

extern struct Struct_ov024_021fe7c4 data_ov024_021fe840[];
extern struct Struct_ov024_021fe7c6 data_ov024_021fe842[];
extern struct Struct_ov024_021fe7c4 data_ov024_021fe7c4[];
extern struct Struct_ov024_021fe7c6 data_ov024_021fe7c6[];

// USA: func_ov024_021e9018
extern "C" ARM int func_ov024_021e9018(struct Struct_ov024_021e9018* arg0, int arg1, short arg2, int arg3) {
    if (arg3 != 0) {
        if (arg2 == 5) {
            return func_ov024_021da644(arg1, 0x63, 0x62);
        }
        int var0 = 0;
        while (data_ov024_021fe840[var0].unknown_0_ != -1) {
            if (arg2 == data_ov024_021fe840[var0].unknown_0_) {
                return data_ov024_021fe842[var0].unknown_0_;
            }
            var0++;
        }
    } else {
        GameObject* var1 = GetCombatantByID((int)arg0->unknown_10_, arg1);
        if (!var1) return 0;
        if (func_ov024_021da9b0((struct Struct_ov024_021da670_7*)var1) &&
            (arg2 == 3 || arg2 == 4 || arg2 == 5 || arg2 == 8)) {
#if defined(jpn)
            return 0x1b;
#else
            return func_ov024_021da644(arg1, 0x26d, 0x1b);
#endif

        }
        if (func_020882f8((unsigned char*)var1->currentStats_) && (unsigned short)(short)(arg2 - 2) <= 6) {
#if defined(jpn)
            return 0x1b;
#else
            return func_ov024_021da644(arg1, 0x26d, 0x1b);
#endif

        }
        struct Struct_ov024_021e9018_2* var2 = (struct Struct_ov024_021e9018_2*)((char*)var1->currentStats_ + 0x22);
        int var3 = var2->unknown_0_2_;
        if (var3 != arg2) return 0;
        if (var3 == 5) {
            return func_ov024_021da644(arg1, 0x61, 0x60);
        }
        int var4 = 0;
        while (data_ov024_021fe7c4[var4].unknown_0_ != -1) {
            if (var3 == data_ov024_021fe7c4[var4].unknown_0_) {
                return data_ov024_021fe7c6[var4].unknown_0_;
            }
            var4++;
        }
    }
    return 0;
}
