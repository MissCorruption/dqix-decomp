#include <globaldefs.h>

struct Struct_0203a950;
extern "C" void func_020bd984(struct Struct_0203a950*);
extern "C" void func_0203a914(void*);

// USA: func_0203a950
extern "C" ARM void func_0203a950(void* arg0) {
    void* var0 = *(void**)arg0;
    if (var0 != NULL) {
        func_020bd984((struct Struct_0203a950*)var0);
    }
    func_0203a914(arg0);
}
