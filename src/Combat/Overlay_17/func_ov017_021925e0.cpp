#include <globaldefs.h>
#include "Resource/GameResources.h"

struct Struct_0202b2f0;
struct Struct_ov017_0218e674 { unsigned char unknown_0_[2]; unsigned char unknown_2_; unsigned char unknown_3_; unsigned char unknown_4_[0x96]; unsigned char unknown_9a_; };

struct Struct_ov017_021925e0 {
    unsigned int unknown_0_0_ : 27;
    unsigned int unknown_3_3_ : 5;
};

extern "C" struct Struct_0202b2f0* func_0202ae18(void);
extern "C" int func_0202c540(struct Struct_0202b2f0* arg0);
extern "C" int func_ov017_021bd3a4(struct Struct_ov017_0218e674* arg0);

// USA: func_ov017_021925e0
extern "C" ARM int func_ov017_021925e0(void) {
#if defined(jpn)
 enum {Enum_ov017_021925e0_1844=0x524, Enum_ov017_021925e0_257=0xfd, Enum_ov017_021925e0_248=0xf4, Enum_ov017_021925e0_255=0xfb, Enum_ov017_021925e0_207=0xcb};
#else
 enum {Enum_ov017_021925e0_1844=0x734, Enum_ov017_021925e0_257=0x101, Enum_ov017_021925e0_248=0xf8, Enum_ov017_021925e0_255=0xff, Enum_ov017_021925e0_207=0xcf};
#endif
    char* var0 = (char*)GetGameResources();
    unsigned char* var1 = *(unsigned char**)(var0 + 0x3000 + Enum_ov017_021925e0_1844);
    if (!func_0202c540(func_0202ae18())) {
        goto ret0;
    }
    if (func_ov017_021bd3a4((struct Struct_ov017_0218e674*)var1)) {
        if (*(unsigned char*)(var1 + Enum_ov017_021925e0_257) == 0) {
            goto ret0;
        }
    } else {
        goto ret0;
    }
    if (*(unsigned char*)(var1 + Enum_ov017_021925e0_257) == 0) {
        goto skip;
    }
    if (((struct Struct_ov017_021925e0*)(var1 + Enum_ov017_021925e0_248))->unknown_0_0_ & 4) {
        goto ret0;
    }
skip:
    if (var1[Enum_ov017_021925e0_255] != 0) {
        goto ret0;
    }
    if (var1[Enum_ov017_021925e0_207] != 2) {
        return 1;
    }
ret0:
    return 0;
}
