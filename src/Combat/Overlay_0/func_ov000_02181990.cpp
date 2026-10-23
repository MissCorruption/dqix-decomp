#include <globaldefs.h>

extern "C" void* func_ov025_021e8cf0(char* arg0, int arg1);
extern void* data_ov025_021ef994;

// USA: func_ov000_02181990
extern "C" ARM int func_ov000_02181990(int arg0, int* arg1) {
    void* var0 = func_ov025_021e8cf0((char*)data_ov025_021ef994, arg0);
    if (!var0) {
        return 0;
    }
    *arg1 = *(int*)var0;
    return 1;
}
