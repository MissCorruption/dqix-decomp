#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define func_ov013_0218683c func_ov013_02187b68
#endif

#if defined(jpn)
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif

extern "C" void func_ov013_02185aac(unsigned char* obj);
struct Obj0205dee8;
extern "C" void func_0205dee8(struct Obj0205dee8* obj, int val);
struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* s);
struct Obj0205eaa0;
extern struct Obj0205eaa0 data_02108760;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);
struct Entry_0205d6a0;
extern "C" void func_0205d6a0(struct Entry_0205d6a0* a, int flag);
extern "C" void func_ov013_02186c64(void* obj, int a, int b);
extern "C" void func_ov013_02185cc0(void* obj);
struct Obj_0205da38;
extern "C" int func_0205da38(struct Obj_0205da38* obj, int key);
extern "C" void func_ov013_02186c1c(void* obj);

// USA: func_ov013_0218683c
extern "C" ARM void func_ov013_0218683c(void* obj) {
    unsigned char* o = (unsigned char*)obj;
    int dirty = 0;
    o[LOW_REGION(0x644, 0x6bc)] |= 1;
    o[LOW_REGION(0x5c6, 0x63a)] = dirty;

    if (o[LOW_REGION(0x5ca, 0x63e)] == 0) {
        if (o[LOW_REGION(0x5c8, 0x63c)] == 4) *(int*)(o + LOW_REGION(0x5e8, 0x660)) = 1;
        else *(int*)(o + LOW_REGION(0x5e8, 0x660)) = dirty;
        func_ov013_02185aac(o);
        o[LOW_REGION(0x5ca, 0x63e)] = o[LOW_REGION(0x5ca, 0x63e)] + 1;
        return;
    }
    if (o[LOW_REGION(0x5ca, 0x63e)] != 1) return;

    func_0205dee8((struct Obj0205dee8*)(o + LOW_REGION(0x34, 0x38)), 3);
    o[LOW_REGION(0x5c7, 0x63b)] = 0;
    if (g_keyManager.TestKeysPressed(0xc0) != 0) {
        if (*(int*)(o + LOW_REGION(0x5e8, 0x660)) == 0) *(int*)(o + LOW_REGION(0x5e8, 0x660)) = 1;
        else *(int*)(o + LOW_REGION(0x5e8, 0x660)) = 0;
        dirty = 1;
    }

    if (*(int*)(o + LOW_REGION(0x5d4, 0x648)) == 2) {
        *(int*)(o + LOW_REGION(0x5e8, 0x660)) = (signed char)func_0205d794((struct Struct_0205c570*)(o + LOW_REGION(0x34, 0x38)));
        dirty = 1;
    }

    if (o[LOW_REGION(0x5c9, 0x63d)] == o[LOW_REGION(0x5c8, 0x63c)]) {
        if (g_keyManager.TestKeysPressed(0x601) != 0) {
            func_0205eaa0(&data_02108760, 1, 0);
            if (o[LOW_REGION(0x5c8, 0x63c)] == 4) {
                int one = 1;
                if (*(int*)(o + LOW_REGION(0x5e8, 0x660)) == 0) {
                    o[LOW_REGION(0x5c8, 0x63c)] = 5;
                    func_0205d6a0((struct Entry_0205d6a0*)(o + LOW_REGION(0x34, 0x38)), one);
                    o[LOW_REGION(0x5ec, 0x664)] = 0;
                } else {
                    o[LOW_REGION(0x5c8, 0x63c)] = one;
                    g_keyManager.CancelCurrentKeyRepeat();
                    o[LOW_REGION(0x5ec, 0x664)] = 0;
                    func_0205dee8((struct Obj0205dee8*)(o + LOW_REGION(0x34, 0x38)), 3);
                    func_0205d6a0((struct Entry_0205d6a0*)(o + LOW_REGION(0x34, 0x38)), 0);
                    func_0205dee8((struct Obj0205dee8*)(o + LOW_REGION(0x34, 0x38)), 2);
                    func_0205d6a0((struct Entry_0205d6a0*)(o + LOW_REGION(0x34, 0x38)), 0);
                    o[LOW_REGION(0x5c5, 0x639)] = 0;
                    o[LOW_REGION(0x644, 0x6bc)] &= ~1;
                    func_ov013_02186c64(o, 0, 0);
                    func_ov013_02185cc0(o);
                }
            } else {
                if (*(int*)(o + LOW_REGION(0x5e8, 0x660)) == 0) {
                    int one = 1;
                    o[LOW_REGION(0x5ec, 0x664)] = one;
                    o[LOW_REGION(0x5c8, 0x63c)] = 5;
                    func_0205d6a0((struct Entry_0205d6a0*)(o + LOW_REGION(0x34, 0x38)), one);
                } else {
                    func_0205dee8((struct Obj0205dee8*)(o + LOW_REGION(0x34, 0x38)), 3);
                    func_0205d6a0((struct Entry_0205d6a0*)(o + LOW_REGION(0x34, 0x38)), 0);
                    func_0205dee8((struct Obj0205dee8*)(o + LOW_REGION(0x34, 0x38)), 2);
                    func_0205d6a0((struct Entry_0205d6a0*)(o + LOW_REGION(0x34, 0x38)), 0);
                    o[LOW_REGION(0x5c5, 0x639)] = 0;
                    o[LOW_REGION(0x5c8, 0x63c)] = 1;
                    g_keyManager.CancelCurrentKeyRepeat();
                    o[LOW_REGION(0x644, 0x6bc)] &= ~1;
                    func_ov013_02186c64(o, 0, 0);
                    func_ov013_02185cc0(o);
                }
            }
            o[LOW_REGION(0x5ca, 0x63e)] = 0;
        } else {
            if (g_keyManager.TestKeysPressed(2) != 0 ||
                (*(int*)(o + LOW_REGION(0x5e8, 0x660)) == 1 && func_0205da38((struct Obj_0205da38*)(o + LOW_REGION(0x34, 0x38)), 0x14) != 0)) {
                if (g_keyManager.TestKeysPressed(2) == 0) {
                    func_0205eaa0(&data_02108760, 1, 0);
                }
                func_0205dee8((struct Obj0205dee8*)(o + LOW_REGION(0x34, 0x38)), 3);
                func_0205d6a0((struct Entry_0205d6a0*)(o + LOW_REGION(0x34, 0x38)), 0);
                func_0205dee8((struct Obj0205dee8*)(o + LOW_REGION(0x34, 0x38)), 2);
                func_0205d6a0((struct Entry_0205d6a0*)(o + LOW_REGION(0x34, 0x38)), 0);
                o[LOW_REGION(0x5c5, 0x639)] = 0;
                o[LOW_REGION(0x5c8, 0x63c)] = 1;
                g_keyManager.CancelCurrentKeyRepeat();
                o[LOW_REGION(0x5ca, 0x63e)] = 0;
                o[LOW_REGION(0x644, 0x6bc)] &= ~1;
                func_ov013_02186c64(o, 0, 0);
                func_ov013_02185cc0(o);
            } else {
                if (*(int*)(o + LOW_REGION(0x5e8, 0x660)) == 0 &&
                    func_0205da38((struct Obj_0205da38*)(o + LOW_REGION(0x34, 0x38)), 0x14) != 0) {
                    func_0205eaa0(&data_02108760, 1, 0);
                    int one = 1;
                    if (o[LOW_REGION(0x5c8, 0x63c)] == 4) {
                        o[LOW_REGION(0x5c8, 0x63c)] = 5;
                        func_0205d6a0((struct Entry_0205d6a0*)(o + LOW_REGION(0x34, 0x38)), one);
                        o[LOW_REGION(0x5ec, 0x664)] = 0;
                    } else {
                        o[LOW_REGION(0x5ec, 0x664)] = one;
                        o[LOW_REGION(0x5c8, 0x63c)] = 5;
                        func_0205d6a0((struct Entry_0205d6a0*)(o + LOW_REGION(0x34, 0x38)), one);
                        o[LOW_REGION(0x5ca, 0x63e)] = 0;
                    }
                }
            }
        }
    }

    if (dirty != 0) {
        func_ov013_02186c1c(o);
    }
}
