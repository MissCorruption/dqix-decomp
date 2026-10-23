#include <globaldefs.h>

struct Container0205a3d0;
struct Elem0205a3d0;
#if defined(jpn)
extern "C" void func_020e27ec(Container0205a3d0*, int, short, short);
#endif
extern "C" void func_ov003_021703f0(void*, short*, short*);
extern "C" void func_0205a370(Container0205a3d0*, int);
extern "C" Elem0205a3d0* func_0205a3d0(Container0205a3d0*, int);
struct Container0205a330;
extern "C" void func_0205a330(Container0205a330*, int);
extern "C" void func_0205ae8c(void*);

// USA: func_ov003_0217033c
extern "C" ARM void func_ov003_0217033c(char* base) {
    Container0205a3d0* cont = *(Container0205a3d0**)(base + 0xa4);
    if (cont == NULL) return;

    short outA, outB;
    func_ov003_021703f0(base, &outA, &outB);

    Elem0205a3d0* e;
    if (outA != 0 && outB != 0) {
        func_0205a370(cont, 0);
        e = func_0205a3d0(cont, 0);
        if (e != NULL) {
            *(unsigned char*)((char*)e + 0x15) |= 8;
        }
        func_0205a330((Container0205a330*)cont, 2);
#if defined(jpn)
        func_020e27ec(cont, 0, outA, outB);
#else
        short a, b;
        b = outB;
        a = outA;
        e = func_0205a3d0(cont, 0);
        if (e != NULL) {
            *(short*)((char*)e + 0x4) = a;
            *(short*)((char*)e + 0x6) = b;
        }
#endif
        func_0205ae8c(base + 0x68);
        return;
    }
    e = func_0205a3d0(cont, 0);
    if (e != NULL) {
        *(unsigned char*)((char*)e + 0x15) &= ~8;
    }
}
