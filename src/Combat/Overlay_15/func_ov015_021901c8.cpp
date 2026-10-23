#if defined(jpn)
#define R(j,u) (j)
#define data_ov015_02193d14 data_ov015_02194844
#define data_ov015_02193d2c data_ov015_0219485c
#define data_ov015_02193d38 data_ov015_02194868
#define data_ov027_021dd8e0 data_ov027_021de1a0
#define func_ov014_0218854c func_ov014_0218942c
#define func_ov014_021885bc func_ov014_0218948c
#define func_ov015_0219050c func_ov015_021910b0
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"
#include "NitroSDK/NSBXX/GeometryFifo.h"
#include "NitroSDK/NSBXX/RenderConfig.h"
#include "Resource/Brightness.h"
#include "NitroSDK/Graphics.h"
#include "NitroSDK/Matrix.h"

struct Struct_ov015_02193d38
{
    unsigned short unknown_0_[8];
};

extern "C" void func_020c52e8();
extern "C" void func_020c5414();
extern "C" int func_020c555c(int arg0);
extern "C" void* func_020100bc(GameState* arg0);
extern "C" void func_0202e0a4(void* arg0);
extern "C" void func_020c57d4(int arg0, int arg1, int arg2, int arg3, void* arg4);
extern "C" void func_020c5770(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, void* arg8);
extern "C" void func_020d86d0(int arg0, int arg1);
extern "C" void func_ov015_02190348(void* arg0);
extern "C" void func_ov015_02190428(void* arg0);
extern "C" void func_ov015_0219050c(void* arg0);

extern const Struct_ov015_02193d38 data_ov015_02193d38;
extern const Vector3fix data_ov015_02193d14;
extern const Vector3fix data_ov015_02193d2c;

// USA: func_ov015_021901c8
extern "C" ARM void func_ov015_021901c8(void* arg0)
{
    GameState* var0 = GameState::GetInstance();
    if (var0 == NULL)
        return;
    func_020c52e8();
    func_020c5414();
    RenderConfig::Reset();
    DISP3DCNT = (DISP3DCNT & ~0x3000) | 8;
    DISP3DCNT = (DISP3DCNT & ~0x3000) | 0x10;
    DISP3DCNT = (DISP3DCNT & ~0x3000) | 0x20;
    {
        Struct_ov015_02193d38 var1 = data_ov015_02193d38;
        func_020c555c((int)var1.unknown_0_);
    }
    void* var2 = func_020100bc(var0);
    if (var2 != NULL)
        func_0202e0a4(var2);
    RenderConfig::SubmitToFifo();
    SendQueuedDataToGeometryFifo();
    func_ov015_02190348(arg0);
    func_020c52e8();
    func_020c5414();
    GXFIFO_MATRIX_MODE = 0;
    {
        Vector3fix var3 = data_ov015_02193d14;
        Vector3fix var4 = {0};
        Vector3fix var5 = data_ov015_02193d2c;
        func_020c57d4((int)&var4, (int)&var5, (int)&var3, 1, NULL);
    }
    func_020c5770(0, 0xc0000, 0, 0x100000, -0x400000, 0x400000, 0x400000, 1, NULL);
    GXFIFO_MATRIX_MODE = 2;
    func_ov015_02190428(arg0);
    func_ov015_0219050c(arg0);
    func_020d86d0(1, 0);
    UpdateAndApplyBrightness((GameResources*)arg0);
}
