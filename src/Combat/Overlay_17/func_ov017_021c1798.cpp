#include <globaldefs.h>
#include "Resource/GameResources.h"

extern "C" void func_ov017_021c17cc(void* arg0);
struct Struct_02046a3c;
struct Struct_02046a3c_2;
extern "C" void func_02046a3c(struct Struct_02046a3c_2* arg0, struct Struct_02046a3c* arg1);

// USA: func_ov017_021c1798
extern "C" ARM void func_ov017_021c1798(GameResources* arg0, unsigned char arg1) {
#if defined(jpn)
    enum { Enum_ov017_021c1798_2900 = 0x934, Enum_ov017_021c1798_1788 = 0x4ec };
#else
    enum { Enum_ov017_021c1798_2900 = 0xb54, Enum_ov017_021c1798_1788 = 0x6fc };
#endif
    func_ov017_021c17cc(*(void**)((char*)arg0 + 0x3000 + Enum_ov017_021c1798_2900));
    (*(unsigned char**)((char*)arg0 + 0x3000 + Enum_ov017_021c1798_2900))[0x1d] = arg1;
    func_02046a3c(*(struct Struct_02046a3c_2**)((char*)arg0 + 0x3000 + Enum_ov017_021c1798_1788),
                         *(struct Struct_02046a3c**)((char*)arg0 + 0x3000 + Enum_ov017_021c1798_2900));
}
