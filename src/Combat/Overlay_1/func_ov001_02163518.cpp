#include <globaldefs.h>

extern "C" unsigned short func_ov017_021d60f4(int arg0);
extern "C" int func_0203ad14(void* arg0, int arg1, void* arg2, int arg3);
extern void* data_02109bf4;

// USA: func_ov001_02163518
extern "C" ARM int func_ov001_02163518(int arg0) {
    unsigned short var0 = func_ov017_021d60f4(arg0);
    func_0203ad14(&data_02109bf4, var0, NULL, 0);
    return 1;
}
