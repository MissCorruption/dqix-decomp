#include <globaldefs.h>

extern "C" void func_020134e0(void* arg0);

// USA: func_02013718
extern "C" ARM void func_02013718(char* arg0, int arg1, int arg2) {
    func_020134e0(arg0);
#if defined(jpn)
    *(int*)(arg0 + 0x6c) = arg1;
#else
    *(int*)(arg0 + 0x4c) = arg1;
#endif
#if defined(jpn)
    *(int*)(arg0 + 0x70) = arg2;
#else
    *(int*)(arg0 + 0x50) = arg2;
#endif
#if defined(jpn)
    *(int*)(arg0 + 0x858) = 0;
#else
    *(int*)(arg0 + 0x838) = 0;
#endif
#if defined(jpn)
    *(int*)(arg0 + 0x85c) = 0;
#else
    *(int*)(arg0 + 0x83c) = 0;
#endif
#if defined(jpn)
    *(short*)(arg0 + 0x494) = 0;
#else
    *(short*)(arg0 + 0x474) = 0;
#endif
#if defined(jpn)
    *(int*)(arg0 + 0x84c) = 0;
#else
    *(int*)(arg0 + 0x82c) = 0;
#endif
}
