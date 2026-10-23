#include <globaldefs.h>
extern "C" void func_0202e9a4(struct AngleTrig0202e9a4*, int);

extern "C" void func_0202e694(void*, int*);

struct Struct020a27cc {
    unsigned char pad[0x220];
    int vec[3];
};

// USA: func_020a27cc
extern "C" ARM void func_020a27cc(struct Struct020a27cc* obj) {
    obj->vec[1] = 0x7999;
    obj->vec[2] = 0xe000;
    func_0202e694(obj, obj->vec);
    func_0202e9a4((struct AngleTrig0202e9a4*)(obj), (int)(0xf000));
}
