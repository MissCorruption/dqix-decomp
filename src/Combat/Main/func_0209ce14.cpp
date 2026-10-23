#include <globaldefs.h>

struct Obj0209e4a0;
extern "C" void func_0209e4a0(struct Obj0209e4a0*);
extern "C" void* func_0209dccc();

// USA: func_0209ce14
extern "C" ARM int func_0209ce14() {
    struct Obj0209e4a0* mgr = (struct Obj0209e4a0*)func_0209dccc();
    if (mgr == NULL) return 0;
    func_0209e4a0(mgr);
    return 1;
}
