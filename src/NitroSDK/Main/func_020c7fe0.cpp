#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);
struct BlockedContextList;
void BlockCurrentContext(struct BlockedContextList* p);

// USA: func_020c7fe0
extern "C" ARM int func_020c7fe0(void* arg0, unsigned int* arg1, int arg2) {
    unsigned int var0 = DisableIRQInterrupts();
    if (*(unsigned int*)((char*)arg0 + 0x1c) == 0) {
        int var1 = arg2 & 1;
        while (1) {
            if (!var1) {
                SetIRQInterruptState(var0);
                return 0;
            }
            BlockCurrentContext((struct BlockedContextList*)((char*)arg0 + 8));
            if (*(unsigned int*)((char*)arg0 + 0x1c) != 0) break;
        }
    }
    if (arg1 != NULL) {
        unsigned int* var2 = *(unsigned int**)((char*)arg0 + 0x10);
        unsigned int var3 = *(unsigned int*)((char*)arg0 + 0x18);
        *arg1 = var2[var3];
    }
    SetIRQInterruptState(var0);
    return 1;
}
