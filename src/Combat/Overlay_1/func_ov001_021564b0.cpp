#include <globaldefs.h>
#include "Resource/GameResources.h"

#if defined(jpn)
enum { Enum_ov001_021564b0_17122 = 0x40c2, Enum_ov001_021564b0_1788 = 0x4ec, Enum_ov001_021564b0_1816 = 0x508, Enum_ov001_021564b0_2494 = 0x7ee };
#else
enum { Enum_ov001_021564b0_17122 = 0x42e2, Enum_ov001_021564b0_1788 = 0x6fc, Enum_ov001_021564b0_1816 = 0x718, Enum_ov001_021564b0_2494 = 0x9be };
#endif

extern "C" void func_02046a8c(int arg0, int arg1);
extern "C" void* func_020704fc(void);
struct Struct_020708c8;
extern "C" void func_020708c8(Struct_020708c8*, unsigned int);
struct GameResources;
void SetMainBrightness(GameResources*, int, int);
extern "C" void* func_020421a0(void);
extern "C" void func_02043124(void* arg0);
extern "C" void func_ov001_02156b20(void* arg0);
extern "C" void func_ov017_021bb27c(void* arg0);

struct Struct_ov001_021564b0 { char unknown_0_; char unknown_1_; char unknown_2_[8]; unsigned short unknown_a_; };

// USA: func_ov001_021564b0
extern "C" ARM unsigned short func_ov001_021564b0(struct Struct_ov001_021564b0* arg0) {
    void* var0 = GetGameResources();
    if (*(unsigned char*)((char*)var0 + Enum_ov001_021564b0_17122) != 0) {
        char* var1 = (char*)var0 + 0x3000;
        func_02046a8c(*(int*)(var1 + Enum_ov001_021564b0_1788), *(int*)(var1 + Enum_ov001_021564b0_1816));
        func_020708c8((Struct_020708c8*)func_020704fc(), 0xf);
        SetMainBrightness((GameResources*)var0, 0, 0xf);
        void* var2 = func_020421a0();
        func_02043124(var2);
        char* var3 = (char*)var2 + 0x1000;
        var3[Enum_ov001_021564b0_2494] = 0;
        func_ov001_02156b20(arg0);
        func_ov017_021bb27c(arg0);
        arg0->unknown_1_ = 1;
    }
    return arg0->unknown_a_;
}
