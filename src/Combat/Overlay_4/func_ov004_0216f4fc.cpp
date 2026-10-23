#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov004_0216f4fc_9088 = 0x120, Enum_ov004_0216f4fc_16384 = 0x6000 };
#else
enum { Enum_ov004_0216f4fc_9088 = 0x2380, Enum_ov004_0216f4fc_16384 = 0x4000 };
#endif

extern "C" void func_ov004_0216ea38(void* arg0, int arg1);
extern "C" int func_020421a0(void);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(void* arg0);
extern "C" void func_ov023_021f809c(void* arg0, void* arg1);
extern "C" int func_020c7170(char* arg0, unsigned long arg1, const char* arg2, ...);

extern const char data_ov004_021707b0[];
struct Struct_ov004_02171048_5 { char unknown_0_[4]; char* unknown_4_; };
extern Struct_ov004_02171048_5 data_ov004_02171048;

// USA: func_ov004_0216f4fc
extern "C" ARM int func_ov004_0216f4fc(void* arg0) {
    char var0[0x10];
    GameState* var1 = GameState::GetInstance();
    char* var2;
    char* var3;
    int var4;
    void* var5;
    void* var6;

    func_ov004_0216ea38(arg0, 4);
    func_020421a0();

    var5 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x65);
    if (var5 == NULL || func_ov023_021f6f10(var5) != 8) var5 = NULL;
    if (var5 != NULL) {
        char* var7 = (char*)var1 + Enum_ov004_0216f4fc_9088;
        var7 += Enum_ov004_0216f4fc_16384;
        func_020c7170(var0, 0xd, data_ov004_021707b0, *(long long*)(var7 + 0x48));

        var2 = data_ov004_02171048.unknown_4_ + 0xe;
        var3 = var0;
        for (var4 = 0; var4 < 3; var4++) {
            memcpy(var2, var3, 4);
            var2 += 4;
            var3 += 4;
            if (var4 != 2) *var2++ = '-';
        }
        *(char**)((char*)var5 + 0x20) = data_ov004_02171048.unknown_4_ + 0xe;
    }

    var6 = func_ov023_021f6880(func_ov011_021849c8(arg0), 0x14);
    if (var6 == NULL || func_ov023_021f6f10(var6) != 6) var6 = NULL;
    if (var6 != NULL) func_ov023_021f809c(var6, arg0);
    return 0;
}
