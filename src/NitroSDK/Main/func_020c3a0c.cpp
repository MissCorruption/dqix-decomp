#include <globaldefs.h>
void AwaitDMACompletion(int);

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);

extern int data_020f226c;

// USA: func_020c3a0c
extern "C" ARM int func_020c3a0c(int arg0) {
    int var0 = *(int*)((char*)&data_020f226c + 4);
    if (var0 != -1) {
        AwaitDMACompletion((int)(var0));
    }
    unsigned int var1 = DisableIRQInterrupts();
    *(int*)((char*)&data_020f226c + 4) = arg0;
    SetIRQInterruptState(var1);
    return var0;
}
