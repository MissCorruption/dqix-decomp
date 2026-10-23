#include <globaldefs.h>
extern "C" void func_0202e9a4(struct AngleTrig0202e9a4*, int);

extern "C" void func_0202e694(void*, int*);

// USA: func_020a2830
extern "C" ARM void func_020a2830(void* obj) {
    *(int*)((char*)obj + 0x224) = 0x8b33;
    *(int*)((char*)obj + 0x228) = 0xe666;
    func_0202e694(obj, (int*)((char*)obj + 0x220));
    func_0202e9a4((struct AngleTrig0202e9a4*)(obj), (int)(0x19000));
}
