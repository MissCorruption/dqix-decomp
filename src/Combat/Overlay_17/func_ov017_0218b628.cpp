#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov017_0218b628_1744 = 0x4c0 };
#else
enum { Enum_ov017_0218b628_1744 = 0x6d0 };
#endif

extern "C" int func_02020084(unsigned char* arg0, int arg1);

struct Struct_ov017_021d82e0_6 { int unknown_0_; int unknown_4_; };
extern Struct_ov017_021d82e0_6 data_ov017_021d82e0;

// USA: func_ov017_0218b628
extern "C" ARM int func_ov017_0218b628(signed char arg0) {
    int var0 = data_ov017_021d82e0.unknown_4_;
    if (var0 == 0) return 0;
    int var1 = *(int*)((char*)var0 + 0x3000 + Enum_ov017_0218b628_1744);
    if (var1 == 0) return 0;
    return func_02020084((unsigned char*)var1, arg0);
}
