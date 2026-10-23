#if defined(jpn)
enum {Enum_ov023_021e456c_1588=0x56c, Enum_ov023_021e456c_1276=0x4f8, Enum_ov023_021e456c_296=0x124, Enum_ov023_021e456c_300=0x128, Enum_ov023_021e456c_308=0x130};
#else
enum {Enum_ov023_021e456c_1588=0x634, Enum_ov023_021e456c_1276=0x4fc, Enum_ov023_021e456c_296=0x128, Enum_ov023_021e456c_300=0x12c, Enum_ov023_021e456c_308=0x134};
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_ov023_021e6194(int arg0);

struct Struct_0208f410;

extern "C" int func_02053c6c(unsigned char* arg0);

extern "C" int func_ov023_021e5974(int arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov023_021e456c
extern "C" ARM void func_ov023_021e456c(void* arg0) {
    char* var0 = (char*)arg0;
    if (!(*(unsigned short*)(var0 + Enum_ov023_021e456c_1588) & 4)) return;
    GameState* var1 = GameState::GetInstance();
    GameObject* var2 = func_0200ff1c(var1, *(int*)(var0 + Enum_ov023_021e456c_1276));
    if (!var2) return;
    int var3 = 0;
    if (*(unsigned short*)(var0 + Enum_ov023_021e456c_1588) & 0x10) var3 = 1;
    char* var4 = (char*)func_ov023_021e6194(*(int*)(var0 + Enum_ov023_021e456c_296));
    char* var5 = (char*)func_ov023_021e6194(*(int*)(var0 + Enum_ov023_021e456c_300));
    ((Object3D*)var5)->MaybeSetRegularAnimation((char const*)(*(int*)(var4 + 0x14)), 0);
    ((Object3D*)((struct Struct_0208f410*)var5))->SetCurrentAnimationTime(*(unsigned int*)(var4 + 0x1c));
    int var6 = func_02053c6c((unsigned char*)var2);
    func_ov023_021e5974(*(int*)(var0 + Enum_ov023_021e456c_300), var6, *(int*)(var0 + Enum_ov023_021e456c_1276), var3, 1);
    *(unsigned short*)(var0 + Enum_ov023_021e456c_1588) &= ~4;
    *(unsigned short*)(var0 + Enum_ov023_021e456c_1588) &= ~0x10;
    *(int*)(var0 + Enum_ov023_021e456c_308) = 0;
    *(unsigned short*)(var0 + Enum_ov023_021e456c_1588) |= 8;
}
