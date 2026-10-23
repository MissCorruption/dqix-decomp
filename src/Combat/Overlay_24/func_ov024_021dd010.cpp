#include <globaldefs.h>

struct FlagInner_021dd010 {
    char unk[0x14];
    int flags;
};

struct FlagObj_021dd010 {
    char unk[0x138];
    struct FlagInner_021dd010* inner;
};

// USA: func_ov024_021dd010
extern "C" ARM int func_ov024_021dd010(struct FlagObj_021dd010* obj) {
    return (obj->inner->flags & 0x100) != 0;
}
