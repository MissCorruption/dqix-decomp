#include <globaldefs.h>
#if defined(jpn)
enum { kRegion90 = 0x8c };
#else
enum { kRegion90 = 0x90 };
#endif


struct Cont0205d1e0;
extern "C" void func_0205d1e0(Cont0205d1e0*);
struct Cont0205d228;
extern "C" void func_0205d228(Cont0205d228*);
struct Cont0205d274;
extern "C" void func_0205d274(Cont0205d274*);
extern "C" void func_0205da88(void*, int, int, int);
extern "C" void func_ov003_0217e100(void* obj);

// USA: func_ov003_0217da48
extern "C" ARM void func_ov003_0217da48(void* obj) {
    unsigned char* o = (unsigned char*)obj;
    void* sub = *(void**)(o + kRegion90);
    if (sub != 0) {
        signed char tag = *(signed char*)(o + 4);
        if (tag == 2 || *(signed char*)(o + 5) == 0) {
            func_0205d1e0((Cont0205d1e0*)sub);
            func_0205d228((Cont0205d228*)(*(void**)(o + kRegion90)));
            func_0205da88(*(void**)(o + kRegion90), 2, 1, 1);
            func_0205d274((Cont0205d274*)(*(void**)(o + kRegion90)));
        }
    }
    func_ov003_0217e100(obj);
}
