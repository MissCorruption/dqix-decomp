#include <globaldefs.h>

extern "C" void func_ov023_021ecdfc(void*);
struct Cont0205d1e0;
extern "C" void func_0205d1e0(Cont0205d1e0*);
struct Cont0205d228;
extern "C" void func_0205d228(Cont0205d228*);
struct Cont0205d274;
extern "C" void func_0205d274(Cont0205d274*);
extern "C" void func_ov023_021ecf78(void*);

// USA: func_ov023_021eb4b8
extern "C" ARM void func_ov023_021eb4b8(void* obj) {
    if (*(unsigned char*)((char*)obj + 0x431) == 0) return;
    func_ov023_021ecdfc(obj);
    func_0205d1e0((Cont0205d1e0*)((char*)obj + 0xc4));
    func_0205d228((Cont0205d228*)((char*)obj + 0xc4));
    func_0205d274((Cont0205d274*)((char*)obj + 0xc4));
    func_ov023_021ecf78(obj);
}
