#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { kObjectOffset = 0x4c0 };
#else
enum { kObjectOffset = 0x6d0 };
#endif


extern "C" void* func_02012fe4(void);
struct Obj02022d78;
extern "C" void func_02022d78(struct Obj02022d78*, int);
extern "C" int func_0201b588(int);

// USA: func_020dc214
extern "C" ARM void func_020dc214(int mode) {
    int base = (int)GetGameResources();
    void* raw = *(void**)(base + 0x3000 + kObjectOffset);
    unsigned short id = *(unsigned short*)func_02012fe4();
    struct Obj02022d78* obj = (struct Obj02022d78*)raw;
    if (mode == 1) {
        func_02022d78(obj, 1);
        return;
    }
    if (mode == 2) {
        func_02022d78(obj, 4);
        return;
    }
    if (mode != 0) {
        return;
    }
    if (func_0201b588(id)) {
        func_02022d78(obj, 3);
        return;
    }
    if (id == 0x2710 || id == 0x2774) {
        func_02022d78(obj, 4);
    } else {
        func_02022d78(obj, 0);
    }
}
