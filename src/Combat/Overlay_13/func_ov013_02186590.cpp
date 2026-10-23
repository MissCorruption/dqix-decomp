#if defined(jpn)
#define R(j,u) (j)
#define data_ov005_0215cd48 data_ov005_0215e128
#define func_ov013_02185990 func_ov013_02186b88
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Input/Input.h"

struct Struct_0205bcdc;
extern "C" void func_0205bcdc(struct Struct_0205bcdc* s, int index);
extern "C" void func_0205bb04(void* s, int n);

extern "C" int func_020421a0();
extern "C" int func_0205cecc(void* s);
extern "C" int func_0205cb64(void* obj);
extern "C" void func_02043204(char* obj);
extern "C" void func_0205ce94(unsigned char* p);

struct Obj0205eaa0;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);

struct Entry_0205d6a0;
extern "C" void func_0205d6a0(struct Entry_0205d6a0* a, int flag);

extern "C" void func_ov013_02185990(void* obj);
extern "C" void func_ov013_02186c64(void* obj, int a, int b);
extern "C" void func_ov013_02185cc0(void* obj);

extern struct Obj0205eaa0 data_02108760;

// USA: func_ov013_02186590
extern "C" ARM void func_ov013_02186590(void* obj) {
    unsigned char* o = (unsigned char*)obj;
    if (o[R(0x5cb,0x63f)] != 0) {
        o[R(0x5c5,0x639)] = 1;
    }
    int g = func_020421a0();
    unsigned char* gp = (unsigned char*)g;
    int oneFlag = 1;
    gp[0x1000 + R(0x7ee,0x9be)] = oneFlag;

    if (o[R(0x5ca,0x63e)] == 0) {
        if (*(int*)(gp + R(0x870,0x9a0)) != 0) return;
        func_ov013_02185990(obj);
        unsigned char tag = o[R(0x5c8,0x63c)];
        unsigned char* local = o + R(0x3ec,0x3f0);
        if (tag == 4) {
            func_0205bcdc((struct Struct_0205bcdc*)(local + 4), oneFlag);
            func_0205bb04(local + 0x54, oneFlag);
        } else {
            func_0205bcdc((struct Struct_0205bcdc*)(local + 4), 0);
            func_0205bb04(local + 0x54, 0);
        }
        o[R(0x5ca,0x63e)] = o[R(0x5ca,0x63e)] + 1;
        return;
    }

    if (o[R(0x5ca,0x63e)] != 1) return;

    int scaled = func_0205cecc(o + R(0x3d0,0x3d4));
    if (g_keyManager.TestKeysPressed(0x601) != 0) {
        scaled = func_0205cb64(o + R(0x3d0,0x3d4));
    } else if (g_keyManager.TestKeysPressed(2) != 0) {
        scaled = -2;
        oneFlag = 0;
    }

    if (scaled == -2) goto caseInvalidate;
    if (scaled == 0) goto caseReset;
    if (scaled == 1) goto caseInvalidate;
    return;

caseReset:
    {
        unsigned char tag = o[R(0x5c8,0x63c)];
        if (tag == 4) {
            o[R(0x5c8,0x63c)] = 5;
            func_02043204((char*)gp);
            func_0205ce94(o + R(0x3d0,0x3d4));
            o[R(0x5ec,0x664)] = 0;
            func_0205eaa0(&data_02108760, 1, 0);
        } else {
            o[R(0x5c8,0x63c)] = 5;
            o[R(0x5ec,0x664)] = 1;
            func_02043204((char*)gp);
            func_0205ce94(o + R(0x3d0,0x3d4));
            func_0205d6a0((struct Entry_0205d6a0*)(o + R(0x34,0x38)), 1);
            func_0205eaa0(&data_02108760, 1, 0);
        }
        o[R(0x5ca,0x63e)] = 0;
        return;
    }

caseInvalidate:
    o[R(0x5c8,0x63c)] = 1;
    o[R(0x5ca,0x63e)] = 0;
    g_keyManager.CancelCurrentKeyRepeat();
    if (oneFlag != 0) {
        func_0205eaa0(&data_02108760, 1, 0);
    }
    o[R(0x5ec,0x664)] = 0;
    func_02043204((char*)gp);
    func_0205ce94(o + R(0x3d0,0x3d4));
    o[R(0x5c5,0x639)] = 0;
    func_ov013_02186c64(obj, 0, 0);
    func_ov013_02185cc0(obj);
}
