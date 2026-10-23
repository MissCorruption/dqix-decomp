#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Combat/Overlay_0/GetCombatantByID.h"

extern "C" int func_ov000_0215eb1c(int a0, short* buf, int count, int flag);
struct FlagObj_021e47dc;
extern "C" int func_ov024_021e47dc(struct FlagObj_021e47dc* obj);
extern "C" int func_ov024_021ed890(struct Random** rngPtr, int* maxAndFlag, short* table);

struct Obj_021f2d98 { int field0; };
struct Buf8_021f2d98 { short v[8]; };
extern struct Buf8_021f2d98 data_ov024_021fed3c;

// USA: func_ov024_021f2d98
extern "C" ARM int func_ov024_021f2d98(struct Obj_021f2d98* obj, int unused1, int unused2, int* outCount, short* outArray) {
    struct Buf8_021f2d98 buf = data_ov024_021fed3c;

    int count = func_ov000_0215eb1c(obj->field0, buf.v, 8, 1);
    if (count <= 0) return 0;

    *outCount = 0;
    for (int i = 0; i < count; i++) {
        GameObject* c = GetCombatantByID(obj->field0, buf.v[i]);
        if (!c) continue;
        if (func_ov024_021e47dc((struct FlagObj_021e47dc*)c)) continue;
        int byteVal = *(unsigned char*)((char*)c->currentStats_ + 0x48);
        if (byteVal <= 0) continue;
        int idx = *outCount;
        *outCount = idx + 1;
        outArray[idx] = buf.v[i];
    }

    if (*outCount <= 0) return 0;
    func_ov024_021ed890((struct Random**)obj, outCount, outArray);
    return 1;
}
