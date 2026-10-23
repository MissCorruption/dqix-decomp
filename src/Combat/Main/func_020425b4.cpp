#include <globaldefs.h>

extern int data_0210782c[];

// USA: func_020425b4
extern "C" ARM void* func_020425b4(int arg0, int arg1) {
    char* var0 = (char*)data_0210782c[arg1];
    if (arg0 >= 0 && (unsigned int)arg0 < *(unsigned int*)(var0 + 0x4))
        return (void*)(*(int*)(var0 + 0x10) + (arg0 << 3));
    return NULL;
}
