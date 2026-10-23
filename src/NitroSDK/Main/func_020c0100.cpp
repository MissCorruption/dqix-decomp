#include <globaldefs.h>

struct NitroVM;
int NitroVM_CancelCommand(struct NitroVM*);

// USA: func_020c0100
extern "C" ARM int func_020c0100(void* arg0) {
    return NitroVM_CancelCommand((struct NitroVM*)((char*)arg0 + 0x5c));
}
