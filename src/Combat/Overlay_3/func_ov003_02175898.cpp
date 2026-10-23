#include <globaldefs.h>

extern "C" int func_020de194(void* arg0);
extern "C" unsigned int _u32_div_f(unsigned int arg0, unsigned int arg1);

// USA: func_ov003_02175898
extern "C" ARM unsigned int func_ov003_02175898(char* arg0, void* arg1) {
    if (arg1 == NULL) {
        return 0;
    }
    int var0 = func_020de194(arg1);
#if defined(jpn)
    enum { Enum_ov003_02175898_2156 = 0x7e8 };
#else
    enum { Enum_ov003_02175898_2156 = 0x86c };
#endif
    unsigned short var1 = *(unsigned short*)(arg0 + Enum_ov003_02175898_2156);
    return _u32_div_f(var1 * var0, 100);
}
