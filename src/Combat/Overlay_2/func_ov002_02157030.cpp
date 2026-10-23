#include <globaldefs.h>

struct Struct_0205d81c;
extern "C" unsigned int func_0205d81c(Struct_0205d81c*, int);

#if defined(jpn)
#define LIST_02157030 0xe20
#else
#define LIST_02157030 0xec8
#endif

// USA: func_ov002_02157030
extern "C" ARM void func_ov002_02157030(unsigned int arg0, unsigned int arg1, short* arg2, short* arg3, short* arg4, short* arg5) {
    char* var0 = (char*)func_0205d81c((Struct_0205d81c*)(arg0 + LIST_02157030), arg1);
    if (var0 == 0) {
        return;
    }
    *arg2 = *(short*)(var0 + 0xac);
    *arg3 = *(short*)(var0 + 0xae);
    *arg4 = *(short*)(var0 + 0xa8);
    *arg5 = *(short*)(var0 + 0xaa);
}
