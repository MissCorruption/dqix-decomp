#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);
struct BlockedContextList;
void BlockCurrentContext(struct BlockedContextList* p);
void UnblockContexts(struct BlockedContextList* p);
extern "C" int _s32_div_f(int a, int b);

// USA: func_020c7ea0
extern "C" ARM int func_020c7ea0(void* arg0, unsigned int* arg1, int arg2) {
    unsigned int var0 = DisableIRQInterrupts();
    if (*(int*)((char*)arg0 + 0x1c) == 0) {
        int var1 = arg2 & 1;
        while (1) {
            if (!var1) {
                SetIRQInterruptState(var0);
                return 0;
            }
            BlockCurrentContext((struct BlockedContextList*)((char*)arg0 + 8));
            if (*(int*)((char*)arg0 + 0x1c) != 0) break;
        }
    }
    if (arg1 != NULL) {
        unsigned int* var2 = *(unsigned int**)((char*)arg0 + 0x10);
        unsigned int var3 = *(unsigned int*)((char*)arg0 + 0x18);
        *arg1 = var2[var3];
    }
    int var4 = *(int*)((char*)arg0 + 0x18);
    int var5 = *(int*)((char*)arg0 + 0x14);
    *(int*)((char*)arg0 + 0x18) = (var4 + 1) % var5;
    *(int*)((char*)arg0 + 0x1c) = *(int*)((char*)arg0 + 0x1c) - 1;
    UnblockContexts((struct BlockedContextList*)arg0);
    SetIRQInterruptState(var0);
    return 1;
}
