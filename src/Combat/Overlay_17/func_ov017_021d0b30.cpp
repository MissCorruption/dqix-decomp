#include <globaldefs.h>
#include "std_library_functions.h"
#include "Resource/GameResources.h"

extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);
extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02042764(char* arg0, void* arg1, int arg2);

struct Struct_ov017_021d0b30 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    char unknown_4_[12];
};
struct Struct_ov017_021d0b30_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[3];
    struct Struct_ov017_021d0b30 unknown_4_;
};

// USA: func_ov017_021d0b30
extern "C" ARM void func_ov017_021d0b30(unsigned short arg0, unsigned short arg1, char* arg2) {
#if defined(jpn)
 enum {Enum_ov017_021d0b30_860=0x13c, Enum_ov017_021d0b30_48=0xc};
#else
 enum {Enum_ov017_021d0b30_860=0x35c, Enum_ov017_021d0b30_48=0x30};
#endif
    void* var0 = func_0202ae24();
    struct Struct_ov017_021d0b30_2 var1;
    struct Struct_ov017_021d0b30* var2 = &var1.unknown_4_;

    var1.unknown_0_ = 0x2a;
    var2->unknown_0_ = arg0;
    var2->unknown_2_ = arg1;
    if (arg2 != 0) {
        strcpy(var2->unknown_4_, arg2);
    }
    func_0205e330(var0, &var1, 0);

    if (arg0 != 0) return;

    unsigned char* var3 = (unsigned char*)GetGameResources();
    unsigned char* var4 = var3 + Enum_ov017_021d0b30_860 + 0x4000 + arg1 * Enum_ov017_021d0b30_48;
    if (var4 == 0) return;

#if defined(jpn)
    strcpy((char*)var4, arg2);

#else
    char var5[Enum_ov017_021d0b30_48];
    __clear(var5, Enum_ov017_021d0b30_48);
    func_02042764(arg2, var5, 1);
    strcpy((char*)var4, var5);

#endif
}
