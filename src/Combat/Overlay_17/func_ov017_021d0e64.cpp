#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_ov017_0218f5a4(void* arg0, int arg1, int arg2, int arg3, int arg4);

struct Struct_ov017_021d0e64 {
    unsigned char unknown_0_[4];
    signed char unknown_4_;
    unsigned char unknown_5_;
};

// USA: func_ov017_021d0e64
extern "C" ARM void func_ov017_021d0e64(void* arg0, Struct_ov017_021d0e64* arg1, GameState* arg2, void* arg3) {
#if defined(jpn)
 enum {Enum_ov017_021d0e64_3276=0xa6c};
#else
 enum {Enum_ov017_021d0e64_3276=0xccc};
#endif
    GameObject* var0 = arg2->GetPartyMemberByIndex(arg1->unknown_4_);
    if (!var0) return;
    int var1 = func_02053c6c((unsigned char*)var0);
    if (!var1) return;

    unsigned char* var2 = (unsigned char*)var1;
    if (var2[0x56a] != arg1->unknown_5_) {
        short var3 = *(short*)(var2 + 0x488);
        if (var3 < 0) {
            var0->obj3D_.unknown_2_ = -1;
            func_ov017_0218f5a4(arg3, arg1->unknown_4_, 0, 0, 0);
        }
    }
    var2[0x56a] = arg1->unknown_5_;
    *(int*)((char*)arg2 + 0x5000 + Enum_ov017_021d0e64_3276) |= 2;
}
