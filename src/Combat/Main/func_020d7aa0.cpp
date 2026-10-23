#include <globaldefs.h>

extern "C" void func_02094ab0(int a);
extern "C" void func_ov017_0218b5c0(int a, int b);
extern "C" void func_ov017_0218b5f8(int a);

extern "C" int func_02094a00(void);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* obj);

struct ResetObj020d7a5c;
extern "C" void func_020d7a5c(struct ResetObj020d7a5c* o);

struct Flags020d7aa0 {
    unsigned char lo : 6;
    unsigned char bit6 : 1;
    unsigned char bit7 : 1;
};

struct Obj020d7aa0 {
    #if defined(jpn)
    unsigned char pad[0xf0];
#else
    unsigned char pad[0x150];
#endif
    struct Flags020d7aa0 flags;
};

// USA: func_020d7aa0
extern "C" ARM void func_020d7aa0(struct Obj020d7aa0* obj) {
    int g = func_02094a00();
    if (obj->flags.bit7) {
        func_02094ab0(g);
    }
    if (obj->flags.bit6) {
        func_02043204((char*)func_020421a0());
        obj->flags.bit6 = 0;
    }
    func_ov017_0218b5c0(1, -1);
    func_ov017_0218b5f8(-1);
    func_020d7a5c((struct ResetObj020d7a5c*)obj);
}
