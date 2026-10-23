#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void* obj);
extern "C" int func_020421a0(void);

// USA: func_ov001_0215e97c
extern "C" ARM int func_ov001_0215e97c(void* obj) {
    char* messages = (char*)func_020421a0();
    unsigned char flag = func_ov017_021d60f4(obj) != 0;
#if defined(jpn)
    messages[0x17fc] = flag;
#else
    messages[0x19cb] = flag;
#endif
    return 1;
}
