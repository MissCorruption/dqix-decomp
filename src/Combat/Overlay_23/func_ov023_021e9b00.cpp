#include <globaldefs.h>

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern "C" void* func_0205ec34(void* obj);
extern "C" unsigned short func_0206e384(unsigned char* obj);
extern "C" void func_ov017_021d6134(void*, int);

// USA: func_ov023_021e9b00
extern "C" ARM int func_ov023_021e9b00(void* obj) {
    void* sub = func_0205ec34(obj);
    unsigned int combined = 0xffff | (func_0206e384((unsigned char*)sub) << 16);
    int count = 0;
    while (combined != 0) {
        count += combined & 1;
        combined >>= 1;
    }
    func_ov017_021d6134(obj, count);
    return 1;
}
