#include <globaldefs.h>

extern "C" int func_ov031_02245710(void* arg0);

// USA: func_ov017_021b2074
extern "C" ARM int func_ov017_021b2074(void* arg0, void*) {
    void* var0 = *(void**)((char*)arg0 + 0x24);
    if (var0 == NULL) {
        return 0;
    }
    return func_ov031_02245710(var0);
}
