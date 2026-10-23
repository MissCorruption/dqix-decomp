#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

// USA: func_ov017_021cdb00
extern "C" ARM void func_ov017_021cdb00(unsigned char arg0, unsigned short arg1, int arg2, unsigned char arg3) {
    void* var0 = func_0202ae24();
    unsigned char var1[0x14];
    var1[0] = 0x91;
    unsigned char* var2 = var1 + 4;
    var2[0] = arg3;
    var2[1] = arg0;
    *(unsigned short*)(var2 + 2) = arg1;
    *(int*)(var2 + 4) = arg2;
    func_0205e330(var0, var1, 0);
}
