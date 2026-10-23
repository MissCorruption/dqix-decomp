#include <globaldefs.h>

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);
extern "C" int func_020c96a8(int arg0);
extern "C" void func_020c9be0(void);
struct Struct_020c92d0;
extern "C" void func_020c92d0(struct Struct_020c92d0* arg0);

// USA: func_020c93d0
extern "C" ARM void func_020c93d0(void* arg0, int arg1, int arg2, int arg3, int arg4) {
    unsigned int var0 = DisableIRQInterrupts();
    if (arg0 == 0 || *(int*)arg0 != 0) {
        func_020c9be0();
    }
    int var1 = *(volatile unsigned short*)0x4000006;
    int var2 = func_020c96a8(var1);
    *(int*)((char*)arg0 + 0x1c) = 1;
    *(short*)((char*)arg0 + 0x10) = (short)arg1;
    if (arg1 <= var1) var2 = var2 + 1;
    *(int*)((char*)arg0 + 0xc) = var2;
    *(short*)((char*)arg0 + 0x12) = (short)arg2;
    *(int*)((char*)arg0 + 0x0) = arg3;
    *(int*)((char*)arg0 + 0x4) = arg4;
    *(int*)((char*)arg0 + 0x24) = 0;
    func_020c92d0((struct Struct_020c92d0*)arg0);
    SetIRQInterruptState(var0);
}
