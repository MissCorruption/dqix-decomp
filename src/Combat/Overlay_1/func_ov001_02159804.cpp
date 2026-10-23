#include <globaldefs.h>

// USA: func_ov001_02159804
extern "C" ARM int func_ov001_02159804(void* arg0, void* arg1) {
    *(float*)((char*)arg1 + 0x8c) = (float)(*(int*)((char*)arg0 + 0x10));
    return 0;
}
