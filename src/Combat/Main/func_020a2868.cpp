#include <globaldefs.h>
extern "C" void func_0202e9a4(struct AngleTrig0202e9a4*, int);

extern "C" void func_0202e694(void*, int*);

struct Struct020a2868 {
    unsigned char pad[0x220];
    int vec[3];
};

// USA: func_020a2868
extern "C" ARM void func_020a2868(struct Struct020a2868* obj) {
    obj->vec[1] = 0xc666;
    obj->vec[2] = 0xe666;
    func_0202e694(obj, obj->vec);
    func_0202e9a4((struct AngleTrig0202e9a4*)(obj), (int)(0x19000));
}
