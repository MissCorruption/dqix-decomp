#include <globaldefs.h>

struct FlagInner_021e47dc {
    char unk[0x14];
    int flags;
};

struct FlagObj_021e47dc {
    char unk[0x138];
    struct FlagInner_021e47dc* inner;
};

// USA: func_ov024_021e47dc
extern "C" ARM int func_ov024_021e47dc(struct FlagObj_021e47dc* obj) {
    return (obj->inner->flags & 0x400000) != 0;
}
