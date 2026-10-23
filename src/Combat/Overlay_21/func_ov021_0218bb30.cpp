#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#if defined(jpn)
#define func_ov009_02184bbc func_ov009_02185ee8
#endif
#include "GameState/GameState.h"
#include "GameState/Field3b0.h"
#include "NitroSDK/NSBXX/GeometryFifo.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "NitroSDK/Graphics.h"

struct Struct_ov021_0218bb30
{
    char unknown_0_[0x40];
    void* unknown_40_;
};

extern "C" void func_020c52e8();
extern "C" void func_020c5414();
extern "C" void func_0202e0a4(void* arg0);
extern "C" void func_ov009_02184c30(void* arg0);
extern "C" void func_ov009_02184bbc(void* arg0);
extern "C" void* func_0203bd08();
extern "C" void func_0203bd88(void* arg0);
extern "C" void func_020d86d0(int arg0, int arg1);

// USA: func_ov021_0218bb30
extern "C" ARM void func_ov021_0218bb30(Struct_ov021_0218bb30* arg0)
{
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_020100bc(var0);
    func_020c52e8();
    func_020c5414();
    DISP3DCNT = (DISP3DCNT & ~0x3000) | 8;
    DISP3DCNT = (DISP3DCNT & ~0x3000) | 0x10;
    DISP3DCNT = (DISP3DCNT & ~0x3000) | 0x20;
    if (var1 != NULL)
        func_0202e0a4(var1);
    RenderConfig::SubmitToFifo();
    SendQueuedDataToGeometryFifo();
    func_ov009_02184c30(arg0->unknown_40_);
    func_ov009_02184bbc(arg0->unknown_40_);
    func_0203bd88(func_0203bd08());
    func_020d86d0(1, 0);
}
