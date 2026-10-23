#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_021bd38c_288 = 0x11c, Enum_ov017_021bd38c_312 = 0x134 };
#else
enum { Enum_ov017_021bd38c_288 = 0x120, Enum_ov017_021bd38c_312 = 0x138 };
#endif

// USA: func_ov017_021bd38c
extern "C" ARM void func_ov017_021bd38c(void* arg0, int arg1, int arg2) {
    *(int*)((char*)arg0 + Enum_ov017_021bd38c_288) = arg1;
    *(int*)((char*)arg0 + Enum_ov017_021bd38c_312) = arg2;
}
