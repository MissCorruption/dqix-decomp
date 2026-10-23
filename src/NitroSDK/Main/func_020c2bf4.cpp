#include <globaldefs.h>

extern "C" void fix32_QueueComputeQuotient(unsigned int arg0, unsigned int arg1);
extern "C" int fix32_GetDivisionResult(void);

// USA: func_020c2bf4
extern "C" ARM int fix32_Divide(unsigned int arg0, unsigned int arg1) {
    fix32_QueueComputeQuotient(arg0, arg1);
    return fix32_GetDivisionResult();
}
