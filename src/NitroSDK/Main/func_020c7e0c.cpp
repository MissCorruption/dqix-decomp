#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);
struct BlockedContextList;
void BlockCurrentContext(struct BlockedContextList* p);
void UnblockContexts(struct BlockedContextList* p);

// USA: func_020c7e0c
extern "C" ARM int func_020c7e0c(void* arg0, unsigned int arg1, int arg2) {
    unsigned int var0 = DisableIRQInterrupts();
    int var1 = *(int*)((char*)arg0 + 0x1c);
    int var2 = *(int*)((char*)arg0 + 0x14);
    if (var2 <= var1) {
        int var3 = arg2 & 1;
        while (1) {
            if (!var3) {
                SetIRQInterruptState(var0);
                return 0;
            }
            BlockCurrentContext((struct BlockedContextList*)arg0);
            var1 = *(int*)((char*)arg0 + 0x1c);
            var2 = *(int*)((char*)arg0 + 0x14);
            if (var2 > var1) break;
        }
    }
    int var4 = *(int*)((char*)arg0 + 0x18);
    int var5 = (var4 + var1) % var2;
    unsigned int* var6 = *(unsigned int**)((char*)arg0 + 0x10);
    var6[var5] = arg1;
    *(int*)((char*)arg0 + 0x1c) = *(int*)((char*)arg0 + 0x1c) + 1;
    UnblockContexts((struct BlockedContextList*)((char*)arg0 + 8));
    SetIRQInterruptState(var0);
    return 1;
}
