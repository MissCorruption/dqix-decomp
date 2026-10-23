#include <globaldefs.h>

#include "Combat/BattleSkillEligibility.h"
#include "GameState/GameState.h"
#include "Grotto/Main/GrottoStruct.h"

#if defined(jpn)
#define func_020daf90 func_020dc998
#endif

extern "C" void* func_0202ae18(void);
extern "C" void* func_02012fe4(void);
extern "C" int func_0202c540(void* arg0);
extern "C" void func_0205ac40(void* arg0, void* arg1);

extern "C" int func_02039750(void* arg0);
extern "C" int func_020421a0();
extern "C" void* func_020daf90(void);
extern "C" int func_02046b08(void** arg0);

struct Struct_02015a2c_2;
extern "C" int func_02015a2c(struct Struct_02015a2c_2* arg0);

extern "C" int func_020db2d4(void* arg0);

struct Struct_ov017_021a5ad0;
extern "C" void func_ov017_021a5ad0(struct Struct_ov017_021a5ad0* arg0, int arg1, int arg2);
extern "C" void func_ov017_021a5b08(struct Struct_ov017_021a5ad0* arg0, int arg1);

struct Struct_02000c9c_8;
extern "C" unsigned char func_0200fb08(struct Struct_02000c9c_8* arg0);

struct Struct_0205d1e0;
struct Struct_0205d228;
struct Struct_0205d274;
extern "C" void func_0205d1e0(Struct_0205d1e0*);
extern "C" void func_0205d228(Struct_0205d228*);
extern "C" void func_0205d274(Struct_0205d274*);
extern "C" void func_0205da88(void*, int, int, int);
struct Struct_0205d2bc;
extern "C" void func_0205d2bc(Struct_0205d2bc*);

extern unsigned short data_ov017_021d6a9e[5];

// USA: func_ov017_021a63d0
#if defined(jpn)
static const int OFF_41c0 = 0x3fa0;
static const int OFF_41b4 = 0x3f94;
static const int OFF_4080 = 0x3e60;
static const int OFF_36fc = 0x34ec;
static const int OFF_998 = 0x868;
static const int OFF_4094 = 0x3e74;
static const int OFF_41b8 = 0x3f98;
static const int OFF_4090 = 0x3e70;
static const int OFF_41c4 = 0x3fa4;
#else
static const int OFF_41c0 = 0x41c0;
static const int OFF_41b4 = 0x41b4;
static const int OFF_4080 = 0x4080;
static const int OFF_36fc = 0x36fc;
static const int OFF_998 = 0x998;
static const int OFF_4094 = 0x4094;
static const int OFF_41b8 = 0x41b8;
static const int OFF_4090 = 0x4090;
static const int OFF_41c4 = 0x41c4;
#endif

extern "C" ARM void func_ov017_021a63d0(unsigned char* arg0) {
 #if !defined(jpn)
    short var0[5];
 #endif

    if (*(int*)(arg0 + OFF_41c0) == 0) return;
    if (*(int*)(arg0 + OFF_41b4) == 0) return;

    void* var1 = func_0202ae18();
    int var2 = func_02039750(GameState::GetInstance()->GetProtagonist());
    int var3 = func_020421a0();
    void* var4 = func_02012fe4();
    void* var5 = func_020daf90();

    if (GameState::GetInstance()->GetGrottoStruct()->unknown_0[0] == 0) return;

    int var6 = *(int*)(arg0 + OFF_4080);
    if (var6 != 0) return;
    if (var2 != -1) return;

    if (!func_02046b08(*(void***)(arg0 + OFF_36fc))) return;
    if (func_0202c540(var1)) return;

    if (func_020117f0(GameState::GetInstance()) != 0) return;
    if (*(int*)((char*)var3 + OFF_998) != 0) return;
    if (func_02015a2c((struct Struct_02015a2c_2*)var4)) return;
    if (func_020db2d4(var5)) return;

    func_ov017_021a5ad0((struct Struct_ov017_021a5ad0*)(arg0 + OFF_4094), 2, 0x800);

 #if !defined(jpn)
    {
        unsigned short* var7 = (unsigned short*)var0;
        unsigned short* var8 = data_ov017_021d6a9e;
        int var9 = 5;
        do {
            unsigned short* var10 = var7++;
            unsigned short var11 = *var8++;
            *var10 = var11;
        } while (--var9);
    }

    unsigned char var12 = func_0200fb08((struct Struct_02000c9c_8*)GameState::GetInstance());

 #endif

    if (*(int*)(arg0 + OFF_41b8) >= 3) {
        void* var13 = *(void**)(arg0 + OFF_4090);
        func_0205d1e0((Struct_0205d1e0*)var13);
        func_0205d228((Struct_0205d228*)var13);
        func_0205da88(var13, 1, 2, 1);
        func_0205d274((Struct_0205d274*)var13);
        func_0205d2bc((Struct_0205d2bc*)var13);

        unsigned char* var14 = *(unsigned char**)(arg0 + OFF_41c4);
        int var15 = *(int*)(var14 + 0x40);
        unsigned char* var16 = 0;
        if (var15 != 0) {
            if (*(unsigned short*)(var14 + 0x4e) > 6) {
                var16 = (unsigned char*)var15 + 0xf0;
            }
        }

        if (var16) {
#if defined(jpn)
            int var17 = 0xb7000;
#else
            int var17 = (var0[var12 - 1] + 7) << 12;
#endif
            *(int*)(var16 + 0x14) = var17;
            *(int*)(var16 + 0x18) = 0xab000;
            var16[0x22] = 0x7e;
            var16[0x26] = 0;
            *(int*)(var16 + 0xc) = 0x1000;
            *(int*)(var16 + 0x10) = 0x1000;
            void* var18 = *(void**)(arg0 + OFF_41c4);
            func_0205ac40(var18, var16);
        }
    }

    func_ov017_021a5b08((struct Struct_ov017_021a5ad0*)(arg0 + OFF_4094), 2);
}
