#include <globaldefs.h>

extern "C" void func_020d2680(unsigned int);
extern "C" void func_020d1f0c(void*, int, int, int);
extern "C" void func_020d24c4(int);
extern "C" int func_020d26ec(void);
extern "C" void func_020cef64(void* node);
extern "C" void func_020cef7c(void* node);

struct Actor020bccf0;
extern "C" void func_020bccf0(struct Actor020bccf0* obj);

struct Obj020bcc7c {
    char pad0[0x24];
    int bit0 : 1;
    int bit1 : 1;
    int bitrest : 30;
    char pad28[0x40 - 0x28];
    int field40;
    void* field44;
};

// USA: func_020bcc7c
extern "C" ARM void func_020bcc7c(struct Obj020bcc7c* obj) {
    if (obj->bit1) {
        func_020d1f0c(obj->field44, 0, 1 << obj->field40, 0);
        func_020cef64((char*)obj + 0x8);
        func_020cef7c((char*)obj + 0x14);
        obj->bit1 = 0;
        int x = func_020d26ec();
        func_020d24c4(1);
        func_020d2680((unsigned int)x);
    }
    func_020bccf0((struct Actor020bccf0*)obj);
}
