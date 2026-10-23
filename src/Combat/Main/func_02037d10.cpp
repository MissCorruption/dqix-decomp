#include <globaldefs.h>
#include "Combat/ActorAction.h"
#if defined(jpn)
#define COMBAT_FIELD(x) ((x) - 12)
#else
#define COMBAT_FIELD(x) (x)
#endif

extern "C" void func_02052a4c(void*);

// USA: func_02037d10
extern "C" ARM void func_02037d10(void* arg0) {
    signed char* var0 = (signed char*)arg0;
    func_02052a4c(arg0);
    *(unsigned short*)(var0 + 0x0) |= 0x800;
    var0[COMBAT_FIELD(0x1cb)] = -1;
    var0[COMBAT_FIELD(0x1cc)] = 0;
    var0[COMBAT_FIELD(0x1c8)] = -1;
    var0[COMBAT_FIELD(0x1c9)] = 0;
    var0[COMBAT_FIELD(0x1ca)] = -1;
    var0[COMBAT_FIELD(0x1cd)] = 0;
    var0[COMBAT_FIELD(0x1ce)] = 0;
    var0[COMBAT_FIELD(0x250)] = 1;
    var0[COMBAT_FIELD(0x251)] = 0;
    var0[COMBAT_FIELD(0x252)] = 1;
    var0[COMBAT_FIELD(0x253)] = 1;
    var0[COMBAT_FIELD(0x254)] = 0;
    *(int*)(var0 + COMBAT_FIELD(0x264)) = 0;
    *(int*)(var0 + COMBAT_FIELD(0x260)) = -1;
    var0[COMBAT_FIELD(0x255)] = -1;
    *(unsigned short*)(var0 + COMBAT_FIELD(0x256)) = 0;
    struct Struct_02037d10* var1 = (struct Struct_02037d10*)(var0 + COMBAT_FIELD(0x26c));
    *(int*)(var0 + COMBAT_FIELD(0x268)) = 0;
    func_02038508(var1);
}
