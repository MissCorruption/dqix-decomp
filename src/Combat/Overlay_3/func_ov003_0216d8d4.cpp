#include <globaldefs.h>
#include "Resource/MessageSystem.h"
#if defined(jpn)
enum { kRegion1324 = 0x11b4 };
#else
enum { kRegion1324 = 0x1324 };
#endif

extern "C" int func_020421a0();
extern "C" void func_02046380(void);
struct Container020e0310;
extern "C" int func_020e0434(struct Container020e0310* c, int key);
struct Obj02046574;
extern "C" void func_02046574(struct Obj02046574* obj, int index, char* str);
struct StoreStruct;
extern "C" void func_020465c0(struct StoreStruct* base, int index, int value);

// USA: func_ov003_0216d8d4
#if defined(jpn)
extern "C" ARM void func_ov003_0216d8d4(char* obj, int keyA) {
#else
extern "C" ARM void func_ov003_0216d8d4(char* obj, int keyA, int p3, int p4, int p5) {
#endif
    MessageSystem* window = (MessageSystem*)func_020421a0();
#if !defined(jpn)
    func_02046380();

    if (p3 >= 0) {
        struct Container020e0310* c = (struct Container020e0310*)(obj + kRegion1324);
        int name = func_020e0434(c, (short)p3);
        func_02046574((struct Obj02046574*)window, 5, (char*)name);
    }
    if (p4 >= 0) {
        func_020465c0((struct StoreStruct*)window, 1, p4);
    }
    if (p5 >= 0) {
        func_020465c0((struct StoreStruct*)window, 0, p5);
    }

#endif
    struct Container020e0310* c2 = (struct Container020e0310*)(obj + kRegion1324);
    const char* text = (const char*)func_020e0434(c2, (short)keyA);
#if defined(jpn)
    func_0204500c(window, text, 0);
#else
    func_0204500c(window, text, 0, 0xe3);
#endif

    window->b19b2 = 1;
    window->state = 2;
}
