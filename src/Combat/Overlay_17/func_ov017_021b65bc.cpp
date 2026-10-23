#include <globaldefs.h>

extern "C" void func_0204715c(char* arg0);

// USA: func_ov017_021b65bc
extern "C" ARM void func_ov017_021b65bc(char* arg0) {
    if (*(unsigned char*)(arg0 + 0xfc) != 3) {
        return;
    }
    func_0204715c(arg0 + 0xc);
}
