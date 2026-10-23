#include <globaldefs.h>
extern "C" void func_02076ccc(void*, int);

struct Foo02033b58;
extern "C" void func_02033b58(struct Foo02033b58* p, unsigned char v);
extern "C" int func_0201b5d8(int x);

extern "C" unsigned short* func_02012fe4(void);

struct Actor02076d5c { char pad[0x14c]; unsigned int field_14c; };

// USA: func_02076d5c
extern "C" ARM void func_02076d5c(struct Actor02076d5c* obj) {
    if (func_0201b5d8(*func_02012fe4()) != 0 || obj->field_14c > 0x3e8) {
        func_02033b58((struct Foo02033b58*)obj, 0);
        func_02076ccc((void*)(obj), (int)(1));
    }
}
