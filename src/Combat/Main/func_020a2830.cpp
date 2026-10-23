#include <globaldefs.h>
extern "C" void func_0202e9a4(struct Struct_0202df68*, int);

extern "C" void func_0202e694(void*, int*);

// USA: func_020a2830
extern "C" ARM void func_020a2830(void* arg0) {
    *(int*)((char*)arg0 + 0x224) = 0x8b33;
    *(int*)((char*)arg0 + 0x228) = 0xe666;
    func_0202e694(arg0, (int*)((char*)arg0 + 0x220));
    func_0202e9a4((struct Struct_0202df68*)(arg0), (int)(0x19000));
}
