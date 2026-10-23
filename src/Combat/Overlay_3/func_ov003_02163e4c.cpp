#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_02163e4c_1188 = 0x2cc };
enum { Enum_ov003_02163e4c_1024 = 0x200 };
enum { Enum_ov003_02163e4c_130 = 0xaa };
enum { Enum_ov003_02163e4c_1187 = 0x2cb };
enum { Enum_ov003_02163e4c_132 = 0xac };
enum { Enum_ov003_02163e4c_134 = 0xae };
enum { Enum_ov003_02163e4c_128 = 0xa8 };
enum { Enum_ov003_02163e4c_1124 = 0x28c };
#else
enum { Enum_ov003_02163e4c_1188 = 0x4a4 };
enum { Enum_ov003_02163e4c_1024 = 0x400 };
enum { Enum_ov003_02163e4c_130 = 0x82 };
enum { Enum_ov003_02163e4c_1187 = 0x4a3 };
enum { Enum_ov003_02163e4c_132 = 0x84 };
enum { Enum_ov003_02163e4c_134 = 0x86 };
enum { Enum_ov003_02163e4c_128 = 0x80 };
enum { Enum_ov003_02163e4c_1124 = 0x464 };
#endif

extern "C" int func_02053c6c(unsigned char* arg0);
extern "C" void func_ov017_021b6bb8(int arg0);
extern "C" int func_ov017_021b6d60(int arg0, void* arg1);
extern "C" void func_02086778(void* arg0, void* arg1, int arg2, int arg3);

// USA: func_ov003_02163e4c
extern "C" ARM void func_ov003_02163e4c(char* arg0) {
    unsigned char var0 = arg0[Enum_ov003_02163e4c_1188];
    if (var0 == 0) {
        char var1[0x23c];
        GameState* var2 = GameState::GetInstance();
        void* var3 = func_02010828(var2);
        short var4 = *(short*)(arg0 + Enum_ov003_02163e4c_1024 + Enum_ov003_02163e4c_130);
        GameObject* var5 = var2->GetPartyMemberByIndex(var4);
        if (var5 == NULL) {
            arg0[Enum_ov003_02163e4c_1187] = 0x10;
            return;
        }
        unsigned char* var6 = (unsigned char*)func_02053c6c((unsigned char*)var5);
        if (var6 == NULL) {
            arg0[Enum_ov003_02163e4c_1187] = 0x10;
            return;
        }
        *(short*)(arg0 + Enum_ov003_02163e4c_1024 + Enum_ov003_02163e4c_132) = 0xd;
        short var7 = *(short*)(var6 + 0x400 + 0x54);
        if (var7 > 0) {
            *(short*)(arg0 + Enum_ov003_02163e4c_1024 + Enum_ov003_02163e4c_134) = 0xe;
        }
        func_ov017_021b6bb8(*(short*)(arg0 + Enum_ov003_02163e4c_1024 + Enum_ov003_02163e4c_130));
        func_ov017_021b6d60(*(short*)(arg0 + Enum_ov003_02163e4c_1024 + Enum_ov003_02163e4c_130), var1);
        func_02086778(var3, var1, 0, 0);
        short var8 = (var1[0] << 26) >> 26;
        *(short*)(arg0 + Enum_ov003_02163e4c_1024 + Enum_ov003_02163e4c_128) = var8;
        arg0[Enum_ov003_02163e4c_1188] = (unsigned char)arg0[Enum_ov003_02163e4c_1188] + 1;
        *(int*)(arg0 + Enum_ov003_02163e4c_1124) |= 8;
        return;
    }
    if (var0 != 1) return;
    *(short*)(arg0 + Enum_ov003_02163e4c_1024 + Enum_ov003_02163e4c_132) = 2;
    *(int*)(arg0 + Enum_ov003_02163e4c_1124) |= 8;
    arg0[Enum_ov003_02163e4c_1187] = 1;
    arg0[Enum_ov003_02163e4c_1188] = 0;
}
