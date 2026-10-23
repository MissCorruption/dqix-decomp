#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void);
extern "C" int func_0206dfb0(int unused, unsigned char* arr, int index);
extern "C" void func_020aea40(unsigned char index, unsigned char isSet);
extern unsigned short data_020e9138[];

// USA: func_020ae9f0
extern "C" ARM void func_020ae9f0(void) {
    unsigned char* obj = (unsigned char*)func_0205ec34();
    int i;
    for (i = 0; i < 8; i++) {
        int isSet = func_0206dfb0((int)obj, obj + 0x8c, data_020e9138[i]);
        func_020aea40(i, isSet);
    }
}
