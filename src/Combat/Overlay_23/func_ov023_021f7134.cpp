#include <globaldefs.h>

extern "C" void func_02047554(void*, int, int);

// USA: func_ov023_021f7134
extern "C" ARM void func_ov023_021f7134(char* arg0) {
    if (*(unsigned char*)(arg0 + 0xc) & 8) return;
    func_02047554(arg0 + 0x20, 0, 1);
}
