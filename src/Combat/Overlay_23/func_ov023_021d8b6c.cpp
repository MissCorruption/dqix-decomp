#include <globaldefs.h>

struct Struct_0205d67c;
extern "C" int func_0205d67c(Struct_0205d67c*);

struct Entry_0205d6a0;
extern "C" void func_0205d6a0(Entry_0205d6a0*, int);

struct Cont0205d1e0;
extern "C" void func_0205d1e0(Cont0205d1e0*);

struct Cont0205d228;
extern "C" void func_0205d228(Cont0205d228*);

struct Cont0205d274;
extern "C" void func_0205d274(Cont0205d274*);

struct Obj0205d2bc;
extern "C" void func_0205d2bc(Obj0205d2bc*);

// USA: func_ov023_021d8b6c
extern "C" ARM void func_ov023_021d8b6c(void* obj) {
    void* sub = (char*)obj + 0x20;
    if (func_0205d67c((Struct_0205d67c*)sub)) {
        func_0205d6a0((Entry_0205d6a0*)sub, 1);
    }
    func_0205d1e0((Cont0205d1e0*)sub);
    func_0205d228((Cont0205d228*)sub);
    func_0205d274((Cont0205d274*)sub);
    func_0205d2bc((Obj0205d2bc*)sub);
}
