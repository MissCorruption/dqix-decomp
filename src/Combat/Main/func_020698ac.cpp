#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_020696bc(int a, int* out, int c);
extern "C" int func_020421a0();

struct RingBuffer020457e8 {
    char unk0[0x186c];
    int slots[4];
    char unk187c[0x131];
    signed char cursor;
};
extern "C" void func_020457e8(struct RingBuffer020457e8* rb, int value);

struct Struct020698ac { void* ptr; };

// USA: func_020698ac
extern "C" ARM int func_020698ac(Struct020698ac* obj, int input) {
    int val;
    unsigned short buf;
    void* dst;
    func_020696bc(input, &val, 1);
    func_020457e8((struct RingBuffer020457e8*)func_020421a0(), val);
    dst = obj->ptr;
    buf = 0xff1e;
    memcpy(dst, &buf, 2);
    return 2;
}
