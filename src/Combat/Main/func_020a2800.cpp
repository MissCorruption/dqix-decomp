#include <globaldefs.h>
extern "C" void func_0202e9a4(struct AngleTrig0202e9a4*, int);

extern "C" void func_0202e694(void*, int*);

struct Struct020A2800 {
    char pad[0x220];
    int vecX;
    int vecY;
    int vecZ;
};

// USA: func_020a2800
extern "C" ARM void func_020a2800(struct Struct020A2800* obj) {
    obj->vecY = 0x6000;
    obj->vecZ = 0xb000;
    func_0202e694(obj, &obj->vecX);
    func_0202e9a4((struct AngleTrig0202e9a4*)(obj), (int)(0xf000));
}
