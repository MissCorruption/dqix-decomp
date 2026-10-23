#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_020541a4_330 = 0x13e };
#else
enum { Enum_020541a4_330 = 0x14a };
#endif

extern "C" void func_ov017_02191aac(char* arg0, int arg1, int arg2, unsigned char arg3);
unsigned long long GetCurrentTimestamp(void);
extern "C" void func_ov017_021ce014(int arg0, unsigned short arg1, unsigned short arg2, unsigned short arg3);

struct Struct_020541a4 {
    unsigned char unknown_0_[4];
    short unknown_4_;
    unsigned char unknown_6_[Enum_020541a4_330];
    unsigned char* unknown_150_;
};

// USA: func_020541a4
extern "C" ARM void func_020541a4(struct Struct_020541a4* arg0, unsigned char arg1) {
    unsigned char* var0 = arg0->unknown_150_;
    if (var0 == 0) return;
    GameState::GetInstance();
    void* var1 = GetGameResources();
    var0 = arg0->unknown_150_;
    var0[0x56c] = 1;
    var0 = arg0->unknown_150_;
    var0[0x56d] = arg1;
    func_ov017_02191aac((char*)var1, 1, arg0->unknown_4_, 2);
    unsigned long long var2 = GetCurrentTimestamp();
    var0 = arg0->unknown_150_;
    *(unsigned int*)(var0 + 0x480) = (unsigned int)var2;
    *(unsigned int*)(var0 + 0x484) = (unsigned int)(var2 >> 32);
    func_ov017_021ce014(0, 1, 1, (unsigned short)arg0->unknown_4_);
}
