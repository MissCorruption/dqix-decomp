#include <globaldefs.h>

struct Obj020bd984;
extern "C" void func_020bd984(struct Obj020bd984*);
extern "C" void func_0203a914(void*);

// USA: func_0203a950
extern "C" ARM void func_0203a950(void* obj) {
    void* p = *(void**)obj;
    if (p != NULL) {
        func_020bd984((struct Obj020bd984*)p);
    }
    func_0203a914(obj);
}
