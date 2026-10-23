#include <globaldefs.h>

#include "Resource/TextQueue.h"
#if defined(jpn)
enum { Enum_02052bfc_336 = 0x144, Enum_02052bfc_1788 = 0x4ec };
extern int data_020f0420[];
#else
enum { Enum_02052bfc_336 = 0x150, Enum_02052bfc_1788 = 0x6fc };
#endif

#if defined(jpn)
#define func_02052bfc func_02053fd8
#endif
#include "GameState/GameState.h"
#include "NitroSDK/Timing.h"
#include "std_library_functions.h"
#include "Resource/GameResources.h"

struct Struct_02048150;

struct Struct_0201bc94_2 {
    unsigned char unknown_0_0_ : 4;
    unsigned char unknown_0_4_ : 1;
    unsigned char unknown_0_5_ : 3;
};

struct Struct_0201bc94 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    Struct_0201bc94_2* unknown_8_;
};

struct Struct_02052bfc {
    char unknown_0_[0x480];
    uint64_t unknown_480_;
    char unknown_488_[0x56c - 0x488];
    unsigned char unknown_56c_;
    unsigned char unknown_56d_;
};

struct Struct_02052bfc_2 {
    char unknown_0_[4];
    short unknown_4_;
    char unknown_6_[Enum_02052bfc_336 - 6];
    Struct_02052bfc* unknown_150_;
};

extern "C" int func_02086ef0(Struct_02048150*, int);
extern "C" void* func_02010828(GameState*);
extern "C" void* func_02012fe4(void);
extern "C" long long _ll_udiv(long long arg0, long long arg1);
extern "C" int func_02046b08(void** arg0);
extern "C" int func_0201bc94(Struct_0201bc94* arg0);
extern "C" int func_020e51cc(int arg0);
extern "C" void* func_020d7a50(void);
extern "C" void func_ov017_02191aac(char* arg0, int arg1, int arg2, unsigned char arg3);
extern "C" void func_ov017_021ce014(int arg0, unsigned short arg1, unsigned short arg2, unsigned short arg3);

// USA: func_02052bfc
extern "C" ARM void func_02052bfc(struct Struct_02052bfc_2* arg0) {
    if (arg0->unknown_150_ == NULL) return;

    GameState* var0 = GameState::GetInstance();
    GameResources* var1 = GetGameResources();
    void* var2 = *(void**)((char*)var1 + 0x3000 + Enum_02052bfc_1788);
    Struct_02048150* var3 = (Struct_02048150*)func_02010828(var0);
    Struct_0201bc94* var4 = (Struct_0201bc94*)func_02012fe4();
    unsigned char var5 = arg0->unknown_4_ & 0xff;

    if (!func_02086ef0(var3, var5)) return;
    if (arg0->unknown_150_->unknown_56c_ == 0) return;

    uint64_t var6 = GetCurrentTimestamp() - arg0->unknown_150_->unknown_480_;
    long long var7 = _ll_udiv(var6 << 6, 0x1ff6210);

    if (!func_02046b08((void**)var2)) return;
    if (var7 < 0x12c && func_0201bc94(var4)) return;

    char var8[0x80];
    arg0->unknown_150_->unknown_56c_ = 0;
    if (var5 == *(short*)((char*)var0->GetUnknownGameObject() + 4)) {
        if (arg0->unknown_150_->unknown_56d_ != 0) {
            #if defined(jpn)
            strcpy(var8, (char*)data_020f0420[1]);
#else
            strcpy(var8, (char*)func_020e51cc(0x33));
#endif
        }
        else {
            #if defined(jpn)
            strcpy(var8, (char*)data_020f0420[5]);
#else
            strcpy(var8, (char*)func_020e51cc(0x32));
#endif
        }
        #if defined(jpn)
        func_020d7e10(func_020d7a50(), var8, 0, 0, 1);
#else
        func_020d7e10(func_020d7a50(), var8, 0, 0, 1, 1);
#endif
    }
    func_ov017_02191aac((char*)var1, 0, var5, 2);
    func_ov017_021ce014(0, 1, 0, var5);
}
