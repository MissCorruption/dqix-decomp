#include <globaldefs.h>

extern "C" void func_ov017_021c0364(void* arg0);

// USA: func_ov017_021c0568
extern "C" ARM void func_ov017_021c0568(unsigned char* arg0) {
    func_ov017_021c0364(arg0);
    arg0[1] = 1;
}
