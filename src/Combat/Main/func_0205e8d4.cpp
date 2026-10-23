#include <globaldefs.h>

extern "C" void func_0203a950(void* obj);
struct Obj_0205e88c;
extern "C" void func_0205e88c(struct Obj_0205e88c*);

// USA: func_0205e8d4
extern "C" ARM void func_0205e8d4(void* obj) {
    func_0203a950(obj);
    func_0205e88c((struct Obj_0205e88c*)obj);
}
