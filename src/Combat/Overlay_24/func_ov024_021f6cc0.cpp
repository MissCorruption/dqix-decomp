#include <globaldefs.h>

struct Combatant_20885b4;
extern "C" int func_020885b4(struct Combatant_20885b4* obj);
struct S88514;
extern "C" int func_02088514(struct S88514* obj);

struct FlagInner_021da9b0 { char unk[0x14]; int flags; };
struct FlagObj_021da9b0 { char unk[0x138]; struct FlagInner_021da9b0* inner; };
extern "C" int func_ov024_021da9b0(struct FlagObj_021da9b0* obj);

struct ScaleVec3_021f6cc0 {
    int pad0;
    struct FlagObj_021da9b0* combatant;
    int pad2[3];
    float x;
    float y;
    float sx;
    float sy;
};

// USA: func_ov024_021f6cc0
extern "C" ARM int func_ov024_021f6cc0(struct ScaleVec3_021f6cc0* obj) {
    struct FlagObj_021da9b0* combatant = obj->combatant;
    if (func_020885b4((struct Combatant_20885b4*)combatant->inner) ||
        func_02088514((struct S88514*)combatant->inner) ||
        func_ov024_021da9b0(combatant)) {
        obj->sx = obj->x * 1.5f;
        obj->sy = obj->y * 1.5f;
    }
    return 1;
}
