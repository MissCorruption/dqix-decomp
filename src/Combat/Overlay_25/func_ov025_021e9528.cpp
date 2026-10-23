#include <globaldefs.h>

extern "C" int func_ov025_021ed2f4(void* arg0);

// USA: func_ov025_021e9528
extern "C" ARM int func_ov025_021e9528(char* arg0) {
    if (*(int*)(arg0 + 4) != 0) {
        return 0;
    }
    return func_ov025_021ed2f4(arg0 + 0x1e8 + 0x400) != 0;
}
