#include <globaldefs.h>

#if defined(jpn)
#define OBJ_OFS 0x18
#else
#define OBJ_OFS 0
#endif

// USA: func_ov003_0215ca90
extern "C" ARM void func_ov003_0215ca90(void* arg0, int arg1) {
    *(int*)((char*)arg0 + 0x3c8 + OBJ_OFS) = arg1;
    *(int*)((char*)arg0 + 0x3cc + OBJ_OFS) = arg1 * (*((unsigned char*)arg0 + 0x3c3 + OBJ_OFS));
}
