#include <globaldefs.h>

struct Struct_ov002_02155f4c_2;
extern void* data_ov017_021d83ac;
extern "C" void func_ov002_02155f4c(Struct_ov002_02155f4c_2*);

// USA: func_ov017_021a5954
extern "C" ARM void func_ov017_021a5954(void*) {
    if (data_ov017_021d83ac == NULL) {
        return;
    }
    func_ov002_02155f4c((Struct_ov002_02155f4c_2*)data_ov017_021d83ac);
}
