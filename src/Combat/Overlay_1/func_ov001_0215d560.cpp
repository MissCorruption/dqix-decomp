#include <globaldefs.h>

extern "C" float func_ov017_021d6110(void*);
extern "C" void* func_ov001_021590dc(int, int);
extern int data_ov001_02165880;

// USA: func_ov001_0215d560
extern "C" ARM int func_ov001_0215d560(void* arg0) {
    int var0 = (int)(4096.0f * func_ov017_021d6110(arg0));
    func_ov001_021590dc(*(int*)((char*)&data_ov001_02165880 + 0x24), var0);
    return 1;
}
