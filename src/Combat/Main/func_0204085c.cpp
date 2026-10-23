#include <globaldefs.h>
#if defined(jpn)
enum { kValueOffset = 0x2c8 };
#else
enum { kValueOffset = 0x2d4 };
#endif

struct State0xcda8;
extern "C" void func_0203cda8(struct State0xcda8* obj, int value);
extern "C" void func_0203db34(unsigned char* obj, int a, int b, int c);

struct Obj0204085c {
    char pad[0x14];
    struct State0xcda8* field14;
    unsigned char* field18;
    unsigned char* field1c;
};

// USA: func_0204085c
extern "C" ARM void func_0204085c(struct Obj0204085c* obj, int a, int b, int c) {
    struct State0xcda8* p;
    unsigned char* q;
    p = obj->field14;
    if (p != NULL) {
        *(int*)((char*)p + 0x10) = a;
        *(int*)((char*)p + 0x14) = b;
        *(int*)((char*)p + 0x18) = c;
        func_0203cda8(obj->field14, b);
        return;
    }
    q = obj->field18;
    if (q != NULL) {
        func_0203db34(q, a, b, c);
        q = obj->field18;
        *(int*)(q + 0xb0) = b;
        return;
    }
    q = obj->field1c;
    if (q == NULL) {
        return;
    }
    func_0203db34(q, a, b, c);
    q = obj->field1c;
    *(int*)(q + kValueOffset) = b;
}
