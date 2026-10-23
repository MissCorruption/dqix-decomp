#include <globaldefs.h>

struct FlagInner_021e05e4 {
    char unk[0x18];
    int flags;
};

struct FlagObj_021e05e4 {
    char unk[0x138];
    struct FlagInner_021e05e4* inner;
};

// USA: func_ov024_021e05e4
extern "C" ARM int func_ov024_021e05e4(struct FlagObj_021e05e4* obj) {
    return (obj->inner->flags & 0x1000) != 0;
}
