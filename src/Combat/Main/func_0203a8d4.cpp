#include <globaldefs.h>

struct Struct_0203a54c;

extern "C" void func_0203a54c(struct Struct_0203a54c* arg0);
extern "C" void* func_0201c108(void* arg0);
extern "C" void func_0200ef44(void* arg0, int arg1, int arg2, void* (*arg3)(void*));

// USA: func_0203a8d4
extern "C" ARM struct Struct_0203a54c* func_0203a8d4(struct Struct_0203a54c* arg0) {
    func_0203a54c(arg0);
    func_0200ef44((char*)arg0 + 0x2a8, 5, 0x88, func_0201c108);
    func_0200ef44(arg0, 5, 0x88, func_0201c108);
    return arg0;
}
