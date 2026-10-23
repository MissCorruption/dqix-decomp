#include <globaldefs.h>

extern "C" char* func_ov031_02235c70(void);
extern "C" void func_ov031_02223998(int);

// USA: func_ov031_02223a0c
extern "C" ARM void func_ov031_02223a0c(void) {
    func_ov031_02223998(*(unsigned char*)(func_ov031_02235c70() + 0xf4) + 2);
}
