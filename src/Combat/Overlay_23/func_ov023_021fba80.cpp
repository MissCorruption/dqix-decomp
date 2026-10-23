#include <globaldefs.h>

extern "C" void func_ov023_021f6ed8(void*, int, int, int);

// USA: func_ov023_021fba80
extern "C" ARM int func_ov023_021fba80(void* arg0, int arg1, int arg2, int arg3) {
    func_ov023_021f6ed8(arg0, arg1, arg2, arg3);
    *(short*)((char*)arg0 + 0x4) = 0xe;
    *(short*)((char*)arg0 + 0x6) = arg2;
    *(short*)((char*)arg0 + 0x8) = arg3;
    return 1;
}
