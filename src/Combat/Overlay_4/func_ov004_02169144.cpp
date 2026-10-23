#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

#if defined(jpn)
enum { Enum_ov004_02169144_2948 = 0x964, Enum_ov004_02169144_384 = 0, Enum_ov004_02169144_388 = 4, Enum_ov004_02169144_392 = 8, Enum_ov004_02169144_108 = 0x8c, Enum_ov004_02169144_2402 = 0x790, Enum_ov004_02169144_256 = 0 };
#else
enum { Enum_ov004_02169144_2948 = 0xb84, Enum_ov004_02169144_384 = 0x180, Enum_ov004_02169144_388 = 0x184, Enum_ov004_02169144_392 = 0x188, Enum_ov004_02169144_108 = 0x6c, Enum_ov004_02169144_2402 = 0x962, Enum_ov004_02169144_256 = 0x100 };
#endif

extern "C" void* func_02012fe4(void);
struct Struct_0201e828;
extern "C" void func_0201e828(Struct_0201e828*, unsigned short);
extern "C" void func_ov017_021a967c(unsigned char* arg0, int arg1);
extern "C" int func_020421a0(void);
extern void* data_ov004_02171030;
struct Struct_ov004_02169144 {
#if defined(jpn)
 char unknown_0_[0xc];
#else
 char unknown1_0_[0x8c];
#endif
 unsigned short unknown_8c_; };

// USA: func_ov004_02169144
extern "C" ARM int func_ov004_02169144(void) {
    GameState::GetInstance();
    void* var0 = GetGameResources();
    unsigned char* var1 = *(unsigned char**)((char*)var0 + 0x3000 + Enum_ov004_02169144_2948);
    ClearFlags00((GameResources*)var0, -1);
    ClearFlags04((GameResources*)var0, -1);
    ClearFlags08((GameResources*)var0, -1);
    SetFlags00((GameResources*)var0, *(unsigned int*)((char*)data_ov004_02171030 + Enum_ov004_02169144_384));
    SetFlags04((GameResources*)var0, *(unsigned int*)((char*)data_ov004_02171030 + Enum_ov004_02169144_388));
    SetFlags08((GameResources*)var0, *(unsigned int*)((char*)data_ov004_02171030 + Enum_ov004_02169144_392));
    void* var2 = func_02012fe4();
    if (!var2) return 0;
    struct Struct_0201e828* var3 = (struct Struct_0201e828*)((char*)var2 + Enum_ov004_02169144_108);
    if (!var3) return 0;
    struct Struct_ov004_02169144* var4 = (struct Struct_ov004_02169144*)((char*)data_ov004_02171030 + Enum_ov004_02169144_256);
    func_0201e828(var3, var4->unknown_8c_);
    func_ov017_021a967c(var1, -1);
    int var5 = func_020421a0();
    var5 += 0x1000;
    *(unsigned char*)(var5 + Enum_ov004_02169144_2402) = 0;
    return 0;
}
