#include <globaldefs.h>

struct Struct_0205d67c;
extern "C" int func_0205d67c(Struct_0205d67c*);

struct Struct_0205d6a0;
extern "C" void func_0205d6a0(Struct_0205d6a0*, int);

struct Struct_0205d1e0;
extern "C" void func_0205d1e0(Struct_0205d1e0*);

struct Struct_0205d228;
extern "C" void func_0205d228(Struct_0205d228*);

struct Struct_0205d274;
extern "C" void func_0205d274(Struct_0205d274*);

struct Struct_0205d2bc;
extern "C" void func_0205d2bc(Struct_0205d2bc*);

// USA: func_ov023_021d8b6c
extern "C" ARM void func_ov023_021d8b6c(void* arg0) {
    void* var0 = (char*)arg0 + 0x20;
    if (func_0205d67c((Struct_0205d67c*)var0)) {
        func_0205d6a0((Struct_0205d6a0*)var0, 1);
    }
    func_0205d1e0((Struct_0205d1e0*)var0);
    func_0205d228((Struct_0205d228*)var0);
    func_0205d274((Struct_0205d274*)var0);
    func_0205d2bc((Struct_0205d2bc*)var0);
}
