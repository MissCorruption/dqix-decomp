#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

#if defined(jpn)
enum { Enum_ov004_0216ecd0_108 = 0x8c, Enum_ov004_0216ecd0_3954 = 0xc9e, Enum_ov004_0216ecd0_3955 = 0xc9f };
#else
enum { Enum_ov004_0216ecd0_108 = 0x6c, Enum_ov004_0216ecd0_3954 = 0xf72, Enum_ov004_0216ecd0_3955 = 0xf73 };
#endif

extern "C" void* func_02012fe4(void);
struct Struct_0201e828;
extern "C" void func_0201e828(Struct_0201e828*, unsigned short);
extern "C" void func_02012010(void* arg0, int arg1);
extern "C" void func_ov017_0218d258(void* arg0);

struct Struct_ov004_02171048_2 { char unknown_0_[0x4]; char* unknown_4_; };
extern Struct_ov004_02171048_2 data_ov004_02171048;

// USA: func_ov004_0216ecd0
extern "C" ARM int func_ov004_0216ecd0(void) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = GetGameResources();
    ClearFlags00((GameResources*)var1, -1);
    ClearFlags04((GameResources*)var1, -1);
    ClearFlags08((GameResources*)var1, -1);
    SetFlags00((GameResources*)var1, *(unsigned int*)(data_ov004_02171048.unknown_4_ + 0x0));
    SetFlags04((GameResources*)var1, *(unsigned int*)(data_ov004_02171048.unknown_4_ + 0x4));
    SetFlags08((GameResources*)var1, *(unsigned int*)(data_ov004_02171048.unknown_4_ + 0x8));
    void* var2 = func_02012fe4();
    if (!var2) return 0;
    struct Struct_0201e828* var3 = (struct Struct_0201e828*)((char*)var2 + Enum_ov004_0216ecd0_108);
    if (!var3) return 0;
    func_0201e828(var3, *(unsigned short*)(data_ov004_02171048.unknown_4_ + 0xc));
    func_02012010(var0, 5);
    *(char*)((char*)var0 + 0x7000 + Enum_ov004_0216ecd0_3954) = 1;
    *(char*)((char*)var0 + 0x7000 + Enum_ov004_0216ecd0_3955) = 1;
    func_ov017_0218d258(var1);
    return 0;
}
