#include <globaldefs.h>

extern "C" int func_ov017_021c9954(int arg0, int arg1, int arg2, int arg3);

// USA: func_ov017_021c9b58
extern "C" ARM int func_ov017_021c9b58(void* arg0, char* arg1) {
    return func_ov017_021c9954(*(unsigned short*)(arg1 + 6), 0, *(unsigned char*)(arg1 + 0xa), (int)arg0);
}
