#include <globaldefs.h>
#if defined(jpn)
enum { kMiddlePadding = 0x184 };
#else
enum { kMiddlePadding = 0x190 };
#endif

extern "C" int func_02039d7c(char*);

struct Bytes02033b88;
extern "C" int func_02033b88(struct Bytes02033b88* p, int val);

struct Obj020397cc {
    char pad0[0xc1];
    unsigned char field_c1 : 2;
    char pad1[kMiddlePadding];
    unsigned char byte_252;
    unsigned char byte_253;
};

// USA: func_020397cc
extern "C" ARM void func_020397cc(struct Obj020397cc* obj, int arg1) {
    if (arg1 && obj->byte_252 && func_02039d7c((char*)(obj)) == 0 && (obj->field_c1 & 2) == 0) {
        func_02033b88((struct Bytes02033b88*)obj, 0);
    }
    obj->byte_253 = 0;
    obj->byte_252 = 0;
}
