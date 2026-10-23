#include <globaldefs.h>

extern "C" int func_ov017_0219bddc(unsigned char* arg0, int arg1);
extern "C" void func_ov017_0219bf04(int arg0, void* arg1);

// USA: func_ov017_0219bed0
extern "C" ARM int func_ov017_0219bed0(void* arg0) {
    unsigned char var0 = 0;
    int var1 = func_ov017_0219bddc(&var0, 0);
    if (var1) {
        func_ov017_0219bf04(var0, arg0);
    }
    return var1;
}
