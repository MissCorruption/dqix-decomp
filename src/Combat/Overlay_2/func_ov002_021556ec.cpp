#include <globaldefs.h>

#if defined(jpn)
#define RG(usa, jpn) (jpn)
#else
#define RG(usa, jpn) (usa)
#endif

// USA: func_ov002_021556ec
extern "C" ARM void func_ov002_021556ec(void* arg0, int arg1, int arg2) {
    unsigned char* var0 = (unsigned char*)arg0 + 0x2000;
    var0[RG(0x485, 0x2b5)] = (unsigned char)arg1;
    var0[RG(0x486, 0x2b6)] = (unsigned char)arg2;
}
