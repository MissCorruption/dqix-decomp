#include <globaldefs.h>

extern "C" void func_ov017_021ac32c(void* arg0);

// USA: func_ov017_021aca00
extern "C" ARM void func_ov017_021aca00(unsigned char* arg0) {
    arg0[1] = 1;
    func_ov017_021ac32c(arg0);
}
