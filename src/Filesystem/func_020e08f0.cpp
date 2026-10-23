#include <globaldefs.h>

#if defined(jpn)
extern const char* data_020f2bcc;
extern "C" int func_020e2168(char* arg0, const char* arg1,
    int arg2, int arg3, bool arg4);
extern "C" void* func_020e0968(const char* arg0, unsigned int* arg1);

// JPN: func_020e08f0
extern "C" ARM void* func_020e08f0(int arg0, unsigned int* arg1) {
    *arg1 = 0;
    if (arg0 < 0 || arg0 > 12)
        return 0;
    char var0[0x20] = {0};
    if (arg0 == 9)
        arg0 = 8;
    func_020e2168(var0, data_020f2bcc, arg0, 0, true);
    return func_020e0968(var0, arg1);
}
#endif
