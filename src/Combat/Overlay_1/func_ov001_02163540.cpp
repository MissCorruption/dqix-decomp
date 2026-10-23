#include <globaldefs.h>

extern "C" unsigned short func_ov017_021d60f4(int arg0);
extern "C" int func_0203ad88(void* arg0, void* arg1, int arg2);
extern void* data_02109bf4;

// USA: func_ov001_02163540
extern "C" ARM int func_ov001_02163540(int arg0) {
    unsigned short var0 = func_ov017_021d60f4(arg0);
    func_0203ad88(&data_02109bf4, NULL, var0);
    return 1;
}
