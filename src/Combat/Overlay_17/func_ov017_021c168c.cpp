#include <globaldefs.h>

extern "C" void func_ov017_021c1394(void* arg0);
extern "C" void func_ov017_021c1264(int arg0);

// USA: func_ov017_021c168c
extern "C" ARM void func_ov017_021c168c(void* arg0) {
    func_ov017_021c1394(arg0);
    *((unsigned char*)arg0 + 1) = 1;
    func_ov017_021c1264(1);
}
