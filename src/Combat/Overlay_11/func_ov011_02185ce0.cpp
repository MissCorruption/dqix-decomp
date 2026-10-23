#include <globaldefs.h>

extern "C" void func_0205a444(char* arg0);
extern int data_ov023_021feb40;

// USA: func_ov011_02185ce0
extern "C" ARM void* func_ov011_02185ce0(void* arg0) {
    *(void**)arg0 = &data_ov023_021feb40;
    func_0205a444((char*)arg0 + 0x24);
    return arg0;
}
