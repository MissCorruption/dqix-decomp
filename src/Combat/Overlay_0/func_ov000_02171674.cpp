#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02171674_156 = 0xdc };
#else
enum { Enum_ov000_02171674_156 = 0x9c };
#endif

// USA: func_ov000_02171674
extern "C" ARM int func_ov000_02171674(void* arg0, int arg1) {
    if (arg1 < 0 || arg1 >= 0x42) return 0;
    return *(int*)((char*)arg0 + Enum_ov000_02171674_156 + (arg1 << 2));
}
