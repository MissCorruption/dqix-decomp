#include <globaldefs.h>

struct SetFlagStruct {
#if defined(jpn)
    char unk0[0x91a];
#else
    char unk0[0x9c6];
#endif
    unsigned char field9c6;
};

// USA: func_020213fc
extern "C" ARM void func_020213fc(struct SetFlagStruct* p, int value) {
    p->field9c6 = (value != 0) ? 1 : 0;
}
