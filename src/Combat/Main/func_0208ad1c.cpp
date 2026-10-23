#include <globaldefs.h>
extern "C" void func_02070950(struct EffectParam02070950*, struct Rgb02070950*, int, int, int);

extern "C" void* func_020704fc(void*);

struct Obj0205eaa0;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);
extern struct Obj0205eaa0 data_02108760;

// USA: func_0208ad1c
extern "C" ARM void func_0208ad1c(void* obj) {
    void* handle = func_020704fc(obj);
    if (handle != NULL) {
        func_02070950((struct EffectParam02070950*)handle, (struct Rgb02070950*)((char*)obj + 0xc), 0x14, 5, 0xf);
        func_0205eaa0(&data_02108760, 0x78, 0);
    }
}
