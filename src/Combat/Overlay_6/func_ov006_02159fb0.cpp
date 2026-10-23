#include <globaldefs.h>
#include "GameState/GameState.h"

struct Obj3a8Timer_02159fb0 {
    char unk[0x3a8];
    unsigned int field3a8;
    int unk3ac;
    int field3b0;
};

extern "C" void func_ov006_02159f94(struct Obj3a8Timer_02159fb0* obj);
extern "C" void func_ov006_02159f0c(struct Obj3a8Timer_02159fb0* obj);

// USA: func_ov006_02159fb0
extern "C" ARM void func_ov006_02159fb0(struct Obj3a8Timer_02159fb0* obj) {
    if (obj->field3b0 < 0) {
        obj->field3a8 = 0;
        func_ov006_02159f94(obj);
        return;
    }
    if (obj->field3a8 > 0x3c) {
        obj->field3a8 = 0;
        func_ov006_02159f94(obj);
        func_ov006_02159f0c(obj);
    }
    obj->field3a8 += GameState::GetInstance()->GetEffectiveDeltaTime();
}
