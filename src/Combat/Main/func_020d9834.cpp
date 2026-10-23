#include <globaldefs.h>

void SleepCurrentContext(unsigned int arg);
void CycleCurrentPriorityContexts(void);

// USA: func_020d9834
extern "C" ARM void func_020d9834(int arg0) {
    if (arg0 != 0) {
        SleepCurrentContext(arg0);
    } else {
        CycleCurrentPriorityContexts();
    }
}
