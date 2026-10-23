#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_020341e0;
struct Vector3s;
void Vector3fix16Copy(Vector3s*, Vector3s const*);

struct Struct_ov017_021d360c {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    unsigned char unknown_4_[6];
    unsigned char unknown_a_[6];
};

struct Struct_ov017_021d360c_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct Struct_ov017_021d360c unknown_4_;
};

// USA: func_ov017_021d360c
extern "C" ARM void func_ov017_021d360c(int arg0, int arg1, int arg2, int arg3) {
    void* var0 = func_0202ae24();
    struct Struct_ov017_021d360c_2 var1;
    struct Struct_ov017_021d360c* var2 = &var1.unknown_4_;

    if (arg0 != 1) goto sendEvent;
    {
        int var3 = (unsigned int)arg2 <= 3;
        if (var3) goto sendEvent;
    }
    {
        GameObject* var4 = GameState::GetInstance()->GetMaybeFieldMonsterByIndex(arg2);
        if (var4 == 0) return;
        unsigned short var5 = *(unsigned short*)((char*)var4 + 0x100 + 0x6a);
        arg2 = (unsigned short)(var5 + 4);
    }

sendEvent:
    var1.unknown_0_ = 0xb6;
    var2->unknown_0_ = (unsigned char)arg0;
    var2->unknown_1_ = (unsigned char)arg1;
    var2->unknown_2_ = (unsigned short)arg2;
    Vector3fix16Copy((Vector3s*)var2->unknown_4_, (Vector3s const*)&arg3);

    func_0205e330(var0, &var1, 0);
}
