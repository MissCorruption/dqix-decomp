#include <globaldefs.h>
#include "Graphics/LightingManager.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" ARM void* func_0205ec34(void);
extern "C" int func_0206dfb0(int unused, unsigned char* arr, int index);

struct Word0209cc3c {
    unsigned int id : 16;
    unsigned int field16 : 6;
    unsigned int field22 : 9;
    unsigned int flag31 : 1;
};

struct Obj0209cc3c { struct Word0209cc3c* words; unsigned char count; };
struct Data0209cc3c { char pad[0x98]; int field98; };

// USA: func_0209cc3c
extern "C" ARM int func_0209cc3c(struct Obj0209cc3c* obj, unsigned short id) {
    void* self = func_0205ec34();
    struct Data0209cc3c* data = (struct Data0209cc3c*)LightingManager::GetInstance();
    int i;
    for (i = 0; i < obj->count; i++) {
        struct Word0209cc3c* w = &obj->words[i];
        if (w->id != id) continue;
        if (!func_0206dfb0((int)self, (unsigned char*)self + 0x8c, w->field22)) continue;
        if (!w->flag31 || data->field98 == 0) return w->field16;
    }
    return -1;
}
