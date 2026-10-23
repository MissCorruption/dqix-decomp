#include <globaldefs.h>

extern "C" void CpuSet(const void*, void*, unsigned int);
int GenerateLockOwnerID(void);

extern int data_0211214c;
extern char data_02112148;

// USA: func_020d12e4
extern "C" ARM void func_020d12e4(void) {
    int var0 = 0;
    CpuSet(&var0, &data_0211214c, 0x5000001);
    int var1 = GenerateLockOwnerID();
    *(short*)(&data_02112148 + 0x6) = (short)var1;
}
