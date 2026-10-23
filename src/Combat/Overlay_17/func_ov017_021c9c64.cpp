#include <globaldefs.h>

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" void func_ov017_021c9954(int arg0, int arg1, int arg2, void* arg3);

// USA: func_ov017_021c9c64
extern "C" ARM void func_ov017_021c9c64(unsigned short arg0, unsigned char arg1) {
    void* var0 = func_0202ae24();
    unsigned char var1[0x14];
    var1[0] = 0x7c;
    *(unsigned short*)(var1 + 4) = arg0;
    var1[6] = arg1;
    func_0205e330(var0, var1, 0);
    func_ov017_021c9954(arg0, 1, arg1, (void*)-1);
}
