#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void* func_ov000_02163524(void* obj);
extern "C" void* func_020421a0(void);
extern "C" void func_ov000_0216dbf0(void* obj, int a, int b, int c);
extern "C" void func_ov000_021626a0(void* obj, int a, int b);
extern "C" void func_02043124(void* obj);
extern "C" void* func_ov000_02160f20(void* obj);
struct S021d8a40;
extern "C" void func_ov025_021d8a40(void* obj0, struct S021d8a40* obj1);
extern "C" void func_ov025_021def30(unsigned char* obj);

struct Timer021ef974 {
    int f0;
    unsigned short timer;
    unsigned short timer2;
    int state;
    int fc;
    int count;
};
extern "C" struct Timer021ef974 _ZZ16GetTimer021ef974vE1s;

// USA: func_ov025_021dc880
extern "C" ARM void func_ov025_021dc880(unsigned char* obj) {
    GetGameResources();
    func_ov000_02163524(obj);
    void* global = func_020421a0();

    if (_ZZ16GetTimer021ef974vE1s.state == 0) {
#if defined(jpn)
        func_ov000_0216dbf0(obj + 0xb94, 0, 0, 0);
#else
        func_ov000_0216dbf0(obj + 0xc18, 0, 0, 0);
#endif
        func_ov000_021626a0(obj, 4, 1);
        func_02043124(global);
        _ZZ16GetTimer021ef974vE1s.state = 1;
    }

    if (_ZZ16GetTimer021ef974vE1s.state != 1) {
        return;
    }

    if (++_ZZ16GetTimer021ef974vE1s.count == 15) {
        func_ov025_021d8a40(obj, (struct S021d8a40*)func_ov000_02160f20(obj));
    }
    if (_ZZ16GetTimer021ef974vE1s.count == 60) {
        func_ov025_021def30(obj);
    }
}
