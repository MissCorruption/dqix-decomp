#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02017208_1142 = 0x496 };
#else
enum { Enum_02017208_1142 = 0x476 };
#endif
#include "GameState/GameState.h"

struct Struct_ov009_0218aa28 { int unknown_0_; int unknown_4_; int unknown_8_; };
struct Vector3i;

struct Struct_02017208 {
    char unknown_0_[0x1c];
    struct Struct_ov009_0218aa28 unknown_1c_;
    char unknown_28_[0x88 - 0x1c - 0xc];
};

struct Struct_02017208_2 {
    short unknown_0_;
    short unknown_2_;
    short unknown_4_;
    char unknown_6_[0x118 - 6];
    struct Struct_02017208 unknown_118_[4];
    struct Struct_ov009_0218aa28 unknown_338_[4];
};

struct Struct_02015438_2 {
    char unknown_0_[Enum_02017208_1142];
    unsigned char unknown_476_;
    char unknown_477_[1];
    struct Struct_02017208_2* unknown_478_;
};

// USA: func_02017208
extern "C" ARM void func_02017208(struct Struct_02015438_2* arg0) {
    unsigned int var0;
    int var1;
    struct Struct_02017208_2* var2;
    int var3;
    int var4;

    var0 = GameState::GetInstance()->GetTickCount();

    for (var1 = 0; var1 < arg0->unknown_476_; var1++) {
        var2 = &arg0->unknown_478_[var1];
        if (var2->unknown_2_ == -1) continue;
        for (var3 = 0; var3 < var0; var3++) {
            if (var2->unknown_2_ == 3) {
                var2->unknown_4_++;
                if (var2->unknown_4_ > 20) {
                    var2->unknown_2_ = -1;
                } else {
                    for (var4 = 0; var4 < 4; var4++) {
                        struct Struct_ov009_0218aa28 var5;
                        struct Struct_02017208* var6 = &var2->unknown_118_[var4];
                        Vector3fix_Add((const Vector3fix*)&var6->unknown_1c_, (const Vector3fix*)&var2->unknown_338_[var4], (Vector3fix*)&var5);
                        *(Vector3i*)((int*)&var6->unknown_1c_) = *(Vector3i const*)((int*)&var5);
                        var2->unknown_338_[var4].unknown_4_ -= 0x40;
                    }
                }
            }
        }
    }
}
