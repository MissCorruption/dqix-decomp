#include <globaldefs.h>

extern void* data_ov017_021d83ac;
extern "C" void func_ov002_0216bfd4(void* arg0, int arg1);

// USA: func_ov017_021a5a28
extern "C" ARM void func_ov017_021a5a28(void* arg0, int arg1) {
    if (data_ov017_021d83ac == NULL) {
        return;
    }
    func_ov002_0216bfd4(data_ov017_021d83ac, arg1);
}
