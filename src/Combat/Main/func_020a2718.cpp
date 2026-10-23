#include <globaldefs.h>

extern "C" void func_020a0d58(void* p);
extern "C" void func_0202e694(void* obj, int* vec);

// USA: func_020a2718
extern "C" ARM void func_020a2718(char* actor) {
    func_020a0d58(actor + 0x248);
    *(int*)(actor + 0x220) = *(short*)(actor + 0x246);
    func_0202e694(actor, (int*)(actor + 0x220));
}
