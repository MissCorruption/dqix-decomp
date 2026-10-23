#include <globaldefs.h>
#include "World/Object3D.h"

extern "C" unsigned short* func_02012fe4(void);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760*, int, int);
extern int data_02108760;

// USA: func_02034044
extern "C" ARM void func_02034044(unsigned char* arg0, int arg1) {
    unsigned short var0 = *func_02012fe4();
    if (var0 == ((Object3D*)((struct Struct_02039df4*)(arg0)))->GetField06()) {
        func_0205eaa0((struct Struct_02108760*)&data_02108760, 0x60, 0);
    }
    *(unsigned short*)(arg0 + 0xc4) = (*(unsigned short*)(arg0 + 0xc4) & 0xFFFF8000) | (arg1 & 0x7FFF);
}
