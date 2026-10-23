#include <globaldefs.h>

extern "C" void func_ov031_02234050(void);
extern "C" void func_ov031_02233f50(void);

// USA: func_ov031_02233f40
extern "C" ARM void func_ov031_02233f40(void) {
    func_ov031_02234050();
    func_ov031_02233f50();
}
