#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);

struct Struct02013380 {
    unsigned short unk0;
    unsigned short flags;
};

// USA: func_02013380
ARM void SetFlag0x40AndToggle0x4(Struct02013380* obj, int unused, int clear4) {
    func_0205ec34();
    if (clear4 != 0)
        obj->flags &= ~4;
    else
        obj->flags |= 4;
    obj->flags |= 0x40;
}
